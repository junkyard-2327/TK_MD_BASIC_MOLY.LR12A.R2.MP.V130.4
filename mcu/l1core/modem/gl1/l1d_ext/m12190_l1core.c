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
 *
 * Filename:
 * ---------
 *   m12190_l1core.c
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   Initialize RF components
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
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
 *
 *
 * removed!
 * removed!
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *******************************************************************************/

#include "l1d_cid.h"
#include "l1d_loc_def.h"
#include "l1d_reg.h"
#include "l1d_rf_l1core.h"
#include "l1d_data_l1core.h"
#include "m12190_l1core.h"
#include "m12193.h"
#include "m12197_l1core.h"
#include "stack_config.h"
#include "nvram_interface.h"
#if IS_MIPI_SUPPORT
#include "l1d_mipi_l1core.h"
#include "l1d_mipi_data_l1core.h"
#endif
#if IS_SMP_ARCHITECTURE
#include "kal_hrt_api.h"
#endif
#include "event_info_utility.h" // for MODEM_WARNING_MESSAGE

// Include for HAL activity, but HAL is done after RHR...
#if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#include "dcl.h"
#elif IS_CHIP_MT6276 || IS_CHIP_MT6573 || IS_CHIP_MT6575
#include "dcl.h" /* Header file of Driver Common Layer (DCL) */
#elif IS_CHIP_MT6280
#include "dcl.h"
#include "dcl_pmu.h"
#include "dcm_sw.h"
#elif IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290
#include "dcl.h"
#include "ccci.h"
#elif IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
#include "dcl.h"
#include "ccci.h"
#include "dcl_pmu.h"
#endif

#if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
#include "ccci.h"
#endif

#if IS_DSDA_DCS_TX_NOTCH_SWITCH_SUPPORT
   #if IS_CHIP_MT6290
#include "el1_export.h"
   #endif
#endif

#include  "mmrf_kal.h"
#include  "l1d_shm_data.h"

#include  "mml1_rf_interface.h"  /* for MMRF IMM Mode BSI Read/Write */ 

#if (IS_2G_TAS_SUPPORT || IS_2G_DAT_SUPPORT)
#include "nvram_data_items.h"
#include "mml1_meta_if.h"
#endif

extern void L1D_RF_VoltComp_Trace( unsigned short idx, long v1, long v2 );
#if IS_SMP_ARCHITECTURE
#else
extern unsigned long SaveAndSetIRQMask(void);
extern unsigned long RestoreIRQMask(unsigned long);
#endif
/*For The Rf Trace*/
extern void L1D_RF_EdgeTx_Trace(short v1,short v2,short v3,short v4,short v5,short v6,short v7,short v8);
extern void L1D_RF_TxDAC_Trace(short v1,short v2,short v3,short v4,short v5,short v6,short v7);
extern void L1D_RF_Rollback_Trace(short v1,short v2,short v3,short v4,short v5);
extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
#if (IS_2G_TAS_SUPPORT)
   #if IS_L1D_USEC_TRACE_SUPPORT
extern void L1D_TAS_Usec_Trace(uint16 trace_idx);
   #endif
#endif
#if IS_GSM_EM_TX_POWER_CONTROL_SUPPORT
extern void L1T_SetGsmTxPower( kal_bool* flag, kal_int8* mode);
#endif
#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
extern void L1D_RF_SWTP_SAR_db_Trace( int16 v1, int16 v2, int16 v3, int16 v4, int16 v5);
#endif

/*---------------------------------------------------------------------------*/

sRFSETTING  l1d_rf;   // BB -> RF
sRFSETTING2 l1d_rf2;  // RF only

/*---------------------------------------------------------------------------*/
#if IS_2G_DAT_SUPPORT
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE0_MIPI_CTRL_TABLE_GSM850;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE1_MIPI_CTRL_TABLE_GSM850;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE2_MIPI_CTRL_TABLE_GSM850;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE3_MIPI_CTRL_TABLE_GSM850;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE4_MIPI_CTRL_TABLE_GSM850;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE5_MIPI_CTRL_TABLE_GSM850;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE6_MIPI_CTRL_TABLE_GSM850;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE7_MIPI_CTRL_TABLE_GSM850;

sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE0_MIPI_CTRL_TABLE_GSM900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE1_MIPI_CTRL_TABLE_GSM900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE2_MIPI_CTRL_TABLE_GSM900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE3_MIPI_CTRL_TABLE_GSM900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE4_MIPI_CTRL_TABLE_GSM900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE5_MIPI_CTRL_TABLE_GSM900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE6_MIPI_CTRL_TABLE_GSM900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE7_MIPI_CTRL_TABLE_GSM900;

sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE0_MIPI_CTRL_TABLE_DCS1800;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE1_MIPI_CTRL_TABLE_DCS1800;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE2_MIPI_CTRL_TABLE_DCS1800;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE3_MIPI_CTRL_TABLE_DCS1800;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE4_MIPI_CTRL_TABLE_DCS1800;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE5_MIPI_CTRL_TABLE_DCS1800;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE6_MIPI_CTRL_TABLE_DCS1800;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE7_MIPI_CTRL_TABLE_DCS1800;

sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE0_MIPI_CTRL_TABLE_PCS1900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE1_MIPI_CTRL_TABLE_PCS1900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE2_MIPI_CTRL_TABLE_PCS1900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE3_MIPI_CTRL_TABLE_PCS1900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE4_MIPI_CTRL_TABLE_PCS1900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE5_MIPI_CTRL_TABLE_PCS1900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE6_MIPI_CTRL_TABLE_PCS1900;
sGGE_DAT_MIPI_RTXCTRL_TABLE GGE_DAT_STATE7_MIPI_CTRL_TABLE_PCS1900;


sGGE_DAT_MIPI_RTXCTRL_TABLE* GGE_DAT_MIPI_CTRL_TABLE[FrequencyBandCount][L1D_DAT_STATE_NUM]=
{
   {0},                                                          /* FrequencyBand400  */
   {
      &GGE_DAT_STATE0_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
      &GGE_DAT_STATE1_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
      &GGE_DAT_STATE2_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
      &GGE_DAT_STATE3_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
      &GGE_DAT_STATE4_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
      &GGE_DAT_STATE5_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
      &GGE_DAT_STATE6_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
      &GGE_DAT_STATE7_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
   },
   {
      &GGE_DAT_STATE0_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
      &GGE_DAT_STATE1_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
      &GGE_DAT_STATE2_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
      &GGE_DAT_STATE3_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
      &GGE_DAT_STATE4_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
      &GGE_DAT_STATE5_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
      &GGE_DAT_STATE6_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
      &GGE_DAT_STATE7_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
   },
   {
      &GGE_DAT_STATE0_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
      &GGE_DAT_STATE1_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
      &GGE_DAT_STATE2_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
      &GGE_DAT_STATE3_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
      &GGE_DAT_STATE4_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
      &GGE_DAT_STATE5_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
      &GGE_DAT_STATE6_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
      &GGE_DAT_STATE7_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
   },
   {
      &GGE_DAT_STATE0_MIPI_CTRL_TABLE_PCS1900,                      /* FrequencyBand1900 */
      &GGE_DAT_STATE1_MIPI_CTRL_TABLE_PCS1900,                      /* FrequencyBand1900 */
      &GGE_DAT_STATE2_MIPI_CTRL_TABLE_PCS1900,                      /* FrequencyBand1900 */
      &GGE_DAT_STATE3_MIPI_CTRL_TABLE_PCS1900,                      /* FrequencyBand1900 */
      &GGE_DAT_STATE4_MIPI_CTRL_TABLE_PCS1900,                      /* FrequencyBand1900 */
      &GGE_DAT_STATE5_MIPI_CTRL_TABLE_PCS1900,                      /* FrequencyBand1900 */
      &GGE_DAT_STATE6_MIPI_CTRL_TABLE_PCS1900,                      /* FrequencyBand1900 */
      &GGE_DAT_STATE7_MIPI_CTRL_TABLE_PCS1900                       /* FrequencyBand1900 */
   }
};
#endif

/*----------------------------------------*/
/* VCXO Linear Compensation parameters    */
/*----------------------------------------*/
#define  ONE                 0x1000 /*Used to reduce fix point divided error*/
#define  PHI_Factor          32
#define  RATIO_20_DIV_21     3901   /*(20*0x1000+21/2)/21 used to reduce frequency offset 5%*/
#define  RATIO_21_DIV_20     4301   /*(21*0x1000+20/2)/20 used to increase Invert slope 5%*/
#define  RATIO_4_DIV_5       3277   /*(4*0x1000+5/2)/5 */
#define  RATIO_5_DIV_4       5120   /*(5*0x1000+4/2)/4 */
#define  ROUND_FIX_DIV(c,d)  (((c)+(1<<((d)-1)))>>(d))

#if IS_VCXO_LC_SUPPORT
unsigned char XO_LC_Flags = XO_LC_ENABLED;
XO_LC_PARAMS  XO_LC_TableParams;
extern signed int afc_inv_slope;
extern signed short int afc_dac_default;
extern signed short int onek_hz_dac;
#else
unsigned char XO_LC_Flags = XO_LC_DISABLED;
#endif

static signed short weight_section_end_idx[5];
static signed short weight_section_end_idx_EPSK[5];

#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
static signed short TPO_weight_section_end_idx[TPO_2G_TABLE_NUM][FrequencyBandCount];        /* for TPO:Tx Power Offset GMSK */
static signed short TPO_weight_section_end_idx_EPSK[TPO_2G_TABLE_NUM][FrequencyBandCount];   /* for TPO:Tx Power Offset EPSK */
#endif   // IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
static signed short adjust_tpo_weight_sec_sp_idx_GMSK[NSFT_ADJUST_TPO_TABLE_NUM][FrequencyBandCount];    /* for Adjust TPO:Adjust TPO GMSK */
  #if IS_EPSK_ADJUST_TPO_SUPPORT
static signed short adjust_tpo_weight_sec_sp_idx_EPSK[NSFT_ADJUST_TPO_TABLE_NUM][FrequencyBandCount];   /* for Adjust TPO:Adjust TPO EPSK */
  #endif//IS_EPSK_ADJUST_TPO_SUPPORT
#endif   //IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT


CONST unsigned char gsm_err_det_id = 0;   //GSM_ERR_DET_ID;


#if IS_DCXO_SUPPORT_CHIP
   #if IS_RF_MT6162 && ( defined(AFC_VCXO) || defined(AFC_VCXO_2G) )
static void  L1D_RF_IMM_SEND_DCXO_BSI( unsigned short afc_dac );
   #endif
#endif

/*-------------------RFIC port to BB port mapping table----------------------------*/

#if IS_CHIP_MT6765
   #if IS_RF_MT6177M
      /* RFIQ_0 => BBIQ_0*/
      unsigned int RFport_BBport_mapping[MAX_RFIQ_PORTS]= {PBBRX0,DBBRX0};
   #elif IS_RF_MT6177L
         /* RFIQ_0 => BBIQ_0, RFIQ_1 => BBIQ_1 */
      unsigned int RFport_BBport_mapping[MAX_RFIQ_PORTS]= {PBBRX0,DBBRX0,
                                                           PBBRX1,DBBRX1};
   #else
      #error "Given RFIC not defined for MT6765 BB port Mapping"
   #endif
#elif IS_CHIP_MT6739
   #if IS_RF_MT6177M
      /* RFIQ_0 => BBIQ_0, RFIQ_1 => BBIQ_1 */
      unsigned int RFport_BBport_mapping[MAX_RFIQ_PORTS]= {PBBRX0,DBBRX0};
   #else
      #error "Given RFIC not defined for 93 BB port Mapping"
   #endif

#elif IS_CHIP_MT6293 /* Please do not OR with another chip. Add chip option above */
   #if IS_RF_MT6177L
      /* RFIQ_0 => BBIQ_0, RFIQ_1 => BBIQ_1 */
      unsigned int RFport_BBport_mapping[MAX_RFIQ_PORTS]= {PBBRX0,DBBRX0,
                                                           PBBRX1,DBBRX1};
   #elif IS_RF_MT6177M
      /* RFIQ_0 => BBIQ_0, RFIQ_1 => BBIQ_1 */
      unsigned int RFport_BBport_mapping[MAX_RFIQ_PORTS]= {PBBRX0,DBBRX0};
   #else
#error "Given RFIC not defined for 93 BB port Mapping"
   #endif
#elif IS_CHIP_MT6292 /* Please do not OR with another chip. Add chip option above */
   #if IS_RF_MT6176 
      /* RFIQ_0 => BBIQ_1, RFIQ_1 => BBIQ_2 */
      unsigned int RFport_BBport_mapping[MAX_RFIQ_PORTS]= {PBBRX1,DBBRX1,
                                                           PBBRX2,DBBRX2};
   #elif IS_RF_MT6179
      /* RFIQ_0 => BBIQ_0, RFIQ_1 => BBIQ_1, 
         RFIQ_2 => BBIQ_0, RFIQ_3 => BBIQ_2 */
      unsigned int RFport_BBport_mapping[MAX_RFIQ_PORTS]= {PBBRX0,DBBRX0,
                                                           PBBRX1,DBBRX1,
                                                           PBBRX0,DBBRX0,
                                                           PBBRX2,DBBRX2};
   #else
      #error "Given RFIC not defined for 92 BB port Mapping"
   #endif
#else
      #error "No RF to BB port Mapping for given chip"
#endif

/*------------------RFIC BSI port to ABB Tx DAC port mapping-------------------*/

#if IS_CHIP_MT6292 || IS_CHIP_MT6293 /* Please confirm the mapping before OR with another chip */
   unsigned int RFIC_Port_TxDAC_mapping[L1D_MAX_RFIC_PORT] = {0,     // RFIC_1
                                                              0xFF,  // PMIC Invalid value
                                                              1};    // RFIC_2
#else
   #error "No RF to TX port Mapping for given chip"
#endif
/*-----------------------------------------------------------------------------*/
#if ( IS_BT_CO_CLOCK_HW_SUPPORT && IS_BT_COCLOCK_SUPPORT ) || IS_CHIP_MT6575
#define L1D_RF_CAP_SET()
#define L1D_RF_CAP_CLEAR()
#else
#define L1D_RF_CAP_SET()    L1D_RF_CAP_Set()
#define L1D_RF_CAP_CLEAR()  L1D_RF_CAP_Clear()
#endif
/*---------------------------------------------------------------------------*/

char is_rampprofile_rollback_enable = 0;

unsigned short rfic_flags_for_scheduleread = L1D_TX;
unsigned short band_info_for_dualrfic = FrequencyBand900;
#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
kal_uint16 tableidx_nsftadjusttpo = 0x0;
#endif

/*---------------------------------------------------------------------------*/

static void L1D_RF_Set_SLEEP_SPI( void )
{
#if IS_BT_CO_CLOCK_HW_SUPPORT && IS_BT_COCLOCK_SUPPORT
   #if IS_RF_AD6548 || IS_RF_AD6546
   unsigned short d16;
   d16  = HW_READ( APB_CON );
   d16 |= (unsigned short)(0xD010);
   HW_WRITE( APB_CON, d16 );

   d16  = HW_READ( SLEEP_SPI );
   d16 &= ~0x007F;
      #if IS_RF_AD6546
   d16 |= (XO_CapID<<0);
      #elif IS_RF_AD6548
   d16 |= (XO_CapID<<1);
      #endif
   HW_WRITE( SLEEP_SPI, d16 );
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Init_VOLTCOM_Data( void )
{
   /* Set operating mode */
   if( L1D_CheckIfMetaMode() )   /* Meta Mode */
   {  l1d_rf.voltcom_mode = VOLTCOM_META_MODE;
   }
   else                          /* Normal Mode */
   {  l1d_rf.voltcom_mode = VOLTCOM_NORMAL_MODE;
   }

   l1d_rf.is_voltcom_in_meta = 0;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_RF_MT6162 || IS_RF_MT6163
   #if IS_RF_MT6162
extern CONST unsigned long  SDATA_RX_BAND[5];
   #elif IS_RF_MT6163
extern CONST unsigned long  SDATA_D1_BAND[5];
   #endif
       CONST unsigned char  CLK_EN_TABLE[4] = {  CLK1_EN, CLK2_EN, CLK3_EN, CLK4_EN  };
#elif IS_RF_MT6280RF
extern CONST unsigned long  SDATA_RX_LNA_BAND_SEL[5];
#elif IS_RF_MT6169
extern CONST unsigned long  SDATA_IORX1[5];
extern CONST unsigned long  SDATA_IORX2[5];
       CONST unsigned char  CLK_EN_TABLE[4] = {  CLK1_EN, CLK2_EN, CLK3_EN, CLK4_EN  };
#elif IS_RF_MT6166 || IS_RF_MT6165
extern CONST unsigned long  SDATA_RX_LNA_SEL[5];
       CONST unsigned char  CLK_EN_TABLE[4] = {  CLK1_EN, CLK2_EN, CLK3_EN, CLK4_EN  };
#elif IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   #if IS_2G_RX_DIVERSITY_PATH_SUPPORT
extern CONST unsigned long  L1D_SDATA_PRX_LNA_SEL[5];
extern CONST unsigned long  L1D_SDATA_DRX_LNA_SEL[5];
   #else
extern CONST unsigned long  SDATA_RX_LNA_SEL[5];
   #endif
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


/*----------------------------------------*/
/* TX Power Control Functions             */
/*----------------------------------------*/
#if IS_TX_POWER_CONTROL_SUPPORT
/* for the purpose of "TXPC in META" to backup and restore the calibrated data */
unsigned char is_calibrated_backup = 0;
   #if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
unsigned char TXADC_Data_LSB_Backup[4][16];
unsigned char TXADC_Data_MSB_Backup[4][8];
      #if IS_EPSK_TX_SUPPORT
unsigned char TXADC_Data_LSB_Backup_EPSK[4][16];
unsigned char TXADC_Data_MSB_Backup_EPSK[4][8];
      #endif
   #endif

/* define 8 temperature sections */
   #if defined(__L1_TEMPERATURE_RANGE_V2__)
short TEMP_IDX[8] = { -10, 5, 20, 35, 55, 70, 85, 90 };
   #else
short TEMP_IDX[8] = { -10, 5, 20 ,35 ,45 ,55 ,60, 65 };
   #endif
#endif

#if IS_TX_POWER_CONTROL_SUPPORT
   #if IS_RF_TX_POWER_CONTROL_SUPPORT
   #else
sTXPC_TEMPDATA TEMP_DAC;
sTXPC_TEMPDATA GSM850_TXTEMP_Data;
sTXPC_TEMPDATA GSM_TXTEMP_Data;
sTXPC_TEMPDATA DCS_TXTEMP_Data;
sTXPC_TEMPDATA PCS_TXTEMP_Data;

sTXPC_TEMPDATA* TXTEMP_Data[] =
{
   &TEMP_DAC,                    /* use this field to store themistor DAC  */
   &GSM850_TXTEMP_Data,          /* FrequencyBand850                */
   &GSM_TXTEMP_Data,             /* FrequencyBand900                */
   &DCS_TXTEMP_Data,             /* FrequencyBand1800               */
   &PCS_TXTEMP_Data,             /* FrequencyBand1900               */
};
      #if IS_EPSK_TX_SUPPORT
sTXPC_TEMPDATA GSM850_TXTEMP_Data_EPSK;
sTXPC_TEMPDATA GSM_TXTEMP_Data_EPSK;
sTXPC_TEMPDATA DCS_TXTEMP_Data_EPSK;
sTXPC_TEMPDATA PCS_TXTEMP_Data_EPSK;

sTXPC_TEMPDATA* TXTEMP_Data_EPSK[] =
{
   0,                             /* FrequencyBand400 (not support)  */
   &GSM850_TXTEMP_Data_EPSK,      /* FrequencyBand850                */
   &GSM_TXTEMP_Data_EPSK,         /* FrequencyBand900                */
   &DCS_TXTEMP_Data_EPSK,         /* FrequencyBand1800               */
   &PCS_TXTEMP_Data_EPSK,         /* FrequencyBand1900               */
};
      #endif
      #if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
/* The following variables are not defined in the custom folder of AD6546 */
sTXPC_ADCDATA GSM850_TXADC_Data;
sTXPC_ADCDATA GSM_TXADC_Data;
sTXPC_ADCDATA DCS_TXADC_Data;
sTXPC_ADCDATA PCS_TXADC_Data;

sTXPC_ADCDATA* TXADC_Data[] =
{
   0,                            /* FrequencyBand400 (not support)  */
   &GSM850_TXADC_Data,           /* FrequencyBand850                */
   &GSM_TXADC_Data,              /* FrequencyBand900                */
   &DCS_TXADC_Data,              /* FrequencyBand1800               */
   &PCS_TXADC_Data,              /* FrequencyBand1900               */
};
         #if IS_EPSK_TX_SUPPORT
sTXPC_ADCDATA GSM850_TXADC_Data_EPSK;
sTXPC_ADCDATA GSM_TXADC_Data_EPSK;
sTXPC_ADCDATA DCS_TXADC_Data_EPSK;
sTXPC_ADCDATA PCS_TXADC_Data_EPSK;

sTXPC_ADCDATA* TXADC_Data_EPSK[] =
{
   0,                            /* FrequencyBand400 (not support)  */
   &GSM850_TXADC_Data_EPSK,      /* FrequencyBand850                */
   &GSM_TXADC_Data_EPSK,         /* FrequencyBand900                */
   &DCS_TXADC_Data_EPSK,         /* FrequencyBand1800               */
   &PCS_TXADC_Data_EPSK,         /* FrequencyBand1900               */
};
         #endif   /* IS_EPSK_TX_SUPPORT */
      #endif      /* IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT */
   #endif         /* IS_RF_TX_POWER_CONTROL_SUPPORT */
#endif            /* IS_TX_POWER_CONTROL_SUPPORT */

#if IS_TXPC_CL_AUXADC_SUPPORT
void L1D_RF_TXPC_CL_AUXADC_PowerOn( void )
{
   if( l1d_rf.txpc_type == TXPC_AUXADC_CLOSED_TYPE )
   {
   #if IS_CHIP_MT6256
      HW_WRITE( PDN_CLR1,    0x0800 );    /* AUXADC dedicated power switch for 2G TX power measurement     */
   #elif IS_CHIP_MT6276
      HW_WRITE( MCU_CG_CLR2, 0x0080 );    /* AUXADC 2G general power switch                                */
                                          /* AUXADC 2GTX dedicated power switch (MCU_CG_CLR3[0]) is not ready yet. */
                                          /* Use general switch instead                                     */
   #endif
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_AUXADC_PowerOff( void )
{
   if( l1d_rf.txpc_type == TXPC_AUXADC_CLOSED_TYPE )
   {
   #if IS_CHIP_MT6256
      HW_WRITE( PDN_SET1,    0x0800 );    /* AUXADC dedicated power switch for 2G TX power measurement     */
   #elif IS_CHIP_MT6276
//    HW_WRITE( MCU_CG_SET2, 0x0080 );    /* AUXADC 2G general power switch                                */
                                          /* AUXADC 2GTX dedicated power switch (MCU_CG_CLR3[0]) is not ready yet.  */
                                          /* Do not turn off general switch to avoid disturbing ADC driver */
   #endif
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_TX_POWER_CONTROL_SUPPORT
void L1D_RF_Init_TXPC_Data( void )
{
   /* 1. Set power control type */
   if( closed_loop_txpc_type == 1 )
   {  l1d_rf.txpc_type = TXPC_AUXADC_CLOSED_TYPE;  }
   else if( closed_loop_txpc_type == 2 )
   {  l1d_rf.txpc_type = TXPC_BSI_CLOSED_TYPE;     }
   else
   {  if( open_loop_txpc_type == 1 )
      {  l1d_rf.txpc_type = TXPC_AUXADC_OPEN_TYPE; }
      else if( open_loop_txpc_type == 2 )
      {  l1d_rf.txpc_type = TXPC_BSI_OPEN_TYPE;    }
      else
      {  l1d_rf.txpc_type = TXPC_NO_CONTROL_TYPE;  }
   }

   #if IS_RF_TX_POWER_CONTROL_SUPPORT
   #else
   l1d_rf.txpc_type = TXPC_NO_CONTROL_TYPE;  /* RF doesn't need SW TXPC */
   #endif

   /* 2. Set operating mode */
   if( L1D_CheckIfMetaMode() )   /* Meta Mode */
   {  l1d_rf.txpc_mode = TXPC_META_MODE;
   }
   else                          /* Normal Mode */
   {  if( (open_loop_txpc_type>0) && (is_txpc_calibrated&0x1) )
      {  l1d_rf.txpc_mode = TXPC_NORMAL_MODE;   }  /* open loop */
      else if( (closed_loop_txpc_type>0) && (is_txpc_calibrated&(0x2)) )
      {  l1d_rf.txpc_mode = TXPC_NORMAL_MODE;   }  /* closed loop */
      else
      {  l1d_rf.txpc_mode = TXPC_SAMPLE_MODE;   }  /* Switch off TXPC if TXPC is not calibrated */
   }

   l1d_rf.is_txpc_in_meta = 0;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

void L1D_RF_TXPC_SET_CAL( sTXPC_L1CAL *cal, int is_EPSK, int update_type )
{
#if IS_TX_POWER_CONTROL_SUPPORT
   L1D_RF_TXPC_SET_CAL_FLAG( cal );
   L1D_RF_TXPC_CL_SET_ALL_CAL_ADC( cal, is_EPSK, update_type );
   L1D_RF_TXPC_OL_SET_CAL_TEMPERATURE( cal );
   L1D_RF_TXPC_CL_SET_ALL_CAL_TEMP( cal, is_EPSK, update_type );
   L1D_RF_INIT_TXPC_DATA();
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_set_TxPowerDecrementTable( unsigned char op_code, unsigned char tx_reduction_table[4][2][4] )
{
#if IS_DECREASE_RF_TX_MAX_POWER_SUPPORT
   int band_idx, mod_type_idx, slot_idx;
   unsigned char fine_tune_power = 0;

   for( band_idx=0; band_idx<4; band_idx++ )
   {
      for( mod_type_idx=0; mod_type_idx<2; mod_type_idx++ )
      {
         for( slot_idx=0; slot_idx<4; slot_idx++ )
         {
            /*-------------------------------------------------------------------------*/
            /* op_code is decided by L4, and the value will be 1/3/4/5.                */
            /* op_code=4 or tx_reduction_table={0} means is_tx_decrease_power_needed=0 */
            /*-------------------------------------------------------------------------*/
            if( (op_code==1 || op_code==3) && l1d_rf.is_tx_decrease_power_needed!=0 )
            {  fine_tune_power = Tx_Fine_Tune_Table.power_decrement[band_idx][mod_type_idx][slot_idx];
            }
            /* Don't need to use Tx_Fine_Tune_Table if tx power doesn't need to decrease */
            else if( op_code==5 || l1d_rf.is_tx_decrease_power_needed==0 )
            {  fine_tune_power = 0;
            }

            Tx_Power_Decrement_Table.power_decrement[band_idx][mod_type_idx][slot_idx] = tx_reduction_table[band_idx][mod_type_idx][slot_idx] + fine_tune_power;
         }
      }
   }
#endif
   (void)op_code; (void)tx_reduction_table;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void L1D_RF_set_TxPowerDecrementTable_TAS( unsigned char op_code, unsigned char tx_reduction_table[4][2][4],unsigned char tx_reduction_table_tas[4][2][4] )
{
#if IS_DECREASE_RF_TX_MAX_POWER_SUPPORT&&IS_TAS_MAX_TXPWR_REDUCTION_SUPPORT
   int band_idx, mod_type_idx, slot_idx;
   unsigned char fine_tune_power=0;
   unsigned char fine_tune_power_tas=0;
   
   for( band_idx=0; band_idx<4; band_idx++ )
   {
      for( mod_type_idx=0; mod_type_idx<2; mod_type_idx++ )
      {
         for( slot_idx=0; slot_idx<4; slot_idx++ )
         {
            /*-------------------------------------------------------------------------*/
            /* op_code is decided by L4, and the value will be  1/3/4/5/9/10.                */
            /* op_code=4 or tx_reduction_table&&tx_reduction_table_tas={0} means is_tx_decrease_power_needed=0&&is_tx_decrease_power_needed_tas=0  */
            /*-------------------------------------------------------------------------*/
     
            if( (op_code==1 || op_code==3 || op_code==9 || op_code==10 )&&(l1d_rf.is_tx_decrease_power_needed!=0 || l1d_rf.is_tx_decrease_power_needed_tas!=0) )
            {
               fine_tune_power = l1d_rf.is_tx_decrease_power_needed!=0 ? Tx_Fine_Tune_Table.power_decrement[band_idx][mod_type_idx][slot_idx] : 0;
               fine_tune_power_tas = l1d_rf.is_tx_decrease_power_needed_tas!=0 ? Tx_Fine_Tune_Table.power_decrement[band_idx][mod_type_idx][slot_idx] : 0;
            }
            /* Don't need to use Tx_Fine_Tune_Table if tx power doesn't need to decrease */
            else if((op_code==5)|| (l1d_rf.is_tx_decrease_power_needed==0 && l1d_rf.is_tx_decrease_power_needed_tas==0))
            {
               fine_tune_power = 0;
               fine_tune_power_tas = 0;
            }
            Tx_Power_Decrement_Table.power_decrement[band_idx][mod_type_idx][slot_idx] = tx_reduction_table[band_idx][mod_type_idx][slot_idx] + fine_tune_power;
            Tx_Power_Decrement_Table_Tas.power_decrement[band_idx][mod_type_idx][slot_idx] = tx_reduction_table_tas[band_idx][mod_type_idx][slot_idx] + fine_tune_power_tas;
         }
      }
   }
#endif
   (void)op_code; (void)tx_reduction_table; (void)tx_reduction_table_tas;
}
void  L1D_RF_Check_TxPowerDecrementTable( char valid, unsigned char op_code, unsigned char tx_reduction_table[4][2][4] )
{
#if IS_DECREASE_RF_TX_MAX_POWER_SUPPORT
   /* Check whether TX_Power_Decrement_Table is all zero or not.
      If TX_Power_Decrement_Table is all zero, disable RF Refine Tx Power */
   int band_idx, mod_type_idx, slot_idx;
   char tx_decrease_power_needed = 0;
   unsigned char *reduction_value;

   if( valid==0 )
   {  /* Keep tx_decrease_power_needed=0 */
   }
   else
   {
      for( band_idx=0; band_idx<4; band_idx++ )
      {
         for( mod_type_idx=0; mod_type_idx<2; mod_type_idx++ )
         {
            for( slot_idx=0; slot_idx<4; slot_idx++ )
            {
               reduction_value = &tx_reduction_table[band_idx][mod_type_idx][slot_idx];
               if( *reduction_value!=0 )
               {
                  tx_decrease_power_needed = 1;

                  if( *reduction_value>64 && op_code==3 )   //TX max decrease power is 8dB
                  {  *reduction_value = 64;  }
               }
            }
         }
      }
   }
   l1d_rf.is_tx_decrease_power_needed = tx_decrease_power_needed;
#endif
   (void)valid; (void)op_code; (void)tx_reduction_table;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void  L1D_RF_Check_TxPowerDecrementTable_TAS( char valid, unsigned char op_code, unsigned char tx_reduction_table[4][2][4], unsigned char tx_reduction_table_tas[4][2][4] )
{
#if IS_DECREASE_RF_TX_MAX_POWER_SUPPORT&&IS_TAS_MAX_TXPWR_REDUCTION_SUPPORT
   /* Check whether TX_Power_Decrement_Table is all zero or not.
      If TX_Power_Decrement_Table is all zero, disable RF Refine Tx Power */
   int band_idx, mod_type_idx, slot_idx;
   char tx_decrease_power_needed = 0;
   char tx_decrease_power_needed_tas = 0;
   unsigned char *reduction_value, *reduction_value_tas;

   if( valid==0 )
   {  /* Keep tx_decrease_power_needed=0 */
   }
   else
   {
      for( band_idx=0; band_idx<4; band_idx++ )
      {
         for( mod_type_idx=0; mod_type_idx<2; mod_type_idx++ )
         {
            for( slot_idx=0; slot_idx<4; slot_idx++ )
            {
               reduction_value = &tx_reduction_table[band_idx][mod_type_idx][slot_idx];
               reduction_value_tas = &tx_reduction_table_tas[band_idx][mod_type_idx][slot_idx];
                                   
               if((*reduction_value!=0) || (*reduction_value_tas!=0))
               {
                   if(*reduction_value!=0)
                   {   tx_decrease_power_needed = 1; }
                   if(*reduction_value_tas!=0)
                   {   tx_decrease_power_needed_tas = 1;  }

                   //TX max decrease power is 8dB
                   if(op_code==3 || op_code==9 || op_code==10)
                   {
                      *reduction_value=*reduction_value>64?64:*reduction_value;
                      *reduction_value_tas=*reduction_value_tas>64?64:*reduction_value_tas;    
                   }
               }
            }
         }
      }
   }
     
   l1d_rf.is_tx_decrease_power_needed = tx_decrease_power_needed;
   l1d_rf.is_tx_decrease_power_needed_tas = tx_decrease_power_needed_tas;
#endif
   (void)valid; (void)op_code; (void)tx_reduction_table; (void)tx_reduction_table_tas;
}

static void L1D_RF_Init_AUXADC( void )
{
#if IS_TXPC_CL_AUXADC_SUPPORT
   if( l1d_rf.txpc_type == TXPC_AUXADC_CLOSED_TYPE )
   {  L1D_RF_TXPC_CL_AUXADC_POWERON();
      HW_WRITE( AUX_2GTX_CH, TXPC_AUXADC_VDET_PORT );
      /* Bit[11] in AUXADC_CON3 enables the power warm-up period to ensure power stability before the SAR process takes place. */
      /* This bit should always be 0 as it is de-featured.                                                                     */
      HW_WRITE( AUXADC_CON3, HW_READ(AUXADC_CON3)&(~0x0800) );
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* TC gain compensation */
#if IS_DYNAMIC_TC_GAIN_SUPPORT
   #if IS_TEMP_COMP_TC_GAIN_SUPPORT

const char TC_GAIN_TABLE[FrequencyBandCount][TEMP_SECTION_NUM] =
{ /*LT, NT, HT*/
   { 0,  0,  0},  /* GSM400 */
   {16, 10,  7},  /* GSM850 */
   {14,  8,  5},  /* GSM900 */
   {16, 10,  7},  /* DCS1800 */
   {12,  7,  5}   /* PCS1900 */
};
short TC_GAIN_SLOPE_TABLE[FrequencyBandCount][TEMP_SECTION_NUM - 1] = {0};

static void L1D_RF_Init_TC_Gain_Slope( void )
{
   int band;
   for ( band = FrequencyBand400; band < FrequencyBandCount; band++ )
   {
      TC_GAIN_SLOPE_TABLE[band][LOW_TEMP_IND]    = TC_GAIN_SLOPE( TC_GAIN_LOW_TEMP   , TC_GAIN_NORMAL_TEMP, TC_GAIN_TABLE[band][LOW_TEMP_IND],    TC_GAIN_TABLE[band][NORMAL_TEMP_IND]);
      TC_GAIN_SLOPE_TABLE[band][NORMAL_TEMP_IND] = TC_GAIN_SLOPE( TC_GAIN_NORMAL_TEMP, TC_GAIN_HIGH_TEMP  , TC_GAIN_TABLE[band][NORMAL_TEMP_IND], TC_GAIN_TABLE[band][HIGH_TEMP_IND]);
   }
}

static char L1D_RF_Get_TC_Gain( void )
{
   static char  tc_gain             = 0;
   static char  tc_last_band        = FrequencyBandCount;
   static short tc_last_temperature = 0;

   short temperature, temp_base;
   int temp_idx;

   /* Get present Temp.*/
   #if IS_TX_POWER_CONTROL_SUPPORT
   temperature = L1D_RF_TXPC_GetTemperatureInfo (2);

   /* Limit value region */
   if ( temperature > TC_GAIN_HIGH_TEMP )
   {  temperature = TC_GAIN_HIGH_TEMP;  }
   else if ( temperature < TC_GAIN_LOW_TEMP )
   {  temperature = TC_GAIN_LOW_TEMP;  }

   #else
   temperature = 25; /* default: 25 Celsius degree */
   #endif

   /* Calculate TC gain */
   if ( (temperature != tc_last_temperature) || (l1d_rf.band != tc_last_band) )
   {
      tc_last_temperature = temperature;
      tc_last_band = l1d_rf.band;

      temp_idx = ( temperature >= TC_GAIN_NORMAL_TEMP ) ? NORMAL_TEMP_IND : LOW_TEMP_IND;
      temp_base = ( temperature >= TC_GAIN_NORMAL_TEMP ) ? TC_GAIN_NORMAL_TEMP : TC_GAIN_LOW_TEMP;
      tc_gain = (char)( ( ((short)TC_GAIN_SLOPE_TABLE[l1d_rf.band][temp_idx]) * (temperature - temp_base) +
                          (((short)TC_GAIN_TABLE[l1d_rf.band][temp_idx]) << 8) +
                          0x80 /* 0.5 in format of 8b8 */
                        ) >> 8
                      ) & TC_GAIN_MASK;
   }

   return tc_gain;
}

   #else /* IS_TEMP_COMP_TC_GAIN_SUPPORT */

const char TC_GAIN_TABLE[FrequencyBandCount] =
{  0,  /* GSM400 */
   8,  /* GSM850 */
   6,  /* GSM900 */
   8,  /* DCS1800 */
   5   /* PCS1900 */
};

static char L1D_RF_Get_TC_Gain( void )
{
   return (TC_GAIN_TABLE[l1d_rf.band] & TC_GAIN_MASK);
}

   #endif /* IS_TEMP_COMP_TC_GAIN_SUPPORT */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_Get_TC_Gain_CW( void )
{
   unsigned long cw = TC_GAIN_CW;

   cw &= ~TC_GAIN_CW_MASK;
   cw |= (L1D_RF_Get_TC_Gain() << TC_GAIN_CW_LSB);
   return cw;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif  /* IS_DYNAMIC_TC_GAIN_SUPPORT */

void L1D_RF_SetGainRF( l1cal_gainrf_T *gain )
{
#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
   const signed char *src;
         signed char *dst;
   int  n,i,band,step;

   if( gain != 0 )
   {
      for ( i = 0; i < FrequencyBandCount; i++ )
      {
         dst = (signed char*)GAIN_RF_TABLE[i];
         if( dst != 0 )
         {  src = (signed char*)(gain->gain_rf[i]);
            for( n=sizeof(sTXGAIN_RFDATA); n>0; n--)
            {  *dst++ = *src++;
            }
         }
      }
   }

   for( band=0; band<4; band++ )
   {  for( step=0; step<TX_GAIN_STEP_NUM; step++ )
      {
         l1d_rf2.Gvga_rf[band][step] = GAIN_RF_TABLE[band+1]->data[step];
      }
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Set_RFC_Result( MMRFC_GSM_RESULT_T *buff )
{
#if IS_2G_MMPOC_SUPPORT
   const signed char *src;
         signed char *dst;
   int  n;

   dst = (signed char*)(&l1d_rf2.rfc_data);
   if( dst != 0 )
   {  src = (signed char*)buff;
      for( n=sizeof(MMRFC_GSM_RESULT_T); n>0; n--)
      {  *dst++ = *src++;  }
   }

   L1D_RF_Gainrf_Init();
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void L1D_RF_Init_RFDeIsolation( void )
{
#if IS_COSIM_ON_L1SIM_SUPPORT
#elif IS_RF_MT6280RF
   // Set bit[0] to zero to disable RF isolation
   unsigned long d32 = HW_READ(MD_TOP_CON);
   d32 &= (~(0x1));
   HW_WRITE( MD_TOP_CON, d32 );
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void L1D_RF_Init_Data( void )
{
   l1d_rf.cwin_idx      = 0;
   l1d_rf.band          = FrequencyBand900;
/* l1d_rf.rtxwin_idx    = 0; */
   l1d_rf.cur_slot      = 0;
   l1d_rf.cur_slot_n    = 0;
   l1d_rf.rx_slots      = 0;
   l1d_rf.tx_slots      = 0;
   l1d_rf.apc_dc_offset = 0;
   l1d_rf.bat_volt      = 1;
   l1d_rf.bat_temp      = 1;
   //l1d_rf.egsm_disable  = IS_EGSM900_DISABLE;
/* l1d.is_init          = 0; */
#if IS_DYNAMIC_MACRO_SUPPORT
   l1d_rf2.is_wakeup    = 0;
#endif
#if IS_RF_MT6256RF
   #if IS_EPSK_TX_SUPPORT
   l1d_rf2.tx_power_sel = 0;
   #endif
   l1d_rf2.r_cal        = L1D_RF_Get_BT_Rcal();
#endif
#if IS_OBB_DETECTION_SUPPORT
   l1d_rf.if_change     = 1;
   l1d_rf.obb_arfcn     = -1;
#endif
#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
   l1d_rf.dcxo_lpm      = 0;
#endif
#if IS_32K_CRYSTAL_REMOVAL_SUPPORT || IS_DUAL_LOOP_AFC_CONTROL_SUPPORT
   l1d_rf.is_lock_dcxo  = 0;
#endif
#if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT && IS_DUAL_RF_SIP_CHIP_SUPPORT
   l1d_rf.is_PMWindow = 0;   // For MT6179 to distinguish if window is PM
#endif
#if IS_2G_TAS_ANT_IDX_FOR_PM_WINDOW_SUPPORT
   l1d_rf.is_TAS_PMWindow = 0;  // For MT6179 to distinguish if window is PM
#endif
#if IS_GSM_EM_TX_POWER_CONTROL_SUPPORT
   l1d_rf.EMmaxDAC = 0;
   l1d_rf.EMmaxPower = 0;
   l1d_rf.EMmodType = 0;
   memset(l1d_rf.bySlotMod, 0x0, sizeof(l1d_rf.bySlotMod));
   memset(l1d_rf.bySlotPower, 0x0, sizeof(l1d_rf.bySlotPower));
   memset(l1d_rf.bySlotDAC, 0x0, sizeof(l1d_rf.bySlotDAC));
#endif

#if IS_HEADROOM_DETECTION_SUPPORT ||     \
    IS_INBAND_BLOCKER_DETECTION_SUPPORT || \
    IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
   l1d_rf.blk_flag      = 0;
#endif
#if IS_2G_RXD_ENHANCEMENT_SUPPORT
   l1d_rf.is_rfic_gge_path  = L1D_RXD_RFIC_LTE_PATH;
#endif
/* l1d.bb_tx_autocal    = 0; */
/* l1d_rf.AFC_data      = AFC_Init_Value; */
/* l1d_rf.RFN_data      = 0; */
/* l1d_rf.IFN_data      = 0; */
/* l1d_rf.AGC_data      = 0; */
#if defined(L1A_SIM_WO_TL1)
   l1d_rf.AFC_data      = PSI_EE;
#endif
#if IS_RF_AD6546
   l1d_rf.handle_tx_dcm = 1;
#else
   l1d_rf.handle_tx_dcm = 0;
#endif

#if IS_DCXO_SUPPORT_CHIP && IS_AFC_EVENT_SUPPORT_CHIP
   #if IS_AFC_EVENT_ENABLE
   l1d_rf.is_afc_event_enable = 1;
   #else
   l1d_rf.is_afc_event_enable = 0;
   #endif
   #if IS_AFC_TRIGGER_BSI_SUPPORT
   l1d_rf.is_afc_trigger_bsi  = 1;
   #else
   l1d_rf.is_afc_trigger_bsi  = 0;
   #endif
#endif

#if IS_BT_COCLOCK_SUPPORT
   #if IS_RF_AD6548 || IS_RF_AD6546
   l1d_rf.gpio_modeswitch = 1;
   #else
   l1d_rf.gpio_modeswitch = 0;
   #endif
#else
   l1d_rf.gpio_modeswitch = 0;
#endif

#if IS_BBTXRX_CHIP_DESIGN_VER_2 || IS_BBTXRX_CHIP_DESIGN_VER_3
   l1d_rf.rx_dc_i              = 0;
   l1d_rf.rx_dc_q              = 0;
   l1d_rf.cal_band             = 0;
   #if IS_RF_RX_DCOC_SUPPORT
   l1d_rf.is_rf_rxdcoc_support = 1;
   #else
   l1d_rf.is_rf_rxdcoc_support = 0;
   #endif
   #if IS_RF_TX_CALIBRATION_SUPPORT
      #if IS_RF_MT6162
   l1d_rf.is_rf_txiqmm_support = RF_TXIQMM_OH;
      #elif IS_RF_MT6163
   l1d_rf.is_rf_txiqmm_support = RF_TXIQMM_OT;
      #endif
   #else
   l1d_rf.is_rf_txiqmm_support = 0;
   #endif
#endif

#if IS_BSI_TRIG_OFFCHIP_BSI_SWITCH_SUPPORT
   l1d_rf.imm_bsi_switch_cfg   = BSI_SWITCH_2G_THEN_TD;
#endif

#if IS_RF_VCO_DOO_OFF || IS_RF_VCO_PARTIAL_DOO_ON || IS_REPORT_RF_TEMPERATURE_SUPPORT || IS_REPORT_RF_TEMPERATURE_BYATCMD_SUPPORT
   l1d_rf2.dedicated_flag      = 0;
#endif
#if IS_RF_VCO_DOO_OFF || IS_RF_VCO_PARTIAL_DOO_ON
   l1d_rf2.rx_pm_flag          = 0;
   l1d_rf2.tx_1st_cwin_idx     = 0;
#endif

#if IS_RF_MT6162 || IS_RF_MT6163
   l1d_rf2.is_2g_on            = 0;
   l1d_rf2.lpfcap              = 0;
   l1d_rf2.is_rx_cal           = 0;
   l1d_rf2.is_tx_cal           = 0;
   l1d_rf2.is_isotpol          = 0;
   l1d_rf2.is_integer          = 0;
   l1d_rf2.rx_dc_offset        = 0;
   l1d_rf2.is_fix_rf1828       = 0;
   #if IS_RF_RX_DCOC_SUPPORT
   L1D_RF_RXDCOffset_Init();
   l1d_rf2.rx_dac_to_voltage_i = 0;
   l1d_rf2.rx_dac_to_voltage_q = 0;
   #endif
   #if IS_RF_TX_CALIBRATION_SUPPORT
      #if IS_BBTXRX_CHIP_DESIGN_VER_3
   l1d_rf2.tx_cal_power_index  = 0;
      #endif
   L1D_RF_TXIQMM_Init();
   #endif
   #if IS_TDD_DUAL_MODE_SUPPORT && IS_DCXO_ENABLE
/*TDD*/ #if L1D_WT_COBIN_ARCHITECTURE_SUPPORT
/*TDD*/    #if IS_GL1D_TW_COEXIST_SUPPORT
/*TDD*/    #else
/*TDD*/ if( L1D_WT_Query_TDD_Enable() == KAL_TRUE )
/*TDD*/ {  l1d_rf2.is_bsi_afc_active = 1;  } /* Activate 2G AFCDAC update via BSI */
/*TDD*/    #endif /* IS_GL1D_TW_COEXIST_SUPPORT */
/*TDD*/ #else
/*TDD*/ l1d_rf2.is_bsi_afc_active   = 1; /* Activate 2G AFCDAC update via BSI */
/*TDD*/ #endif
   #endif
#endif

#if IS_RF_MT6280RF
   l1d_rf2.is_2g_on            = 0;
   l1d_rf2.is_power_on_cal     = 0;         /* 1.for power on cal. check 2.for rx dc offset check */
   l1d_rf2.calr_const          = 0;         /* RCAL Cal. */
   l1d_rf2.rxif_rck_m          = 0;         /* RXRC Cal. */
   l1d_rf2.r8dl_stage1_adj     = 0;         /* ADC Loop Filter Coef. */
   l1d_rf2.r8dl_stage2_adj     = 0;         /* ADC Loop Filter Coef. */
   l1d_rf2.r8dl_stage3_adj     = 0;         /* ADC Loop Filter Coef. */
   l1d_rf2.r8dl_quantizer_adj  = 0;         /* ADC Loop Filter Coef. */
   l1d_rf2.power_on_cal_flag   = RCAL_CAL_ON | RXRC_DCOC_CAL_ON | ADC_LF_COEF_CAL_ON | TX_GAINSTEP_CAL_ON;
   l1d_rf2.tx_gain_step_k_flag = 0;
   L1D_RF_RxDCOC_Init();
   L1D_RF_Gainrf_Init();
#endif

#if IS_RF_MT6169
   l1d_rf2.is_2g_on            = 0;
   #if IS_LTE_POWERON_CALIBRATION_ENABLE
   #else
   l1d_rf2.calr_const          = 0;         /* RCAL Cal. */
   l1d_rf2.calr_tcl_r_m        = 0;         /* RCAL Cal. */
   l1d_rf2.txrcf_csel[0]       = 0;         /* TXRCF Cal. */
   l1d_rf2.txrcf_csel[1]       = 0;         /* TXRCF Cal. */
   l1d_rf2.is_power_on_cal     = 0;         /* 1.for power on cal. check 2.for rx dc offset check */
   l1d_rf2.power_on_cal_flag   = RCAL_CAL_ON | TX_GAINSTEP_CAL_ON | TX_DET_DCOC_CAL_ON | TX_RCF_CAL_ON;
   L1D_RF_Gainrf_Init();
   #endif
   #if IS_BSI_AFC_ACTIVE_SWITCH
   l1d_rf2.is_bsi_afc_active   = 1; /* Activate 2G AFCDAC update via BSI */
   #endif
#endif

#if IS_RF_MT6166
   l1d_rf2.is_2g_on            = 0;
   l1d_rf2.is_power_on_cal     = 0;         /* for power on cal. check */
   l1d_rf2.rxif_rck_m          = 0;         /* RXRC Cal. */
   l1d_rf2.power_on_cal_flag   = RXRC_CAL_ON | TX_GAINSTEP_CAL_ON;
   l1d_rf2.tx_gain_step_k_flag = 0;
   L1D_RF_Gainrf_Init();
   #if IS_BSI_AFC_ACTIVE_SWITCH
   l1d_rf2.is_bsi_afc_active   = 1; /* Activate 2G AFCDAC update via BSI */
   #endif
#endif

#if IS_RF_MT6165
   l1d_rf2.is_2g_on            = 0;
   #if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
   L1D_RF_Gainrfcal_Info_init();
   #else
   L1D_RF_Gainrf_Init();
   #endif
   #if IS_BSI_AFC_ACTIVE_SWITCH
   l1d_rf2.is_bsi_afc_active   = 1; /* Activate 2G AFCDAC update via BSI */
   #endif
#endif

#if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   l1d_rf2.is_2g_on            = 0;
   #if IS_BSI_AFC_ACTIVE_SWITCH
      #if IS_GL1D_TW_COEXIST_SUPPORT
      #else
   l1d_rf2.is_bsi_afc_active   = 1; /* Activate 2G AFCDAC update via BSI */
      #endif /* IS_GL1D_TW_COEXIST_SUPPORT */
   #endif
#endif

#if IS_TDD_DM_RF_INIT_HANDSHAKE_SUPPORT
   l1d_rf.is_init_done         = 0;
   l1d_rf.SPI_sta              = 2;
#endif

#if IS_DUAL_LOOP_AFC_CONTROL_SUPPORT
   #if IS_RF_MT6166 || IS_RF_MT6165
   l1d_rf.dcxo_frac_fpm        = (POR_CW250 & 0xFFF);
   #else
   l1d_rf.dcxo_frac_fpm        = 0;  // Set dcxo_frac_fpm=0 as default value, then we won't send it at SR1
   #endif
   l1d_rf.tx_nfracoffset       = 0;
#endif

#if IS_DECREASE_RF_TX_MAX_POWER_SUPPORT
   l1d_rf.is_tx_decrease_power_needed = 0;
   #if IS_TAS_MAX_TXPWR_REDUCTION_SUPPORT
   l1d_rf.is_tx_decrease_power_needed_tas=0;
   #endif
#endif

   l1d_rf.is_init_abnormal     = 0;  // Flag in bitwise for checking any unexpected init result during L1D_Init()

   L1D_RF_INIT_TXPC_DATA();

   L1D_RF_Init_VOLTCOM_Data();

#if IS_DYNAMIC_TC_GAIN_SUPPORT && IS_TEMP_COMP_TC_GAIN_SUPPORT
   L1D_RF_Init_TC_Gain_Slope();
#endif

#if IS_DCS_NB_WB_SWITCH_SUPPORT
   L1D_RF_Init_DCS_NB_WB_Switch();
#endif

#if IS_DSDA_DCS_TX_NOTCH_SWITCH_SUPPORT
   L1D_RF_Init_TX_Notch_Switch();
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void L1D_RF_Init_GPIO( void )
{
#if IS_BPI_DATA_48_BIT_CHIP
#elif !defined(L1_SIM) && !defined(__CUST_NEW__)
   unsigned short d16,d16and,d16or,i;
   d16    = 0;
   d16and = 0;
   d16or  = 0;

   #if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   for(i=0; i<FrequencyBandCount; i++)
   {
      d16|=PDATA_TABLE[i][RF_RX][0];         /* PR1   */
      d16|=PDATA_TABLE[i][RF_RX][1];         /* PR2   */
      d16|=PDATA_TABLE[i][RF_RX][2];         /* PR2B  */
      d16|=PDATA_TABLE[i][RF_RX][3];         /* PR3   */
      d16|=PDATA_TABLE[i][RF_RX][4];         /* PR3A  */
      d16|=PDATA_TABLE[i][RF_TX][0];         /* PT1   */
      d16|=PDATA_TABLE[i][RF_TX][1];         /* PT2   */
      d16|=PDATA_TABLE[i][RF_TX][2];         /* PT2B  */
      d16|=PDATA_TABLE[i][RF_TX][3];         /* PT3   */
      d16|=PDATA_TABLE[i][RF_TX][4];         /* PT3A  */
      d16|=PDATA_TABLE3[i][RF_RX][0];        /* PR2M1 */
      d16|=PDATA_TABLE3[i][RF_RX][1];        /* PR2M2 */
      d16|=PDATA_TABLE3[i][RF_RX][2];        /* PR2M3 */
      d16|=PDATA_TABLE3[i][RF_TX][0];        /* PT2M1 */
      d16|=PDATA_TABLE3[i][RF_TX][1];        /* PT2M3 */
      d16|=PDATA_TABLE3[i][RF_TX][2];        /* PT2M3 */
      d16|=PDATA_TABLE3[i][RF_TX_8G][0];     /* PT2M1 */
      d16|=PDATA_TABLE3[i][RF_TX_8G][1];     /* PT2M2 */
      d16|=PDATA_TABLE3[i][RF_TX_8G][2];     /* PT2M3 */

      d16|=pdata_gmsk;   //PDATA_GMSK
      d16|=pdata_8psk;   //PDATA_8PSK
   }
   #else
   for(i=0; i<FrequencyBandCount; i++)
   {
      d16|=PDATA_TABLE[i][RF_RX][0];         /* PR1   */
      d16|=PDATA_TABLE[i][RF_RX][1];         /* PR2   */
      d16|=PDATA_TABLE[i][RF_RX][2];         /* PR3   */
      d16|=PDATA_TABLE[i][RF_TX][0];         /* PT1   */
      d16|=PDATA_TABLE[i][RF_TX][1];         /* PT2   */
      d16|=PDATA_TABLE[i][RF_TX][2];         /* PT3   */
      #if IS_CHIP_MT6218_AND_LATTER_VERSION
/*MT6218~*/ d16|=PDATA_TABLE2[i][RF_RX][0];  /* PR2M1 */
/*MT6218~*/ d16|=PDATA_TABLE2[i][RF_RX][1];  /* PR2M2 */
/*MT6218~*/ d16|=PDATA_TABLE2[i][RF_TX][0];  /* PT2B  */
      #endif
   }
   #endif

   #if IS_CHIP_MT6208
   /*MT6208*/ #ifndef __CUST_NEW__
   /*MT6208*/ /* All GPIO config is set by L1D in MT6208 */
   /*MT6208*/ /* config GPIO_MODE2[3:2]=1 to set GPIO9=BSI_CS1 */
   /*MT6208*/ HW_WRITE( GPIO_MODE1, 0x00AA );
   /*MT6208*/ HW_WRITE( GPIO_MODE2, 0x0004 );
   /*MT6208*/ HW_WRITE( GPIO_MODE3, 0x4001 );
   /*MT6208*/
   /*MT6208*/ d16 = HW_READ( GPIO_DIR );
   /*MT6208*/ d16 &= ~0x020F;
   /*MT6208*/ d16 |=  0xFFF9;
   /*MT6208*/ HW_WRITE( GPIO_DIR, d16 );
   /*MT6208*/ #endif /* __CUST_NEW__*/
   /*MT6208*/
   /*MT6208*/ d16 = HW_READ( PDN_CON1 );
   /*MT6208*/ d16 &= ~0x0004;
   /*MT6208*/ HW_WRITE( PDN_CON1, d16 );
   /*MT6208*/
   /*MT6208*/ /*--------------------------------*/
   /*MT6208*/ /* Turn on RF Main Power -- PSAVE */
   /*MT6208*/ /*--------------------------------*/
   /*MT6208*/ {void L1D_GPO_WriteIO(char ,char );
   /*MT6208*/ #ifdef __CUST_NEW__
   /*MT6208*/ extern const char gpio_rf_control2_pin;
   /*MT6208*/ L1D_GPO_WriteIO( 1, gpio_rf_control2_pin); /* ( val, bit ) */
   /*MT6208*/ #else
   /*MT6208*/ L1D_GPO_WriteIO( 1, 1 ); /* ( val, bit ) */
   /*MT6208*/ #endif
   /*MT6208*/ }
   #endif

   #if IS_CHIP_MT6205
   /*MT6205*/ /* if needed to config GPIO_MODE1[9:8]=1 to set GPIO4=BPI_BUS4 */
   /*MT6205*/ /* if needed to config GPIO_MODE1[B:A]=1 to set GPIO5=BPI_BUS5 */
   /*MT6205*/ /* if needed to config GPIO_MODE1[D:C]=1 to set GPIO6=BPI_BUS6 */
   /*MT6205*/ /* if needed to config GPIO_MODE1[F:E]=1 to set GPIO7=BPI_BUS7 */
   /*MT6205*/
   /*MT6205*/ #ifndef __CUST_NEW__
   /*MT6205*/ for(i=4; i<8; i++)             /* only check BPI4~7 */
   /*MT6205*/ {
   /*MT6205*/    if(d16>>i & 0x0001)         /* if this BPI needed */
   /*MT6205*/    {
   /*MT6205*/      d16and |= 0x0003<<(i*2);  /* only set this needed pin as BPI */
   /*MT6205*/      d16or  |= 0x0001<<(i*2);
   /*MT6205*/    }
   /*MT6205*/ }
   /*MT6205*/
   /*MT6205*/ d16 = HW_READ( GPIO_MODE1 );
   /*MT6205*/ d16 &= ~d16and;
   /*MT6205*/ d16 |=  d16or;
   /*MT6205*/ HW_WRITE( GPIO_MODE1, d16 );
   /*MT6205*/
   /*MT6205*/ #if IS_RF_BRIGHT2
   /*MT6205*//*BRIGHT2*/ /* config GPIO_MODE1[F:E]=2 to set GPIO7=BSI_CS1 */
   /*MT6205*//*BRIGHT2*/ d16 = HW_READ( GPIO_MODE1 );
   /*MT6205*//*BRIGHT2*/ d16 &= ~0xC000;
   /*MT6205*//*BRIGHT2*/ d16 |=  0x8000;
   /*MT6205*//*BRIGHT2*/ HW_WRITE( GPIO_MODE1, d16 );
   /*MT6205*/ #endif
   /*MT6205*/
   /*MT6205*/ #if IS_RF_MT6119C || IS_RF_MT6129A || IS_RF_MT6129B || IS_RF_MT6129C || IS_RF_MT6129D || IS_RF_MT6139B || IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B || IS_RF_MT6139E || IS_RF_MT6140D
   /*MT6205*/    #ifndef RFVCO_SW_CONTROL /* HW control */
   /*MT6205*//*MT6119C*/ /* config GPIO_MODE1[F:E]=0 to set GPIO7=GPO7 */
   /*MT6205*//*MT6119C*/ d16 = HW_READ( GPIO_MODE1 );
   /*MT6205*//*MT6119C*/ d16 &= ~0xC000;
   /*MT6205*//*MT6119C*/ HW_WRITE( GPIO_MODE1, d16 );
   /*MT6205*//*MT6119C*/ d16 = HW_READ( GPIO_DIR1 );
   /*MT6205*//*MT6119C*/ d16 |=  0x0080;
   /*MT6205*//*MT6119C*/ HW_WRITE( GPIO_DIR1, d16 );
   /*MT6205*/     #endif
   /*MT6205*/ #endif
   /*MT6205*/ #endif /* __CUST_NEW__ */
   #endif

   #if IS_CHIP_MT6218A
   /*MT6218A*/ /* if needed to config GPIO_MODE2[1:0]=1 to set GPIO8=BPI_BUS7 */
   /*MT6218A*/ /* if needed to config GPIO_MODE2[3:2]=1 to set GPIO9=BPI_BUS8 */
   /*MT6218A*/ /* if needed to config GPIO_MODE2[5:4]=1 to set GPIOA=BPI_BUS9 */
   /*MT6218A*/
   /*MT6218A*/ #ifndef __CUST_NEW__
   /*MT6218A*/ for(i=7; i<10; i++)                /* only check BPI7~9 */
   /*MT6218A*/ {
   /*MT6218A*/    if(d16>>i & 0x0001)             /* if this BPI needed */
   /*MT6218A*/    {
   /*MT6218A*/      d16and |= 0x0003<<((i-7)*2);  /* only set this needed pin as BPI */
   /*MT6218A*/      d16or  |= 0x0001<<((i-7)*2);
   /*MT6218A*/    }
   /*MT6218A*/ }
   /*MT6218A*/
   /*MT6218A*/ d16 = HW_READ( GPIO_MODE2 );
   /*MT6218A*/ d16 &= ~d16and;
   /*MT6218A*/ d16 |=  d16or;
   /*MT6218A*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6218A*/
   /*MT6218A*/ #if IS_RF_BRIGHT2
   /*MT6218A*//*BRIGHT2*/ /* config GPIO_MODE2[5:4]=2 to set GPIOA=BSI_CS1 */
   /*MT6218A*//*BRIGHT2*/ d16 = HW_READ( GPIO_MODE2 );
   /*MT6218A*//*BRIGHT2*/ d16 &= ~0x0030;
   /*MT6218A*//*BRIGHT2*/ d16 |=  0x0020;
   /*MT6218A*//*BRIGHT2*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6218A*/ #endif
   /*MT6218A*/
   /*MT6218A*/ #if IS_RF_MT6119C || IS_RF_MT6129A || IS_RF_MT6129B || IS_RF_MT6129C || IS_RF_MT6129D || IS_RF_MT6139B || IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B
   /*MT6218A*/    #ifndef RFVCO_SW_CONTROL /* HW control */
   /*MT6218A*//*MT6119C*/ /* config GPIO_MODE2[5:4]=0 to set GPIOA=GPOA */
   /*MT6218A*//*MT6119C*/ d16 = HW_READ( GPIO_MODE2 );
   /*MT6218A*//*MT6119C*/ d16 &= ~0x0030;
   /*MT6218A*//*MT6119C*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6218A*//*MT6119C*/ d16 = HW_READ( GPIO_DIR1 );
   /*MT6218A*//*MT6119C*/ d16 |=  0x0400;
   /*MT6218A*//*MT6119C*/ HW_WRITE( GPIO_DIR1, d16 );
   /*MT6218A*/     #endif
   /*MT6218A*/ #endif
   /*MT6218A*/ #endif /* __CUST_NEW__ */
   #endif

   #if IS_CHIP_MT6218B || IS_CHIP_MT6219 || IS_CHIP_MT6227
   /*MT6218B~*/ /* if needed to config GPIO_MODE2[5:4]=1 to set GPIOA=BPI_BUS6 */
   /*MT6218B~*/ /* if needed to config GPIO_MODE2[7:6]=1 to set GPIOB=BPI_BUS7 */
   /*MT6218B~*/ /* if needed to config GPIO_MODE2[9:8]=1 to set GPIOC=BPI_BUS8 */
   /*MT6218B~*/ /* if needed to config GPIO_MODE2[11:10]=1 to set GPIOD=BPI_BUS9 */
   /*MT6218B~*/
   /*MT6218B~*/ #ifndef __CUST_NEW__
   /*MT6218B~*/ for(i=6; i<10; i++)                /* only check BPI6~9 */
   /*MT6218B~*/ {
   /*MT6218B~*/    if(d16>>i & 0x0001)             /* if this BPI needed */
   /*MT6218B~*/    {
   /*MT6218B~*/      d16and |= 0x0003<<((i-4)*2);  /* only set this needed pin as BPI */
   /*MT6218B~*/      d16or  |= 0x0001<<((i-4)*2);
   /*MT6218B~*/    }
   /*MT6218B~*/ }
   /*MT6218B~*/
   /*MT6218B~*/ d16 = HW_READ( GPIO_MODE2 );
   /*MT6218B~*/ d16 &= ~d16and;
   /*MT6218B~*/ d16 |=  d16or;
   /*MT6218B~*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6218B~*/
   /*MT6218B~*/ #if IS_RF_BRIGHT2
   /*MT6218B~*//*BRIGHT2*/ /* config GPIO_MODE2[11:10]=2 to set GPIOA=BSI_CS1 */
   /*MT6218B~*//*BRIGHT2*/ d16 = HW_READ( GPIO_MODE2 );
   /*MT6218B~*//*BRIGHT2*/ d16 &= ~0x0C00;
   /*MT6218B~*//*BRIGHT2*/ d16 |=  0x0800;
   /*MT6218B~*//*BRIGHT2*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6218B~*/ #endif
   /*MT6218B~*/
   /*MT6218B~*/ #if IS_RF_SKY74117
   /*MT6218B~*//*SKY74117*/ /* config GPIO_MODE2[9:8]=00 to set GPIO12 */
   /*MT6218B~*//*SKY74117*/ d16 = HW_READ( GPIO_MODE2 );
   /*MT6218B~*//*SKY74117*/ d16 &= ~0x0300;
   /*MT6218B~*//*SKY74117*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6218B~*//*SKY74117*/ d16 = HW_READ( GPIO_DIR1 );
   /*MT6218B~*//*SKY74117*/ d16 |=  0x1000;
   /*MT6218B~*//*SKY74117*/ HW_WRITE( GPIO_DIR1, d16 );
   /*MT6218B~*/ #endif
   /*MT6218B~*/
   /*MT6218B~*/  #if IS_RF_MT6119C || IS_RF_MT6129A || IS_RF_MT6129B || IS_RF_MT6129C || IS_RF_MT6129D || IS_RF_MT6139B || IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B
   /*MT6218B~*/    #ifndef RFVCO_SW_CONTROL /* HW control */
   /*MT6218B~*//*MT6119C*/ /* config GPIO_MODE2[11:10]=0 to set GPIOD=GPOD */
   /*MT6218B~*//*MT6119C*/ d16 = HW_READ( GPIO_MODE2 );
   /*MT6218B~*//*MT6119C*/ d16 &= ~0x0C00;
   /*MT6218B~*//*MT6119C*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6218B~*//*MT6119C*/ d16 = HW_READ( GPIO_DIR1 );
   /*MT6218B~*//*MT6119C*/ d16 |=  0x2000;
   /*MT6218B~*//*MT6119C*/ HW_WRITE( GPIO_DIR1, d16 );
   /*MT6218B~*/     #endif
   /*MT6218B~*/ #endif
   /*MT6218B~*/ #endif /* __CUST_NEW__ */
   #endif

   #if IS_CHIP_MT6228
   /*MT6228~*/ /* if needed to config GPIO_MODE3[1:0]=1 to set GPIOA=BPI_BUS6 */
   /*MT6228~*/ /* if needed to config GPIO_MODE3[3:2]=1 to set GPIOB=BPI_BUS7 */
   /*MT6228~*/ /* if needed to config GPIO_MODE3[5:4]=1 to set GPIOC=BPI_BUS8 */
   /*MT6228~*/ /* if needed to config GPIO_MODE3[7:6]=1 to set GPIOD=BPI_BUS9 */
   /*MT6228~*/
   /*MT6228~*/ #ifndef __CUST_NEW__
   /*MT6228~*/ for(i=6; i<10; i++)                /* only check BPI6~9 */
   /*MT6228~*/ {
   /*MT6228~*/    if(d16>>i & 0x0001)             /* if this BPI needed */
   /*MT6228~*/    {
   /*MT6228~*/      d16and |= 0x0003<<((i-6)*2);  /* only set this needed pin as BPI */
   /*MT6228~*/      d16or  |= 0x0001<<((i-6)*2);
   /*MT6228~*/    }
   /*MT6228~*/ }
   /*MT6228~*/
   /*MT6228~*/ d16 = HW_READ( GPIO_MODE3 );
   /*MT6228~*/ d16 &= ~d16and;
   /*MT6228~*/ d16 |=  d16or;
   /*MT6228~*/ HW_WRITE( GPIO_MODE3, d16 );
   /*MT6228~*/
   /*MT6228~*/ #if IS_RF_BRIGHT2
   /*MT6228~*//*BRIGHT2*/ /* config GPIO_MODE2[11:10]=2 to set GPIOA=BSI_CS1 */
   /*MT6228~*//*BRIGHT2*/ d16 = HW_READ( GPIO_MODE2 );
   /*MT6228~*//*BRIGHT2*/ d16 &= ~0x0C00;
   /*MT6228~*//*BRIGHT2*/ d16 |=  0x0800;
   /*MT6228~*//*BRIGHT2*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6228~*/ #endif
   /*MT6228~*/
   /*MT6228~*/ #if IS_RF_MT6119C || IS_RF_MT6129A || IS_RF_MT6129B || IS_RF_MT6129C || IS_RF_MT6129D || IS_RF_MT6139B || IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B
   /*MT6228~*/    #ifndef RFVCO_SW_CONTROL /* HW control */
   /*MT6228~*//*MT6119C*/ /* config GPIO_MODE2[11:10]=0 to set GPIOD=GPOD */
   /*MT6228~*//*MT6119C*/ d16 = HW_READ( GPIO_MODE3 );
   /*MT6228~*//*MT6119C*/ d16 &= ~0x00C0;
   /*MT6228~*//*MT6119C*/ HW_WRITE( GPIO_MODE3, d16 );
   /*MT6228~*//*MT6119C*/ d16 = HW_READ( GPIO_DIR2 );
   /*MT6228~*//*MT6119C*/ d16 |=  0x0008;
   /*MT6228~*//*MT6119C*/ HW_WRITE( GPIO_DIR2, d16 );
   /*MT6228~*/     #endif
   /*MT6228~*/ #endif
   /*MT6228~*/ #endif /* __CUST_NEW__ */
   #endif

   #if IS_CHIP_MT6225_AND_LATTER_VERSION
   /*MT6225~*/ /* if needed to config GPIO_MODE4[3:2]=1 to set GPIO25=BPI_BUS6 */
   /*MT6225~*/ /* if needed to config GPIO_MODE4[5:4]=1 to set GPIO26=BPI_BUS7 */
   /*MT6225~*/ /* if needed to config GPIO_MODE4[7:6]=1 to set GPIO27=BPI_BUS8 */
   /*MT6225~*/ /* if needed to config GPIO_MODE4[9:8]=1 to set GPIO28=BPI_BUS9 */
   /*MT6225~*/
   /*MT6225~*/ #ifndef __CUST_NEW__
   /*MT6225~*/ for(i=6; i<10; i++)                /* only check BPI6~9 */
   /*MT6225~*/ {
   /*MT6225~*/    if(d16>>i & 0x0001)             /* if this BPI needed */
   /*MT6225~*/    {
   /*MT6225~*/      d16and |= 0x0003<<((i-5)*2);  /* only set this needed pin as BPI */
   /*MT6225~*/      d16or  |= 0x0001<<((i-5)*2);
   /*MT6225~*/    }
   /*MT6225~*/ }
   /*MT6225~*/
   /*MT6225~*/ d16 = HW_READ( GPIO_MODE4 );
   /*MT6225~*/ d16 &= ~d16and;
   /*MT6225~*/ d16 |=  d16or;
   /*MT6225~*/ HW_WRITE( GPIO_MODE4, d16 );
   /*MT6225~*/
   /*MT6225~*/ #if IS_RF_BRIGHT2
   /*MT6225~*//*BRIGHT2*/ /* config GPIO_MODE4[9:8]=2 to set GPIO28=BSI_CS1 */
   /*MT6225~*//*BRIGHT2*/ d16 = HW_READ( GPIO_MODE4 );
   /*MT6225~*//*BRIGHT2*/ d16 &= ~0x0300;
   /*MT6225~*//*BRIGHT2*/ d16 |=  0x0200;
   /*MT6225~*//*BRIGHT2*/ HW_WRITE( GPIO_MODE4, d16 );
   /*MT6225~*/ #endif
   /*MT6225~*/
   /*MT6225~*/ #if IS_RF_MT6119C || IS_RF_MT6129A || IS_RF_MT6129B || IS_RF_MT6129C || IS_RF_MT6129D || IS_RF_MT6139B || IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B
   /*MT6225~*/    #ifndef RFVCO_SW_CONTROL /* HW control */
   /*MT6225~*//*MT6119C*/ /* config GPIO_MODE4[9:8]=0 to set GPIO28=GPO28 */
   /*MT6225~*//*MT6119C*/ d16 = HW_READ( GPIO_MODE4 );
   /*MT6225~*//*MT6119C*/ d16 &= ~0x0300;
   /*MT6225~*//*MT6119C*/ HW_WRITE( GPIO_MODE4, d16 );
   /*MT6225~*//*MT6119C*/ d16 = HW_READ( GPIO_DIR2 );
   /*MT6225~*//*MT6119C*/ d16 |=  0x1000;
   /*MT6225~*//*MT6119C*/ HW_WRITE( GPIO_DIR2, d16 );
   /*MT6225~*/    #endif
   /*MT6225~*/ #endif
   /*MT6225~*/ #endif /* __CUST_NEW__ */
   #endif

   #if IS_CHIP_MT6229||IS_CHIP_MT6268T
   /*MT6229~*/ /* if needed to config GPIO_MODE2[5:4]=1 to set GPIOA=BPI_BUS6 */
   /*MT6229~*/ /* if needed to config GPIO_MODE2[7:6]=1 to set GPIOB=BPI_BUS7 */
   /*MT6229~*/ /* if needed to config GPIO_MODE2[9:8]=1 to set GPIOC=BPI_BUS8 */
   /*MT6229~*/ /* if needed to config GPIO_MODE2[11:10]=1 to set GPIOD=BPI_BUS9 */
   /*MT6229~*/
   /*MT6229~*/ #ifndef __CUST_NEW__
   /*MT6229~*/ for(i=6; i<10; i++)                /* only check BPI6~9 */
   /*MT6229~*/ {
   /*MT6229~*/    if(d16>>i & 0x0001)             /* if this BPI needed */
   /*MT6229~*/    {
   /*MT6229~*/      d16and |= 0x0003<<((i-6)*2);  /* only set this needed pin as BPI */
   /*MT6229~*/      d16or  |= 0x0001<<((i-6)*2);
   /*MT6229~*/    }
   /*MT6229~*/ }
   /*MT6229~*/
   /*MT6229~*/ d16 = HW_READ( GPIO_MODE3 );
   /*MT6229~*/ d16 &= ~d16and;
   /*MT6229~*/ d16 |=  d16or;
   /*MT6229~*/ HW_WRITE( GPIO_MODE3, d16 );
   /*MT6229~*/
   /*MT6229~*/ #if IS_RF_MT6119C || IS_RF_MT6129A || IS_RF_MT6129B || IS_RF_MT6129C || IS_RF_MT6129D || IS_RF_MT6139B || IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B
   /*MT6229~*/    #ifndef RFVCO_SW_CONTROL /* HW control */
   /*MT6229~*//*MT6119C*/ /* config GPIO_MODE2[11:10]=0 to set GPIOD=GPOD */
   /*MT6229~*//*MT6119C*/ d16 = HW_READ( GPIO_MODE3 );
   /*MT6229~*//*MT6119C*/ d16 &= ~0x00C0;
   /*MT6229~*//*MT6119C*/ HW_WRITE( GPIO_MODE3, d16 );
   /*MT6229~*//*MT6119C*/ d16 = HW_READ( GPIO_DIR2 );
   /*MT6229~*//*MT6119C*/ d16 |=  0x0008;
   /*MT6229~*//*MT6119C*/ HW_WRITE( GPIO_DIR2, d16 );
   /*MT6229~*/     #endif
   /*MT6229~*/ #endif
   /*MT6229~*/ #endif /* __CUST_NEW__ */
   /*MT6229~*/
   #endif

   #if IS_CHIP_MT6223
   /*MT6223~*/ /* if needed to config GPIO_MODE3[ 9: 8]=1 to set GPIO20=BPI_BUS6 */
   /*MT6223~*/ /* if needed to config GPIO_MODE3[11:10]=1 to set GPIO21=BPI_BUS7 */
   /*MT6223~*/ /* if needed to config GPIO_MODE3[13:12]=1 to set GPIO22=BPI_BUS8 */
   /*MT6223~*/ /* if needed to config GPIO_MODE3[15:14]=1 to set GPIO23=BPI_BUS9 */
   /*MT6223~*/
   /*MT6223~*/ #ifndef __CUST_NEW__
   /*MT6223~*/ for(i=6; i<10; i++)                /* only check BPI6~9 */
   /*MT6223~*/ {
   /*MT6223~*/    if( (d16>>i) & 0x0001)          /* if this BPI needed */
   /*MT6223~*/    {
   /*MT6223~*/      d16and |= 0x0003<<((i-2)*2);  /* only set this needed pin as BPI */
   /*MT6223~*/      d16or  |= 0x0001<<((i-2)*2);
   /*MT6223~*/    }
   /*MT6223~*/ }
   /*MT6223~*/
   /*MT6223~*/ d16 = HW_READ( GPIO_MODE3 );
   /*MT6223~*/ d16 &= ~d16and;
   /*MT6223~*/ d16 |=  d16or;
   /*MT6223~*/ HW_WRITE( GPIO_MODE3, d16 );
   /*MT6223~*/
   /*MT6223~*/ #if IS_RF_MT6119C || IS_RF_MT6129A || IS_RF_MT6129B || IS_RF_MT6129C || IS_RF_MT6129D || IS_RF_MT6139B || IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B
   /*MT6223~*/    #ifndef RFVCO_SW_CONTROL /* HW control */
   /*MT6223~*/       /* config GPIO_MODE3[15:14]=0 to set GPIO23(BPI9) as GPIO function */
   /*MT6223~*/       d16 = HW_READ( GPIO_MODE3 );
   /*MT6223~*/       d16 &= ~0xC000;
   /*MT6223~*/       HW_WRITE( GPIO_MODE3, d16 );
   /*MT6223~*/       /* config GPIO_DIR2[7]=1 to set GPIO23 as output */
   /*MT6223~*/       d16 = HW_READ( GPIO_DIR2 );
   /*MT6223~*/       d16 |=  0x0080;
   /*MT6223~*/       HW_WRITE( GPIO_DIR2, d16 );
   /*MT6223~*/    #endif /* End of "RFVCO_SW_CONTROL" */
   /*MT6223~*/ #endif
   /*MT6223~*/ #endif /* __CUST_NEW__ */
   /*MT6223~*/
   #endif

   #if IS_CHIP_MT6238
   /*MT6238*/ /* if needed to config GPIO_MODE2[ 5: 4]=1 to set GPIO10=BPI_BUS6 */
   /*MT6238*/ /* if needed to config GPIO_MODE2[ 7: 6]=1 to set GPIO11=BPI_BUS7 */
   /*MT6238*/ /* if needed to config GPIO_MODE2[ 9: 8]=1 to set GPIO12=BPI_BUS8 */
   /*MT6238*/ /* if needed to config GPIO_MODE2[11:10]=1 to set GPIO13=BPI_BUS9 */
   /*MT6238*/
   /*MT6238*/ #ifndef __CUST_NEW__
   /*MT6238*/ for(i=6; i<10; i++)                /* only check BPI6~9 */
   /*MT6238*/ {
   /*MT6238*/    if( (d16>>i) & 0x0001)          /* if this BPI needed */
   /*MT6238*/    {
   /*MT6238*/      d16and |= 0x0003<<((i-4)*2);  /* only set this needed pin as BPI */
   /*MT6238*/      d16or  |= 0x0001<<((i-4)*2);
   /*MT6238*/    }
   /*MT6238*/ }
   /*MT6238*/
   /*MT6238*/ d16 = HW_READ( GPIO_MODE2 );
   /*MT6238*/ d16 &= ~d16and;
   /*MT6238*/ d16 |=  d16or;
   /*MT6238*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6238*/
   /*MT6238*/ #if IS_RF_MT6119C || IS_RF_MT6129A || IS_RF_MT6129B || IS_RF_MT6129C || IS_RF_MT6129D || IS_RF_MT6139B || IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B
   /*MT6238*/    #ifndef RFVCO_SW_CONTROL /* HW control */
   /*MT6238*/       /* config GPIO_MODE2[11:10]=0 to set GPIO13(BPI9) as GPIO function */
   /*MT6238*/       d16 = HW_READ( GPIO_MODE2 );
   /*MT6238*/       d16 &= ~0x0C00;
   /*MT6238*/       HW_WRITE( GPIO_MODE2, d16 );
   /*MT6238*/       /* config GPIO_DIR1[13]=1 to set GPIO13 as output */
   /*MT6238*/       d16  = HW_READ( GPIO_DIR1 );
   /*MT6238*/       d16 |=  0x2000;
   /*MT6238*/       HW_WRITE( GPIO_DIR1, d16 );
   /*MT6238*/    #endif /* End of "RFVCO_SW_CONTROL" */
   /*MT6238*/ #endif
   /*MT6238*/ #endif /* __CUST_NEW__ */
   /*MT6238*/
   #endif

   #if IS_SMARTPHONE_CHIP_TK6516_AND_LATTER_VERSION
   /*TK6516*/ /* if needed to config GPIO_MODE1[ 1: 0]=1 to set GPIO00=BPI_BUS6 */
   /*TK6516*/ /* if needed to config GPIO_MODE1[ 3: 2]=1 to set GPIO01=BPI_BUS7 */
   /*TK6516*/ /* if needed to config GPIO_MODE1[ 5: 4]=1 to set GPIO02=BPI_BUS8 */
   /*TK6516*/ /* if needed to config GPIO_MODE1[ 7: 6]=1 to set GPIO03=BPI_BUS9 */
   /*TK6516*/
      #ifndef __CUST_NEW__
   /*TK6516*/ for(i=6; i<10; i++)                /* only check BPI6~9 */
   /*TK6516*/ {
   /*TK6516*/    if( (d16>>i) & 0x0001)          /* if this BPI needed */
   /*TK6516*/    {
   /*TK6516*/       d16and |= 0x0003<<((i-6)*2); /* only set this needed pin as BPI */
   /*TK6516*/       d16or  |= 0x0001<<((i-6)*2);
   /*TK6516*/    }
   /*TK6516*/ }
   /*TK6516*/
   /*TK6516*/ d16 = HW_READ( GPIO_MODE1 );
   /*TK6516*/ d16 &= ~d16and;
   /*TK6516*/ d16 |=  d16or;
   /*TK6516*/ HW_WRITE( GPIO_MODE1, d16 );
   /*TK6516*/
         #if IS_RF_MT6119C || IS_RF_MT6129A || IS_RF_MT6129B || IS_RF_MT6129C || IS_RF_MT6129D || IS_RF_MT6139B || IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B
            #ifndef RFVCO_SW_CONTROL /* HW control */
   /*TK6516*/ /* config GPIO_MODE1[ 7: 6]=0 to set GPIO03(BPI9) as GPIO function */
   /*TK6516*/ d16 = HW_READ( GPIO_MODE1 );
   /*TK6516*/ d16 &= ~0x00C0;
   /*TK6516*/ HW_WRITE( GPIO_MODE1, d16 );
   /*TK6516*/ /* config GPIO_DIR1[03]=1 to set GPIO03 as output */
   /*TK6516*/ d16  = HW_READ( GPIO_DIR1 );
   /*TK6516*/ d16 |=  0x0008;
   /*TK6516*/ HW_WRITE( GPIO_DIR1, d16 );
            #endif /* End of "RFVCO_SW_CONTROL" */
         #endif
      #endif /* __CUST_NEW__ */
   /*TK6516*/
   #endif

   #if IS_CHIP_MT6268
   /*MT6268*/ /* if needed to config GPIO_MODE1[ 1: 0]=01 to set GPIO00=BPI_BUS0 */
   /*MT6268*/ /* if needed to config GPIO_MODE1[ 3: 2]=01 to set GPIO01=BPI_BUS1 */
   /*MT6268*/ /* if needed to config GPIO_MODE1[ 5: 4]=01 to set GPIO02=BPI_BUS2 */
   /*MT6268*/ /* if needed to config GPIO_MODE1[ 7: 6]=01 to set GPIO03=BPI_BUS3 */
   /*MT6268*/ /* if needed to config GPIO_MODE1[ 9: 8]=01 to set GPIO04=BPI_BUS9 */
   /*MT6268*/ /* if needed to config GPIO_MODE1[11:10]=01 to set GPIO05=BPI_BUS10*/
   /*MT6268*/

      #ifndef __CUST_NEW__
   /*MT6268*/ for(i=0; i<6; i++)
   /*MT6268*/ {
   /*MT6268*/    if( i<4 ) /* check BPI0~3 */
   /*MT6268*/    {
   /*MT6268*/       if( (d16>>i) & 0x0001)      /* if this BPI needed */
   /*MT6268*/       {
   /*MT6268*/          d16and |= 0x0003<<(i*2); /* only set this needed pin as BPI */
   /*MT6268*/          d16or  |= 0x0001<<(i*2);
   /*MT6268*/       }
   /*MT6268*/    }
   /*MT6268*/    else /* check BPI9~10 */
   /*MT6268*/    {
   /*MT6268*/       if( (d16>>(i+5)) & 0x0001)  /* if this BPI needed */
   /*MT6268*/       {
   /*MT6268*/          d16and |= 0x0003<<(i*2); /* only set this needed pin as BPI */
   /*MT6268*/          d16or  |= 0x0001<<(i*2);
   /*MT6268*/       }
   /*MT6268*/    }
   /*MT6268*/ }
   /*MT6268*/
   /*MT6268*/ d16 = HW_READ( GPIO_MODE1 );
   /*MT6268*/ d16 &= ~d16and;
   /*MT6268*/ d16 |=  d16or;
   /*MT6268*/ HW_WRITE( GPIO_MODE1, d16 );
   /*MT6268*/
   /*MT6268*/
   /*MT6268*/ /*BPI3,16,17*/
   /*MT6268*/ d16 = HW_READ(GPIO_MODE1);
   /*MT6268*/ d16 &= 0x0f3f;
   /*MT6268*/ d16 |= 0x5040;
   /*MT6268*/ HW_WRITE( GPIO_MODE1, d16 );
   /*MT6268*/ /*BPI18,19,BSI1*/
   /*MT6268*/ d16 = HW_READ(GPIO_MODE2);
   /*MT6268*/ d16 &= 0xc030;
   /*MT6268*/ d16 |= 0x1545;
   /*MT6268*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6268*/
         #if IS_CHIP_MT6268A
   /*MT6268*/ /*PASEL to PMIC*/
   /*MT6268*/ d16 = HW_READ(GPIO_MODE5);
   /*MT6268*/ d16 &= 0xCFFF;
   /*MT6268*/ d16 |= 0x1000;
   /*MT6268*/ HW_WRITE( GPIO_MODE5, d16 );
   /*MT6268*/
   /*MT6268*/ /*vm0 and vm1*/
   /*MT6268*/ d16 = HW_READ(GPIO_MODEA);
   /*MT6268*/ d16 &= 0x0FFF;
   /*MT6268*/ d16 |= 0xF000;
   /*MT6268*/ HW_WRITE( GPIO_MODEA, d16 );
         #else
   /*MT6268*/ /*PASEL to PMIC*/
   /*MT6268*/ d16 = HW_READ(GPIO_MODE6);
   /*MT6268*/ d16 &= 0xFFCF;
   /*MT6268*/ d16 |= 0x0015;
   /*MT6268*/ HW_WRITE( GPIO_MODE6, d16 );
   /*MT6268*/
   /*MT6268*/ /*vm0 and vm1*/
   /*MT6268*/ d16 = HW_READ(GPIO_MODE8);
   /*MT6268*/ d16 &= 0xC3FF;
   /*MT6268*/ d16 |= 0x3C00;
   /*MT6268*/ HW_WRITE( GPIO_MODE8, d16 );
         #endif
      #endif /* __CUST_NEW__ */
   /*MT6268*/
   #endif

   #if IS_CHIP_MT6252
   /* There is no need for MT6252 to configure GPIO. */
   #elif IS_CHIP_MT6253
   /*MT6253*/   /* if needed to config GPIO_MODE2[11:10]=1 to set GPIO13=BPI_BUS9 */
   /*MT6253*/
   /*MT6253*/   #ifndef __CUST_NEW__
   /*MT6253*/   /* only check BPI9 */
   /*MT6253*/   if( (d16>>9) & 0x0001)          /* if this BPI needed */
   /*MT6253*/   {
   /*MT6253*/      d16and |= 0x0003<<((11-4)*2);/* only set this needed pin as BPI */
   /*MT6253*/      d16or  |= 0x0001<<((11-4)*2);
   /*MT6253*/   }
   /*MT6253*/   d16 = HW_READ( GPIO_MODE3 );
   /*MT6253*/   d16 &= ~d16and;
   /*MT6253*/   d16 |=  d16or;
   /*MT6253*/   HW_WRITE( GPIO_MODE3, d16 );
   /*MT6253*/   #endif /* __CUST_NEW__ */
   #endif

   #if IS_CHIP_MT6236
   /*MT6236*/ /* if needed to config GPIO_MODE1[ 1: 0]=1 to set GPIO10=BPI_BUS0 */
   /*MT6236*/ /* if needed to config GPIO_MODE1[ 3: 2]=1 to set GPIO10=BPI_BUS1 */
   /*MT6236*/ /* if needed to config GPIO_MODE1[ 5: 4]=1 to set GPIO10=BPI_BUS2 */
   /*MT6236*/ /* if needed to config GPIO_MODE1[ 7: 6]=1 to set GPIO10=BPI_BUS3 */
   /*MT6236*/ /* if needed to config GPIO_MODE1[ 9: 8]=1 to set GPIO10=BPI_BUS4 */
   /*MT6236*/ /* if needed to config GPIO_MODE1[11:10]=1 to set GPIO10=BPI_BUS5 */
   /*MT6236*/ /* if needed to config GPIO_MODE1[13:12]=1 to set GPIO10=BPI_BUS6 */
   /*MT6236*/ /* if needed to config GPIO_MODE1[15:14]=1 to set GPIO11=BPI_BUS7 */
   /*MT6236*/ /* if needed to config GPIO_MODE2[ 1: 0]=1 to set GPIO12=BPI_BUS8 */
   /*MT6236*/ /* if needed to config GPIO_MODE2[ 3: 2]=1 to set GPIO13=BPI_BUS9 */
   /*MT6236*/
   /*MT6236*/ #ifndef __CUST_NEW__
   /*MT6236*/ for(i=0; i<8; i++)                /* check BPI0~7 */
   /*MT6236*/ {
   /*MT6236*/    if( (d16>>i) & 0x0001)          /* if this BPI needed */
   /*MT6236*/    {
   /*MT6236*/      d16and |= 0x0003<<(i*2);  /* only set this needed pin as BPI */
   /*MT6236*/      d16or  |= 0x0001<<(i*2);
   /*MT6236*/    }
   /*MT6236*/ }
   /*MT6236*/ {
   /*MT6236*/    unsigned short d16_temp;
   /*MT6236*/    d16_temp = HW_READ( GPIO_MODE1 );
   /*MT6236*/    d16_temp &= ~d16and;
   /*MT6236*/    d16_temp |=  d16or;
   /*MT6236*/    HW_WRITE( GPIO_MODE1, d16_temp );
   /*MT6236*/ }
   /*MT6236*/ d16and = 0;
   /*MT6236*/ d16or  = 0;
   /*MT6236*/
   /*MT6236*/ for(i=8; i<10; i++)                /* check BPI8~9 */
   /*MT6236*/ {
   /*MT6236*/    if( (d16>>i) & 0x0001)          /* if this BPI needed */
   /*MT6236*/    {
   /*MT6236*/      d16and |= 0x0003<<((i-8)*2);  /* only set this needed pin as BPI */
   /*MT6236*/      d16or  |= 0x0001<<((i-8)*2);
   /*MT6236*/    }
   /*MT6236*/ }
   /*MT6236*/
   /*MT6236*/ d16 = HW_READ( GPIO_MODE2 );
   /*MT6236*/ d16 &= ~d16and;
   /*MT6236*/ d16 |=  d16or;
   /*MT6236*/ HW_WRITE( GPIO_MODE2, d16 );
   /*MT6236*/ #endif /* __CUST_NEW__ */
   /*MT6236*/
   #endif

   #if IS_CHIP_MT6256
   /*MT6256*/ /* MT6256 has only 5 BPI pins                                    */
   /*MT6256*/ /* if needed to config GPIO_MODE1[ 3: 0]=1 to set GPIO0=BPI_BUS0 */
   /*MT6256*/ /* if needed to config GPIO_MODE1[ 7: 4]=1 to set GPIO1=BPI_BUS1 */
   /*MT6256*/ /* if needed to config GPIO_MODE1[11: 8]=1 to set GPIO2=BPI_BUS2 */
   /*MT6256*/ /* if needed to config GPIO_MODE1[15:12]=1 to set GPIO3=BPI_BUS3 */
   /*MT6256*/ /* if needed to config GPIO_MODE2[ 3: 0]=1 to set GPIO4=BPI_BUS4 */
   /*MT6256*/
   /*MT6256*/   #ifndef __CUST_NEW__
   /*MT6256*/   for(i=0; i<4; i++)                 /* check BPI0~3 */
   /*MT6256*/   {
   /*MT6256*/      if( (d16>>i) & 0x0001)          /* if this BPI needed */
   /*MT6256*/      {
   /*MT6256*/         d16and |= 0x000F<<(i*4);     /* only set this needed pin as BPI */
   /*MT6256*/         d16or  |= 0x0001<<(i*4);
   /*MT6256*/      }
   /*MT6256*/   }
   /*MT6256*/   {
   /*MT6256*/      unsigned short d16_temp;
   /*MT6256*/      #if IS_CHIP_MT6256_S00
   /*MT6256*/      d16_temp = HW_READ( GPIO_MODE1 );
   /*MT6256*/      d16_temp &= ~d16and;
   /*MT6256*/      d16_temp |=  d16or;
   /*MT6256*/      HW_WRITE( GPIO_MODE1, d16_temp );
   /*MT6256*/      #else
   /*MT6256*/      d16_temp = HW_READ( GPIO_MODE25 );
   /*MT6256*/      d16_temp &= ~d16and;
   /*MT6256*/      d16_temp |=  d16or;
   /*MT6256*/      HW_WRITE( GPIO_MODE25, d16_temp );
   /*MT6256*/      #endif
   /*MT6256*/   }
   /*MT6256*/
   /*MT6256*/   d16and = 0;
   /*MT6256*/   d16or  = 0;
   /*MT6256*/
   /*MT6256*/   i=4;                              /* check BPI4 */
   /*MT6256*/   if( (d16>>i) & 0x0001)            /* if this BPI needed */
   /*MT6256*/   {
   /*MT6256*/      d16and |= 0x000F<<((i-4)*4);   /* only set this needed pin as BPI */
   /*MT6256*/      d16or  |= 0x0001<<((i-4)*4);
   /*MT6256*/   }
   /*MT6256*/
   /*MT6256*/      #if IS_CHIP_MT6256_S00
   /*MT6256*/   d16 = HW_READ( GPIO_MODE2 );
   /*MT6256*/   d16 &= ~d16and;
   /*MT6256*/   d16 |=  d16or;
   /*MT6256*/   HW_WRITE( GPIO_MODE2, d16 );
   /*MT6256*/      #else
   /*MT6256*/   d16 = HW_READ( GPIO_MODE26 );
   /*MT6256*/   d16 &= ~d16and;
   /*MT6256*/   d16 |=  d16or;
   /*MT6256*/   HW_WRITE( GPIO_MODE26, d16 );
   /*MT6256*/      #endif
   /*MT6256*/   #endif /* __CUST_NEW__ */
   #endif

   #if IS_CHIP_MT6251
   /*MT6251*/   /* if needed to config GPIO_MODE1[ 3: 0]=1 to set GPIO0=BPI_BUS0 */
   /*MT6251*/   /* if needed to config GPIO_MODE1[ 7: 4]=1 to set GPIO1=BPI_BUS1 */
   /*MT6251*/   /* if needed to config GPIO_MODE1[11: 8]=1 to set GPIO2=BPI_BUS2 */
   /*MT6251*/   /* if needed to config GPIO_MODE1[15:12]=1 to set GPIO3=BPI_BUS3 */
   /*MT6251*/
   /*MT6251*/   #ifndef __CUST_NEW__
   /*MT6251*/   for(i=0; i<4; i++)                 /* check BPI0~3 */
   /*MT6251*/   {
   /*MT6251*/      if( (d16>>i) & 0x0001)          /* if this BPI needed */
   /*MT6251*/      {
   /*MT6251*/         d16and |= 0x000F<<(i*4);     /* only set this needed pin as BPI */
   /*MT6251*/         d16or  |= 0x0001<<(i*4);
   /*MT6251*/      }
   /*MT6251*/   }
   /*MT6251*/   d16 = HW_READ( GPIO_MODE1 );
   /*MT6251*/   d16 &= ~d16and;
   /*MT6251*/   d16 |=  d16or;
   /*MT6251*/   HW_WRITE( GPIO_MODE1, d16 );
   /*MT6251*/
   /*MT6251*/   #endif /* __CUST_NEW__ */
   #endif

   #if IS_CHIP_MT6255 || IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   /*MT6255~*/   #ifndef __CUST_NEW__
   /*MT6255~*/   (void)d16and;  (void)d16or;
   /*MT6255~*/   #endif /* __CUST_NEW__ */
   #endif

   #if IS_CHIP_MT6276
   /*MT6276*/ /* if needed to config GPIO_MODE1[ 5: 3]=001 to set GPIO06=BPI_BUS09 */
   /*MT6276*/ /* if needed to config GPIO_MODE1[ 8: 6]=001 to set GPIO07=BPI_BUS06 */
   /*MT6276*/ /* if needed to config GPIO_MODE1[11: 9]=001 to set GPIO08=BPI_BUS07 */
   /*MT6276*/
   /*MT6276*/ #ifndef __CUST_NEW__
   /*MT6276*/
   /*MT6276*/ for(i=6; i<10; i++)   /* check BPI6,7,9 for GPIO_MODE1 */
   /*MT6276*/ {
   /*MT6276*/    if( i<8 )          /* check BPI6~7 */
   /*MT6276*/    {
   /*MT6276*/       if( (d16>>i)&0x0001 )           /* if this BPI needed */
   /*MT6276*/       {
   /*MT6276*/          d16and |= 0x0007<<((i-4)*3); /* only set this needed pin as BPI */
   /*MT6276*/          d16or  |= 0x0001<<((i-4)*3);
   /*MT6276*/       }
   /*MT6276*/    }
   /*MT6276*/    else if(i==9)      /* check BPI9 */
   /*MT6276*/    {
   /*MT6276*/       if( (d16>>i)&0x0001 )           /* if this BPI needed */
   /*MT6276*/       {
   /*MT6276*/          d16and |= 0x0007<<((i-8)*3); /* only set this needed pin as BPI */
   /*MT6276*/          d16or  |= 0x0001<<((i-8)*3);
   /*MT6276*/       }
   /*MT6276*/    }
   /*MT6276*/ }
   /*MT6276*/
   /*MT6276*/ /* if needed to config GPIO_MODE2[ 2: 0]=001 to set GPIO10=BPI_BUS08 */
   /*MT6276*/ if( (d16>>8)&0x0001 ) /* check BPI8 for GPIO_MODE2 */
   /*MT6276*/ {
   /*MT6276*/    d16 = HW_READ(GPIO_MODE2);
   /*MT6276*/    d16 &= 0xFFF8;
   /*MT6276*/    d16 |= 0x0001;
   /*MT6276*/    HW_WRITE( GPIO_MODE2, d16 );
   /*MT6276*/ }
   /*MT6276*/
   /*MT6276*/ /* Config GPIO_MODE1[ 2: 0]=001 to set GPIO05=BPI_BUS13 */
   /*MT6276*/ /* Config GPIO_MODE1[14:12]=001 to set GPIO09=BPI_BUS14 */
   /*MT6276*/ d16and |= 0x7007;
   /*MT6276*/ d16or  |= 0x1001;
   /*MT6276*/
   /*MT6276*/ d16  = HW_READ( GPIO_MODE1 );
   /*MT6276*/ d16 &= ~d16and;
   /*MT6276*/ d16 |=  d16or;
   /*MT6276*/ HW_WRITE( GPIO_MODE1, d16 );
   /*MT6276*/
   /*MT6276*/ #endif /* __CUST_NEW__ */
   /*MT6276*/
   #endif

   #if IS_CHIP_MT6573
   /*MT6573*/ /* if needed to config GPIO_MODE2[ 8: 6]=001 to set GPIO12=BPI_BUS00 */
   /*MT6573*/ /* if needed to config GPIO_MODE2[11: 9]=001 to set GPIO13=BPI_BUS01 */
   /*MT6573*/ /* if needed to config GPIO_MODE2[14:12]=001 to set GPIO14=BPI_BUS02 */
   /*MT6573*/ /* if needed to config GPIO_MODE3[ 2: 0]=001 to set GPIO15=BPI_BUS03 */
   /*MT6573*/ /* if needed to config GPIO_MODE3[ 5: 3]=001 to set GPIO16=BPI_BUS04 */
   /*MT6573*/ /* if needed to config GPIO_MODE3[ 8: 6]=001 to set GPIO17=BPI_BUS05 */
   /*MT6573*/ /* if needed to config GPIO_MODE3[11: 9]=001 to set GPIO18=BPI_BUS06 */
   /*MT6573*/ /* if needed to config GPIO_MODE3[14:12]=001 to set GPIO19=BPI_BUS07 */
   /*MT6573*/ /* if needed to config GPIO_MODE4[ 2: 0]=001 to set GPIO20=BPI_BUS09 */
   /*MT6573*/
   /*MT6573*/ #ifndef __CUST_NEW__
   /*MT6573*/
   /*MT6573*/ for(i=0; i<3; i++)   /* check BPI0~2 for GPIO_MODE2 */
   /*MT6573*/ {
   /*MT6573*/    if( (d16>>i)&0x0001 )           /* if this BPI needed */
   /*MT6573*/    {
   /*MT6573*/       d16and |= 0x0007<<((i+2)*3); /* only set this needed pin as BPI */
   /*MT6573*/       d16or  |= 0x0001<<((i+2)*3);
   /*MT6573*/    }
   /*MT6573*/ }
   /*MT6573*/
   /*MT6573*/ {  unsigned short d16_temp;
   /*MT6573*/    d16_temp = HW_READ( GPIO_MODE2 );
   /*MT6573*/    d16_temp &= ~d16and;
   /*MT6573*/    d16_temp |=  d16or;
   /*MT6573*/    HW_WRITE( GPIO_MODE2, d16_temp );
   /*MT6573*/ }
   /*MT6573*/
   /*MT6573*/ d16and = 0;
   /*MT6573*/ d16or  = 0;
   /*MT6573*/
   /*MT6573*/ for(i=3; i<8; i++)   /* check BPI3~7 for GPIO_MODE3 */
   /*MT6573*/ {
   /*MT6573*/    if( (d16>>i)&0x0001 )           /* if this BPI needed */
   /*MT6573*/    {
   /*MT6573*/       d16and |= 0x0007<<((i-3)*3); /* only set this needed pin as BPI */
   /*MT6573*/       d16or  |= 0x0001<<((i-3)*3);
   /*MT6573*/    }
   /*MT6573*/ }
   /*MT6573*/
   /*MT6573*/ {  unsigned short d16_temp;
   /*MT6573*/    d16_temp = HW_READ( GPIO_MODE3 );
   /*MT6573*/    d16_temp &= ~d16and;
   /*MT6573*/    d16_temp |=  d16or;
   /*MT6573*/    HW_WRITE( GPIO_MODE3, d16_temp );
   /*MT6573*/ }
   /*MT6573*/
   /*MT6573*/ /* if needed to config GPIO_MODE5[ 5: 3]=001 to set GPIO26=BPI_BUS08 */
   /*MT6573*/ if( (d16>>8)&0x0001 )           /* if this BPI needed */
   /*MT6573*/ {
   /*MT6573*/    unsigned short d16_temp;
   /*MT6573*/    d16_temp = HW_READ( GPIO_MODE5 );
   /*MT6573*/    d16_temp &= ~0x0038;
   /*MT6573*/    d16_temp |=  0x0008;
   /*MT6573*/    HW_WRITE( GPIO_MODE5, d16_temp );
   /*MT6573*/ }
   /*MT6573*/
   /*MT6573*/ /* if needed to config GPIO_MODE4[ 2: 0]=001 to set GPIO20=BPI_BUS09 */
   /*MT6573*/ if( (d16>>9)&0x0001 )           /* if this BPI needed */
   /*MT6573*/ {
   /*MT6573*/    unsigned short d16_temp;
   /*MT6573*/    d16_temp = HW_READ( GPIO_MODE4 );
   /*MT6573*/    d16_temp &= ~0x0007;
   /*MT6573*/    d16_temp |=  0x0001;
   /*MT6573*/    HW_WRITE( GPIO_MODE4, d16_temp );
   /*MT6573*/ }
   /*MT6573*/
   /*MT6573*/ /* if needed to config GPIO_MODE4[ 5: 3]=001 to set GPIO21=BPI_BUS10 */
   /*MT6573*/ /* if needed to config GPIO_MODE4[ 8: 6]=001 to set GPIO22=BPI_BUS11 */
   /*MT6573*/ /* if needed to config GPIO_MODE4[11: 9]=001 to set GPIO23=BPI_BUS12 */
   /*MT6573*/ /* if needed to config GPIO_MODE4[14:12]=001 to set GPIO24=BPI_BUS13 */
   /*MT6573*/ d16and = 0x7FF8;
   /*MT6573*/ d16or  = 0x1248;
   /*MT6573*/
   /*MT6573*/ d16  = HW_READ( GPIO_MODE4 );
   /*MT6573*/ d16 &= ~d16and;
   /*MT6573*/ d16 |=  d16or;
   /*MT6573*/ HW_WRITE( GPIO_MODE5, d16 );
   /*MT6573*/
   /*MT6573*/ /* if needed to config GPIO_MODE5[ 2: 0]=001 to set GPIO25=BPI_BUS14 */
   /*MT6573*/
   /*MT6573*/ d16and = 0x0007;
   /*MT6573*/ d16or  = 0x0001;
   /*MT6573*/
   /*MT6573*/ d16  = HW_READ( GPIO_MODE5 );
   /*MT6573*/ d16 &= ~d16and;
   /*MT6573*/ d16 |=  d16or;
   /*MT6573*/ HW_WRITE( GPIO_MODE5, d16 );
   /*MT6573*/ #endif /* __CUST_NEW__ */
   /*MT6573*/
   #endif

   #if IS_CHIP_MT6575
   /*MT6575*/ /* if needed to config GPIO_MODE1[ 5: 3]=001 to set GPIO06=BPI_BUS09 */
   /*MT6575*/ /* if needed to config GPIO_MODE1[ 8: 6]=001 to set GPIO07=BPI_BUS06 */
   /*MT6575*/ /* if needed to config GPIO_MODE1[11: 9]=001 to set GPIO08=BPI_BUS07 */
   /*MT6575*/
   /*MT6575*/ #ifndef __CUST_NEW__
   /*MT6575*/
   /*MT6575*/ for(i=6; i<10; i++)   /* check BPI6,7,9 for GPIO_MODE1 */
   /*MT6575*/ {
   /*MT6575*/    if( i<8 )          /* check BPI6~7 */
   /*MT6575*/    {
   /*MT6575*/       if( (d16>>i)&0x0001 )           /* if this BPI needed */
   /*MT6575*/       {
   /*MT6575*/          d16and |= 0x0007<<((i-4)*3); /* only set this needed pin as BPI */
   /*MT6575*/          d16or  |= 0x0001<<((i-4)*3);
   /*MT6575*/       }
   /*MT6575*/    }
   /*MT6575*/    else if(i==9)      /* check BPI9 */
   /*MT6575*/    {
   /*MT6575*/       if( (d16>>i)&0x0001 )           /* if this BPI needed */
   /*MT6575*/       {
   /*MT6575*/          d16and |= 0x0007<<((i-8)*3); /* only set this needed pin as BPI */
   /*MT6575*/          d16or  |= 0x0001<<((i-8)*3);
   /*MT6575*/       }
   /*MT6575*/    }
   /*MT6575*/ }
   /*MT6575*/
   /*MT6575*/ /* if needed to config GPIO_MODE2[ 2: 0]=001 to set GPIO10=BPI_BUS08 */
   /*MT6575*/ if( (d16>>8)&0x0001 ) /* check BPI8 for GPIO_MODE2 */
   /*MT6575*/ {
   /*MT6575*/    d16 = HW_READ(GPIO_MODE2);
   /*MT6575*/    d16 &= 0xFFF8;
   /*MT6575*/    d16 |= 0x0001;
   /*MT6575*/    HW_WRITE( GPIO_MODE2, d16 );
   /*MT6575*/ }
   /*MT6575*/
   /*MT6575*/ /* Config GPIO_MODE1[ 2: 0]=001 to set GPIO05=BPI_BUS13 */
   /*MT6575*/ /* Config GPIO_MODE1[14:12]=001 to set GPIO09=BPI_BUS14 */
   /*MT6575*/ d16and |= 0x7007;
   /*MT6575*/ d16or  |= 0x1001;
   /*MT6575*/
   /*MT6575*/ d16  = HW_READ( GPIO_MODE1 );
   /*MT6575*/ d16 &= ~d16and;
   /*MT6575*/ d16 |=  d16or;
   /*MT6575*/ HW_WRITE( GPIO_MODE1, d16 );
   /*MT6575*/
   /*MT6575*/ #endif /* __CUST_NEW__ */
   /*MT6575*/
   #endif
#endif
#if IS_CHIP_MT6573
   #if IS_RF_MT6162
   /*MT6573*/ /* ensure GPIO 27~30 is configured as BSI1 function mode */
   /*MT6573*/ {  unsigned short d16;
   /*MT6573*/    d16  = HW_READ( GPIO_MODE5 ) & ~0x7FC0;
   /*MT6573*/    d16 |= 0x1240;
   /*MT6573*/    HW_WRITE( GPIO_MODE5, d16 );
   /*MT6573*/    d16  = HW_READ( GPIO_MODE6 ) & ~0x0007;
   /*MT6573*/    d16 |= 0x1;
   /*MT6573*/    HW_WRITE( GPIO_MODE6, d16 );
   /*MT6573*/ }
   #else
   /*MT6573*/ /* ensure GPIO 31~34 is configured as BSI0 function mode */
   /*MT6573*/ {  unsigned short d16;
   /*MT6573*/    d16  = HW_READ( GPIO_MODE6 ) & ~0x7FF8;
   /*MT6573*/    d16 |= 0x1248;
   /*MT6573*/    HW_WRITE( GPIO_MODE6, d16 );
   /*MT6573*/ }
   #endif
#endif

#if IS_TDD_DM_RF_POWER_CHECK_SUPPORT
/*TDD*/ #if L1D_WT_COBIN_ARCHITECTURE_SUPPORT
/*TDD*/ if( L1D_WT_Query_TDD_Enable() == KAL_TRUE )
/*TDD*/ {  L1D_RF_Init_TDD_Power_Check_GPIO();  }
/*TDD*/ #else
/*TDD*/ L1D_RF_Init_TDD_Power_Check_GPIO();
/*TDD*/ #endif
#endif /* IS_TDD_DM_RF_POWER_CHECK_SUPPORT */

#if IS_CHIP_MT6583_MD1
   {  unsigned long d32;
      // BSI_B[18:17]; BSI_C[10:9]; BSI_A[6:5];
      // 0x0 =>  4mA
      // 0x1 =>  8mA
      // 0x2 => 12mA (HW default setting)
      // 0x3 => 16mA
      d32 = HW_READ( GPIO_DRV_CON5 ) & ~0x00060660;
      HW_WRITE( GPIO_DRV_CON5, d32 );
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_CHIP_MT6276
#define L1D_INIT_BSI_DRIVING()   HW_WRITE( ACIF_CON0, HW_READ(ACIF_CON0)&(~0x0007) )
#else
#define L1D_INIT_BSI_DRIVING()
#endif

#if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   #if IS_RF_CENTRAL_CONTROL_ENABLE
#define L1D_BSI_RESET()
   #elif IS_DUAL_TALK_SUPPORT
      #if IS_RF_MT6166 || IS_RF_MT6165
#define L1D_BSI_RESET()                                   \
{  unsigned long read = HW_READ(BSISPI_PORT_PARAM_RFIC2); \
   read &= ~( 0x1<<8 );                                   \
   HW_WRITE( BSISPI_PORT_PARAM_RFIC2, read );             \
}
      #endif
   #else
      #if IS_RF_MT6169 || IS_RF_MT6165 || IS_COSIM_ON_L1SIM_SUPPORT
#define L1D_BSI_RESET()                                   \
{  unsigned long read = HW_READ(BSISPI_PORT_PARAM_RFIC1); \
   read &= ~( 0x1<<8 );                                   \
   HW_WRITE( BSISPI_PORT_PARAM_RFIC1, read );             \
}
      #endif
   #endif
#else
#define L1D_BSI_RESET()                                   \
{  unsigned short read  = HW_READ( BSI_IO_CON );          \
   read &= ~( 0x1<<8 );                                   \
   HW_WRITE( BSI_IO_CON, read );                          \
}
#endif

#if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   #if IS_DUAL_TALK_SUPPORT
#define L1D_BSISPI_CG_ON()                                                                            \
{  unsigned long bsispi_cg_param_on;                                                                  \
   HW_WRITE(BSISPI_CGEN, BSISPI_CGON_PARAM);                                                          \
   bsispi_cg_param_on = HW_READ(BSISPI_CGEN);                                                         \
   bsispi_cg_param_on = HW_READ(BSISPI_CGEN);                                                         \
   l1d_rf.is_init_abnormal |= (bsispi_cg_param_on == BSISPI_CGON_PARAM) ? 0 : INIT_BSISPI_ABNORMAL;   \
}
#define L1D_BSISPI_CG_OFF()                                                                           \
{  unsigned long bsispi_cg_param_off;                                                                 \
   HW_WRITE(BSISPI_CGEN, BSISPI_CGOFF_PARAM);                                                         \
   bsispi_cg_param_off = HW_READ(BSISPI_CGEN);                                                        \
   bsispi_cg_param_off = HW_READ(BSISPI_CGEN);                                                        \
   l1d_rf.is_init_abnormal |= (bsispi_cg_param_off == BSISPI_CGOFF_PARAM) ? 0 : INIT_BSISPI_ABNORMAL; \
}
#else
#define L1D_BSISPI_CG_ON()
#define L1D_BSISPI_CG_OFF()
   #endif
#endif
#if IS_2G_RX_DIVERSITY_PATH_SUPPORT
void L1D_RF_init_RXD_flag(L1D_RXD_MODE l1d_rf_rxd_mode)
{
   l1d_rf.rxd_mode= l1d_rf_rxd_mode;
}
   #if IS_2G_RXD_ENHANCEMENT_SUPPORT
void L1D_RF_Set_RXD_flag(L1D_RXD_MODE win_rxd_mode,L1D_BFE_MUX_SETTING win_bfe_mux,bool is_rfic_gge_path)
   #else
void L1D_RF_Set_RXD_flag(L1D_RXD_MODE win_rxd_mode,L1D_BFE_MUX_SETTING win_bfe_mux)
   #endif
{  //follows L1D_MIPI_Set_RXD_flag
   switch (win_rxd_mode)
   {
      case RXD_MODE_LEGACY:            /*FSI/PKT/OBB*/
      case L1D_RXD_MODE_LEGACY_CROSS:  /*FSI/PKT*/
      #if IS_2G_RXD_ENHANCEMENT_SUPPORT
      case RXD_MODE_OBB:  /*RXD_MODE_OBB==RXD_MODE_DISABLE*/
      #endif
      {
         l1d_rf.rxd_mode = (win_bfe_mux==BFE_RXSWAP_PARALLEL) ? RXD_MODE_LEGACY/*P only*/ : L1D_RXD_MODE_LEGACY_CROSS /*D only*/;
         break;
      }
      case RXD_MODE_1RX_DESENSE:         
      case RXD_MODE_1RX_DESENSE_CROSS:
      {
         l1d_rf.rxd_mode = RXD_MODE_1RX_DESENSE/*P+D*/;
         break;
      }
      case RXD_MODE_RXD:
      case RXD_MODE_RXD_CROSS:
      {
         l1d_rf.rxd_mode = RXD_MODE_RXD/*P+D*/;
         break;
      }
      default:
      {
         ASSERT(0);
      }
   }
   {
      extern void L1D_RF_Trc_RXD_RF_RXDMode(int32 v1,int32 v2,int32 v3);      
      L1D_RF_Trc_RXD_RF_RXDMode(win_rxd_mode,win_bfe_mux,l1d_rf.rxd_mode);
   }
   #if IS_2G_RXD_ENHANCEMENT_SUPPORT
   /* assign  OBB flag after l1d_rf.rxd_mode assign */
   l1d_rf.is_rfic_gge_path = is_rfic_gge_path ;
   {
      extern void L1D_RF_Trc_RXD_RF_RXDMode(int32 v1,int32 v2,int32 v3);      
      L1D_RF_Trc_RXD_RF_RXDMode(win_rxd_mode,(int32)is_rfic_gge_path,(int32)l1d_rf.is_rfic_gge_path);
   }
   #endif
}
void L1D_RF_AGC_Power_Remapping(Power* bfe0power, Power* bfe1power, L1D_RXD_MODE win_rxd_mode,L1D_BFE_MUX_SETTING win_bfe_mux)
{
   Power bfe0power_true = *bfe0power;
   Power bfe1power_true = *bfe1power;
   switch (win_rxd_mode)
   {
      case RXD_MODE_LEGACY:            /*FSI/PKT/OBB*/
      case L1D_RXD_MODE_LEGACY_CROSS:  /*FSI/PKT*/
      #if IS_2G_RXD_ENHANCEMENT_SUPPORT
      case RXD_MODE_OBB:  /*RXD_MODE_OBB==RXD_MODE_DISABLE*/
      #endif
      {                                                    /* PARALLEL */                /* CROSS */
         *bfe0power = (win_bfe_mux==BFE_RXSWAP_PARALLEL) ? bfe0power_true/*P from P*/ : bfe0power_true/*P from P*/;
         *bfe1power = (win_bfe_mux==BFE_RXSWAP_PARALLEL) ? bfe0power_true/*D from P*/ : bfe0power_true/*D from P*/;
         break;
      }
      case RXD_MODE_1RX_DESENSE:
      case RXD_MODE_1RX_DESENSE_CROSS:
      {                                                    /* PARALLEL */                /* CROSS */
         *bfe0power = (win_bfe_mux==BFE_RXSWAP_PARALLEL) ? bfe0power_true/*P from P*/ : bfe1power_true/*P from D*/;
         *bfe1power = (win_bfe_mux==BFE_RXSWAP_PARALLEL) ? bfe1power_true/*D from D*/ : bfe0power_true/*D from P*/;
         break;
      }
      case RXD_MODE_RXD:
      case RXD_MODE_RXD_CROSS:
      {                                                    /* PARALLEL */                /* CROSS */
         *bfe0power = (win_bfe_mux==BFE_RXSWAP_PARALLEL) ? bfe0power_true/*P from P*/ : bfe1power_true/*P from D*/;
         *bfe1power = (win_bfe_mux==BFE_RXSWAP_PARALLEL) ? bfe1power_true/*D from D*/ : bfe0power_true/*D from P*/;
         break;
      }
      default:
      {
         ASSERT(0);
      }
   }
   #if IS_2G_RAS_CROSS_MODE_SUPPORT
   {
   }
   #else
   if(CHECK_RXD_MODE_CROSS_MASK(L1_RAS_Custom_NVRAM.RXD_MODE)) /* Cross mode only supported in force mode */
   {
   }
   else
   {
      if (CHECK_RXD_MODE_CROSS_MASK(win_rxd_mode))  /* In RAS mode, Cross RxD type is not expected; throw warning */
      {
          MODEM_WARNING_MESSAGE( 0, "[L1D] win_rxd_mode: %d, L1_RAS_Custom_NVRAM.RXD_MODE: %d",win_rxd_mode,L1_RAS_Custom_NVRAM.RXD_MODE );
      }
   }
   #endif
}
#endif
#if IS_2G_EXTERNAL_LNA_SUPPORT
static void L1D_RF_Init_ELNA_database( void )
{  
   MML1_FE_ELNA_ROUTE_E index;
   int band;
   kal_int32 mmrf_settling_time; 
   for (band= FrequencyBand850; band<=FrequencyBand1900; band++)
   {
   #if IS_2G_RX_DIVERSITY_PATH_SUPPORT
      index = (L1D_SDATA_PRX_LNA_SEL[band]>>IORX_ELNA_ROUTE) & 0x1F ;
   #else
      index = (SDATA_RX_LNA_SEL[band]>>IORX_ELNA_ROUTE) & 0x1F ;
   #endif
   
      MML1_FE_QUERY_ELNA_DATABASE(MML1_RF_2G, index, &l1d_rf.elna_database[band] );

      mmrf_settling_time=(US_TO_QB_ROUNDUP((l1d_rf.elna_database[band]->elna_config_data.elna_settling_time)>>MML1_MICROSECOND_TIMES_FACTOR));
      if (mmrf_settling_time>39)
      {
         l1d_rf.elna_settling_time[band]=(-1)*mmrf_settling_time;
      }
      else
      {
         l1d_rf.elna_settling_time[band]=(-1)*39; // At least 39Qb for elna . Otherwise, some Transient will in RX buffer in IBB test. 
      }
         
      if (l1d_rf.elna_settling_time[band]<=RX_START_TQ_TABLE[PR2BTQIDX])
      { //both are negative
         ASSERT(0);
      }
      if (l1d_rf.elna_settling_time[band]<=PM_1R7PM_TQ_TABLE[PR2BPMTQIDX])
      { //both are negative
         ASSERT(0);
      }
      if (l1d_rf.elna_settling_time[band]<=PM_IN_IDLE_TQ_TABLE[PR2BPMTQIDX])
      { //both are negative
         ASSERT(0);
      }
      if (l1d_rf.elna_settling_time[band]<=PM_TQ_TABLE[PR2BPMTQIDX])
      { //both are negative
         ASSERT(0);
      }
   }
   l1d_rf.xwin_elna_status = MML1_ELNA_MODE_NULL;

   #if IS_2G_RX_DIVERSITY_PATH_SUPPORT
   for (band= FrequencyBand850; band<=FrequencyBand1900; band++)
   {
      index = (L1D_SDATA_DRX_LNA_SEL[band]>>IORX_ELNA_ROUTE) & 0x1F ;
   
      MML1_FE_QUERY_ELNA_DATABASE(MML1_RF_2G, index, &l1d_rf.elna_database_DRX[band] );

      mmrf_settling_time=(US_TO_QB_ROUNDUP((l1d_rf.elna_database_DRX[band]->elna_config_data.elna_settling_time)>>MML1_MICROSECOND_TIMES_FACTOR));
      if (mmrf_settling_time>39)
      {
         l1d_rf.elna_settling_time_DRX[band]=(-1)*mmrf_settling_time;
      }
      else
      {
         l1d_rf.elna_settling_time_DRX[band]=(-1)*39; // At least 39Qb for elna . Otherwise, some Transient will in RX buffer in IBB test. 
      }
         
      if (l1d_rf.elna_settling_time_DRX[band]<=RX_START_TQ_TABLE[PR2BTQIDX])
      { //both are negative
         ASSERT(0);
      }
      if (l1d_rf.elna_settling_time_DRX[band]<=PM_1R7PM_TQ_TABLE[PR2BPMTQIDX])
      { //both are negative
         ASSERT(0);
      }
      if (l1d_rf.elna_settling_time_DRX[band]<=PM_IN_IDLE_TQ_TABLE[PR2BPMTQIDX])
      { //both are negative
         ASSERT(0);
      }
      if (l1d_rf.elna_settling_time_DRX[band]<=PM_TQ_TABLE[PR2BPMTQIDX])
      { //both are negative
         ASSERT(0);
      }
   }
   l1d_rf.xwin_elna_status_DRX = MML1_ELNA_MODE_NULL;
   #endif
}
#endif

static void L1D_RF_Init_BSI( void )
{  
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   /* Init will be taken caren by MMRF API */
   #else
   int i;
   unsigned short d16;
#if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292
   #if IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_COSIM_ON_L1SIM_SUPPORT || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   unsigned long  d32;
   #endif
   static unsigned short is_BSISPI_init = 0;  // 0: not init ; 1: init done
#endif

   L1D_INIT_BSI_DRIVING();                           /* init BSI driving strength */
   L1D_PowerOn_BSI_G();                              /* power on BSI_G */

#if IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION || IS_CHIP_MT6268H || IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292

   #if IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION || IS_CHIP_MT6268H || IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572
   L1D_BSI_RESET();                                  /* clear RESET_MODE (bit 8) */
   L1D_RF_SetBSISPI_Control();
   #else   // For MT6290 and latter which have BSISPI Module
   if( is_BSISPI_init==0 )
   {
   #if IS_SMP_ARCHITECTURE
      unsigned long _savedMask = kal_hrt_SaveAndSetIRQMask();   /* disable interrupt */
   #else
      unsigned long _savedMask = SaveAndSetIRQMask();   /* disable interrupt */
    #endif
      L1D_BSISPI_CG_ON();                               /* Enable Clock Gating */

      L1D_BSI_RESET();                                  /* clear RESET_MODE (bit 8) */
      L1D_RF_SetBSISPI_Control();

      L1D_BSISPI_CG_OFF();                              /* Disable Clock Gating */
   #if IS_SMP_ARCHITECTURE
      kal_hrt_RestoreIRQMask(_savedMask);
   #else
      RestoreIRQMask(_savedMask);                       /* enable interrupt */
   #endif
     is_BSISPI_init=1;
   }
   else
   {  /* If BSISPI won't be power off, L1D don't have to reset BSISPI related register during wakeup */  }
   #endif
   #if IS_CHIP_MT6755 || IS_CHIP_MT6292
   for(i=0; i<BSI_RFIC_DATA_COUNT; i++)
   {  
      HW_WRITE( BSI_Dn_CON(i), SCTRL_RESERVED );     /* set BSI ID = reserved for RFIC instance*/
   }  
   for(i=0; i<BSI_MIPI_DATA_COUNT; i++)
   {  
      HW_WRITE( BSI_MIPI_Dn_CON(i), SCTRL_RESERVED );     /* set BSI ID = reserved for MIPI instance*/      
   }
   #else
   for(i=0; i<BSI_DATA_COUNT; i++)
   {  HW_WRITE( BSI_Dn_CON(i), SCTRL_RESERVED );     /* set BSI ID = reserved */
   }
   #endif
   HW_WRITE( GSM_BSI_ACTUPT, BSI_ACTUPT_ALL );       /* Update all active buffer */
   HW_WRITE( BSI_CON,    SCTRL_MAIN );               /* Initialize BSI_CON */

   #if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292
   /* IDLE_CNT is in BSISPI_IC0_PARAM1_RFIC1 */
   #elif IS_CHIP_MT6250
   d16  = HW_READ( BSI_IDLE_CNT ) & (~(0xF));
   d16 |= IDLE_CNT;
   HW_WRITE( BSI_IDLE_CNT, d16 );
   #else
   d16  = HW_READ( BSI_IDLE_CNT );                   /* 2G,3G share the same registers*/
   d16 &= ~(0xF<<(4*(BSI_PORT_SELECT&BSI_PORT_SELECT_MASK)));
   d16 |= IDLE_CNT<<(4*(BSI_PORT_SELECT&BSI_PORT_SELECT_MASK));
   HW_WRITE( BSI_IDLE_CNT, d16 );
   #endif

   #if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   d32  = HW_READ( GSM_BSI_TXDATA_CON );
   d32 &= ~0x6701;
   d32 |=  0x2601;                                   /* RW_BIT[14]=0, DATA_BIT[13]=1, TXDATA_CS[10]=1, TXDATA_FORMAT[9:8]=2, ENABLE[0]=1 */
   HW_WRITE( GSM_BSI_TXDATA_CON, d32 );
   #else
   d16  = HW_READ( GSM_BSI_TXDATA_CON );
      #if IS_RF_MT6169 || IS_COSIM_ON_L1SIM_SUPPORT
   /* BSI_MODE is in BSISPI_PORT_PARAM_RFIC1 */
   d16 &= ~0x6001;
   d16 |=  0x2001;
      #elif IS_RF_MT6167 || IS_RF_MT6166 || IS_RF_MT6165
   d16 &= ~0x60C1;
   d16 |=  0x2081;                                   /* RW_BIT[14]=0, DATA_BIT[13]=1, BSI_MODE_A[7:6]=2, EN_A[0]=1 */
      #elif IS_RF_MT6280RF
   /* No need due to SOC */
      #elif IS_RF_MT6250RF
   d16 &= ~0x6301;
   d16 |=  0x2001;                                   /* RW_BIT[14]=0, DATA_BIT[13]=1, EN[0]=1 */
      #elif IS_RF_MT6162 || IS_RF_MT6163
   d16 |=  0x2041;                                   /* MT6276/MT6573/MT6575: RW_BIT[14]=0, DATA_BIT[13]=1, OH_MODE=1,         EN=1      */
                                                     /* MT6583_MD2:           RW_BIT[14]=0, DATA_BIT[13]=1, BSI_MODE_A[7:6]=1, EN_A[0]=1 */
      #else
   d16 &= ~0x0001;                                   /* EN=0 */
      #endif
   HW_WRITE( GSM_BSI_TXDATA_CON, d16 );
   #endif

   #if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
      #if IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165
   d32 = HW_READ( GSM_BSI_PORT_MODE );
   d32 &= ~0x0003;
   d32 |=  0x0002;
   HW_WRITE( GSM_BSI_PORT_MODE, d32 );
      #endif
   #endif

   #if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
      #if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292
   d32 = HW_READ( GSM_BSI_PORT_MODE );
   d32 &= ~0x00FF;
   d32 |=  0x00FC;
   HW_WRITE( GSM_BSI_PORT_MODE, d32 );
      #else
   d32 = HW_READ( GSM_BSI_PORT_MODE );
   d32 &= ~0x0003;
   d32 |=  0x0000;
   HW_WRITE( GSM_BSI_PORT_MODE, d32 );
      #endif
   #endif

   #if IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
      #if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292
   d32 = HW_READ( GSM_BSI_PORT_MODE );
   d32 &= ~0x00FF;
   d32 |=  0x00CC;
   HW_WRITE( GSM_BSI_PORT_MODE, d32 );
      #endif
   #endif

   #if IS_AFC_TRIGGER_BSI_SUPPORT
      #if IS_RF_MT6162 || IS_RF_MT6280RF
   HW_WRITE( AFC_BSI_SHIFT, AFC_SHIFT_PART );        /* AFC_CW[31:0] = ( (AFC_DATA[12:0]<<AFC_SHIFT_PART) & AFC_MASK_PART ) | AFC_VALUE_PART */
   HW_WRITE( AFC_MASK,      AFC_MASK_PART  );

   if( l1d_rf.is_crystal_vcxo )
      HW_WRITE( AFC_VALUE,     AFC_VALUE_PART_VCXO );
   else
      HW_WRITE( AFC_VALUE,     AFC_VALUE_PART_VCTCXO );

   HW_WRITE( AFC_BSI_CON,   AFC_CON_PART   );
      #endif
   #endif

   #if IS_TDMA_BSI_READBACK_SUPPORT
      #if IS_RF_MT6250RF || IS_RF_MT6280RF || (IS_CHIP_MT6583_MD1 && IS_RF_MT6167) || (IS_CHIP_MT6583_MD2 && IS_RF_MT6163) || IS_RF_MT6166 || IS_RF_MT6169 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   // Readback_BSI_Disable
   HW_BSI_RDBACK_EN( 0 );
   BSIread.event_timing = TQ_BSI_READ_TIME;
      #endif
   #endif

   #if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1
   /* bit[0]: 0=>single talk mode; 1=> dual talk mode */
   d32 = HW_READ( GSM_BSI_MODEM_TYPE ) & ~0x00000001;
      #if IS_DUAL_TALK_SUPPORT
   d32 |= 0x00000001;
      #endif
   HW_WRITE( GSM_BSI_MODEM_TYPE, d32 );
   #endif
#else
   d16 = HW_READ( BSI_CON );
   d16 &= (unsigned short)(~0x0100);                 /* clear BSI write buffer */
   HW_WRITE( BSI_CON , d16 );

   #if IS_CHIP_MT6268T || IS_CHIP_MT6268 || IS_EDGE_SAIC_CHIP_MT6256_AND_LATTER_VERSION || IS_CHIP_MT6252
   for(i=0; i<BSI_DATA_COUNT; i++)
   {  HW_WRITE( BSI_Dn_CON(i), SCTRL_RESERVED );     /* set BSI ID = reserved */
   }
   #elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   for(i=0; i<40; i++)
   {  HW_WRITE( BSI_Dn_CON(i), SCTRL_RESERVED );     /* set BSI ID = reserved */
   }
   for(i=0; i<BSI_DATA_COUNT-40; i++)
   {  HW_WRITE( BSI_Dn_CON_2(i), SCTRL_RESERVED );   /* set BSI ID = reserved */
   }
   #else
   for(i=0; i<BSI_DATA_COUNT; i++)
   {  HW_WRITE( BSI_Dn_CON(i), SCTRL_RESERVED );     /* set BSI ID = reserved */
   }
   #endif

   d16 |= (unsigned short)(0x0100);                  /* clear BSI active buffer */
   HW_WRITE( BSI_CON , d16 );

   #if IS_CHIP_MT6268T || IS_CHIP_MT6268 || IS_EDGE_SAIC_CHIP_MT6256_AND_LATTER_VERSION || IS_CHIP_MT6252
   for(i=0; i<BSI_DATA_COUNT; i++)
   {  HW_WRITE( BSI_Dn_CON(i), SCTRL_RESERVED );     /* set BSI ID = reserved */
   }
   #elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   for(i=0; i<40; i++)
   {  HW_WRITE( BSI_Dn_CON(i), SCTRL_RESERVED );     /* set BSI ID = reserved */
   }
   for(i=0; i<BSI_DATA_COUNT-40; i++)
   {  HW_WRITE( BSI_Dn_CON_2(i), SCTRL_RESERVED );   /* set BSI ID = reserved */
   }
   #else
   for(i=0; i<BSI_DATA_COUNT; i++)
   {  HW_WRITE( BSI_Dn_CON(i), SCTRL_RESERVED );     /* set BSI ID = reserved */
   }
   #endif

   HW_WRITE( BSI_CON, SCTRL_MAIN );                  /* Initialize BSI_CON */

   #if IS_CHIP_MT6252
   HW_WRITE( BSI_PAIR_NUM, 0x0020 );                 /* set BSI pair number */
   #elif IS_EDGE_SAIC_CHIP_MT6256_AND_LATTER_VERSION
   HW_WRITE( BSI_PAIR_NUM, BSI_DATA_COUNT );         /* set BSI pair number */
   #elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   HW_WRITE( BSI_PAIR_NUM, 0x002c );                 /* set BSI pair number */
   #endif

   #if IS_RF_MT6256RF || IS_RF_MT6251RF || IS_RF_MT6255RF
   // Readback_BSI_Disable
   HW_BSI_RDBACK_EN( 0 );
   BSIread.event_timing = TQ_BSI_READ_TIME;
   #endif

   L1D_RF_Set_SLEEP_SPI();
#endif
   (void)d16;
#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Init_BPI( void )
{
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
/* Init will be taken caren by MMRF API */
   #if IS_L1D_REPLACE_MIPIPORT3_WITH_BPI_ENABLE
   {
      kal_uint32 regv=0;
      regv = HW_READ(((APBADDR32)(0xC0005000+0x0380)));
      HW_WRITE(((APBADDR32)(0xC0005000+0x0380)),(regv&0xFFFFF00F)|((2<<8)|(2<<4)));
   }
   #endif
#else   
   L1D_PowerOn_BPI_G();                              /* power on BPI_G */
   #if IS_GSM_BPI_MASK_NEEDED
   HW_WRITE( BPI_MASK,    BPI_MASK_VALUE );  // set BPI MASK
   #elif IS_AST_B2S_SUPPORT
   HW_WRITE( BPI_AST,     0x0281         );  // turn on AST mode, set AFC shift and BPI shift
   HW_WRITE( BPI_AX_SEL,  GSM_ERR_DET_ID );  // set a chosen BPI pin to connect to RF_conflict pin
   HW_WRITE( BPI_AST_CON, 0x3A1          );  // set AFC/BPI data lengh

   HW_WRITE( BPI_MASK,    0x3FFFFFFF     );  // set BPI MASK
   HW_WRITE( BPI_VALUE,   0x0F000000     );  // set BPI Value

   HW_WRITE( AFC_MASK,    0x1FFF         );  // set AFC MASK
   HW_WRITE( AFC_VALUE,   0x0E100000     );  // set AFC Value
   #endif
#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_65NM_CHIP_BSI_BPI_PWN
void L1D_RF_Init_BSI_BPI( void )
{  L1D_RF_Init_BSI();
   L1D_RF_Init_BPI();
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif



/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
static void L1D_RF_Init_APC( void )
{  int  i;
   HW_WRITE(APC_CON, 0x0000|APC_CON_DAC_RATE_SEL<<3);
   for(i=0; i<FrequencyBandCount; i++)
   {  L1D_RF_InitRampTable( i );
   }

   #if IS_CHIP_MT6573
   HW_WRITE( WR_PATH0, HW_READ(WR_PATH0)|0x0800 );
   #elif IS_CHIP_MT6575
   HW_WRITE( WR_PATH0, HW_READ(WR_PATH0)|0x2000 );
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void L1D_RF_Init_AFC( void )
{
#if IS_AST_B2S_SUPPORT
/* do nothing */
#elif IS_AFC_EVENT_SUPPORT_CHIP
   #if IS_CHIP_MT6208
/*MT6208*/  HW_WRITE( IDN_SEL, 0x0003 );     /* to slove the AFC bug of H/W, don't let this register be zero */
   #endif

   HW_WRITE( AFC_CON, AFC_EVENT_TRIGGER );
   #if IS_CHIP_MT6205_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   if( l1d_rf.is_crystal_vcxo || AFC_ALWAYS_CHARGE )
/*MT6205~*/ HW_WRITE( AFC_PUPER, TQ_AFC_CHARGE_IN_IDLE_VCXO );
   else
/*MT6205~*/ HW_WRITE( AFC_PUPER, TQ_AFC_CHARGE_IN_IDLE_VCTCXO );
   #endif

   #if IS_CHIP_MT6573
   HW_WRITE( WR_PATH0, HW_READ(WR_PATH0)|0x0200 );
   #elif IS_CHIP_MT6575
   HW_WRITE( WR_PATH0, HW_READ(WR_PATH0)|0x0400 );
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Init_DLUL( void )
{
   HW_WRITE( TDMA_BDLCON , bdlcon_data  );
   HW_WRITE( TDMA_BULCON1, bulcon1_data );
   HW_WRITE( TDMA_BULCON2, bulcon2_data );
   HW_WRITE( TDMA_DTXCON , 0x0000       );
#if IS_TDMA_AD_DA_WINDOW_SUPPORT
   HW_WRITE( TDMA_BDLCON2, bdlcon2_data );
   HW_WRITE( TDMA_BULCON3, bulcon3_data );
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void L1D_RF_Init_BFE( void )
{  BFERXSET  bferxset;
   BFETXSET  bfetxset;

#if IS_GL1D_RXD_SUPPORT
   uint16 adcOn = 0;
   uint16 rxEnOn = 0;
#endif /* IS_GL1D_RXD_SUPPORT */
#if IS_CHIP_MT6270A
   HW_WRITE( AC_ODS_CON, 0x0001 );
#endif

#if IS_CHIP_MT6276_S00 // For MT6276E1, ADC MUX SW workaround
   {
      // Switch ADC MUX to UL Pads (2G mode), and ADC MUX will be controlled by 3G SW
      unsigned short d16 = HW_READ(BBRX_CON0);
      d16 &= ~0x0300;
      d16 |=  0x0100;
      HW_WRITE(BBRX_CON0, d16);
   }
#endif

#if IS_CHIP_MT6276_S01 // For MT6276E2, BBTX DAC SW workaround
   {
      unsigned short d16 = HW_READ(BBTX_CON5);
      d16 &= ~0x0030;
      d16 |=  0x0420; // switch to default 2G mode
      HW_WRITE(BBTX_CON5, d16);
   }
#elif IS_CHIP_MT6575_S00 // E1 leakage workaround for non-FDD usage
   #if !(defined __UMTS_FDD_MODE__)
   {
      HW_WRITE(BBTX_CON5, HW_READ(BBTX_CON5)&~0x0010);
   }
   #endif
#endif

// Set HW control mode for some BBTX/BBRX registers
#if IS_CHIP_MT6276_S00 || IS_CHIP_MT6573
   {
      unsigned short d16 = HW_READ(AUDIO_CON10);
      d16 &= ~0x7000;
      d16 |=  0x6000;
      HW_WRITE(AUDIO_CON10, d16);
   }
#elif IS_CHIP_MT6276 // MT6276E2
   {
      unsigned short d16 = HW_READ(BBRX_CON3);
      d16 |= 0x0002;
      HW_WRITE(BBRX_CON3, d16);
   }
#elif IS_CHIP_MT6575
   {
      unsigned short d16 = HW_READ(BBRX_CON3);
      d16 |= 0x0010;
      HW_WRITE(BBRX_CON3, d16);
   }
#endif

#if IS_CHIP_MT6573
   {  // Copy from UL1D_ABB_Init() for 2G only projects
      unsigned short d16 = HW_READ(WR_PATH0);
      d16 |= 0x8000;
      HW_WRITE(WR_PATH0, d16);
   }
#endif

#if IS_CHIP_MT6575
   { // turn on BBTX LDO common control enable
      HW_WRITE(BBTX_CON13, 0x1F);
   }
#endif

   /* for OH only */
   L1D_ABB_Set_ADCMUX_DLPad();
   /* BBRX settings for OT */
   L1D_ABB_Set_BBRX_CON();

#if IS_CHIP_MT6256 || IS_CHIP_MT6251
   /* setting for different analog chip: C63216 or D63216 */
   /*TBD*/
#endif

   HW_READ_BFERXSET( bferxset );

#if IS_DLIF_CHIP
   #if IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   bferxset.field.lpbk_en       = 0;
   bferxset.field.rx_rst_en     = 0;
   bferxset.field.rx_iq_swp     = bbrx_iq_swap;
   bferxset.field.rx_dc_notch_en= 1;
   bferxset.field.rx_rpt_en     = 0;

// RX_TIME_CON0
   bferxset.field.rx_dcoc_str_nb= RX_DCOC_STR_NB;
   bferxset.field.rx_null_str_nb= RX_NULL_STR_NB;
// RX_TIME_CON1
   bferxset.field.rx_ircmpn_sw  = RX_IRCMPN_SW;
// RX_TIME_CON2
   bferxset.field.rx_dcoc_str   = RX_DCOC_STR;
   bferxset.field.rx_null_str   = RX_NULL_STR;
      #if IS_GL1D_RXD_SUPPORT
// RX_CON0_BFE1
   bferxset.field.lpbk_en_bfe1       = 0;
   bferxset.field.rx_rst_en_bfe1     = 0;
   bferxset.field.rx_iq_swp_bfe1     = bbrx_iq_swap;
   bferxset.field.rx_dc_notch_en_bfe1= 1;
   bferxset.field.rx_rpt_en_bfe1     = 0;
      
// RX_TIME_CON0_BFE1
   bferxset.field.rx_dcoc_str_nb_bfe1= RX_DCOC_STR_NB;
   bferxset.field.rx_null_str_nb_bfe1= RX_NULL_STR_NB;
// RX_TIME_CON1_BFE1
   bferxset.field.rx_ircmpn_sw_bfe1  = RX_IRCMPN_SW;
// RX_TIME_CON2_BFE1
   bferxset.field.rx_dcoc_str_bfe1   = RX_DCOC_STR;
   bferxset.field.rx_null_str_bfe1   = RX_NULL_STR;
      #endif /* IS_GL1D_RXD_SUPPORT */
   #elif IS_CHIP_MT6256_S00 || IS_CHIP_MT6251
   /*BFE RX init*/
   bferxset.field.lpbk_en       = 0;
   bferxset.field.rx_rst_en     = 0;
   bferxset.field.rx_iq_swp     = bbrx_iq_swap;
   bferxset.field.rx_bypass     = 0;
   bferxset.field.rx_rpt_en     = 0;

   bferxset.field.itd_lock      = 0;
   bferxset.field.itd_frc       = 0;
   bferxset.field.itd_sel       = 0;
   bferxset.field.idma_sel      = 0;
   bferxset.field.itd_immdt     = 0;
   bferxset.field.thr_itd       = THR_ITD_DEFAULT;
// HW_WRITE( RX_CON3, RX_CON3_DEFAULT );

   bferxset.field.p2x_scale     = P2X_SCALE_DEFAULT;
// HW_WRITE( IREST_CON0, P2X_SCALE_DEFAULT );

   bferxset.field.bfe_sor       = 0;

   bferxset.field.fir3_mon_len  = 0;
   #else
   bferxset.field.lpbk_en       = 0;
   bferxset.field.rx_rst_en     = 0;
   bferxset.field.rx_iq_swp     = bbrx_iq_swap;
   bferxset.field.rx_dc_notch_en= 1;
   bferxset.field.rx_rpt_en     = 0;

// HW_WRITE( RX_TIME_CON0, RX_TIME_CON0_DEFAULT );
   bferxset.field.rx_dcoc_str   = RX_DCOC_STR;
   bferxset.field.rx_null_str   = RX_NULL_STR;
// HW_WRITE( RX_TIME_CON1, RX_TIME_CON1_DEFAULT );
   bferxset.field.rx_ircmpn_sw  = RX_IRCMPN_SW;
   #endif
#elif IS_BBTXRX_CHIP_DESIGN_VER_3
   bferxset.field.lpbk_en       = 0;
   bferxset.field.rx_rst_en     = 0;
   bferxset.field.rx_iq_swp     = bbrx_iq_swap;
   bferxset.field.rx_dc_notch_en= 0;
   bferxset.field.rx_rpt_en     = 0;

   bferxset.field.rx_dcoc_str   = RX_DCOC_STR;
   bferxset.field.rx_null_str   = RX_NULL_STR;
   bferxset.field.rx_ircmpn_sw  = RX_IRCMPN_SW;
#elif IS_BBTXRX_CHIP_DESIGN_VER_2
   bferxset.field.swap          = bbrx_iq_swap;
   bferxset.field.blpen         = 0;
   bferxset.field.ph_roen_w     = 0;
   bferxset.field.ph_roen_n     = 0;
   bferxset.field.igainsel      = 0;
   bferxset.field.pwrshftno     = 0;
   bferxset.field.firtpno       = 21;
   bferxset.field.RXID_PWR_OFF  = 17;
   bferxset.field.RXID_PWR_PER  = 135;
   bferxset.field.ST_A_NCOF_SEL = 0;
   bferxset.field.ST_B_NCOF_SEL = 2;
   bferxset.field.ST_B_WCOF_SEL = 3;
#else
   bferxset.field.swap          = bbrx_iq_swap;
   bferxset.field.gain          = bbrx_gain_double;
   bferxset.field.isel          = 0;
   bferxset.field.qsel          = 0;
   bferxset.field.calbias       = 0;
   bferxset.field.blpen         = 0;
   #if IS_CHIP_MT6225_AND_LATTER_VERSION || IS_SAIC_CHIP_MT6223_AND_LATTER_VERSION
   bferxset.field.ph_roen_w     = 0;
   bferxset.field.ph_roen_n     = 0;
   bferxset.field.igainsel      = 0;
   bferxset.field.pwrshftno     = 0;
   bferxset.field.firtpno       = 21;
   bferxset.field.dithdis       = 1; /*1: Turn off Dither figure*/
   bferxset.field.RXID_PWR_OFF  = 17;
   bferxset.field.RXID_PWR_PER  = 135;
   bferxset.field.ST_A_NCOF_SEL = 0;
   bferxset.field.ST_B_NCOF_SEL = 2;
   bferxset.field.ST_B_WCOF_SEL = 3;
   #elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   bferxset.field.ph_roen_w     = 0;
   bferxset.field.ph_roen_n     = 0;
   bferxset.field.igainsel      = 0;
   bferxset.field.pwrshftno     = 0;
   bferxset.field.firtpno       = 21;
   bferxset.field.RXID_PWR_OFF  = 17;
   bferxset.field.RXID_PWR_PER  = 135;
   bferxset.field.ST_A_NCOF_SEL = 0;
   bferxset.field.ST_B_NCOF_SEL = 2;
   bferxset.field.ST_B_WCOF_SEL = 3;
   #endif
#endif

   HW_WRITE_BFERXSET( bferxset );

   HW_READ_BFETXSET( bfetxset );

#if IS_CHIP_MT6252
   bfetxset.field.mdbyp         = 0;
   bfetxset.field.sgen          = 0;
   bfetxset.field.iqswap        = bbtx_iq_swap;
   bfetxset.field.phsel         = bbtx_phsel;
   bfetxset.field.offi          = bbtx_offset_i;
   bfetxset.field.offq          = bbtx_offset_q;
#elif IS_DLIF_CHIP
   #if IS_CHIP_MT6256_S00 || IS_CHIP_MT6251
   bfetxset.field.mdsel         = 0;
   bfetxset.field.all_10_gen    = 0;
   bfetxset.field.ramp_zero     = 0; /*8psk ramp*/
   bfetxset.field.bcien         = 0; /* disable cipher */

   bfetxset.field.tx_cnt_tgt    = TX_CNT_TGT_DEFAULT;
   bfetxset.field.pm_dly        = PM_DLY_DEFAULT;
// HW_WRITE( TX_CON1, TX_CON1_DEFAULT );

   bfetxset.field.pwr_sel0      = 0;
   bfetxset.field.pwr_sel1      = 0;
   bfetxset.field.pwr_sel2      = 0;
   bfetxset.field.pwr_sel3      = 0;
   bfetxset.field.tx_cnt_tgt_sw = TX_CNT_TGT_SW_DEFAULT;
   #elif IS_CHIP_MT6250
   bfetxset.field.all_10_gen    = 0;
   bfetxset.field.bcien         = 0; /* disable cipher */

   bfetxset.field.tx_cnt_tgt    = TX_CNT_TGT_DEFAULT;
   #else
   bfetxset.field.mdsel         = 0;
   bfetxset.field.all_10_gen    = 0;
   bfetxset.field.bcien         = 0; /* disable cipher */

   bfetxset.field.tx_cnt_tgt    = TX_CNT_TGT_DEFAULT;
   bfetxset.field.pm_dly        = PM_DLY_DEFAULT;
      #if IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   bfetxset.field.am_dly        = AM_DLY_DEFAULT;
      #endif
// HW_WRITE( TX_CON1, TX_CON1_DEFAULT );

   bfetxset.field.tx_cnt_tgt_sw = TX_CNT_TGT_SW_DEFAULT;

   bfetxset.field.pwr_sel0      = 0;
   bfetxset.field.pwr_sel1      = 0;
   bfetxset.field.pwr_sel2      = 0;
   bfetxset.field.pwr_sel3      = 0;
   #endif
// HW_WRITE( TX_PWR, TX_PWR_DEFAULT );
#elif IS_BBTXRX_CHIP_DESIGN_VER_3
   bfetxset.field.mdsel         = 0;
   bfetxset.field.all_10_gen    = 0;
   bfetxset.field.bcien         = 0; /* disable cipher */

   bfetxset.field.tx_cnt_tgt    = TX_CNT_TGT_DEFAULT;
   bfetxset.field.pm_dly        = PM_DLY_DEFAULT;
   bfetxset.field.am_dly        = AM_DLY_DEFAULT;

   bfetxset.field.tx_cnt_tgt_sw = TX_CNT_TGT_SW_DEFAULT;

   bfetxset.field.pwr_sel0      = 0;
   bfetxset.field.pwr_sel1      = 0;
   bfetxset.field.pwr_sel2      = 0;
   bfetxset.field.pwr_sel3      = 0;
#elif IS_BBTXRX_CHIP_DESIGN_VER_2
   bfetxset.field.iqswap        = bbtx_iq_swap;
   bfetxset.field.cmv           = bbtx_common_mode_voltage;
   bfetxset.field.offi          = bbtx_offset_i;
   bfetxset.field.offq          = bbtx_offset_q;
   bfetxset.field.mdbyp         = 0;
   bfetxset.field.sgen          = 0;
   bfetxset.field.gain_comp     = bbtx_gain_comp;
   bfetxset.field.iqgain_sel    = bbtx_iqgain_sel;
   bfetxset.field.phseli        = bbtx_phseli;
   bfetxset.field.phselq        = bbtx_phselq;
   bfetxset.field.rpsel         = bbtx_rpsel;
   bfetxset.field.inten         = bbtx_inten;
   bfetxset.field.sw_qbcnt      = bbtx_sw_qbcnt;
   bfetxset.field.epsk_dtap_sym = bbtx_epsk_dtap_sym;
#else
   bfetxset.field.trimi         = bbtx_trim_i;
   bfetxset.field.trimq         = bbtx_trim_q;
   bfetxset.field.offi          = bbtx_offset_i;
   bfetxset.field.offq          = bbtx_offset_q;
   bfetxset.field.calbias       = bbtx_calbias;
   bfetxset.field.iqswap        = bbtx_iq_swap;
   bfetxset.field.cmv           = bbtx_common_mode_voltage;
   bfetxset.field.gain          = bbtx_gain;
   bfetxset.field.calrcsel      = bbtx_calrcsel;
   #if IS_CHIP_MT6225_AND_LATTER_VERSION || IS_CHIP_MT6223 || IS_CHIP_MT6253
   bfetxset.field.phsel         = bbtx_phsel;
   bfetxset.field.mdbyp         = 0;
   bfetxset.field.sgen          = 0;
   bfetxset.field.dccoarsei     = bbtx_dccoarse_i;
   bfetxset.field.dccoarseq     = bbtx_dccoarse_q;
   #elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION && !IS_CHIP_MT6253
   bfetxset.field.phsel         = bbtx_phsel;
   bfetxset.field.rpsel         = bbtx_rpsel;
   bfetxset.field.inten         = bbtx_inten;
   bfetxset.field.mdbyp         = 0;
   bfetxset.field.sgen          = 0;
   bfetxset.field.sw_qbcnt      = bbtx_sw_qbcnt;
      #if IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION
   bfetxset.field.dccoarsei     = bbtx_dccoarse_i;
   bfetxset.field.dccoarseq     = bbtx_dccoarse_q;
      #endif
   #endif

   #if IS_CHIP_MT6227
   bfetxset.field.iqswap_onfly  = bbtx_iqswap_onfly;
   #endif
#endif

   HW_WRITE_BFETXSET( bfetxset );

#if IS_DLIF_CHIP || IS_DCR_IN_DLIF_CHIP
   // do not need to do this
#else
   HW_WRITE( BFE_CON, 0x0000 );  /* disable cipher */
#endif

/* setting for different analog chip: C63216 or D63216 */
#if IS_BBTXRX_CHIP_DESIGN_VER_2 || IS_DLIF_CHIP || IS_DCR_IN_DLIF_CHIP
   // do not need to do this
#elif IS_CHIP_MT6228 || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   {  unsigned short d16;
      d16 = HW_READ( ACIF_AC_HW_VER );
      if (d16 == 0x8C01)       //C63216
      {  d16 = HW_READ( AFC_AC_CON );
         d16 &= 0xFFF0;
         HW_WRITE( AFC_AC_CON, d16 );
      }
      else if (d16 == 0x8D00)  //D63216
      {  d16 = HW_READ( AFC_AC_CON );
         d16 &= 0xFFF0;
         HW_WRITE( AFC_AC_CON, d16 );
      }
   }
#endif
#if IS_GL1D_RXD_SUPPORT
   /* rxd_delay = EN_to_FS+BFE HW latency ceil value */
   adcOn = ((HW_READ(TDMA_BDLCON) & BIT_15TO8_MASK) >> RIGHT_SHIFT_BY_8);  /* ADC ON : TDMA_BDLCON[8:15]*/
   rxEnOn =((HW_READ(TDMA_BDLCON2) & BIT_15TO8_MASK) >> RIGHT_SHIFT_BY_8); /* RX_EN_ON : TDMA_BDLCON2[8:15]*/
   HW_WRITE( RX_RXD_DELAY, ((adcOn - rxEnOn) + RX_BFE_HW_LATENCY_CEIL));
#endif /* IS_GL1D_RXD_SUPPORT */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_NEW_L1D_ARCH_SUPPORT
/*
#define  L1D_RF_Set_Mixedsys_2G_APC_Select()
*/
void L1D_RF_Set_Mixedsys_2G_APC_Select( unsigned short apc_2g_sel )
{
   #if defined(__MTK_TARGET__)
      #if IS_CHIP_MT6293
   HW_WRITE( DIG_APC_CON0, apc_2g_sel );  /* Set apc_2g_sel path to 2G APC. */
      #elif IS_CHIP_MT6292
   HW_WRITE( DIG_CON4, apc_2g_sel );  /* Set apc_2g_sel path to 2G APC. */
      #else
   #error "need implement 2G APC select function"    
      #endif /* IS_CHIP_MT6755 */ 
   #endif /* __MTK_TARGET__ */  
}
#endif /* IS_NEW_L1D_ARCH_SUPPORT */ 
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Init_ABB( void )
{
#if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   /* ABB_MIXED_SYS driver has been moved to MMRF driver after TK6291. */
   L1D_RF_Set_Mixedsys_2G_APC_Select( 0 );
   #if IS_CHIP_MT6293
   L1D_RF_Info_Trace( 12190, HW_READ( DIG_APC_CON0 ), 0);
   #elif IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292
   L1D_RF_Info_Trace( 12190, HW_READ( DIG_CON4 ), 0);
   #else
   #error "Please or the chip option to read the correct register. "
   #endif /* IS_CHIP_MT6293 */
#elif IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1
   unsigned short d16;

   #if IS_ABB_HW_CALIBRATION_SUPPORT
   #else
   extern unsigned short lte_rc_cal_result[2];
      #if IS_DUAL_TALK_SUPPORT
   extern unsigned short td_rc_cal_result[2];
      #endif
   #endif
   
   // set single_dual_talk_type register
   d16  = HW_READ(DIG_CON0) & ~0x0003;
   #if IS_DUAL_TALK_SUPPORT
   d16 |= 0x0003;
   #endif
   HW_WRITE( DIG_CON0, d16 );

   // Set apc_hw_mask register according to talk type
   // Single talk     : 8'b0000_1111 (bit 3 and 7 for 2G)
   // Dual talk type 2: 8'b1001_0110
   // Dual talk type 3: 8'b1000_0111
   d16  = HW_READ(DIG_CON5) & ~0x0088;

   #if IS_CHIP_MT6752_MD1
      #if IS_RF_MT6169
   d16 |= 0x0008;
      #elif IS_RF_MT6165
   d16 |= 0x0080;
      #endif
   #elif IS_DUAL_TALK_SUPPORT
      #if defined(MT6595_EVB)
   d16 |= 0x0080;
      #else
   d16 |= 0x0008;
      #endif
   #else
   d16 |= 0x0008;
   #endif
   HW_WRITE( DIG_CON5, d16 );

   // set inv_apc_en_2g[0] to 0 if TX pwdb is 1 for enable.
   d16  = HW_READ(DIG_CON4) & ~0x0001;
   HW_WRITE( DIG_CON4, d16 );

   // give a default valus if the ABB HW calibration is off
   #if IS_ABB_HW_CALIBRATION_SUPPORT
   #else
   
   //MT6595+MT6169
   /* Write rccal_lte_sel_cap[13:8] and SW mode to DIG_CON95 */
   d16  = HW_READ(DIG_CON95) & (~0x3F80);
   d16 |= (( lte_rc_cal_result[1]<<8 )|( 0x0001<<7)) ;
   HW_WRITE( DIG_CON95, d16 );

   /* SW updates result in register (da_ltebbtx_i_csel_vk10[5:0], da_ltebbtx_q_csel_vk10[5:0]) */
   d16  = HW_READ(LTEBBTX_CONA) & (~0x3F3F);
   d16 |= (( lte_rc_cal_result[1] )&( 0x003F ));
   d16 |= (( lte_rc_cal_result[1]<<8 )&( 0x3F00 ));
   HW_WRITE( LTEBBTX_CONA, d16 );

   /* SW updates result in register (da_etdac_csel_vk10[5:0]) */
   d16  = HW_READ(ETDAC_CONA) & (~0x003F);
   d16 |= (( lte_rc_cal_result[1] )&( 0x003F ));
   HW_WRITE( ETDAC_CONA, d16 );

   /* SW updates result in register (da_lte_bbrx1_sdm_int_sel_cap[5:0]) */
   d16  = HW_READ(LTEBBRX_CON61) & (~0x003F);
   d16 |= (( lte_rc_cal_result[1] )&( 0x003F ));
   HW_WRITE( LTEBBRX_CON61, d16 );

   /* SW updates result in register (da_lte_bbrx1_sdm_int_sel_cap13[5:0]) */
   d16  = HW_READ(LTEBBRX_CON62) & (~0x003F);
   d16 |= (( lte_rc_cal_result[1] )&( 0x003F ));
   HW_WRITE( LTEBBRX_CON62, d16 );

   /* SW updates result in register (da_lte_bbrx2_sdm_int_sel_cap[5:0]) */
   d16  = HW_READ(LTEBBRX_CON71) & (~0x003F);
   d16 |= (( lte_rc_cal_result[1] )&( 0x003F ));
   HW_WRITE( LTEBBRX_CON71, d16 );

   /* SW updates result in register (da_lte_bbrx2_sdm_int_sel_cap13[5:0]) */
   d16  = HW_READ(LTEBBRX_CON72) & (~0x003F);
   d16 |= (( lte_rc_cal_result[1] )&( 0x003F ));
   HW_WRITE( LTEBBRX_CON72, d16 );

      #if IS_DUAL_TALK_SUPPORT
   //MT6595 DUAL_TALK
   /* Write rccal_ogt_sel_cap[13:8] and SW mode to DIG_CON9D */
   d16  = HW_READ(DIG_CON9D) & (~0x3F80);
   d16 |= (( td_rc_cal_result[1]<<8 )|( 0x0001<<7)) ;
   HW_WRITE( DIG_CON9D, d16 );
   
   /* SW updates result in register (da_tdbbtx_i_csel_vk10[5:0], da_tdbbtx_q_csel_vk10[5:0]) */
   d16  = HW_READ(TDBBTX_CONA) & (~0x3F3F);
   d16 |= (( td_rc_cal_result[1] )&( 0x003F ));
   d16 |= (( td_rc_cal_result[1]<<8 )&( 0x3F00 ));
   HW_WRITE( TDBBTX_CONA, d16 );

   /* SW updates result in register (da_td_bbrx_sdm_int_sel_cap_iq1[5:0]) */
   d16  = HW_READ(TDBBRX_CON41) & (~0x003F);
   d16 |= (( td_rc_cal_result[1] )&( 0x003F ));
   HW_WRITE( TDBBRX_CON41, d16 );

   /* SW updates result in register (da_td_bbrx_sdm_int_sel_cap13_iq1[5:0]) */
   d16  = HW_READ(TDBBRX_CON42) & (~0x003F);
   d16 |= (( td_rc_cal_result[1] )&( 0x003F ));
   HW_WRITE( TDBBRX_CON42, d16 );
      #endif
   #endif
#elif IS_CHIP_MT6752_MD2
   unsigned short d16;

   #if IS_ABB_HW_CALIBRATION_SUPPORT
   #else
   extern unsigned short td_rc_cal_result[2];
   #endif
   
   // set single_dual_talk_type register
   d16  = HW_READ(DIG_CON0) & ~0x0003;
   d16 |= 0x0003; /* md2 2g access abb2/RF2 */
   HW_WRITE( DIG_CON0, d16 );

   // Set apc_hw_mask register according to talk type
   // Single talk     : 8'b0000_1111 (bit 3 and 7 for 2G)
   // Dual talk type 2: 8'b1001_0110
   // Dual talk type 3: 8'b1000_0111
   d16  = HW_READ(DIG_CON5) & ~0x0088;
   #if IS_RF_MT6165
   d16 |= 0x0080;
   #endif
   HW_WRITE( DIG_CON5, d16 );

   // set inv_apc_en_2g[0] to 0 if TX pwdb is 1 for enable.
   d16  = HW_READ(DIG_CON4) & ~0x0001;
   HW_WRITE( DIG_CON4, d16 );

   // give a default valus if the ABB HW calibration is off
   #if IS_ABB_HW_CALIBRATION_SUPPORT
   #else
   //MT6752 MD2 + MT6165
   /* Write rccal_ogt_sel_cap[13:8] and SW mode to DIG_CON9D */
   d16  = HW_READ(DIG_CON9D) & (~0x3F80);
   d16 |= (( td_rc_cal_result[1]<<8 )|( 0x0001<<7)) ;
   HW_WRITE( DIG_CON9D, d16 );
   
   /* SW updates result in register (da_tdbbtx_i_csel_vk10[5:0], da_tdbbtx_q_csel_vk10[5:0]) */
   d16  = HW_READ(TDBBTX_CONA) & (~0x3F3F);
   d16 |= (( td_rc_cal_result[1] )&( 0x003F ));
   d16 |= (( td_rc_cal_result[1]<<8 )&( 0x3F00 ));
   HW_WRITE( TDBBTX_CONA, d16 );

   /* SW updates result in register (da_td_bbrx_sdm_int_sel_cap_iq1[5:0]) */
   d16  = HW_READ(TDBBRX_CON41) & (~0x003F);
   d16 |= (( td_rc_cal_result[1] )&( 0x003F ));
   HW_WRITE( TDBBRX_CON41, d16 );

   /* SW updates result in register (da_td_bbrx_sdm_int_sel_cap13_iq1[5:0]) */
   d16  = HW_READ(TDBBRX_CON42) & (~0x003F);
   d16 |= (( td_rc_cal_result[1] )&( 0x003F ));
   HW_WRITE( TDBBRX_CON42, d16 );
   #endif

#elif IS_CHIP_MT6290
   unsigned short d16;

   // set single_dual_talk_type register
   d16  = HW_READ(DIG_CON0) & ~0x0003;
   #if IS_DUAL_TALK_SUPPORT
   d16 |= 0x0003;
   #endif
   HW_WRITE( DIG_CON0, d16 );

   // Set apc_hw_mask register according to talk type
   // Single talk     : 8'b0000_1111 (bit 3 and 7 for 2G)
   // Dual talk type 2: 8'b1001_0110
   // Dual talk type 3: 8'b1000_0111
   d16  = HW_READ(DIG_CON5) & ~0x0088;
   #if IS_DUAL_TALK_SUPPORT
      #if defined(MT6290ME2_EVB)
   d16 |= 0x0080;
      #else
   d16 |= 0x0008;
      #endif
   #else
   d16 |= 0x0008;
   #endif
   HW_WRITE( DIG_CON5, d16 );

   // set inv_apc_en_2g[0] to 0 if TX pwdb is 1 for enable.
   d16  = HW_READ(DIG_CON4) & ~0x0001;
   HW_WRITE( DIG_CON4, d16 );

   // give a default valus if the ABB HW calibration is off
   #if IS_ABB_HW_CALIBRATION_SUPPORT
   #else
   //MT6290+MT6169
   extern unsigned short lte_rc_cal_result[9];
   /* SW updates result in register (da_ltebbtx_csel_vk10[5:0]) */
   d16  = HW_READ(LTEBBTX_CONA) & (~0x003F);
   d16 |= (( lte_rc_cal_result[2] )&( 0x003F ));
   HW_WRITE( LTEBBTX_CONA, d16 );

   /* SW updates result in register (da_ltebbtx_spare_vk10[6:1]) */
   d16  = HW_READ(LTEBBTX_CON4) & (~0x007E);
   d16 |= ((( lte_rc_cal_result[3] )&( 0x003F )) <<1 );
   HW_WRITE( LTEBBTX_CON4, d16 );

   /* SW updates result in register (da_etdac_csel_vk10[5:0]) */
   d16  = HW_READ(ETDAC_CONA) & (~0x003F);
   d16 |= (( lte_rc_cal_result[4] )&( 0x003F ));
   HW_WRITE( ETDAC_CONA, d16 );

   /* SW updates result in register (da_lte_bbrx_sdm_int_sel_cap_iq1[5:0]) */
   d16  = HW_READ(LTEBBRX_CON53) & (~0x003F);
   d16 |= (( lte_rc_cal_result[5] )&( 0x003F ));
   HW_WRITE( LTEBBRX_CON53, d16 );

   /* SW updates result in register (da_lte_bbrx_sdm_int_sel_cap13_iq1[5:0]) */
   d16  = HW_READ(LTEBBRX_CON54) & (~0x003F);
   d16 |= (( lte_rc_cal_result[6] )&( 0x003F ));
   HW_WRITE( LTEBBRX_CON54, d16 );

   /* SW updates result in register (da_lte_bbrx_sdm_int_sel_cap_iq2[5:0]) */
   d16  = HW_READ(LTEBBRX_CON58) & (~0x003F);
   d16 |= (( lte_rc_cal_result[7] )&( 0x003F ));
   HW_WRITE( LTEBBRX_CON58, d16 );

   /* SW updates result in register (da_lte_bbrx_sdm_int_sel_cap13_iq2[5:0]) */
   d16  = HW_READ(LTEBBRX_CON59) & (~0x003F);
   d16 |= (( lte_rc_cal_result[8] )&( 0x003F ));
   HW_WRITE( LTEBBRX_CON59, d16 );

      #if IS_DUAL_TALK_SUPPORT
   //MT6290 DUAL_TALK
   extern unsigned short td_rc_cal_result[5];

   /* SW updates result in register (da_tdbbtx_csel_vk10[5:0]) */
   d16  = HW_READ(TDBBTX_CON6) & (~0x003F);
   d16 |= (( td_rc_cal_result[2] )&( 0x003F ));
   HW_WRITE( TDBBTX_CON6, d16 );

   /* SW updates result in register (da_td_bbrx_sdm_int_sel_cap_iq1[5:0]) */
   d16  = HW_READ(TDBBRX_CON26) & (~0x003F);
   d16 |= (( td_rc_cal_result[3] )&( 0x003F ));
   HW_WRITE( TDBBRX_CON26, d16 );

   /* SW updates result in register (da_td_bbrx_sdm_int_sel_cap13_iq1[5:0]) */
   d16  = HW_READ(TDBBRX_CON27) & (~0x003F);
   d16 |= (( td_rc_cal_result[4] )&( 0x003F ));
   HW_WRITE( TDBBRX_CON27, d16 );
      #endif

   #endif
#elif IS_CHIP_MT6572
   unsigned short d16;
   extern unsigned short rc_cal_result[5];

   // set AD settling time to 66 us
   #if IS_CHIP_MT6582
   d16  = HW_READ(BBRX_CONB) & ~0xFFFF;
   d16 |= 0x103;
   HW_WRITE( BBRX_CONB, d16 );   // set RG_BBRX_QUAN_REGDMY_I[15:0] to 0x103

   d16  = HW_READ(BBRX_CONC) & ~0xFFFF;
   d16 |= 0x3;
   HW_WRITE( BBRX_CONC, d16 );   // set RG_BBRX_QUAN_REGDMY_Q[15:0] to 0x3

   d16  = HW_READ(BBRX_C_CON0) & ~0x00FF;
   d16 |= 0x0;
   HW_WRITE( BBRX_C_CON0, d16 ); // set RG_BBRX_SDM_INT_SEL_VCM[7:0] to 0x0
   #else
   d16  = HW_READ(BBRX_CONB) & ~0xFFFF;
   d16 |= 0x104;
   HW_WRITE( BBRX_CONB, d16 );   // set RG_BBRX_QUAN_REGDMY_I[15:0] to 0x104

   d16  = HW_READ(BBRX_CONC) & ~0xFFFF;
   d16 |= 0x4;
   HW_WRITE( BBRX_CONC, d16 );   // set RG_BBRX_QUAN_REGDMY_Q[15:0] to 0x4

   d16  = HW_READ(BBRX_C_CON0) & ~0x00FF;
   d16 |= 0xAA;
   HW_WRITE( BBRX_C_CON0, d16 ); // set RG_BBRX_SDM_INT_SEL_VCM[7:0] to 0xAA
   #endif

   d16  = HW_READ(BBRX_CON6) & ~0x0200;
   d16 |= 0x0200;
   HW_WRITE( BBRX_CON6, d16 );   // set RG_BBRX_QUAN_CAL_FASTMODE[9] to 0x1

   d16  = HW_READ(BBRX_CON9) & ~0x0C00;
   d16 |= 0x0400;
   HW_WRITE( BBRX_CON9, d16 );   // set RG_BBRX_SEQ_CFG[11:10] to 0x1

   // set HW parameter initial code
   HW_WRITE( DIG_CON3,  0x01A1 );
   HW_WRITE( DIG_CONA,  0x0000 );
   HW_WRITE( DIG_CONB,  0x0000 );
   HW_WRITE( DIG_CONC,  0x0000 );
   HW_WRITE( DIG_COND,  0x0010 );
   HW_WRITE( DIG_CONE,  0x0010 );

   #if IS_CHIP_MT6582
   #else
   // set the middle current, for MT6572 only
   HW_WRITE( BBRX_CON1, 0x590A );
   #endif

   // give a default valus if the ABB HW calibration is off
   #if IS_ABB_HW_CALIBRATION_SUPPORT
   #else
   // SW updates result in register (da_bbrx_sdm_int_rccal_sel_cap[5:0]) and switches path to SW mode, to set da_bbrx_sdm_int_rccal_sel_cap_sw[7]=1
   d16  = HW_READ(BBRX_C_CON2) & (~0x003F);
   d16 |= rc_cal_result[1];
   HW_WRITE( BBRX_C_CON2, d16 );

   d16  = HW_READ(DIG_CON14) | (0x0080);
   HW_WRITE( DIG_CON14, d16 );

   // SW updates result in register (da_bbrx_sdm_int_sel_cap[5:0])       and switches path to SW mode, to set da_bbrx_sdm_int_sel_cap_sw[7]=1
   d16  = HW_READ(BBRX_CONA) & (~0x003F);
   d16 |= rc_cal_result[2];
   HW_WRITE( BBRX_CONA, d16 );

   d16  = HW_READ(DIG_CON15) | (0x0080);
   HW_WRITE( DIG_CON15, d16 );

   // SW updates result in register (da_bbrx_sdm_int_sel_cap13[13:8])    and switches path to SW mode, to set da_bbrx_sdm_int_sel_cap13_sw[7]=1
   d16  = HW_READ(BBRX_CONA) & (~0x3F00);
   d16 |= (rc_cal_result[3]<<8);
   HW_WRITE( BBRX_CONA, d16 );

   d16  = HW_READ(DIG_CON16) | (0x0080);
   HW_WRITE( DIG_CON16, d16 );

   // SW updates result in register (da_bbtx_csel_vk10[5:0])             and switches path to SW mode, to set da_bbtx_csel_vk10_sw[7]=1
   d16  = HW_READ(BBTX_CON2) & (~0x003F);
   d16 |= rc_cal_result[4];
   HW_WRITE( BBTX_CON2, d16 );

   d16  = HW_READ(DIG_CON19) | (0x0080);
   HW_WRITE( DIG_CON19, d16 );
   #endif
#elif IS_CHIP_MT6583_MD1
   unsigned short d16, d16_1;
   unsigned long d32, d32_1;

   d16  = HW_READ(DIG_CON34) & ~0xFF00;
   d16 |= (101<<8);       // set bbrx_dac_fcb_dly[15:8] to 101 us
   HW_WRITE( DIG_CON34, d16 );

   d16  = (100<<8)|(105); // set bbrx_quan_cal_pd_rst_dly[15:8] to 100 us
                          // set bbrx_sdm_rstb_dly[7:0] to 105 us
   HW_WRITE( DIG_CON35, d16 );

   d16  = (106<<8)|(115); // set bbrx_sel_vin_dly[15:8] to 106 us
                          // set bbrx_ck_en_dly[7:0] to 115 us
   HW_WRITE( DIG_CON36, d16 );

   d16  = (116<<8)|(117); // set bbrx_cic_clk_en_dly[15:8] to 116 us
                          // set bbrx_cic_data_en_dly[7:0] to 117 us
   HW_WRITE( DIG_CON37, d16 );

   d16  = HW_READ(BBRX1_CON0) & ~0x00FF;
   HW_WRITE( BBRX1_CON0, d16 );

   d16  = HW_READ(BBRX1_1_CON1) & ~0x0300;
   d16 |= 0x0100;
   HW_WRITE( BBRX1_1_CON1, d16 );

   d16  = HW_READ(BBTX_CON1) & ~0x003F;
   HW_WRITE( BBTX_CON1, d16 );

   //Fine tune DAC current and quantizer calibration resistor
   d32 = (HW_READ(M_HW_RES3) & 0x18000000) >> 17;
   if( d32!=0 )
   {
      d16 = (HW_READ(BBRX1_1_CON0) & 0x0C00) + (unsigned short)d32;
      d16_1 = HW_READ(BBRX1_1_CON0) & ~0x0C00;
      HW_WRITE( BBRX1_1_CON0, (d16|d16_1) );

      d16 = (HW_READ(BBRX1_1_CON2) & 0x0C00) + (unsigned short)d32;
      d16_1 = HW_READ(BBRX1_1_CON2) & ~0x0C00;
      HW_WRITE( BBRX1_1_CON2, (d16|d16_1) );
   }

   d32_1 = HW_READ(M_HW_RES2);
   d32 = (d32_1 & 0x00600000) >> 11;
   if( d32!=0 )
   {
      d16 = (HW_READ(BBRX1_2_CON0) & 0x0C00) + (unsigned short)d32;
      d16_1 = HW_READ(BBRX1_2_CON0) & ~0x0C00;
      HW_WRITE( BBRX1_2_CON0, (d16|d16_1) );

      d16 = (HW_READ(BBRX1_2_CON2) & 0x0C00) + (unsigned short)d32;
      d16_1 = HW_READ(BBRX1_2_CON2) & ~0x0C00;
      HW_WRITE( BBRX1_2_CON2, (d16|d16_1) );
   }

   //Adjust quantizer options (DRG and DCMSHIFT)
   d32 = (d32_1 & 0x00000100) << 3;
   if( d32!=0 )
   {
      d16 = HW_READ(BBRX1_1_CON6) & ~0x0800;
      HW_WRITE( BBRX1_1_CON6, (d16|(unsigned short)d32) );

      d16 = HW_READ(BBRX1_2_CON6) & ~0x0800;
      HW_WRITE( BBRX1_2_CON6, (d16|(unsigned short)d32) );
   }

   d32 = (d32_1 & 0x00000200) >> 5;
   if( d32!=0 )
   {
      d16 = HW_READ(BBRX1_1_CON4) & ~0x0010;
      HW_WRITE( BBRX1_1_CON4, (d16|(unsigned short)d32) );

      d16 = HW_READ(BBRX1_2_CON4) & ~0x0010;
      HW_WRITE( BBRX1_2_CON4, (d16|(unsigned short)d32) );

      d32 = d32 >> 4;

      d16 = HW_READ(BBRX1_1_CON4) & ~0x0001;
      HW_WRITE( BBRX1_1_CON4, (d16|(unsigned short)d32) );

      d16 = HW_READ(BBRX1_2_CON4) & ~0x0001;
      HW_WRITE( BBRX1_2_CON4, (d16|(unsigned short)d32) );
   }

   d32 = (d32_1 & 0x00000400) >> 5;
   if( d32!=0 )
   {
      d16 = HW_READ(BBRX1_1_CON4) & ~0x0020;
      HW_WRITE( BBRX1_1_CON4, (d16|(unsigned short)d32) );

      d16 = HW_READ(BBRX1_2_CON4) & ~0x0020;
      HW_WRITE( BBRX1_2_CON4, (d16|(unsigned short)d32) );

      d32 = d32 >> 4;

      d16 = HW_READ(BBRX1_1_CON4) & ~0x0002;
      HW_WRITE( BBRX1_1_CON4, (d16|(unsigned short)d32) );

      d16 = HW_READ(BBRX1_2_CON4) & ~0x0002;
      HW_WRITE( BBRX1_2_CON4, (d16|(unsigned short)d32) );
   }

   //I/Q individual gain control trimming bits.
   d32 = (d32_1 & 0x000000C0) >> 4;
   if( d32!=0 )
   {
      d16 = HW_READ(BBTX_CON0) & ~0x000C;
      HW_WRITE( BBTX_CON0, (d16|(unsigned short)d32) );
   }

   d32 = (d32_1 & 0x00000030) >> 4;
   if( d32!=0 )
   {
      d16 = HW_READ(BBTX_CON0) & ~0x0003;
      HW_WRITE( BBTX_CON0, (d16|(unsigned short)d32) );
   }

   //If IS_ABB_HW_CALIBRATION_SUPPORT is off, we should reset the default values of RX RC calibration due to wrong default values of HW.
   #if IS_ABB_HW_CALIBRATION_SUPPORT
   #else

   d16 = ( ( HW_READ( BBRX1_CON2 )&(~0x003F) )|(0x0013) );
   HW_WRITE( BBRX1_CON2, d16 );
   d16 = HW_READ( DIG_CON14 )|(0x0080);
   HW_WRITE( DIG_CON14, d16 );

   d16 = ( ( HW_READ( BBRX1_1_CONA )&(~0x003F) )|(0x0013) );
   HW_WRITE( BBRX1_1_CONA, d16 );
   d16 = HW_READ( DIG_CON15 )|(0x0080);
   HW_WRITE( DIG_CON15, d16 );

   d16 = ( ( HW_READ( BBRX1_1_CONA )&(~0x3F00) )|(0x1300) );
   HW_WRITE( BBRX1_1_CONA, d16 );
   d16 = HW_READ( DIG_CON16 )|(0x0080);
   HW_WRITE( DIG_CON16, d16 );

   d16 = ( ( HW_READ( BBRX1_2_CONA )&(~0x003F) )|(0x0013) );
   HW_WRITE( BBRX1_2_CONA, d16 );
   d16 = HW_READ( DIG_CON17 )|(0x0080);
   HW_WRITE( DIG_CON17, d16 );

   d16 = ( ( HW_READ( BBRX1_2_CONA )&(~0x3F00) )|(0x1300) );
   HW_WRITE( BBRX1_2_CONA, d16 );
   d16 = HW_READ( DIG_CON18 )|(0x0080);
   HW_WRITE( DIG_CON18, d16 );

   #endif
#elif IS_CHIP_MT6583_MD2
   unsigned short d16, d16_1;
   unsigned long d32, d32_1;

   d16  = HW_READ(DIG2_CON34) & ~0xFF00;
   d16 |= (101<<8);       // set bbrx_dac_fcb_dly[15:8] to 101 us
   HW_WRITE( DIG2_CON34, d16 );

   d16  = (100<<8)|(105); // set bbrx_quan_cal_pd_rst_dly[15:8] to 100 us
                          // set bbrx_sdm_rstb_dly[7:0] to 105 us
   HW_WRITE( DIG2_CON35, d16 );

   d16  = (106<<8)|(115); // set bbrx_sel_vin_dly[15:8] to 106 us
                          // set bbrx_ck_en_dly[7:0] to 115 us
   HW_WRITE( DIG2_CON36, d16 );

   d16  = (116<<8)|(117); // set bbrx_cic_clk_en_dly[15:8] to 116 us
                          // set bbrx_cic_data_en_dly[7:0] to 117 us
   HW_WRITE( DIG2_CON37, d16 );

   d16  = HW_READ(BBRX2_CON0) & ~0x00FF;
   HW_WRITE( BBRX2_CON0, d16 );

   //Fine tune DAC current and quantizer calibration resistor
   d32 = (HW_READ(M_HW_RES3) & 0x18000000) >> 17;
   if( d32!=0 )
   {
      d16 = (HW_READ(BBRX2_2_CON0) & 0x0C00) + (unsigned short)d32;
      d16_1 = HW_READ(BBRX2_2_CON0) & ~0x0C00;
      HW_WRITE( BBRX2_2_CON0, (d16|d16_1) );
   }

   d32_1 = HW_READ(M_HW_RES2);
   d32 = (d32_1 & 0x00600000) >> 11;
   if( d32!=0 )
   {
      d16 = (HW_READ(BBRX2_2_CON2) & 0x0C00) + (unsigned short)d32;
      d16_1 = HW_READ(BBRX2_2_CON2) & ~0x0C00;
      HW_WRITE( BBRX2_2_CON2, (d16|d16_1) );
   }

   //Adjust quantizer options (DRG and DCMSHIFT)
   d32 = (d32_1 & 0x00000100) << 3;
   if( d32!=0 )
   {
      d16 = HW_READ(BBRX2_2_CON6) & ~0x0800;
      HW_WRITE( BBRX2_2_CON6, (d16|(unsigned short)d32) );
   }

   d32 = (d32_1 & 0x00000200) >> 5;
   if( d32!=0 )
   {
      d16 = HW_READ(BBRX2_2_CON4) & ~0x0010;
      HW_WRITE( BBRX2_2_CON4, (d16|(unsigned short)d32) );

      d32 = d32 >> 4;

      d16 = HW_READ(BBRX2_2_CON4) & ~0x0001;
      HW_WRITE( BBRX2_2_CON4, (d16|(unsigned short)d32) );
   }

   d32 = (d32_1 & 0x00000400) >> 5;
   if( d32!=0 )
   {
      d16 = HW_READ(BBRX2_2_CON4) & ~0x0020;
      HW_WRITE( BBRX2_2_CON4, (d16|(unsigned short)d32) );

      d32 = d32 >> 4;

      d16 = HW_READ(BBRX2_2_CON4) & ~0x0002;
      HW_WRITE( BBRX2_2_CON4, (d16|(unsigned short)d32) );
   }

   //Fine tune I/Q V2I resistor
   d32 = (d32_1 & 0x0000000F);
   if( d32!=0 )
   {
      d16 = HW_READ(BBTX2_CON10) & ~0x000F;
      HW_WRITE( BBTX2_CON10, (d16|(unsigned short)d32) );
   }

   //If IS_ABB_HW_CALIBRATION_SUPPORT is off, we should reset the default values of RX RC calibration due to wrong default values of HW.
   #if IS_ABB_HW_CALIBRATION_SUPPORT
   #else

   d16 = ( ( HW_READ( BBRX2_CON2 )&(~0x003F) )|(0x0013) );
   HW_WRITE( BBRX2_CON2, d16 );
   d16 = HW_READ( DIG2_CON14 )|(0x0080);
   HW_WRITE( DIG2_CON14, d16 );

   d16 = ( ( HW_READ( BBRX2_2_CONA )&(~0x003F) )|(0x0013) );
   HW_WRITE( BBRX2_2_CONA, d16 );
   d16 = HW_READ( DIG2_CON17 )|(0x0080);
   HW_WRITE( DIG2_CON17, d16 );

   d16 = ( ( HW_READ( BBRX2_2_CONA )&(~0x3F00) )|(0x1300) );
   HW_WRITE( BBRX2_2_CONA, d16 );
   d16 = HW_READ( DIG2_CON18 )|(0x0080);
   HW_WRITE( DIG2_CON18, d16 );

   #endif
#endif
}

void L1D_RF_Init_FIR( void )
{
#if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#else
#error "No Valid BB Chip was defined"
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION || IS_CHIP_MT6225_AND_LATTER_VERSION
void L1D_RF_init_FIR_SwitchNB( int wider )
{
#if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   (void)wider; // to avoid build warning
#else
#error "No Valid BB Chip was defined"
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   #if IS_DLIF_CHIP || IS_DCR_IN_DLIF_CHIP
void L1D_RF_Set_FB_FIR( void )
{
#if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#else
#error "No Valid BB Chip was defined"
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #else /* !IS_DLIF_CHIP && !IS_DCR_IN_DLIF_CHIP */
void L1D_RF_Set_FB_FIR( void )
{  int  i;
   const short *d16p;
   long  addr;

   addr = (long)RX_FIR_COEF(0);   //0020h
   d16p = WIDE_FB_FIR_COEF;
   for( i=*d16p++; i!=0; i-- )
   {  HW_WRITE( (APBADDR)addr, *d16p );
      addr += 4;
      d16p++;
   }

   addr = (long)RX_NBFIR_COEF(0); //0070h
   d16p = NARROW_FB_FIR_COEF;
   for(i=*d16p++; i!=0; i-- )
   {  HW_WRITE( (APBADDR)addr, *d16p );
      addr += 4;
      d16p++;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif
#endif

static void L1D_RF_Init_ChipOptimizeSetting( void )
{
#ifndef  L1_SIM
   #if IS_CHIP_MT6205A
/*MT6205A*/ {  unsigned short  d16;
/*MT6205A*/    d16 = HW_READ(RX_CON);
/*MT6205A*/    d16 &= ~0x001F;
/*MT6205A*/    d16 |= 0x0008;
/*MT6205A*/    HW_WRITE( RX_CON, d16 );
/*MT6205A*/    d16 = HW_READ(AFC_CALIBIAS);
/*MT6205A*/    d16 &= ~0x001F;
/*MT6205A*/    d16 |= 0x000F;
/*MT6205A*/    HW_WRITE( AFC_CALIBIAS, d16 );
/*MT6205A*/ }
   #endif

   #if IS_CHIP_MT6205B
/*MT6205B*/ {  unsigned short  d16;
/*MT6205B*/    d16 = HW_READ(RX_CON);
/*MT6205B*/    d16 &= ~0x001F;
/*MT6205B*/    d16 |= 0x0007;
/*MT6205B*/    HW_WRITE( RX_CON, d16 );
/*MT6205B*/    d16 = HW_READ(AFC_CALIBIAS);
/*MT6205B*/    d16 &= ~0x001F;
/*MT6205B*/    d16 |= 0x0006;
/*MT6205B*/    HW_WRITE( AFC_CALIBIAS, d16 );
/*MT6205B*/    d16 = HW_READ(TX_CFG);  /* appending bits enable, setting this bit to 1 In order to             */
/*MT6205B*/    d16 |= 0x0080;          /* let GMSK modulation only out DC(not sinewace) after Frame Enable on. */
/*MT6205B*/    HW_WRITE( TX_CFG, d16 );
/*MT6205B*/ }
   #endif

   #if IS_CHIP_MT6218B
      #if !IS_CHIP_MT6218B_AN2DN
         #if !IS_CHIP_MT6218B_EN
/*MT6218B_FN~*/ {  unsigned short  d16;
/*MT6218B_FN~*/    d16 = HW_READ(AFC_CALIBIAS);
/*MT6218B_FN~*/    d16 &= ~0x001F;
/*MT6218B_FN~*/    d16 |= 0x000F;
/*MT6218B_FN~*/    HW_WRITE( AFC_CALIBIAS, d16 );
/*MT6218B_FN~*/ }
         #endif
      #endif
   #endif

   #if IS_CHIP_MT6219
      #if !IS_CHIP_MT6219_AV
/*MT6219BV~*/ {  unsigned short  d16;
/*MT6219BV~*/    d16 = HW_READ(AFC_CALIBIAS);
/*MT6219BV~*/    d16 &= ~0x001F;
/*MT6219BV~*/    d16 |= 0x000F;
/*MT6219BV~*/    HW_WRITE( AFC_CALIBIAS, d16 );
/*MT6219BV~*/ }
      #endif
   #endif

   #if IS_CHIP_MT6229
/*MT6229~*/ {  unsigned short  d16;
/*MT6229~*/    d16 = HW_READ(AFC_CALIBIAS);
/*MT6229~*/    d16 &= ~0x001F;
/*MT6229~*/    d16 |= 0x000F;
/*MT6229~*/    HW_WRITE( AFC_CALIBIAS, d16 );
/*MT6229~*/ }
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Register_Report_Temperature( void )
{
#if IS_REPORT_RF_TEMPERATURE_SUPPORT
   if( KAL_TRUE == ccci_register_sysmsgsvc_callback(CCMSG_ID_SYSMSGSVC_L1_QUERY_RF_TEMPERATURE, L1D_RF_Report_Temperature_HISR) )
   {  /* Success */  }
   else
   {  /* Fail    */  }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Register_Update_VoltageInfo( void )
{
#if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
   if( KAL_TRUE == ccci_register_sysmsgsvc_callback(CCMSG_ID_SYSMSGSVC_L1_QUERY_AP_VOLTAGE, L1D_RF_Update_VoltageInfo_HISR) )
   {  /* Success */  }
   else
   {  /* Fail    */  }
#endif
}


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   
extern void L1D_RF_Custom_Table_Update_V2( void );
extern void  nvram_init_L1_RF_customInputData(void);
kal_bool nvram_special_service(void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/


    nvram_init_L1_RF_customInputData();
#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
   // L1D_CustomDynamicInit();
#endif
    L1D_RF_Custom_Table_Update_V2( );
    {
#ifdef __MTK_TARGET__
   #ifndef NVRAM_NOT_PRESENT
       extern void L1T_InitCalibrationData( void );
       L1T_InitCalibrationData();
   #endif
#endif
    }
#if (IS_2G_TAS_SUPPORT)
   {
      L1D_TAS_database2l1cpararmeterParser();
   #if IS_MIPI_SUPPORT
      L1D_TAS_database2MIPITableParser();
   #endif
      L1D_UpdateTASParameters( &L1_TAS_Custom_NVRAM );   
   }
#endif

#if IS_GL1D_RXD_SUPPORT
   {  
      L1D_UpdateRASParameters( &L1_RAS_Custom_NVRAM );   
   }
#endif

    return KAL_FALSE;

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_TK6291_BYPASS_BUILD_ERR_NVRAM
#else
nvram_read_callback_entry l1_callback[] =
{
    {nvram_special_service, NULL, MOD_NIL, 0xFF, KAL_FALSE},
};
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Init( void )
{

#if IS_TK6291_BYPASS_BUILD_ERR_NVRAM
#else
   //nvram_register_read_req(l1_callback);
#endif

   L1D_RF_Init_RFDeIsolation();
   L1D_RF_Init_Data();
   L1D_RF_Init_GPIO();
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   l1d_rf.mmrf_init_flags = 0;
   /* Init BSI data start index array to 0xFFFFFFFF to prevent CT2 to modify unallocated BSI data */
   L1D_RF_init_BSIData_Start_Idx();
   L1D_RF_init_BPIData_Start_Idx();
   L1D_RF_init_MIPIData_Start_Idx();
   #else
   L1D_RF_Init_BSI();
   L1D_RF_Init_BPI();
   #endif
   L1D_RF_Init_APC();
   L1D_RF_Init_AFC();
   L1D_RF_Init_DLUL();
   L1D_RF_Init_BFE();
   L1D_RF_Init_ABB();
   L1D_RF_Init_FIR();
   L1D_RF_Init_AUXADC();
   L1D_RF_Init_ChipOptimizeSetting();
   //L1D_RF_Init_SpecialCoef();

   L1D_DM_Wait_BSI_Switch_Init_Done();

   l1d_rf.is_init = 1;
   L1D_RF_PowerOn();
   l1d_rf.is_init = 0;
   l1d_rf.bb_tx_autocal = 0;

   L1D_RF_Register_Report_Temperature();
   L1D_RF_Register_Update_VoltageInfo();

#if IS_CHIP_MT6205B || IS_CHIP_MT6218A
   #if !IS_RF_AERO   /* apply bb_tx_autocal for All RF except AERO */
//    #if !IS_RF_AERO1PLUS
   l1d_rf.bb_tx_autocal = 1;
//    #endif
   #endif
#endif

#if IS_CHIP_MT6218B_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   l1d_rf.bb_tx_autocal = 1;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_Crystal_Type_Init( void )
{
   l1d_rf.is_crystal_vcxo    = (MML1_RF_Get_VCXO_Type(MML1_RF_2G) == MML1_RF_VCXO)? 1: 0;
   l1d_rf.is_crystal_on_pmic = (MML1_RF_Is_Crystal_On_PMIC_Enable(MML1_RF_2G))? 1: 0;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetFixGainEnable( unsigned char enable )
{
   /* For 74137 to pass 14.18.5 */
#if IS_RF_SKY74137
   RFSpecialCoef.rx.sky74137.fixgain_enable = enable;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetPathLossTable( int rf_band, void *table )
{  unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(AGC_PATHLOSS_TABLE[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   {  *dst++ = *src++;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_RX_POWER_OFFSET_SUPPORT
void L1D_RF_SetPathLoss_Offset_Table( int rf_band, void *table )
{  unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(AGCLNA_PATHLOSS_OFFSET[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   {  *dst++ = *src++;
   }
}
#endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void L1D_RF_SetLnaPathLossTable( sLNAPATHLOSS_L1CAL *table )
{  /* for the RX LNA middle/low modes use */
#if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   unsigned char *src, *dst;
   int  i, n;

   for( i=0; i<FrequencyBandCount; i++ )
   {
      src = (unsigned char*)table->lnaPathLoss[i];
      dst = (unsigned char*)(LNA_PATHLOSS_TABLE[i]);
      if( dst!=0 )
      {
         for( n=sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
         {  *dst++ = *src++;  }
      }
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_2G_RX_DIVERSITY_PATH_SUPPORT
void L1D_RF_SetPathLossTable_RXD( int rf_band, void *table )
{  unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(AGC_PATHLOSS_RXD_TABLE[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   {  *dst++ = *src++;
   }
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_2G_RX_DIVERSITY_PATH_SUPPORT
   #if IS_RX_POWER_OFFSET_SUPPORT
void L1D_RF_SetPathLoss_Offset_Table_RXD( int rf_band, void *table )
{
   unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(AGCLNA_PATHLOSS_RXD_OFFSET[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   {  *dst++ = *src++;
   }
}
   #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_2G_RX_DIVERSITY_PATH_SUPPORT
void L1D_RF_SetLnaPathLossTable_RXD( sLNAPATHLOSS_L1CAL *table )
{  /* for the RX LNA middle/low modes use */
   #if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   unsigned char *src, *dst;
   int  i, n;

   for( i=0; i<FrequencyBandCount; i++ )
   {
      src = (unsigned char*)table->lnaPathLoss[i];
      dst = (unsigned char*)(LNA_PATHLOSS_RXD_TABLE[i]);
      if( dst!=0 )
      {
         for( n=sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
         {  *dst++ = *src++;  }
      }
   }
   #endif
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_CheckFHC( char is_fhc )
{  /* for the RX LNA path loss calibration use */
#if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   l1d_rf2.is_fhc = is_fhc;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetRampApcLevel( int rf_band, int power_in_dBm, int apc_dac )
{
   sRAMPDATA *ramp;
   int        idx;

   ramp = RampData[rf_band];
   idx = (power_in_dBm-LOWEST_TX_POWER[rf_band])/2;
   ramp->power[idx] = apc_dac;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_EPSK_TX_SUPPORT
/*EPSK*/ void L1D_RF_SetRampApcLevelEPSK( int rf_band, int power_in_dBm, int apc_dac )
/*EPSK*/ {
/*EPSK*/    sRAMPDATA *ramp;
/*EPSK*/    int        idx;
/*EPSK*/
/*EPSK*/    ramp = RampData_EPSK[rf_band];
/*EPSK*/    idx = (power_in_dBm-LOWEST_TX_POWER[rf_band])/2;
/*EPSK*/    ramp->power[idx] = apc_dac;
/*EPSK*/ }
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_FHC_SUPPORT
/*
short L1D_RF_GetAFCDacTRxOffset( int rf_band )
{
   return (short)(RampData[rf_band]->arfcn_weight[ARFCN_SECTION_NUM-1].mid_level);
}
*/

void L1D_RF_GetAFCDacTRxOffset( short *afcdactrxoffset )
{
   int i;
   for (i=0; i<FrequencyBandCount; i++)
   {
      afcdactrxoffset[i] = (short)(RampData[i]->arfcn_weight[ARFCN_SECTION_NUM-1].mid_level);
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetAFCDacTRxOffset( short *afcdactrxoffset )
{
   int i;
   for (i=0; i<FrequencyBandCount; i++)
   {
      RampData[i]->arfcn_weight[ARFCN_SECTION_NUM-1].mid_level = (unsigned short)afcdactrxoffset[i];

      {
   #if IS_VCXO_LC_TRXOFFSET_COMPENSATE_SUPPORT
         extern  short AFC_TRx_Offset[5];
         extern  short AFC_Default_TRx_Offset[5];
   #else
         extern  short AFC_Dac_TRx_Offset[5];
      #if IS_RF_MT6162 || IS_RF_MT6163
         extern  short AFC_TRx_Offset[5];
         extern  short AFC_Default_TRx_Offset[5];
      #endif
   #endif

         if( l1d_rf.is_crystal_vcxo )
         {  AFC_Dac_TRx_Offset[i] = (short)(RampData[i]->arfcn_weight[ARFCN_SECTION_NUM-1].mid_level); /*VCXO*/
   #if IS_VCXO_LC_TRXOFFSET_COMPENSATE_SUPPORT
/*VCXO*/   AFC_TRx_Offset[i] = (short)(RampData[i]->arfcn_weight[ARFCN_SECTION_NUM-1].mid_level)+AFC_Default_TRx_Offset[i];
   #endif
         }
         else
         {  AFC_Dac_TRx_Offset[i] = 0; /*VCTCXO*/ }
      }
   #if IS_RF_MT6162 || IS_RF_MT6163
      {  /* for OthelloH, we set the TRx offset directly in the TX synthesizer in stead of AFC_DAC */
         AFC_Dac_TRx_Offset[i] = 0;
         AFC_TRx_Offset[i]     = (short)(RampData[i]->arfcn_weight[ARFCN_SECTION_NUM-1].mid_level+AFC_Default_TRx_Offset[i]);
      }
   #endif
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

void L1D_RF_GetPGAGain( unsigned short tx_power )
{
#if IS_FHC_SUPPORT && IS_EPSK_TX_GAIN_CONTROL_SUPPORT
   if( l1d_rf.fhc_proc==FHC_PROC_UTS_DAC )
   {
      if( (l1d_rf.tx_mod_type2>>l1d_rf.cur_slot) & 0x1 )  /*EPSK*/
      {  l1d_rf2.fhc_PGA_gain = tx_power;
      }
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetRampTable( int rf_band, void *table )
{  unsigned char *src, *dst;
   int  n;

   if( table != 0)
   {
      src = (unsigned char*)table;
      dst = (unsigned char*)(RampData[rf_band]);

      if(dst==0)  return;

      for( n=sizeof(sRAMPDATA); n>0; n--)
      {  *dst++ = *src++;
      }
   }

   L1D_RF_InitRampTable( rf_band );
#if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
   L1D_RF_TXPC_CL_BackUpSubband( rf_band, 0 );
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_EPSK_TX_SUPPORT
/*EPSK*/ void L1D_RF_SetRampTableEPSK( int rf_band, void *table )
/*EPSK*/ {  unsigned char *src, *dst;
/*EPSK*/    int  n;
/*EPSK*/
/*EPSK*/    if( table != 0)
/*EPSK*/    {
/*EPSK*/       src = (unsigned char*)table;
/*EPSK*/       dst = (unsigned char*)(RampData_EPSK[rf_band]);
/*EPSK*/
/*EPSK*/       if(dst==0)  return;
/*EPSK*/
/*EPSK*/       for( n=sizeof(sRAMPDATA); n>0; n--)
/*EPSK*/       {  *dst++ = *src++;
/*EPSK*/       }
/*EPSK*/    }
/*EPSK*/    L1D_RF_InitRampTableEPSK( rf_band );
   #if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
/*EPSK*/    L1D_RF_TXPC_CL_BackUpSubband( rf_band, 1 );
   #endif
/*EPSK*/ }
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #if IS_ORION_RF_SERIES
/*EPSK*/ static const unsigned short *PaGainTablePtr[] =
/*EPSK*/ {
/*EPSK*/    0,
/*EPSK*/    &(RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias[0].pa_gain),
/*EPSK*/    &(RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias[0].pa_gain),
/*EPSK*/    &(RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias[0].pa_gain),
/*EPSK*/    &(RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias[0].pa_gain)
/*EPSK*/ };
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif

/*EPSK*/ void L1D_RF_SetPAGainTable( int rf_band, void *table )
/*EPSK*/ {
   #if IS_ORION_RF_SERIES
/*EPSK*/    unsigned short *src;
/*EPSK*/    unsigned int i, dst;
/*EPSK*/
/*EPSK*/    src = (unsigned short*)table;
/*EPSK*/    dst = (unsigned int   )(PaGainTablePtr[rf_band]);
/*EPSK*/
/*EPSK*/    if(dst==0)  return;
/*EPSK*/
/*EPSK*/    for( i=0; i<16; i++, dst+=sizeof(pa_vbias) )
/*EPSK*/    {  *(unsigned short *)dst = *src++;
/*EPSK*/    }
   #endif
/*EPSK*/ }
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

void L1D_RF_InitRampTable( int rf_band )
{  int  n;
   sARFCN_SECTION *arfcn_weight_ptr;

   if( RampData[rf_band]==0 )  return;

   arfcn_weight_ptr = &(RampData[rf_band]->arfcn_weight[0]);
   for(n=ARFCN_SECTION_NUM-1; n>=0; n--)
   {  if(arfcn_weight_ptr->max_arfcn<0) break;
      arfcn_weight_ptr++;
   }
   weight_section_end_idx[rf_band] = (ARFCN_SECTION_NUM-1)-n-1;

   l1d_rf.apc_dc_offset = (RampData[rf_band]->lowest_power>>8)&0x0000FFFF;
   /*  RampData[rf_band]->lowest_power &= 0x000000FF;  */

   /*shine*/
   /* (short)RampData[rf_band]->arfcn_weight[ARFCN_SECTION_NUM-1].mid_level  */
   /* is stored the afc dac offset data for TX              */
   {  extern  short AFC_Dac_TRx_Offset[5];
      if( l1d_rf.is_crystal_vcxo )
      {  AFC_Dac_TRx_Offset[rf_band] = (short)(RampData[rf_band]->arfcn_weight[ARFCN_SECTION_NUM-1].mid_level);
#if IS_VCXO_LC_TRXOFFSET_COMPENSATE_SUPPORT
/*VCXO*/AFC_TRx_Offset[rf_band] = (short)(RampData[rf_band]->arfcn_weight[ARFCN_SECTION_NUM-1].mid_level)+AFC_Default_TRx_Offset[rf_band];
#endif
      }
      else
      {  AFC_Dac_TRx_Offset[rf_band] = 0; }
   }
#if IS_RF_MT6162 || IS_RF_MT6163
   {  /* for OthelloH, we set the TRx offset directly in the TX synthesizer in stead of AFC_DAC */
      AFC_Dac_TRx_Offset[rf_band] = 0;
      AFC_TRx_Offset[rf_band]     = (short)(RampData[rf_band]->arfcn_weight[ARFCN_SECTION_NUM-1].mid_level+AFC_Default_TRx_Offset[rf_band]);
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
void L1D_RF_InitRampTable_TPO( int rf_band )
{  /*Calculate TPO_weight_section_end_idx*/
   int  n;
   #if IS_2G_TAS_SUPPORT
   sARFCN_SECTION_Power_Offset*arfcn_weight_ptr;
   #else
   sARFCN_SECTION *arfcn_weight_ptr;
   #endif
   int  i;

   if( Tx_Power_Offset_GMSK[rf_band]==0 )  return;

   for(i=0;i<TPO_2G_TABLE_NUM;i++)
   {
      arfcn_weight_ptr = &(Tx_Power_Offset_GMSK[rf_band]->table[i].arfcn_weight[0]);
      for(n=ARFCN_SECTION_NUM-1; n>=0; n--)
      {
         if(arfcn_weight_ptr->max_arfcn<0) break;
         arfcn_weight_ptr++;
      }
      TPO_weight_section_end_idx[i][rf_band] = (ARFCN_SECTION_NUM-1)-n-1;
   }  
}
#endif //IS_TX_POWER_OFFSET_SUPPORT  || IS_SAR_TX_POWER_BACKOFF_SUPPORT
#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
void L1D_RF_InitRampTable_AdjustTPO( int rf_band )
{  /*Calculate TPO_weight_section_end_idx*/
   int  n;
   sARFCN_SECTION *arfcn_weight_ptr;
   int  i;

   if( Adjust_TPO_GMSK[rf_band]==0 )  return;

   for(i=0;i<NSFT_ADJUST_TPO_TABLE_NUM;i++)
   {
      arfcn_weight_ptr = &(Adjust_TPO_GMSK[rf_band]->table[i].arfcn_weight[0]);
      for(n=ARFCN_SECTION_NUM-1; n>=0; n--)
      {
         if(arfcn_weight_ptr->max_arfcn<0) break;
         arfcn_weight_ptr++;
      }
      adjust_tpo_weight_sec_sp_idx_GMSK[i][rf_band] = (ARFCN_SECTION_NUM-1)-n-1;
   }  
}
#endif //IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_EPSK_TX_SUPPORT
/*EPSK*/ void L1D_RF_InitRampTableEPSK( int rf_band )
/*EPSK*/ {
/*EPSK*/    int  n;
/*EPSK*/    sARFCN_SECTION *arfcn_weight_ptr;
/*EPSK*/
/*EPSK*/    if( RampData_EPSK[rf_band]==0 )  return;
/*EPSK*/
/*EPSK*/    arfcn_weight_ptr = &(RampData_EPSK[rf_band]->arfcn_weight[0]);
/*EPSK*/    for(n=ARFCN_SECTION_NUM-1; n>=0; n--)
/*EPSK*/    {  if(arfcn_weight_ptr->max_arfcn<0) break;
/*EPSK*/       arfcn_weight_ptr++;
/*EPSK*/    }
/*EPSK*/    weight_section_end_idx_EPSK[rf_band] = (ARFCN_SECTION_NUM-1)-n-1;
/*EPSK*/ }
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*EPSK*/ #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
/*EPSK*/ void L1D_RF_InitRampTableEPSK_TPO( int rf_band )
/*EPSK*/ {  /*Calculate TPO_weight_section_end_idx_EPSK*/
/*EPSK*/    int  n;
/*EPSK*/    #if IS_2G_TAS_SUPPORT
/*EPSK*/    sARFCN_SECTION_Power_Offset *arfcn_weight_ptr;
/*EPSK*/    #else
/*EPSK*/    sARFCN_SECTION *arfcn_weight_ptr;
/*EPSK*/    #endif
/*EPSK*/    int  i;
/*EPSK*/   
/*EPSK*/    if( Tx_Power_Offset_EPSK[rf_band]==0 )  return;
/*EPSK*/
/*EPSK*/    for(i=0;i<TPO_2G_TABLE_NUM;i++)
/*EPSK*/    {
/*EPSK*/       arfcn_weight_ptr = &(Tx_Power_Offset_EPSK[rf_band]->table[i].arfcn_weight[0]);
/*EPSK*/       for(n=ARFCN_SECTION_NUM-1; n>=0; n--)
/*EPSK*/       {  
/*EPSK*/          if(arfcn_weight_ptr->max_arfcn<0) break;
/*EPSK*/          arfcn_weight_ptr++;
/*EPSK*/       }
/*EPSK*/       TPO_weight_section_end_idx_EPSK[i][rf_band] = (ARFCN_SECTION_NUM-1)-n-1;
/*EPSK*/    }  
/*EPSK*/ }
/*EPSK*/ #endif //IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*EPSK*/ #if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
/*EPSK*/    #if IS_EPSK_ADJUST_TPO_SUPPORT
/*EPSK*/ void L1D_RF_InitRampTableEPSK_AdjustTPO( int rf_band )
/*EPSK*/ {  /*Calculate TPO_weight_section_end_idx_EPSK*/
/*EPSK*/    int  n;
/*EPSK*/    sARFCN_SECTION *arfcn_weight_ptr;
/*EPSK*/    int  i;
/*EPSK*/   
/*EPSK*/    if( Adjust_TPO_EPSK[rf_band]==0 )  return;
/*EPSK*/
/*EPSK*/    for(i=0;i<NSFT_ADJUST_TPO_TABLE_NUM;i++)
/*EPSK*/    {
/*EPSK*/       arfcn_weight_ptr = &(Adjust_TPO_EPSK[rf_band]->table[i].arfcn_weight[0]);
/*EPSK*/       for(n=ARFCN_SECTION_NUM-1; n>=0; n--)
/*EPSK*/       {  
/*EPSK*/          if(arfcn_weight_ptr->max_arfcn<0) break;
/*EPSK*/          arfcn_weight_ptr++;
/*EPSK*/       }
/*EPSK*/       adjust_tpo_weight_sec_sp_idx_EPSK[i][rf_band] = (ARFCN_SECTION_NUM-1)-n-1;
/*EPSK*/    }  
/*EPSK*/ }
/*EPSK*/    #endif//IS_EPSK_ADJUST_TPO_SUPPORT
/*EPSK*/ #endif //IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#endif

void L1D_RF_SetInterSlotRampTable( int rf_band, void *table )
{
#if IS_GPRS || IS_MULTISLOT_TX_SUPPORT
/*GPRS*/ unsigned char *src, *dst;
/*GPRS*/ int  n;
/*GPRS*/
/*GPRS*/ src = (unsigned char*)table;
/*GPRS*/ dst = (unsigned char*)(InterRampData[rf_band]);
/*GPRS*/
/*GPRS*/ if(dst==0)  return;
/*GPRS*/
/*GPRS*/ for( n=16; n>0; n--)
/*GPRS*/ {  *dst++ = *src++;
/*GPRS*/ }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_EPSK_TX_SUPPORT
void L1D_RF_EPSK_SetInterSlotRampTable( int rf_band, int _8G_mode, void *table )
{
   #if IS_GPRS
/*GPRS*/ unsigned char *src, *dst;
/*GPRS*/ int  n;
/*GPRS*/
/*GPRS*/ src = (unsigned char*)table;
/*GPRS*/ dst = (unsigned char*)(*(EPSK_InterRampData[rf_band])[_8G_mode]);
/*GPRS*/
/*GPRS*/ if(dst==0)  return;
/*GPRS*/
/*GPRS*/ for( n=16; n>0; n--)
/*GPRS*/ {   *dst++ = *src++;
/*GPRS*/ }
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_RF_TX_CALIBRATION_SUPPORT || IS_RF_RX_DCOC_SUPPORT
#define L1D_GCMACHINE_STOP()
#else
#define L1D_GCMACHINE_STOP() L1D_GCMachine_Stop()
#endif

void L1D_RF_SetBBTXParameters( void *table )
{  unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(&BBTXParameters);

   for( n=sizeof(sBBTXParameters); n>0; n--)
   {  *dst++ = *src++;
   }

   /*************************************************************
    Note That BBTXParameters is same with the settings
    on the BFE register only when the bbtx_isCalibrated == 0xBF.
    Else, the settings on the BFE register is set from the GCM.
    *************************************************************/
   if( BBTXParameters.bbtx_isCalibrated == 0xBF )
      L1D_GCMACHINE_STOP();
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetCrystalCap( int cap_no )
{
//#ifdef   AFC_SC
#if 1  // because it has no effect when use VCTCXO, so enable this activity
/*SC*/XO_CapID = cap_no;
   #if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   MML1_RF_SetCapID(XO_CapID);
   #else
/*SC*/L1D_RF_PowerOn();
   #endif
   L1D_RF_Set_SLEEP_SPI();
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetCrystalCap_Value( int cap_no )
{
//#ifdef   AFC_SC
#if 1  // because it has no effect when use VCTCXO, so enable this activity
/*SC*/XO_CapID = cap_no;
/*SC*///L1D_RF_PowerOn();
      L1D_RF_Set_SLEEP_SPI();
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetCrystalDac( short dacValue )
{
   l1d_rf.AFC_data = dacValue;
   L1D_RF_PowerOn();
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetCrystalDac_Value( short dacValue )
{
   l1d_rf.AFC_data = dacValue;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int  L1D_RF_GetCrystalCapRange( void )
{
   if( l1d_rf.is_crystal_vcxo )
      return CRYSTAL_CAPID_RANGE;
   else
      return 0;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int  L1D_RF_GetWCalMode( void )
{
#if IS_W_CANCELLATION_SUPPORT

   #if IS_CHIP_MT6251
   return ZERO_POINT_SIXTEEN_SUBBAND;
   #elif IS_CHIP_MT6256 || IS_CHIP_MT6255
   return FOUR_POINT_FOUR_SUBBAND;
   #else
   return ONE_POINT_SIXTEEN_SUBBAND;
   #endif

#else
   return ZERO_POINT_SIXTEEN_SUBBAND;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int L1D_GetTxPclCalVer( void )
{
   return TX_PCL_CAL_VER;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetCrystalAFCData( void *table )
{
#ifdef AFC_SC
/*SC*/ unsigned char *src, *dst;
/*SC*/ int  n;
/*SC*/
/*SC*/ src = (unsigned char*)table;
/*SC*/ dst = (unsigned char*)(XO_SlopeAreaData);
/*SC*/ for( n=sizeof(XO_SLOPE_AREA_DATA)*XO_SlopeArea_Num; n>0; n--)
/*SC*/ {  *dst++ = *src++;
/*SC*/ }
/*SC*/ {  void  XO_Initialize( void );
/*SC*/    XO_Initialize();
/*SC*/ }
#endif

#if IS_VCXO_LC_SUPPORT
/*LC*/ unsigned char *src, *dst;
/*LC*/ int  n;
/*LC*/
/*LC*/ src = (unsigned char*)table;
/*LC*/ dst = (unsigned char*)(XO_SlopeAreaData);
/*LC*/ for( n=sizeof(XO_SLOPE_AREA_DATA)*XO_SlopeArea_Num; n>0; n--)
/*LC*/    *dst++ = *src++;
/*LC*/
/*LC*/ /*Initialize AFC look-up table*/
/*LC*/ XO_LC_Initialize();
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

// Interface for determining the calibration of this item is capable/mandatory or not
unsigned short  L1D_RF_GetCalSets( FAC_CAL_ITEM item )
{
   unsigned short setting = FMC_NULL_SETTING;

   switch( item )
   {
/*CAP ID*/ // CAP ID calibration
/*CAP ID*/ case FMC_CAP_ID:
/*CAP ID*/ {
/*CAP ID*/    if( l1d_rf.is_crystal_vcxo )
/*CAP ID*/       setting = FMC_CAPABLE|FMC_MANDATORY;
/*CAP ID*/    else
/*CAP ID*/       setting = FMC_NULL_SETTING;          // TCVCXO (no need to do CAPID calibration)
/*CAP ID*/    break;
/*CAP ID*/ }

/*TRX OF*/ // TRX offset calibration
/*TRX OF*/ case FMC_TRX_OFFSET:
/*TRX OF*/ {
/*TRX OF*/ #if IS_RF_MT6139B || IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B || IS_RF_MT6139E || IS_RF_MT6140C || IS_RF_MT6140D || IS_RF_CMOSEDGE
/*TRX OF*/    setting = FMC_CAPABLE|FMC_MANDATORY;
/*TRX OF*/ #elif IS_RF_MTKSOC1 || IS_RF_MT6252RF
/*TRX OF*/    setting = FMC_NULL_SETTING;
/*TRX OF*/ #else
/*TRX OF*/    setting = FMC_CAPABLE;
/*TRX OF*/ #endif
/*TRX OF*/    break;
/*TRX OF*/ }

/*TX IQ*/  // TX IQ calibration
/*TX IQ*/  case FMC_TX_IQ:
/*TX IQ*/  {
/*TX IQ*/  #if IS_DLIF_CHIP || IS_RF_MT6162 || IS_RF_MT6163
/*TX IQ*/     setting = FMC_NULL_SETTING;
/*TX IQ*/  #elif IS_SOC_CHIP
/*TX IQ*/     setting = FMC_CAPABLE;
/*TX IQ*/  #else
/*TX IQ*/     setting = FMC_CAPABLE|FMC_MANDATORY;
/*TX IQ*/  #endif
/*TX IQ*/     break;
/*TX IQ*/  }

/*MT6546*/ // OE calibration
/*MT6546*/ case FMC_OE_ITEM:
/*MT6546*/ {
/*MT6546*/ #if IS_RF_AD6546
/*MT6546*/    setting = FMC_CAPABLE|FMC_MANDATORY;
/*MT6546*/ #endif
/*MT6546*/    break;
/*MT6546*/ }

/*W COEF*/ // W coefficient calibration
/*W COEF*/ case FMC_W_COEF:
/*W COEF*/ {
/*W COEF*/ #if IS_RF_MT6251RF || IS_RF_MT6256RF || IS_RF_MT6255RF || IS_RF_MT6250RF || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
/*W COEF*/    setting = FMC_CAPABLE|FMC_MANDATORY;
/*W COEF*/ #endif
/*W COEF*/    break;
/*W COEF*/ }

/*TX PC*/  // TX power control calibration
/*TX PC*/  case FMC_TX_PC:
/*TX PC*/  {
/*TX PC*/  #if IS_TX_POWER_CONTROL_SUPPORT
/*TX PC*/     if( closed_loop_txpc_type>0 || open_loop_txpc_type>0 )
/*TX PC*/     {  setting = FMC_CAPABLE|FMC_MANDATORY;  }
/*TX PC*/  #endif
/*TX PC*/     break;
/*TX PC*/  }

/*TX PC*/  // TX power control temperature calibration
/*TX PC*/  case FMC_TX_PC_TEMP:
/*TX PC*/  {
/*TX PC*/  #if IS_TX_POWER_CONTROL_SUPPORT
/*TX PC*/     if( temp_adc_cal_type>0 )
/*TX PC*/     {  setting = FMC_CAPABLE|FMC_MANDATORY;  }
/*TX PC*/  #endif
/*TX PC*/     break;
/*TX PC*/  }

/*BAT C*/  // Battery and Temperature compensation support
/*BAT C*/  case FMC_BAT_TEMP_COMP:
/*BAT C*/  {
/*BAT C*/  #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
/*BAT C*/        setting = FMC_CAPABLE|FMC_MANDATORY;
/*BAT C*/  #endif
/*BAT C*/     break;
/*BAT C*/  }

/*DTS EN*/ // FHC DTS gain mode combine calibration
/*DTS EN*/ case FMC_DTS_GAIN_CMB:
/*DTS EN*/ {
/*DTS EN*/ #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
/*DTS EN*/    if( is_lna_calibration == 1 )
/*DTS EN*/    {  setting = FMC_CAPABLE|FMC_MANDATORY;  }
/*DTS EN*/ #endif
/*DTS EN*/    break;
/*DTS EN*/ }

/*UTS EN*/ // FHC UTS TX band combine calibration
/*UTS EN*/ case FMC_UTS_BAND_CMB:
/*UTS EN*/ {
/*UTS EN*/    setting = FMC_CAPABLE|FMC_MANDATORY;
/*UTS EN*/    break;
/*UTS EN*/ }
   }
   return setting;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short L1D_RF_GetDSPSetPointLNAHighMode( void )
{
#if IS_RF_MT6177M
   return  -50; // in unit of dB
#elif IS_RF_MT6177L
   return  -50; // in unit of dB
#elif IS_RF_MT6179
   return  -50; // in unit of dB
#elif IS_RF_MT6280RF
   return  -55; // in unit of dB
#elif IS_RF_MT6169
   return  -54; // in unit of dB
#elif IS_RF_MT6176
   return  -53; // in unit of dB   
#elif IS_RF_MT6166
   return  -52; // in unit of dB
#else  // IS_RF_MT6165
   return  -35; // in unit of dB
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short L1D_RF_GetDSPSetPointLNAMidMode( void )
{
#if IS_RF_MT6177M
   return  -50; // in unit of dB
#elif IS_RF_MT6177L
   return  -47; // in unit of dB
#elif IS_RF_MT6179
   return  -50; // in unit of dB
#elif IS_RF_MT6280RF
   return  -55; // in unit of dB
#elif IS_RF_MT6169
   return  -54; // in unit of dB
#elif IS_RF_MT6176
   return  -53; // in unit of dB   
#elif IS_RF_MT6166
   return  -52; // in unit of dB
#else  // IS_RF_MT6165
   return  -35; // in unit of dB
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short L1D_RF_GetDSPSetPointLNALowMode( void )
{
#if IS_RF_MT6177M
   return  -50; // in unit of dB
#elif IS_RF_MT6177L
   return  -47; // in unit of dB
#elif IS_RF_MT6179
   return  -50; // in unit of dB
#elif IS_RF_MT6280RF || IS_RF_MT6166
   return  -55; // in unit of dB
#elif IS_RF_MT6169
   return  -54; // in unit of dB
#elif IS_RF_MT6176
   return  -53; // in unit of dB      
#else  // IS_RF_MT6165
   return  -35; // in unit of dB
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short L1D_RF_GetDSPSetPointLNASawlessMode( void )
{
#if IS_RF_MT6177M
   return  -50; // in unit of dB
#elif IS_RF_MT6177L
   return  -47; // in unit of dB
#elif IS_RF_MT6179 
   return  -50; // in unit of dB
#else  // IS_RF_MT6165
   return  -35; // in unit of dB   // if no sawless chip, CAL_RX_LNA_MODE_SESL flag is false, this function should not be used
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_2G_RX_DIVERSITY_PATH_SUPPORT
unsigned short L1D_RF_RXDBandSupportBitmap( void )
{
   unsigned short rf_band, bitmap_rxd=0;
   unsigned short result;
   for( rf_band=FrequencyBand850; rf_band<FrequencyBandCount; rf_band++ )
   {  
      result = (L1_RAS_Custom_NVRAM.RXD_ENABLE[rf_band]==L1D_RXD_ENABLE)?1:0;
      bitmap_rxd |= ( result<<(rf_band-1) );  
   } 
   return  (bitmap_rxd);  //bitmap for PCS|DCS|GSM900|GSM850
}
#endif

#if IS_2G_EXTERNAL_LNA_SUPPORT
unsigned short L1D_RF_GetSupportBitmap_ELNA( void )
{ /*Bitmap for eLNA, refer to MS_BAND_SUPPORT_GSM850 definition*/

   unsigned short rf_band, bitmap_elna=0;
   unsigned short result;
   #if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   for( rf_band=1; rf_band<5; rf_band++ )
   {  
      result = (L1D_RF_Check_If_ExternalLNA( rf_band )>=L1D_ELNA_ALYWAYS_ON)?1:0;
      bitmap_elna |= ( result<<rf_band );  
   } 
   return  bitmap_elna;
   #else
   return  0;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
unsigned short L1D_RF_GetBypassSupportBitmap_ELNA( void )
{ /*Bitmap for eLNA, refer to MS_BAND_SUPPORT_GSM850 definition*/

   unsigned short rf_band, bitmap_elna=0;
   unsigned short result;
      #if IS_RF_MT6177L || IS_RF_MT6177M
   for( rf_band=1; rf_band<5; rf_band++ )
   {  
      result = (L1D_RF_Check_If_ExternalLNA( rf_band )==L1D_ELNA_CAN_SWITCH)?1:0;
      bitmap_elna |= ( result<<rf_band );  
   } 
   return  bitmap_elna;
      #else
   return  0;
      #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short L1D_RF_GetELNABypass_Gain_Threshold( void )
{     
      #if IS_RF_MT6177M
  return  -28.4*(PWRRES); // in unit of 1/8dB
      #elif IS_RF_MT6177L
  return  -28.4*(PWRRES); // in unit of 1/8dB
      #else
         #error "For EXTERNAL_LNA_BYPASS_SUPPORT, no define in L1D_RF_GetELNABypass_Gain_Threshold"
      #endif
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short L1D_RF_GetDSPSetPointELNABypasssLowMode_MaxPin( void )
{     
      #if IS_RF_MT6177M
   return  -59; // in unit of dB
      #elif IS_RF_MT6177L
   return  -59; // in unit of dB
      #else
         #error "For EXTERNAL_LNA_BYPASS_SUPPORT, no define in L1D_RF_GetDSPSetPointELNABypasssLowMode_MaxPin"
      #endif
}

   #endif /* IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #if IS_2G_EXTERNAL_LNA_HIGH_SENSITIVITY_SUPPORT
   
signed short L1D_RF_GetDSPSetPointELNAHighMode_Sensitivity( void )
{
      #if IS_RF_MT6177M
   return  -46; // in unit of dB
      #elif IS_RF_MT6177L
   return  -46; // in unit of dB
      #else
         #error "For EXTERNAL_LNA_HIGH_SENSITIVITY_SUPPORT, no define in L1D_RF_GetDSPSetPointELNAHighMode_Sensitivity"
      #endif
}

   #endif /* IS_2G_EXTERNAL_LNA_HIGH_SENSITIVITY_SUPPORT */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


signed short L1D_RF_GetDSPSetPointLNAHighMode_ELNA( void )
{
   #if IS_RF_MT6177M
   return  -53; // in unit of dB
   #elif IS_RF_MT6177L
   return  -53; // in unit of dB
   #elif IS_RF_MT6179 
   return  -50; // in unit of dB
   #elif IS_RF_MT6176
   return  -53; // in unit of dB
   #else
   return  -53; // in unit of dB
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short L1D_RF_GetDSPSetPointLNAMidMode_ELNA( void )
{
   #if IS_RF_MT6177M
   return  -54; // in unit of dB
   #elif IS_RF_MT6177L
   return  -51; // in unit of dB
   #elif IS_RF_MT6179 
   return  -50; // in unit of dB
   #elif IS_RF_MT6176
   return  -53; // in unit of dB
   #else
   return  -53; // in unit of dB
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short L1D_RF_GetDSPSetPointLNALowMode_ELNA( void )
{/*DL power = -36 dBm for eLNA case, 6dB backoff for RX IP1dB */
   #if IS_RF_MT6177M
   return  -56; // in unit of dB
   #elif IS_RF_MT6177L
   return  -50; // in unit of dB
   #elif IS_RF_MT6179 
   return  -56; // in unit of dB
   #elif IS_RF_MT6176
   return  -59; // in unit of dB
   #else
   return  -53; // in unit of dB
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short L1D_RF_GetDSPSetPointWC_ELNA( void )
{/*W-coefficient calibration DL power = -36 dBm for eLNA case, RX gain setting align low gain mode calibration*/
   #if IS_RF_MT6177M
   return  -56; // in unit of dB
   #elif IS_RF_MT6177L
   return  -56; // in unit of dB
   #elif IS_RF_MT6179
   return  -56; // in unit of dB
   #elif IS_RF_MT6176
   return  -59; // in unit of dB
   #else
   return  -37; // in unit of dB
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
signed short L1D_RF_GetDSPSetPointLNASawlessMode_ELNA( void )
{
      #if IS_RF_MT6177M
   return  -50; // in unit of dB, TBD
      #elif IS_RF_MT6177L
   return  -51; // in unit of dB, TBD   
      #elif IS_RF_MT6179
   return  -50; // in unit of dB, TBD   
      #else
   return  -53; // in unit of dB, TBD
      #endif
}
   #endif
#endif /*IS_2G_EXTERNAL_LNA_SUPPORT*/
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetRFSpecialCoef( void *table )
{
   unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(&RFSpecialCoef);
   for( n=sizeof(sRFSpecialCoef); n>0; n--)
   {  *dst++ = *src++;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_2G_RX_DIVERSITY_PATH_SUPPORT 
void L1D_RF_SetWCoef_RXD( void *table )
{
   unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(&RFSpecial_wcoef_rxd);
   for( n=sizeof(l1cal_wcoef_T); n>0; n--)
   {  *dst++ = *src++;
   }
}

void L1D_RF_SetRASParameters( void *table )
{
   kal_mem_cpy(&L1_RAS_Custom_NVRAM, (L1D_CUSTOM_RAS_NVRAM_T*)table , sizeof(L1D_CUSTOM_RAS_NVRAM_T) );
   
   /*Sync the update to GL1C*/
   L1D_UpdateRASParameters( &L1_RAS_Custom_NVRAM );
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_GetID( void )
{
#if IS_RF_BRIGHT2
    return RF_ID_BRIGHT2;
#endif

#if IS_RF_BRIGHT4
    return RF_ID_BRIGHT4;
#endif

#if IS_RF_BRIGHT5P
    return RF_ID_BRIGHT5P;
#endif

#if IS_RF_AERO
    return RF_ID_AERO;
#endif

#if IS_RF_AERO1PLUS
    return RF_ID_AERO1PLUS;
#endif

#if IS_RF_POLARIS1
    return RF_ID_POLARIS1;
#endif

#if IS_RF_SKY74045
    return RF_ID_SKY74045;
#endif

#if IS_RF_SKY74117
    return RF_ID_SKY74117;
#endif

#if IS_RF_SKY74400
    return RF_ID_SKY74400;
#endif

#if IS_RF_MT6119C
    return RF_ID_MT6119C;
#endif

#if IS_RF_MT6129D
    return RF_ID_MT6129D;
#endif

#if IS_RF_MT6139B
    return RF_ID_MT6139B;
#endif

#if IS_RF_MT6139C
    return RF_ID_MT6139C;
#endif

#if IS_RF_MT6139E
    return RF_ID_MT6139E;
#endif
#if IS_RF_MT6140A
    return RF_ID_MT6140A;
#endif

#if IS_RF_MT6140B
    return RF_ID_MT6140B;
#endif

#if IS_RF_MT6140C
    return RF_ID_MT6140C;
#endif

#if IS_RF_MT6140D
    return RF_ID_MT6140D;
#endif

#if IS_RF_CMOSEDGE
    return RF_ID_CMOSEDGE;
#endif

#if IS_RF_MTKSOC1 || IS_RF_MTKSOC1T
    return RF_ID_MTKSOC1;
#endif

#if IS_RF_MT6252RF
    return RF_ID_MT6252RF;
#endif

#if IS_RF_MT6256RF
    return RF_ID_MT6256RF;
#endif

#if IS_RF_MT6255RF
    return RF_ID_MT6255RF;
#endif

#if IS_RF_MT6250RF
    return RF_ID_MT6250RF;
#endif

#if IS_RF_MT6251RF
    return RF_ID_MT6251RF;
#endif

#if IS_RF_AERO2
    return RF_ID_AERO2;
#endif

#if IS_RF_SKY74137
    return RF_ID_SKY74137;
#endif

#if IS_RF_GRF6201
    return RF_ID_GRF6201;
#endif

#if IS_RF_IRFS3001
    return RF_ID_AERO2;
#endif

#if IS_RF_AD6548
    return RF_ID_AD6548;
#endif

#if IS_RF_AD6546
    return RF_ID_AD6546;
#endif

#if IS_RF_MT6162
    return RF_ID_MT6162;
#endif

#if IS_RF_MT6163
    return RF_ID_MT6163;
#endif

#if IS_RF_MT6280RF
    return RF_ID_MT6280RF;
#endif

#if IS_RF_MT6169
    return RF_ID_MT6169;
#endif

#if IS_RF_MT6166
    return RF_ID_MT6166;
#endif

#if IS_RF_MT6165
    return RF_ID_MT6165;
#endif

#if IS_RF_MT6176
    return RF_ID_MT6176;
#endif

#if IS_RF_MT6179
    return RF_ID_MT6179;
#endif

#if IS_RF_MT6177L
    return RF_ID_MT6177L;
#endif

#if IS_RF_MT6177M
    return RF_ID_MT6177M;
#endif


}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned short L1D_RF_EnableLowPCL_Subband_Cal( void )
{
#if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   return 1;
#else
   return 0;
#endif
}

unsigned short L1D_RF_GetLowPCL_Subband_Cal( void )
{
#if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   return LOW_PCL_SUBBAND_CAL_LB|(LOW_PCL_SUBBAND_CAL_HB<<7);   // LB PCL = 17 (9dBm), HB PCL = 10 (10dBm), denpend on PGA-A/B switch dBm
#else
   return 19|(15<<7);                                           // LB PCL = 19 (5dBm), HB = 15 (0dBm)
#endif
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetImmediateBSI( unsigned long bsidata )
{
#if IS_COSIM_ON_L1SIM_SUPPORT
/* use the MT6167's setting here, but need to check it if new chip is implemented */
                IMM_MODE_BEGIN( IMMMASK_ALL );
#if IS_CHIP_MT6292 || IS_CHIP_MT6293 // Putting the port id as 0 for test purpose in case of ImmediateSend
                IMM_SEND_BSI( SCTRL_IMOD(0,0), bsidata);
   #else
                IMM_SEND_BSI( SCTRL_IMOD(0,30), bsidata);
   #endif
                IMM_MODE_END(  );
#else
   #if IS_RF_MT6139B
 /*MT6139B*/     IMM_MODE_BEGIN( IMMMASK_ALL );
 /*MT6139B*/     IMM_SEND_BSI( SCTRL_IMOD(0,25), bsidata );
 /*MT6139B*/     IMM_MODE_END(  );
   #endif
   #if IS_RF_MT6139C || IS_RF_MT6139E || IS_RF_MT6140A || IS_RF_MT6140B || IS_RF_MT6140C || IS_RF_MT6140D || IS_RF_CMOSEDGE || IS_RF_MTKSOC1 || IS_RF_MTKSOC1T
 /*MT6139C&MT6140A*/    IMM_MODE_BEGIN( IMMMASK_ALL );
 /*MT6139C&MT6140A*/    IMM_SEND_BSI( SCTRL_IMOD(0,26), bsidata );
 /*MT6139C&MT6140A*/    IMM_MODE_END(  );
   #endif
   #if IS_RF_MT6252RF
 /*MT6252RF*/    IMM_MODE_BEGIN( IMMMASK_ALL );
 /*MT6252RF*/    IMM_SEND_BSI( SCTRL_IMOD(0,29), bsidata );
 /*MT6252RF*/    IMM_MODE_END(  );
   #endif
   #if IS_RF_MT6256RF || IS_RF_MT6251RF || IS_RF_MT6255RF
 /*MT6256RF*/    IMM_MODE_BEGIN( IMMMASK_ALL );
 /*MT6256RF*/    IMM_SEND_BSI( SCTRL_IMOD(0,(1+8+20)), bsidata );
 /*MT6256RF*/    IMM_MODE_END();
   #endif
   #if IS_RF_MT6250RF
 /*MT6250RF*/    IMM_MODE_BEGIN( IMMMASK_ALL );
 /*MT6250RF*/    IMM_SEND_BSI( SCTRL_IMOD(0,30), bsidata );
 /*MT6250RF*/    IMM_MODE_END();
   #endif
   #if IS_RF_SKY74117
 /*SKY74117*/    void L1D_GPIO_WriteIO(char, char);
 /*SKY74117*/    #ifdef __CUST_NEW__
 /*SKY74117*/    extern const char gpio_rf_control1_pin;
 /*SKY74117*/    L1D_GPIO_WriteIO(1,gpio_rf_control1_pin);
 /*SKY74117*/    #else
 /*SKY74117*/    L1D_GPIO_WriteIO(1,12);
 /*SKY74117*/    #endif
 /*SKY74117*/    IMM_MODE_BEGIN( IMMMASK_ALL );
 /*SKY74117*/    IMM_SEND_BPI( 0x0200 );       //enable SXENA
 /*SKY74117*/    IMM_SEND_BSI( SCTRL_IMOD(0,24), bsidata);
 /*SKY74117*/    IMM_SEND_BPI( 0x0000 );       //disable SXENA
 /*SKY74117*/    IMM_MODE_END();
 /*SKY74117*/    L1D_RF_PowerOff();
   #endif
   #if IS_RF_SKY74400
 /*SKY74400*/    IMM_MODE_BEGIN( IMMMASK_ALL );
 /*SKY74400*/    IMM_SEND_BPI( 0x0200 );       //enable SXENA
 /*SKY74400*/    IMM_SEND_BSI( SCTRL_IMOD(0,24), bsidata);
 /*SKY74400*/    IMM_SEND_BPI( 0x0000 );       //disable SXENA
 /*SKY74400*/    IMM_MODE_END();
   #endif
   #if IS_RF_BRIGHT5P
 /*BRIGHT5P*/    IMM_MODE_BEGIN( IMMMASK_ALL );
 /*BRIGHT5P*/    IMM_SEND_BSI( SCTRL_IMOD(0,24), bsidata);
 /*BRIGHT5P*/    IMM_MODE_END(  );
   #endif
   #if IS_RF_MT6162 || IS_RF_MT6163
 /*MT6162*/      if( IS_AFC_TRIGGER_BSI() )
 /*MT6162*/      {  IMM_MODE_BEGIN( IMMMASK_BSI|IMMMASK_BPI );  }
 /*MT6162*/      else
 /*MT6162*/      {  IMM_MODE_BEGIN( IMMMASK_ALL );              }
 /*MT6162*/      IMM_SEND_BSI( SCTRL_IMOD(0,30), bsidata);
 /*MT6162*/      IMM_MODE_END(  );
   #endif
   #if IS_RF_MT6280RF
 /*MT6280*/      IMM_MODE_BEGIN( IMMMASK_ALL );
 /*MT6280*/      IMM_SEND_BSI( SCTRL_IMOD(0,29), bsidata);
 /*MT6280*/      IMM_MODE_END(  );
   #endif
   #if IS_RF_MT6169
 /*MT6169*/      IMM_MODE_BEGIN( IMMMASK_ALL );
 /*MT6169*/      IMM_SEND_BSI( SCTRL_IMOD(0,30), bsidata);
 /*MT6169*/      IMM_MODE_END(  );
   #endif

   #if IS_RF_MT6166
 /*MT6166*/      IMM_MODE_BEGIN( IMMMASK_ALL );
 /*MT6166*/      #if IS_AST3002_SUPPORT
 /*MT6166*/         #if IS_DUAL_TALK_SUPPORT
 /*MT6166*/         #else
 /*MT6166*/      if( L1D_CheckIfMetaMode() )
 /*MT6166*/        IMM_SEND_BPI( 0x20000 );        /* Set BSI switch owner to be 2G */
 /*MT6166*/         #endif
 /*MT6166*/      #endif
 /*MT6166*/      IMM_SEND_BSI( SCTRL_IMOD(0,30), bsidata);
 /*MT6166*/      #if IS_AST3002_SUPPORT
 /*MT6166*/         #if IS_DUAL_TALK_SUPPORT
 /*MT6166*/         #else
 /*MT6166*/      if( L1D_CheckIfMetaMode() )
 /*MT6166*/        IMM_SEND_BPI( 0x00000 );        /* Set BSI switch owner to be TDD */
 /*MT6166*/         #endif
 /*MT6166*/      #endif
 /*MT6166*/      IMM_MODE_END(  );
   #endif
   #if IS_RF_MT6165
 /*MT6165*/      IMM_MODE_BEGIN( IMMMASK_ALL );
 /*MT6165*/      IMM_SEND_BSI( SCTRL_IMOD(0,30), bsidata);
 /*MT6165*/      IMM_MODE_END(  );
   #endif
   #if IS_RF_MT6176
 /*MT6176*/      MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, bsidata); 
   #endif
   #if IS_RF_MT6179
 /*MT6179*/      MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, bsidata); 
   #endif
   #if IS_RF_MT6177L
 /*MT6177L*/     MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, bsidata); 
   #endif
   #if IS_RF_MT6177M
 /*MT6173*/     MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, bsidata); 
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetImmediateBSI( unsigned long bsi_addr, unsigned long *bsi_data )
{
#if IS_RF_MT6139B
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_RECEIVE_BSI(SCTRL_IMOD(0,25), bsi_addr ,SCTRL_IMOD(0,21), bsi_data);
// IMM_SEND_BSI( SCTRL_IMOD(0,25), SDATA_IDLE ); /* Back to idle after read back*/
   IMM_MODE_END(  );
#endif

#if IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B || IS_RF_MT6140C
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_RECEIVE_BSI(SCTRL_IMOD(0,26), bsi_addr ,SCTRL_IMOD(0,22), bsi_data);
   IMM_MODE_END(  );
#endif

#if IS_RF_CMOSEDGE || IS_RF_MTKSOC1 || IS_RF_MTKSOC1T
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_RECEIVE_BSI(SCTRL_IMOD(0,6), bsi_addr ,SCTRL_IMOD(0,20), bsi_data);
   IMM_MODE_END(  );
#endif

#if IS_RF_MT6252RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_RECEIVE_BSI(SCTRL_IMOD(0,9), bsi_addr ,SCTRL_IMOD(0,20), bsi_data);
   IMM_MODE_END(  );
#endif

#if IS_RF_MT6256RF || IS_RF_MT6251RF || IS_RF_MT6255RF || IS_RF_MT6250RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_RECEIVE_BSI( 0, bsi_addr, 0, bsi_data );
   IMM_MODE_END(  );
#endif

#if IS_RF_MT6162 || IS_RF_MT6163
   if( IS_AFC_TRIGGER_BSI() )
   {  IMM_MODE_BEGIN( IMMMASK_BSI|IMMMASK_BPI );  }
   else
   {  IMM_MODE_BEGIN( IMMMASK_ALL );              }
   IMM_RECEIVE_BSI(SCTRL_IMOD(0,10), bsi_addr ,SCTRL_IMOD(0,20), bsi_data);
   IMM_MODE_END(  );
#endif

#if IS_RF_MT6280RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_RECEIVE_BSI(SCTRL_IMOD(0,9), bsi_addr ,SCTRL_IMOD(0,20), bsi_data);
   IMM_MODE_END(  );
#endif

#if IS_RF_MT6169
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_RECEIVE_BSI(SCTRL_IMOD(0,12), bsi_addr ,SCTRL_IMOD(0,20), bsi_data);
   IMM_MODE_END(  );
#endif

#if IS_RF_MT6166
   IMM_MODE_BEGIN( IMMMASK_ALL );
   #if IS_AST3002_SUPPORT
      #if IS_DUAL_TALK_SUPPORT
      #else
   if( L1D_CheckIfMetaMode() )
      IMM_SEND_BPI( 0x20000 );        /* Set BSI switch owner to be 2G */
      #endif
   #endif
   IMM_RECEIVE_BSI(SCTRL_IMOD(0,12), bsi_addr ,SCTRL_IMOD(0,20), bsi_data);
   #if IS_AST3002_SUPPORT
      #if IS_DUAL_TALK_SUPPORT
      #else
   if( L1D_CheckIfMetaMode() )
      IMM_SEND_BPI( 0x00000 );        /* Set BSI switch owner to be TDD */
      #endif
   #endif
   IMM_MODE_END(  );
#endif
#if IS_RF_MT6165
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_RECEIVE_BSI(SCTRL_IMOD(0,12), bsi_addr ,SCTRL_IMOD(0,20), bsi_data);
   IMM_MODE_END(  );
#endif

#if IS_RF_MT6176
   MML1_RF_IMM_READ_BSI(MML1_RF_RFIC1, bsi_addr, (kal_uint32*)bsi_data);
#endif

#if IS_RF_MT6179
   MML1_RF_IMM_READ_BSI(MML1_RF_RFIC1, bsi_addr, (kal_uint32*)bsi_data);
#endif

#if IS_RF_MT6177L
   MML1_RF_IMM_READ_BSI(MML1_RF_RFIC1, bsi_addr, (kal_uint32*)bsi_data);
#endif

#if IS_RF_MT6177M
   MML1_RF_IMM_READ_BSI(MML1_RF_RFIC1, bsi_addr, (kal_uint32*)bsi_data);
#endif


}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*===============================================================================================*/

void WAIT_TIME_QB( short time_qb )
{
#ifndef  L1_SIM
   unsigned short  last_qb, cur_qb;
   short  qb_diff, qb_remain;


   qb_remain = time_qb;
   last_qb = HW_READ( TDMA_TQCNT );
   while( qb_remain>0 )
   {  cur_qb = HW_READ( TDMA_TQCNT );
      qb_diff = cur_qb-last_qb;
      qb_remain -= (qb_diff<0) ? 1 : qb_diff;
      last_qb = cur_qb;
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void IMM_MODE_AFC_BEGIN( void )
{
#if IS_AFC_EVENT_ENABLE
   HW_WRITE( AFC_DAT(0), l1d_rf.AFC_data );
   HW_WRITE( AFC_CON   , AFC_FORCE_POWER_ON );
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void IMM_MODE_AFC_END( void )
{
#if IS_AFC_EVENT_ENABLE
   if( IS_AFC_TRIGGER_BSI() )
   {  /* set AFC back to the event-triggered mode */
      HW_WRITE( AFC_CON, AFC_EVENT_TRIGGER );
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#ifdef __CUST_NEW__
   #ifndef  L1_SIM
      #if IS_CHIP_MT6205
         #if IS_RF_AERO || IS_RF_AERO1PLUS || IS_RF_AERO2
/*MT6205*/ extern const char gpio_rf_control1_pin;
         #endif
      #endif
   #endif
#endif /*__CUST_NEW__*/

static void IMM_MODE_BPI_BEGIN( void )
{
   L1D_SET_BPI_IMM_MODE_BEGIN();
#ifndef  L1_SIM
   #if IS_CHIP_MT6205
      #if IS_RF_AERO || IS_RF_AERO1PLUS || IS_RF_AERO2
/*MT6205*//*AERO*/ /* config GPIO_MODE1[F:E]=0 to set GPIO7=GPO7 */
/*MT6205*//*AERO*/ {  unsigned short d16;
/*MT6205*//*AERO*/    void L1D_GPIO_InitIO(char, char);
/*MT6205*//*AERO*/    void L1D_GPIO_ModeSetup(kal_uint16, kal_uint16);
/*MT6205*//*AERO*/    d16 = HW_READ( PDN_CON1 );
/*MT6205*//*AERO*/    d16 &= ~0x0004;
/*MT6205*//*AERO*/    HW_WRITE( PDN_CON1, d16);
/*MT6205*//*AERO*/    #ifndef __CUST_NEW__
/*MT6205*//*AERO*/    d16 = HW_READ( GPIO_MODE1 );
/*MT6205*//*AERO*/    d16 &= ~0xC000;
/*MT6205*//*AERO*/    HW_WRITE( GPIO_MODE1, d16 );
/*MT6205*//*AERO*/    d16 = HW_READ( GPIO_DIR1 );
/*MT6205*//*AERO*/    d16 |= 0x0080;
/*MT6205*//*AERO*/    HW_WRITE( GPIO_DIR1, d16);
/*MT6205*//*AERO*/    #else /*__CUST_NEW__*/
/*MT6205*//*AERO*/    L1D_GPIO_ModeSetup(gpio_rf_control1_pin, 0);
/*MT6205*//*AERO*/    L1D_GPIO_InitIO(1, gpio_rf_control1_pin);
/*MT6205*//*AERO*/    #endif /*__CUST_NEW__*/
/*MT6205*//*AERO*/ }
      #endif
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void IMM_MODE_BPI_END( void )
{
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#else
   L1D_SET_BPI_IMM_MODE_END();
   #if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292
   HW_WRITE( BPI_ENA , 0xFFFFFFFF ); // TK6291 is 42
   HW_WRITE( BPI_ENA1, 0x000003FF );
#elif IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
   HW_WRITE( BPI_ENA , 0xFFFFFFFF ); // MT6280 is 33
   HW_WRITE( BPI_ENA1, 0x0001 );
#elif IS_CHIP_MT6268T || IS_CHIP_MT6268H || IS_CHIP_MT6268 || IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION
   HW_WRITE( BPI_ENA , 0xFFFFFFFF );
   HW_WRITE( BPI_ENA1, 0x03FF );
#elif IS_CHIP_MT6256_S00
   HW_WRITE( BPI_ENA , 0xFFFF );
   HW_WRITE( BPI_ENA1, 0xFFFF );
   HW_WRITE( BPI_ENA2, 0x03FF );
#elif IS_CHIP_MT6256
   HW_WRITE( BPI_ENA , 0xFFFF );
   HW_WRITE( BPI_ENA1, 0x3FFF );
#elif IS_CHIP_MT6252 || IS_CHIP_MT6255 || IS_CHIP_MT6250
   HW_WRITE( BPI_ENA , 0xFFFF );
   HW_WRITE( BPI_ENA1, 0x001F );
#elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   HW_WRITE( BPI_ENA , 0xFFFF );
   HW_WRITE( BPI_ENA1, 0xFFFF );
   HW_WRITE( BPI_ENA2, 0x03FF );
#elif IS_CHIP_MT6227 || IS_CHIP_MT6225_AND_LATTER_VERSION
   HW_WRITE( BPI_ENA , 0xFFFF );
   HW_WRITE( BPI_ENA1, 0x03FF );
#elif IS_CHIP_MT6217 || IS_CHIP_MT6218 || IS_CHIP_MT6219 || IS_CHIP_MT6228
   HW_WRITE( BPI_ENA , 0xFFFF );
   HW_WRITE( BPI_ENA1, 0x003F );
#else
   HW_WRITE( BPI_ENA , 0xFFFF );
#endif

#ifndef  L1_SIM
   #if IS_CHIP_MT6205
      #if IS_RF_AERO || IS_RF_AERO1PLUS || IS_RF_AERO2
/*MT6205*//*AERO*/ /* config GPIO_MODE1[F:E]=1 to set GPIO7=BPI_BUS7 */
/*MT6205*//*AERO*/ #ifndef __CUST_NEW__
/*MT6205*//*AERO*/ {  unsigned short d16;
/*MT6205*//*AERO*/    d16 = HW_READ( GPIO_MODE1 );
/*MT6205*//*AERO*/    d16 &= ~0xC000;
/*MT6205*//*AERO*/    d16 |=  0x4000;
/*MT6205*//*AERO*/    HW_WRITE( GPIO_MODE1, d16 );
/*MT6205*//*AERO*/ }
/*MT6205*//*AERO*/ #else /*__CUST_NEW__*/
/*MT6205*//*AERO*/ {  void L1D_GPIO_ModeSetup(kal_uint16, kal_uint16);
/*MT6205*//*AERO*/    L1D_GPIO_ModeSetup(gpio_rf_control1_pin, 1);
/*MT6205*//*AERO*/ }
/*MT6205*//*AERO*/ #endif /*__CUST_NEW__*/
      #endif
   #endif
#endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void IMM_MODE_BSI_BEGIN( void )
{
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void IMM_MODE_BSI_END( void )
{
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#else
   HW_WRITE( BSI_CON,  SCTRL_MAIN );
#if IS_EDGE_SAIC_CHIP_MT6256_AND_LATTER_VERSION
   #if IS_CHIP_TK6291
   HW_WRITE( BSI_ENA,  0xFFFFFFFF ); // 120
   HW_WRITE( BSI_ENA1, 0xFFFFFFFF );
   HW_WRITE( BSI_ENA2, 0xFFFFFFFF );
   HW_WRITE( BSI_ENA3, 0x00FFFFFF );
      #elif IS_CHIP_MT6755 || IS_CHIP_MT6292
   HW_WRITE( BSI_ENA  , 0xFFFFFFFF ); //32 BSI events for RFIC instance   for Jade
   HW_WRITE( BSI_ENA1 , 0x00000000 );
   HW_WRITE( BSI_ENA2 , 0x00000000 );
   HW_WRITE( BSI_MIPI_ENA  , 0xFFFFFFFF ); //88 BSI events for MIPI instance for Jade
   HW_WRITE( BSI_MIPI_ENA1 , 0xFFFFFFFF );
   HW_WRITE( BSI_MIPI_ENA2 , 0x00FFFFFF );
   #elif IS_CHIP_MT6256_S00 || IS_CHIP_MT6251
   HW_WRITE( BSI_ENA , 0xFFFF );
   HW_WRITE( BSI_ENA1, 0xFFFF );
   HW_WRITE( BSI_ENA2, 0x000F );
   #elif IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
   HW_WRITE( BSI_ENA,  0xFFFFFFFF ); // 103
   HW_WRITE( BSI_ENA1, 0xFFFFFFFF );
   HW_WRITE( BSI_ENA2, 0xFFFFFFFF );
   HW_WRITE( BSI_ENA3, 0x0000007F );
   #elif IS_CHIP_MT6572
   HW_WRITE( BSI_ENA,  0xFFFFFFFF ); // 54
   HW_WRITE( BSI_ENA1, 0x003FFFFF );
   #elif IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2
   HW_WRITE( BSI_ENA,  0xFFFFFFFF ); // MT6280 is 42
   HW_WRITE( BSI_ENA1, 0x000003FF );
   #elif IS_CHIP_MT6250
   HW_WRITE( BSI_ENA , 0x001FFFFF );
   #else
   HW_WRITE( BSI_ENA , 0xFFFF );
   HW_WRITE( BSI_ENA1, 0x001F );
   #endif
#elif IS_CHIP_MT6268H || IS_CHIP_MT6268T_DMAC
   HW_WRITE( BSI_ENA,  0xFFFFFFFF );
   HW_WRITE( BSI_ENA1, 0x0000000F );
#elif IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION
   #if IS_CHIP_MT6270A_E1 || IS_CHIP_MT6276_S00 || IS_CHIP_MT6573
   HW_WRITE( BSI_ENA,  0xFFFFFFFF ); // MT6270A E1, MT6276E1, MT6573E1 and MT6573E2 is 36
   HW_WRITE( BSI_ENA1, 0x0000000F );
   #else
   HW_WRITE( BSI_ENA,  0xFFFFFFFF ); // MT6270A E2, MT6276E2 is 42
   HW_WRITE( BSI_ENA1, 0x000003FF );
   #endif
#elif IS_CHIP_MT6268T || IS_CHIP_MT6268
   HW_WRITE( BSI_ENA,  0x000FFFFF );
#elif IS_CHIP_MT6252
   HW_WRITE( BSI_ENA,  0xFFFF );
   HW_WRITE( BSI_ENA1, 0x001F );
#elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   HW_WRITE( BSI_ENA,  0xFFFF );
   HW_WRITE( BSI_ENA1, 0x000F );
#else
   HW_WRITE( BSI_ENA,  0xFFFF );
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void IMM_MODE_BEGIN( unsigned short imm_mask )
{
#if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/*TK6291*/   unsigned short pdn_con2 = 0x0000;
/*TK6291*/
/*TK6291*/   if( imm_mask&IMMMASK_AFC )
/*TK6291*/   {  IMM_MODE_AFC_BEGIN();
/*TK6291*/   #if IS_AFC_EVENT_ENABLE
/*TK6291*/      #error "need implement AFC clk gating driver."    /* power on AFC  */
/*TK6291*/   #endif
/*TK6291*/   }
/*TK6291*/
/*TK6291*/   if( imm_mask&IMMMASK_BPI )
/*TK6291*/   {  IMM_MODE_BPI_BEGIN();
             #if IS_CHIP_MT6293
             #else
/*TK6291*/      pdn_con2 |= MD2G_PDNCON_BPI_G;    /* power on BPI_G  */
/*TK6291*/     #if IS_TK6291_HW_BUG_SW_WORKAROUND_SUPPORT
/*TK6291*/      pdn_con2 |= MD2G_PDNCON_BSI_G;    /* power on BSI_G  */
/*TK6291*/     #endif
             #endif
/*TK6291*/   }
/*TK6291*/
/*TK6291*/   if( imm_mask&IMMMASK_BSI )
/*TK6291*/   {  IMM_MODE_BSI_BEGIN();
             #if IS_CHIP_MT6293
             #else
/*TK6291*/      pdn_con2 |= MD2G_PDNCON_BSI_G;    /* power on BSI_G  */
/*TK6291*/     #if IS_TK6291_HW_BUG_SW_WORKAROUND_SUPPORT
/*TK6291*/      pdn_con2 |= MD2G_PDNCON_BPI_G;    /* power on BPI_G  */
/*TK6291*/     #endif
             #endif
/*TK6291*/   }
/*TK6291*/
/*TK6291*/   HW_WRITE( MD2G_PDN_CLR2, pdn_con2 );
/*TK6291*/   HW_WRITE( MD2G_PDN_CLR4, pdn_con2 );
/*TK6291*/
#elif IS_SMARTPHONE_CHIP_TK6516_AND_LATTER_VERSION
/*MT6516*/   unsigned short pdn_con2 = 0x0000;
/*MT6516*/
/*MT6516*/   if( imm_mask&IMMMASK_AFC )
/*MT6516*/   {  IMM_MODE_AFC_BEGIN();
/*MT6516*/      pdn_con2 |= 0x0020;         /* power on AFC  */
/*MT6516*/   #if IS_CHIP_MT6516
/*MT6516*/      HW_WRITE( PDN_CLR2, pdn_con2 );
/*MT6516*/      HW_WRITE( PDN_CLR4, pdn_con2 );
/*MT6516*/      pdn_con2  = 0x0000;
/*MT6516*/   #endif
/*MT6516*/   }
/*MT6516*/
/*MT6516*/   if( imm_mask&IMMMASK_BPI )
/*MT6516*/   {  IMM_MODE_BPI_BEGIN();
/*MT6516*/      pdn_con2 |= 0x0010;         /* power on BPI  */
/*MT6516*/   }
/*MT6516*/
/*MT6516*/   if( imm_mask&IMMMASK_BSI )
/*MT6516*/   {  IMM_MODE_BSI_BEGIN();
/*MT6516*/      pdn_con2 |= 0x0008;         /* power on BSI  */
/*MT6516*/   }
/*MT6516*/
/*MT6516*/   #if IS_CHIP_MT6516
/*MT6516*/   HW_WRITE( MD2G_PDN_CLR2, pdn_con2 );
/*MT6516*/   HW_WRITE( MD2G_PDN_CLR4, pdn_con2 );
/*MT6516*/   #else
/*MT6516*/   HW_WRITE( PDN_CLR2, pdn_con2 );
/*MT6516*/   HW_WRITE( PDN_CLR4, pdn_con2 );
/*MT6516*/   #endif
/*MT6516*/
#elif IS_CHIP_MT6573 || IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
/*MT6573*/   unsigned short pdn_con2 = 0x0000;
/*MT6573*/
/*MT6573*/   if( imm_mask&IMMMASK_AFC )
/*MT6573*/   {  IMM_MODE_AFC_BEGIN();
/*MT6573*/   #if IS_AST_B2S_SUPPORT
/*MT6573*/      // do nothing
/*MT6573*/   #else
/*MT6573*/      pdn_con2 |= PDN_CON_AFC;    /* power on AFC  */
/*MT6573*/   #endif
/*MT6573*/   }
/*MT6573*/
/*MT6573*/   if( imm_mask&IMMMASK_BPI )
/*MT6573*/   {  IMM_MODE_BPI_BEGIN();
/*MT6573*/      pdn_con2 |= PDN_CON_BPI;    /* power on BPI  */
/*MT6573*/   }
/*MT6573*/
/*MT6573*/   if( imm_mask&IMMMASK_BSI )
/*MT6573*/   {  IMM_MODE_BSI_BEGIN();
/*MT6573*/      pdn_con2 |= PDN_CON_BSI;    /* power on BSI  */
/*MT6573*/   }
/*MT6573*/
/*MT6573*/   HW_WRITE( PDN_CLR2, pdn_con2 );
/*MT6573*/   HW_WRITE( PDN_CLR4, pdn_con2 );
/*MT6573*/
#elif IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION
/*MT6238~*/   unsigned short pdn_con2 = 0x0000;
/*MT6238~*/
/*MT6238~*/   if( imm_mask&IMMMASK_AFC )
/*MT6238~*/   {  IMM_MODE_AFC_BEGIN();
/*MT6238~*/   #if IS_AST_B2S_SUPPORT
/*MT6238~*/      // do nothing
/*MT6238~*/   #elif IS_AFC_EVENT_ENABLE
/*MT6238~*/      pdn_con2 |= 0x0010;         /* power on AFC  */
/*MT6238~*/      #if IS_CHIP_MT6236
/*MT6238~*/      HW_WRITE( PDN_CLR2, pdn_con2 );
/*MT6238~*/      HW_WRITE( PDN_CLR4, pdn_con2 );
/*MT6238~*/      pdn_con2  = 0x0000;
/*MT6238~*/      #endif
/*MT6238~*/   #else
/*MT6238~*/      // do nothing
/*MT6238~*/   #endif
/*MT6238~*/   }
/*MT6238~*/
/*MT6238~*/   if( imm_mask&IMMMASK_BPI )
/*MT6238~*/   {  IMM_MODE_BPI_BEGIN();
               #if IS_CHIP_MT6293
               #else
/*MT6238~*/      pdn_con2 |= 0x0008;         /* power on BPI  */
               #endif
/*MT6238~*/   }
/*MT6238~*/
/*MT6238~*/   if( imm_mask&IMMMASK_BSI )
/*MT6238~*/   {  IMM_MODE_BSI_BEGIN();
               #if IS_CHIP_MT6293
               #else
/*MT6238~*/      pdn_con2 |= 0x0004;         /* power on BSI  */
               #endif
/*MT6238~*/   }
/*MT6238~*/
/*MT6238~*/   #if IS_CHIP_MT6236 || IS_EDGE_SAIC_CHIP_MT6256_AND_LATTER_VERSION
/*MT6238~*/   HW_WRITE( MD2G_PDN_CLR2, pdn_con2 );
/*MT6238~*/   HW_WRITE( MD2G_PDN_CLR4, pdn_con2 );
/*MT6238~*/   #else
/*MT6238~*/   HW_WRITE( PDN_CLR2, pdn_con2 );
/*MT6238~*/   HW_WRITE( PDN_CLR4, pdn_con2 );
/*MT6238~*/   #endif
/*MT6238~*/
#else
/*else*/   unsigned short pdn_con2 = HW_READ( PDN_CON2 );
/*else*/
/*else*/   if( imm_mask&IMMMASK_AFC )
/*else*/   {  IMM_MODE_AFC_BEGIN();
/*else*/      pdn_con2 &= ~0x0010;      /* power on AFC  */
/*else*/   }
/*else*/
/*else*/   if( imm_mask&IMMMASK_BPI )
/*else*/   {  IMM_MODE_BPI_BEGIN();
/*else*/      pdn_con2 &= ~0x0008;      /* power on BPI  */
/*else*/   }
/*else*/
/*else*/   if( imm_mask&IMMMASK_BSI )
/*else*/   {  IMM_MODE_BSI_BEGIN();
/*else*/      pdn_con2 &= ~0x0004;      /* power on BSI  */
/*else*/   }
/*else*/
/*else*//* pdn_con2 &= ~0x0001;  */     /* power on TDMA */
/*else*/   HW_WRITE( PDN_CON2, pdn_con2 );
/*else*/   #if IS_CHIP_MT6218_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
/*else*//*MT6218*/   HW_WRITE( PDN_CON4, pdn_con2 );
/*else*/   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void IMM_MODE_END( void )
{
   IMM_MODE_BSI_END();
   IMM_MODE_BPI_END();
   IMM_MODE_AFC_END();
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void IMM_SEND_BPI( BPI_DATA_SIZE data )
{
#ifndef  L1_SIM
   #if IS_CHIP_MT6205
      #if IS_RF_AERO || IS_RF_AERO1PLUS || IS_RF_AERO2
   /*MT6205*//*AERO*/ /* Set/CLR BPI7 */
   /*MT6205*//*AERO*/ #ifndef __CUST_NEW__
   /*MT6205*//*AERO*/ {  unsigned short d16;
   /*MT6205*//*AERO*/    d16 = HW_READ( GPIO_DOUT1 );
   /*MT6205*//*AERO*/    if(data&0x80)
   /*MT6205*//*AERO*/    {  d16 |= 0x0080;  }
   /*MT6205*//*AERO*/    else
   /*MT6205*//*AERO*/    {  d16 &= ~0x0080;  }
   /*MT6205*//*AERO*/    HW_WRITE( GPIO_DOUT1, d16 );
   /*MT6205*//*AERO*/ }
   /*MT6205*//*AERO*/ #else /*__CUST_NEW__*/
   /*MT6205*//*AERO*/ {  unsigned short d16;
   /*MT6205*//*AERO*/    void L1D_GPIO_WriteIO(char, char);
   /*MT6205*//*AERO*/    d16 = HW_READ( GPIO_DOUT1 );
   /*MT6205*//*AERO*/    if(data&0x80)
   /*MT6205*//*AERO*/    {  L1D_GPIO_WriteIO(1, gpio_rf_control1_pin);  }
   /*MT6205*//*AERO*/    else
   /*MT6205*//*AERO*/    {  L1D_GPIO_WriteIO(1, gpio_rf_control1_pin);  }
   /*MT6205*//*AERO*/ }
   /*MT6205*//*AERO*/ #endif /*__CUST_NEW__*/
      #endif
   #endif
#endif

#if IS_BPI_DATA_48_BIT_CHIP
            HW_WRITE( BPI_G_BUF_IMM_L, data&0xFFFFFFFF );
            HW_WRITE( BPI_G_BUF_IMM_H, (data>>32)&0xFFFF );
#elif IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
/* can not use this function in DYNAMIC_ALLOCATION_SUPPORT*/ ASSERT(0);
#elif IS_CHIP_MT6218_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
/*MT6218*/  HW_WRITE( BPI_DATIMM, data );
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void IMM_SEND_BSI( uintBSI ctrl, unsigned long data )
{
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#else
   volatile long  addr;

#if IS_BSI_TRIG_OFFCHIP_BSI_SWITCH_SUPPORT
   int i, start, end;
   unsigned long bsi_sdata[3];

   bsi_sdata[0] = SDATA_BSI_OWNER_2G;
   bsi_sdata[1] = data;
   bsi_sdata[2] = SDATA_BSI_OWNER_TD;

   switch( IMM_OFFCHIP_BSI_SWITCH_QUERY() )
   {  case BSI_SWITCH_2G:
      {  start = 0; end = 0;
         IMM_OFFCHIP_BSI_SWITCH_SET( BSI_SWITCH_NO_ACT );
         break;
      }
      case BSI_SWITCH_NO_ACT:
      {  start = 1; end = 1;
         break;
      }
      case BSI_SWITCH_NO_ACT_ONCE:
      {  start = 1; end = 1;
         IMM_OFFCHIP_BSI_SWITCH_SET( BSI_SWITCH_2G_THEN_TD );
         break;
      }
      case BSI_SWITCH_TD:
      {  start = 2; end = 2;
         IMM_OFFCHIP_BSI_SWITCH_SET( BSI_SWITCH_2G_THEN_TD );
         break;
      }
      case BSI_SWITCH_2G_THEN_TD:
      default:
      {  start = 0; end = 2;
         break;
      }
   }

   for( i=start; i<=end; i++ )
   {
      HW_WRITE( BSI_CON, SCTRL_IMOD_MAIN );
      addr = (long)BSI_Dn_CON(0);
      HW_WRITE( (APBADDRBSI)addr, ctrl );  addr += 4;
      HW_WRITE_BSI_DATA( addr, bsi_sdata[i] );
      HW_DUMMY_READ_BSI_DATA( addr );

      #if IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION || IS_CHIP_MT6268H || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292
      HW_WRITE( GSM_BSI_ACTUPT, 0x8000 );
      HW_DUMMY_READ_BSI_DATA( addr );
   #endif
      HW_WRITE( BSI_CON, SCTRL_IMOD_SEND );
      WAIT_TIME_QB(IMM_BSI_WAIT_TIME_QB);
   }
#else
   HW_WRITE( BSI_CON, SCTRL_IMOD_MAIN );
   addr = (long)BSI_Dn_CON(0);
   HW_WRITE( (APBADDRBSI)addr, ctrl );  addr += 4;
   HW_WRITE_BSI_DATA( addr, data );
   HW_DUMMY_READ_BSI_DATA( addr );

   #if IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION || IS_CHIP_MT6268H || IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   HW_WRITE( GSM_BSI_ACTUPT, 0x8000 );
   HW_DUMMY_READ_BSI_DATA( addr );
   #endif
   HW_WRITE( BSI_CON, SCTRL_IMOD_SEND );

   WAIT_TIME_QB(IMM_BSI_WAIT_TIME_QB);
   while( IS_BSI_IMM_SEND_COMPLETE==0x0 );
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void IMM_UPDATE_BSI_BEGIN( void )
{
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#else
#if IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION || IS_CHIP_MT6268H || IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292
   // no need to do this
#else
   HW_WRITE( BSI_CON, SCTRL_IMOD_MAIN );
#endif
#endif /*IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT*/
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void IMM_UPDATE_BSI_END( void )
{
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#else
#if IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION || IS_CHIP_MT6268H || IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292
   HW_WRITE( GSM_BSI_ACTUPT, BSI_ACTUPT_ALL ); /* Update all active buffer */
#else
   HW_WRITE( BSI_CON, SCTRL_MAIN );
#endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void IMM_OFFCHIP_BSI_CFG( BSI_SWITCH state )
{
#if IS_BSI_TRIG_OFFCHIP_BSI_SWITCH_SUPPORT
   IMM_OFFCHIP_BSI_SWITCH_SET( state );

   if( state == BSI_SWITCH_2G || state == BSI_SWITCH_TD )
   {  IMM_SEND_BSI( SCTRL_IMOD(0,30), 0/*dummy*/ );  } /* Change offchip BSI switch owner by IMM BSI */
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
   #if IS_2G_TAS_SUPPORT
static const sARFCN_SECTION_Power_Offset* TPO_WeightARFCN_BinarySearch( int arfcn, int rf_band, const sARFCN_SECTION_Power_Offset *weight, short mod_type, int table_idx )
   #else
static const sARFCN_SECTION* TPO_WeightARFCN_BinarySearch( int arfcn, int rf_band, const sARFCN_SECTION *weight, short mod_type, int table_idx )
   #endif
{
   signed short left_arfcn_idx, mid_arfcn_idx, right_arfcn_idx;

   left_arfcn_idx = 0;
   right_arfcn_idx = (mod_type == 0)? TPO_weight_section_end_idx[table_idx][rf_band] : TPO_weight_section_end_idx_EPSK[table_idx][rf_band];

   if(right_arfcn_idx<0)  // no entry, not found
   {  return 0;  }
   else
   {
      while( left_arfcn_idx < right_arfcn_idx )
      {
         mid_arfcn_idx = (left_arfcn_idx + (right_arfcn_idx)) >> 1;
         if(arfcn <= weight[mid_arfcn_idx].max_arfcn)
         {  right_arfcn_idx = mid_arfcn_idx;  }
         else
         {  left_arfcn_idx = mid_arfcn_idx+1;  }  // left+1 so that the next region can be covered with mid=(left+right)>>1
      }
      //L1D_RF_Info_Trace( 2893, weight[right_arfcn_idx].max_arfcn, arfcn);
      return &weight[right_arfcn_idx];
   }
}
#endif   // IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
static const sARFCN_SECTION* AdjustTPO_WeightARFCN_BinarySearch( int arfcn, int rf_band, const sARFCN_SECTION *weight, short mod_type, int table_idx )
{
   signed short left_arfcn_idx, mid_arfcn_idx, right_arfcn_idx;

   left_arfcn_idx = 0;
   #if IS_EPSK_ADJUST_TPO_SUPPORT
   right_arfcn_idx = (mod_type == 0)? adjust_tpo_weight_sec_sp_idx_GMSK[table_idx][rf_band] : adjust_tpo_weight_sec_sp_idx_EPSK[table_idx][rf_band];
   #else
   right_arfcn_idx = (mod_type == 0)? adjust_tpo_weight_sec_sp_idx_GMSK[table_idx][rf_band] : -1;
   #endif//IS_EPSK_ADJUST_TPO_SUPPORT

   if(right_arfcn_idx<0)  // no entry, not found
   {  return 0;  }
   else
   {
      while( left_arfcn_idx < right_arfcn_idx )
      {
         mid_arfcn_idx = (left_arfcn_idx + (right_arfcn_idx)) >> 1;
         if(arfcn <= weight[mid_arfcn_idx].max_arfcn)
         {  right_arfcn_idx = mid_arfcn_idx;  }
         else
         {  left_arfcn_idx = mid_arfcn_idx+1;  }  // left+1 so that the next region can be covered with mid=(left+right)>>1
      }
      //L1D_RF_Info_Trace( 2893, weight[right_arfcn_idx].max_arfcn, arfcn);
      return &weight[right_arfcn_idx];
   }
}
#endif   //IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static const sARFCN_SECTION* WeightARFCN_BinarySearch( int arfcn, int rf_band, const sARFCN_SECTION *weight, short mod_type )
{
   signed short left_arfcn_idx, mid_arfcn_idx, right_arfcn_idx;

   left_arfcn_idx = 0;
   right_arfcn_idx = (mod_type == 0)? weight_section_end_idx[rf_band] : weight_section_end_idx_EPSK[rf_band];

   if(weight_section_end_idx[rf_band]<0)  // no entry, not found
   {  return 0;  }
   else
   {
      while( left_arfcn_idx < right_arfcn_idx )
      {
         mid_arfcn_idx = (left_arfcn_idx + (right_arfcn_idx)) >> 1;
         if(arfcn <= weight[mid_arfcn_idx].max_arfcn)
         {  right_arfcn_idx = mid_arfcn_idx;  }
         else
         {  left_arfcn_idx = mid_arfcn_idx+1;  }  // left+1 so that the next region can be covered with mid=(left+right)>>1
      }
      return &weight[right_arfcn_idx];
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int L1D_FH_Is_MPLL_Free_Run_On( void )
{
   return IS_MPLLFH_FREE_RUN_ON;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_RSSI_TC_SUPPORT
int L1D_RF_CompensateRXGain( unsigned char rf_band )
{
   const short          temp_now = l1d_rf.txpc.ol_db.temperature;
         short          gain_offset = 0;
         short          rssi_tc_slope      = (rf_band < FrequencyBand1800) ? (RSSI_TC_SLOPE_LB) : (RSSI_TC_SLOPE_HB);
         short          rssi_tc_slope_temp = rssi_tc_slope >> PWRRES_BIT;


   if( rssi_tc_slope_temp == 0 ) /* Check slope !=0 to avoid divid-by-zero */
   {  return 0;  }

   gain_offset = ((temp_now - ref_temperature) + (rssi_tc_slope_temp>>1)) / rssi_tc_slope_temp;
   
   /* prevent unusual gain_offset from bad temp_now value */
   if((gain_offset>24) || (gain_offset<-24)) /* 24*0.125=+-3 dB */
   {  
      gain_offset = 0;
   }

   return gain_offset; // Unit: 0.125dB

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_TXPC_OL_BSI_SUPPORT || IS_TXPC_OL_AUXADC_SUPPORT
   #if IS_EPSK_TX_SUPPORT && IS_EPSK_TX_GAIN_CONTROL_SUPPORT
static short L1D_RF_TXPC_OL_RecordAndUpdateGain( const short dac_ori, unsigned char rf_band, short slot )
{
   const sTXPC_SETUP   *p_setup = &l1d_rf.txpc.setup;
   const short          temp_now = l1d_rf.txpc.ol_db.temperature;
         short          left_2_right_dac = p_setup->power_dac_right - p_setup->power_dac_left;
         short          ratio = 0;
      #if IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
         short          txpc_epsk_slope      = (rf_band < FrequencyBand1800) ? (txpc_epsk_tp_slope_lb) : (txpc_epsk_tp_slope_hb);
         short          txpc_epsk_slope_temp = ( temp_now < TXPC_TEMP_THRESHOLD ) ? ( (txpc_epsk_slope>>8)&0xFF ) : ( txpc_epsk_slope&0xFF );
         short          temp_diff_2dB        = txpc_epsk_slope_temp<<1;
      #else
         short          temp_diff_2dB = (rf_band < FrequencyBand1800) ? (txpc_epsk_tp_slope_lb<<1) : (txpc_epsk_tp_slope_hb<<1);
      #endif

   if( (l1d_rf.txpc_type == TXPC_NO_CONTROL_TYPE   ) ||
       (l1d_rf.txpc_type == TXPC_AUXADC_CLOSED_TYPE) ||
       (l1d_rf.txpc_type == TXPC_BSI_CLOSED_TYPE   ) ||
       (l1d_rf.txpc_mode != TXPC_NORMAL_MODE       ) )
      return dac_ori;

   if( temp_diff_2dB == 0 ) /* txpc_epsk_tp_slope_lb/hb abnormal. Directly return default TX gain DAC */
   {
      l1d_rf.txpc_trc.ratio = 0;
      return dac_ori;
   }

   /* If no power control, output EPSK power is lower than original at high temperature, and higher at low temperature. */
   ratio = (((temp_now - ref_temperature)<<TXPC_DB_RES) + (temp_diff_2dB>>1)) / temp_diff_2dB;

   l1d_rf.txpc_trc.ratio = ratio;

      #if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   (void)left_2_right_dac;
   return L1D_RF_TXPC_COMPUTE_DAC_EPSK( dac_ori, slot, ratio, 0                );
      #else
   return L1D_RF_TXPC_COMPUTE_DAC_EPSK( dac_ori, slot, ratio, left_2_right_dac );
      #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif
#endif /* IS_TXPC_OL_BSI_SUPPORT || IS_TXPC_OL_AUXADC_SUPPORT */

#if IS_TX_POWER_CONTROL_SUPPORT
   #if IS_CHIP_MT6256
unsigned long cw138_readback;
   #elif IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1
unsigned long cw16_readback;
   #elif IS_CHIP_MT6572
unsigned long cw21_readback;
   #elif IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
      #if IS_RF_MT6166
unsigned long cw21_readback;
      #elif IS_RF_MT6165
unsigned long cw8_readback;
      #elif IS_RF_MT6169
unsigned long cw210_readback;
      #elif IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
kal_uint32 cw68_readback;
      #endif
   #endif

short L1D_RF_TXPC_GetTxGainSetting( unsigned char is_gain_rf, unsigned char slot_idx )
{
   #if IS_RF_MT6162 || IS_RF_MT6163 || ( (IS_RF_MT6256RF || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M) && IS_EPSK_TX_SUPPORT)
   unsigned short gain         = l1d_rf2.tx_gain_setting[slot_idx];
            short return_value = 0;

      #if IS_RF_MT6162 || IS_RF_MT6163
   return_value = is_gain_rf ? ((gain>>10)&0xF) : (gain&0x3FF);
      #elif IS_RF_MT6256RF && IS_EPSK_TX_SUPPORT
   if( is_gain_rf )
   {  return_value = l1d_rf2.is_alt_bb_gain ? (gain>>2)-1 : (gain>>2);     }
   else
   {  return_value = l1d_rf2.is_alt_bb_gain ? (gain&0x3)+4 : (gain&0x3);   }
      #elif (IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M) && IS_EPSK_TX_SUPPORT
   if( is_gain_rf )
   {  return_value = (gain>>9)&0xF;     }
   else
   {  return_value = (gain&0x1FF);      }
      #endif

   return return_value;
   #else
   (void)is_gain_rf;
   (void)slot_idx;
   return 0;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

short L1D_RF_TXPC_GetTemperatureInfo( unsigned char info_idx )
{
   sTXPC_TEMP_INFO *p_temp_info = &l1d_rf.txpc.temp_info;

   if( info_idx==0 )
   {  return p_temp_info->adc;    }
   else if( info_idx==1 )
   {  return p_temp_info->idx;    }
   else
   {  return p_temp_info->value;  }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_Set_Temp_ADC_Ptr( sTEMPERATURE_ADC_L1CAL *temp_adc )
{  /* For L1D to get NVRAM calibration data at boot-up */
   TXTEMP_Data[0] = (sTXPC_TEMPDATA*)temp_adc;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_Set_Temp_ADC( sTEMPERATURE_ADC_L1CAL *temp_adc )
{
   unsigned char idx = 0;

   for( idx=0; idx<8; idx++ )
   {
      TXTEMP_Data[0]->data[idx] = temp_adc->data[idx];
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

short L1D_RF_TXPC_CheckTransitionMode( void )
{
   short return_mode = 0;
   if( (l1d_rf.txpc_mode==TXPC_TRANS_TO_META_MODE) || (l1d_rf.txpc_mode==TXPC_TRANS_TO_NORMAL_MODE) )
   {  return_mode = 1;  }
   return return_mode;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned char L1D_RF_TXPC_IS_CAL( void )
{
   return is_calibrated_backup;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #if IS_CHIP_MT6256
unsigned short L1D_RF_TXPC_GetTemperatureInfoFromBSI( void )
{
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x8A, 0x81170) ); /* CW138, D[17]=0b                                           */
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x02, 0x54000) ); /* CW2, TRX[1:0]=10b(TX mode), MODE[2:0]=010b(stand-by mode) */
   WAIT_TIME_QB( QB_ST0 - QB_ST1 );                         /* wait for the timing between ST0 and ST1                   */
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x01, 0xC0000) ); /* CW1, warm-up mode                                         */
   WAIT_TIME_QB( 350 );
   IMM_RECEIVE_BSI( 0, 0x8A, 0, &(cw138_readback) );        /* read back the temperature information                     */
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x02, 0x10000) );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x8A, 0xA1170) ); /* CW138, D[17]=1b                                           */
   IMM_MODE_END( );

   return (unsigned short) (cw138_readback&0xFFF);
}
   #elif IS_CHIP_MT6280
unsigned short L1D_RF_TXPC_GetTemperatureInfoFromBSI( void )
{
   long cw16;

      #if IS_USE_INTERNAL_TEMP_SENSOR
   cw16 = 0x002E4; /* CW16 : THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
      #else
   cw16 = 0x002E5; /* CW16 : THADC_EXT = 1 (Only External temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
      #endif

   IMM_MODE_BEGIN( IMMMASK_ALL );
      #if IS_CHIP_MT6280_S00
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x01, 0x12201) ); /* CW1  : 2G RX Cal. mode  */
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x25, 0x20730) ); /* CW37 : E1 SW workaround */
   WAIT_TIME_QB( 175 );                                     /* 160us */
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x01, 0x22201) ); /* CW1  : 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x10, cw16   ) ); /* CW16 : trigger measure temperature */
   WAIT_TIME_QB( 20 );                                      /* wait 15us */
   IMM_RECEIVE_BSI( 0, 0x10, 0, &(cw16_readback) );         /* Read back TEMP_MEAS_LATCH[9:0] for measurement result */
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x01, 0x02201) ); /* CW1  : sleep mode       */
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x25, POR_CW37)); /* CW37 : E1 SW workaround */
      #else
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x01, 0x12201) ); /* CW1  : 2G RX Cal. mode  */
   WAIT_TIME_QB( 175 );                                     /* 160us */
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x01, 0x22201) ); /* CW1  : 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x10, cw16   ) ); /* CW16 : trigger measure temperature */
   WAIT_TIME_QB( 30 );                                      /* wait 15+10us */
   IMM_RECEIVE_BSI( 0, 0x10, 0, &(cw16_readback) );         /* Read back TEMP_MEAS_LATCH[9:0] for measurement result */
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW(0x01, 0x02201) ); /* CW1  : sleep mode       */
      #endif
   IMM_MODE_END( );

   return (unsigned short) ((cw16_readback&(0x3FF<<10))>>10);
}
   #elif IS_CHIP_MT6583_MD1
unsigned short L1D_RF_TXPC_GetTemperatureInfoFromBSI( void )
{
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x01, 0x10201) ); /* CW1  : 2G RX Cal. mode  */
   WAIT_TIME_QB( 175 );                                     /* 160us */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x01, 0x20201) ); /* CW1  : 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
   #if IS_USE_INTERNAL_TEMP_SENSOR
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x10, 0x002E4) ); /* CW16 : THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
   #else
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x10, 0x002E5) ); /* CW16 : THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
   #endif
   WAIT_TIME_QB( 30 );                                      /* wait 15+10us */
   IMM_RECEIVE_BSI( 0, 0x10, 0, &(cw16_readback) );         /* Read back TEMP_MEAS_LATCH[9:0] for measurement result */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x01, 0x00201) ); /* CW1  : sleep mode */
   IMM_MODE_END( );

   return (unsigned short) ((cw16_readback&(0x3FF<<10))>>10);
}
   #elif IS_CHIP_MT6572
unsigned short L1D_RF_TXPC_GetTemperatureInfoFromBSI( void )
{
   IMM_MODE_BEGIN( IMMMASK_ALL );
   #if IS_AST3002_SUPPORT
   if( L1D_CheckIfMetaMode() )
      IMM_SEND_BPI( 0x20000 );                              /* Set BSI switch owner to be 2G */
   #endif
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0xC9, 0x08208) ); /* CW201: 2G RX Cal. mode  */
   WAIT_TIME_QB( 175 );                                     /* 160us */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0xC9, 0x10208) ); /* CW201: 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
   #if IS_USE_INTERNAL_TEMP_SENSOR
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x13, 0x01464) ); /* CW19 : THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
   #else
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x13, 0x01465) ); /* CW19 : THADC_EXT = 1 (external temp sensor measurement */
   #endif
   WAIT_TIME_QB( 30 );                                      /* wait 15+10us */
   IMM_RECEIVE_BSI( 0, 0x15, 0, &(cw21_readback) );         /* Read back TEMP_MEAS_LATCH[9:0] for measurement result */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0xC9, 0x00208) ); /* CW201: sleep mode */
   #if IS_AST3002_SUPPORT
   if( L1D_CheckIfMetaMode() )
      IMM_SEND_BPI( 0x00000 );                              /* Set BSI switch owner to be TDD */
   #endif
   IMM_MODE_END( );

   return (unsigned short) ((cw21_readback&(0x3FF<<10))>>10);
}
   #elif IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
unsigned short L1D_RF_TXPC_GetTemperatureInfoFromBSI( void )
{
      #if IS_RF_MT6166
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0xC9, 0x08208) ); /* CW201: 2G RX Cal. mode  */
   WAIT_TIME_QB( 175 );                                     /* 160us */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0xC9, 0x10208) ); /* CW201: 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
            #if IS_USE_INTERNAL_TEMP_SENSOR
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x13, 0x01464) ); /* CW19 : THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
            #else
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x13, 0x01465) ); /* CW19 : THADC_EXT = 1 (external temp sensor measurement */
            #endif
   WAIT_TIME_QB( 30 );                                      /* wait 15+10us */
   IMM_RECEIVE_BSI( 0, 0x15, 0, &(cw21_readback) );         /* Read back TEMP_MEAS_LATCH[9:0] for measurement result */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0xC9, 0x00208) ); /* CW201: sleep mode */
   IMM_MODE_END( );

   return (unsigned short) ((cw21_readback&(0x3FF<<10))>>10);
      #elif IS_RF_MT6165
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x01, 0x14001) ); /* CW201: 2G RX Cal. mode  */
   WAIT_TIME_QB( 175 );                                     /* 160us */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x01, 0x24001) ); /* CW201: 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
   #if IS_USE_INTERNAL_TEMP_SENSOR
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x10, 0x0501E) ); /* CW16 : THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
   #endif
   WAIT_TIME_QB( 30 );                                      /* wait 15+10us */
   IMM_RECEIVE_BSI( 0, 0x08, 0, &(cw8_readback) );          /* Read back TEMP_MEAS_LATCH[9:0] for measurement result */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x01, 0x04000) ); /* CW201: sleep mode */
   IMM_MODE_END( );

   return (unsigned short) ((cw8_readback&(0x7F<<5))>>5);
      #elif IS_RF_MT6169
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x01, 0x09040) ); /* CW1  : 2G RX Cal. mode  */
   WAIT_TIME_QB( 110 );                                     /* 100us */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x01, 0x11040) ); /* CW1  : 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
            #if IS_USE_INTERNAL_TEMP_SENSOR
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0xD2, 0x00000) ); /* CW210: THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
            #else
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0xD2, 0x40000) ); /* CW210: THADC_EXT = 1 (external temp sensor measurement */
            #endif
   WAIT_TIME_QB( 30 );                                      /* wait 15+10us */
   IMM_RECEIVE_BSI( 0, 0xD2, 0, &(cw210_readback) );        /* Read back TEMP_MEAS_LATCH[9:0] for measurement result */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW(0x01, 0x01040) ); /* CW1  : sleep mode */
   IMM_MODE_END( );

   return (unsigned short) ((cw210_readback&(0x3FF<<8))>>8);
         #elif IS_RF_MT6176
   unsigned short thadc_sensor = 0;//MML1_RF_GetMultiRatRfThermalSensorDefaultType(); /* 0:internal THADC sensor ; 1: external THADC sensor */
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x40200));  /* CW1  : 2G RX Cal. mode  */
   WAIT_TIME_QB( 110 );                                         /* 100us */
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x80200));  /* CW1  : 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x44, (((thadc_sensor&0x1)<<19)|0x00000)));   /* CW68: THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
   WAIT_TIME_QB( 30 );                                      /* wait 15+10us */
   MML1_RF_IMM_READ_BSI(MML1_RF_RFIC1, 0x44, &(cw68_readback) );
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x10200));  /* CW1  : sleep mode */

   return (unsigned short) (cw68_readback&0x3FF);
      #elif IS_RF_MT6179
   unsigned short thadc_sensor = 0;//MML1_RF_GetMultiRatRfThermalSensorDefaultType(); /* 0:internal THADC sensor ; 1: external THADC sensor */
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x40200));  /* CW1  : 2G RX Cal. mode  */
   WAIT_TIME_QB( 110 );                                         /* 100us */
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x80200));  /* CW1  : 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x44, (((thadc_sensor&0x1)<<19)|0x00000)));   /* CW68: THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
   WAIT_TIME_QB( 30 );                                      /* wait 15+10us */
   MML1_RF_IMM_READ_BSI(MML1_RF_RFIC1, 0x44, &(cw68_readback) );
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x10200));  /* CW1  : sleep mode */

   return (unsigned short) (cw68_readback&0x3FF);
      #elif IS_RF_MT6177L
   unsigned short thadc_sensor = 0;//MML1_RF_GetMultiRatRfThermalSensorDefaultType(); /* 0:internal THADC sensor ; 1: external THADC sensor */
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x40200));  /* CW1  : 2G RX Cal. mode  */
   WAIT_TIME_QB( 110 );                                         /* 100us */
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x80200));  /* CW1  : 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x44, (((thadc_sensor&0x1)<<19)|0x00000)));   /* CW68: THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
   WAIT_TIME_QB( 30 );                                      /* wait 15+10us */
   MML1_RF_IMM_READ_BSI(MML1_RF_RFIC1, 0x44, &(cw68_readback) );
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x10200));  /* CW1  : sleep mode */

   return (unsigned short) (cw68_readback&0x3FF);
      #elif IS_RF_MT6177M
   unsigned short thadc_sensor = 0;//MML1_RF_GetMultiRatRfThermalSensorDefaultType(); /* 0:internal THADC sensor ; 1: external THADC sensor */
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x40200));  /* CW1  : 2G RX Cal. mode  */
   WAIT_TIME_QB( 110 );                                         /* 100us */
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x80200));  /* CW1  : 2G RX Burst mode */
   WAIT_TIME_QB( 60 );
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x44, (((thadc_sensor&0x1)<<19)|0x00000)));   /* CW68: THADC_EXT = 0 (Only Internal temp sensor measurement updates TXL_INIT_S bus for SX Calibration) */
   WAIT_TIME_QB( 30 );                                      /* wait 15+10us */
   MML1_RF_IMM_READ_BSI(MML1_RF_RFIC1, 0x44, &(cw68_readback) );
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW(0x01, 0x10200));  /* CW1  : sleep mode */

   return (unsigned short) (cw68_readback&0x3FF);
      #endif
}
   #endif
#endif

#if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
static short L1D_RF_TXPC_CL_RecordAndUpdateDAC( const short dac_ori, unsigned char rf_band, short arfcn, short slot, char is_EPSK )
{
   const sTXPC_ADCDATA    *p_adc;
   const sTXPC_CL_DB_DATA *p_db_data = &l1d_rf.txpc.cl_db.data[0];
         sTXPC_SETUP      *p_setup   = &l1d_rf.txpc.setup;
         unsigned short    adc_left, adc_right, db_idx;
         short             left_2_target_dac, left_2_right_dac, ratio;

   if( (l1d_rf.txpc_type == TXPC_NO_CONTROL_TYPE ) ||
       (l1d_rf.txpc_type == TXPC_AUXADC_OPEN_TYPE) ||
       (l1d_rf.txpc_type == TXPC_BSI_OPEN_TYPE   ) ||
       (l1d_rf.txpc_mode != TXPC_NORMAL_MODE     ) )
      return dac_ori;

   /* --------- Record TX setup --------- */
   #if IS_EPSK_TX_SUPPORT
   if( is_EPSK == 1 )  /* this slot is epsk */
   {  p_adc = TXADC_Data_EPSK[(int)rf_band];
   }
   else           /* this slot is gmsk */
   #endif
   {  p_adc = TXADC_Data[(int)rf_band];
   }

   #if IS_RF_MT6162 || IS_RF_MT6163
   if( is_EPSK )
   {  adc_right = p_adc->data[p_setup->power_idx_right];
      adc_left  = adc_right - TXPC_RF_ADC_SLOPE*2;
      p_setup->adc_interval[slot] = adc_right - adc_left;
      p_setup->target_adc[slot] = adc_right - p_setup->power_dac_target * (TXPC_RF_ADC_SLOPE>>3);
      left_2_right_dac = 0;
   }
   else
   #endif
   {  /* Do not apply TXPC to GMSK because of OH HW issues during GMSK power read-back */
      /* set adc_interval to 1 to avoid divide-by-zero problem */
      if( L1D_RF_TXPC_CL_Check_OHGMSK()==1 )
      {
         p_setup->adc_interval[slot] = 1;
         return dac_ori;
      }
      else
      {
         adc_right = p_adc->data[p_setup->power_idx_right  ];
         adc_left  = p_adc->data[p_setup->power_idx_right-1];

         /* Compensate adc left/right here if considering sub-band weight & bat/temp weight */

         if( adc_left == adc_right )
         {  p_setup->adc_interval[slot] = 1; } /* Avoid divide-by-zero problem */
         else
         {  p_setup->adc_interval[slot] = adc_right - adc_left;   }

         left_2_target_dac = p_setup->power_dac_target - p_setup->power_dac_left;
         left_2_right_dac  = p_setup->power_dac_right  - p_setup->power_dac_left;

         if( left_2_right_dac == 0 )
         {
            /* According to computation results from L1D_RF_TXPC_RecordParam(),
               this only happens when all TX PCL abnormally have identical DACs.
               Return dac_ori to avoid divide-by-zero & strange output power. */
            p_setup->target_adc[slot] = (short)adc_left;
            return dac_ori;
         }

         p_setup->target_adc[slot] = (short)(adc_left + p_setup->adc_interval[slot] * left_2_target_dac / left_2_right_dac);
      }
   }
   /* --------- Compute New DAC --------- */

   for( db_idx = 0; db_idx < TXPC_DB_NUM; db_idx++, p_db_data++ )
   {  if( p_db_data->arfcn == arfcn )
         break;
   }

   if( db_idx != TXPC_DB_NUM )
   {  /* DB has previous compensation record on this ARFCN */

   #if IS_EPSK_TX_SUPPORT
      if( is_EPSK == 1 )
      {  /* EPSK */
         ratio = p_db_data->dac_offset_ratio_E[slot];
         return L1D_RF_TXPC_COMPUTE_DAC_EPSK( dac_ori, slot, ratio, left_2_right_dac );
      }
      else
   #endif
      {  /* GMSK */
         ratio = p_db_data->dac_offset_ratio_G[slot];
         return L1D_RF_TXPC_ComputeVAPC_DAC( dac_ori, ratio, left_2_right_dac );
      }
      /* To avoid incorrect power compensation due to target TX power change */
      // ratio = (p_setup->target_adc[slot] == l1d_rf.txpc.cl_compute.target_adc[slot])? ratio : (ratio>>1);
   }
   else
   {  return dac_ori;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void  L1D_RF_TXPC_CL_GetSubband( int rf_band, unsigned short *buff, char is_EPSK )
{  /* For NVRAM to get L1 Default values for 1st boot-up (detector sub-band compensation value) */
   const sRAMPDATA      *band;
   int n;

   #if IS_EPSK_TX_SUPPORT
   if( is_EPSK == 1 )
   {  band = RampData_EPSK[rf_band];
   }
   else
   #endif
   {  band = RampData[rf_band];
      (void)is_EPSK;
   }

   if( band != 0 )
   {
      for( n = 0; n < ARFCN_SECTION_NUM-1; n++ )
      {  *buff++ = band->arfcn_weight[n].hi_weight;  }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_SetAllCalADC_Ptr( sTXPC_L1CAL *calibrated, char is_EPSK )
{  /* For L1D to get NVRAM calibration data at boot-up (detector target value by PCL) */
   int i;

   for( i = FrequencyBand850; i < FrequencyBandCount; i++ )
   {
   #if IS_EPSK_TX_SUPPORT
      if( is_EPSK == 1 )
      {  TXADC_Data_EPSK[i] = &calibrated->adc[i];
      }
      else
   #endif
      {  TXADC_Data[i]= &calibrated->adc[i];
         (void)is_EPSK;
      }
   }
   /* back up data for TXPC in META */
   is_calibrated_backup = calibrated->is_calibrated;
   L1D_RF_TXPC_CL_BackupAllCalADC();
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_SetAllCalADC( sTXPC_L1CAL *calibrated, char is_EPSK )
{
   int i, j;

   for( i=FrequencyBand850; i<FrequencyBandCount; i++ )
   {
   #if IS_EPSK_TX_SUPPORT
      if( is_EPSK == 1 )
      {
         for( j=0; j<16; j++ )
         {
            TXADC_Data_EPSK[i]->data[j] = calibrated->adc[i].data[j];
         }
      }
      else
   #endif
      {
         for( j=0; j<16; j++ )
         {
            TXADC_Data[i]->data[j] = calibrated->adc[i].data[j];
         }
         (void)is_EPSK;
      }
   }
   /* back up data for TXPC in META */
   is_calibrated_backup = calibrated->is_calibrated;
   L1D_RF_TXPC_CL_BackupAllCalADC();
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned short L1D_RF_TXPC_CL_GetOneADC( int rf_band, int power_in_dBm, char is_EPSK )
{
   int idx = (power_in_dBm - LOWEST_TX_POWER[rf_band])/2;

   #if IS_EPSK_TX_SUPPORT
   if( is_EPSK == 1 )
   {  return TXADC_Data_EPSK[rf_band]->data[idx];  }
   else
   #endif
   {  return TXADC_Data[rf_band]->data[idx];       }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_SetAllCalTEMP_Ptr( sTXPC_L1CAL *calibrated, char is_EPSK )
{  /* For L1D to get NVRAM calibration data at boot-up (detector temperature compensation value) */
   int i;

   /* start from Band850 */
   for( i = FrequencyBand850; i < FrequencyBandCount; i++ )
   {
   #if IS_EPSK_TX_SUPPORT
      if( is_EPSK == 1 )
      {  TXTEMP_Data_EPSK[i] = &calibrated->temp[i];
      }
      else
   #endif
      {  TXTEMP_Data[i]= &calibrated->temp[i];
         (void)is_EPSK;
      }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_SetAllCalTEMP( sTXPC_L1CAL *calibrated, char is_EPSK )
{  /* For L1D to get NVRAM calibration data at boot-up (detector temperature compensation value) */
   int i, j;

   /* start from Band850 */
   for( i = FrequencyBand850; i < FrequencyBandCount; i++ )
   {
   #if IS_EPSK_TX_SUPPORT
      if( is_EPSK == 1 )
      {  
         for(j=0; j<8; j++)
         {
            TXTEMP_Data_EPSK[i]->data[j] = calibrated->temp[i].data[j];
         }
      }
      else
   #endif
      {
         for(j=0; j<8; j++)
         {
            TXTEMP_Data[i]->data[j] = calibrated->temp[i].data[j];
         }   
         (void)is_EPSK;
      }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned char L1D_RF_TXPC_CL_Check_OHGMSK( void )
{
   unsigned char return_value = 0;
   #if IS_RF_MT6162
   /* if the GMSK detector does not work, return 1; otherwise, return 0 */
//   if( L1D_RF_Get6162Version() == 1 )
   {  return_value = 1;  }
   #endif
   return return_value;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_Update_TXADC_Subband_Data( unsigned short read_back_data, short arfcn, char rf_band, unsigned char mod_type )
{
   sRAMPDATA *band;
   unsigned short rf_band_idx = (unsigned short)rf_band;
   signed short   left_arfcn_idx, mid_arfcn_idx, right_arfcn_idx;

   left_arfcn_idx = 0;
   right_arfcn_idx = (mod_type == 0) ? weight_section_end_idx[rf_band_idx] : weight_section_end_idx_EPSK[rf_band_idx];

   #if IS_EPSK_TX_SUPPORT
   if( mod_type )
   {  band = RampData_EPSK[rf_band_idx];  }
   else
   #endif
   {
      if( L1D_RF_TXPC_CL_Check_OHGMSK()==1 )
      {  return;  }
      else
      {  band = RampData[rf_band_idx];  }
   }

   if(weight_section_end_idx[rf_band_idx]<0)  // no entry, not found
   {  return;  }
   else
   {
      while( left_arfcn_idx < right_arfcn_idx )
      {
         mid_arfcn_idx = (left_arfcn_idx + (right_arfcn_idx)) >> 1;
         if(arfcn <= band->arfcn_weight[mid_arfcn_idx].max_arfcn)
         {  right_arfcn_idx = mid_arfcn_idx;  }
         else
         {  left_arfcn_idx = mid_arfcn_idx+1;  }  // left+1 so that the next region can be covered with mid=(left+right)>>1
      }
      band->arfcn_weight[right_arfcn_idx].hi_weight = read_back_data;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned short L1D_RF_TXPC_CL_GetDetReadBack( unsigned char is_compensated, unsigned short slot_idx )
{
   short return_value = 0;
   #if IS_RF_MT6162 || IS_RF_MT6163
   return_value = (is_compensated) ? (l1d_rf2.compensated_read_back[slot_idx]) : (l1d_rf2.real_read_back[slot_idx]);
   #endif
   return return_value;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

short L1D_TXPC_CL_Detector_Subband_Compensation( unsigned char mod_type )
{
   short detector_compensation = 0;
   unsigned short   n;
   const sRAMPDATA *band;
   static const sARFCN_SECTION   *weight;   /* Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT */
          const sTXPC_CL_COMPUTE *p_compute = &l1d_rf.txpc.cl_compute;

   /* Should enter this function ONLY when l1d_rf.txpc_mode == TXPC_NORMAL_MODE */

   if( (l1d_rf.txpc_type == TXPC_BSI_CLOSED_TYPE   ) ||
       (l1d_rf.txpc_type == TXPC_AUXADC_CLOSED_TYPE) ) /* detector sub-band compensation */
   {
   #if IS_EPSK_TX_SUPPORT
      if( mod_type )
      {
         band = RampData_EPSK[(int)p_compute->rf_band];
         weight = WeightARFCN_BinarySearch( (p_compute->arfcn&0x3FF), p_compute->rf_band , band->arfcn_weight, 1 );
      }
      else
   #endif
      {
         (void)mod_type;
         if( L1D_RF_TXPC_CL_Check_OHGMSK()==1 )
         {  weight = 0;  }
         else
         {
            band = RampData[(int)p_compute->rf_band];
            weight = WeightARFCN_BinarySearch( (p_compute->arfcn&0x3FF), p_compute->rf_band , band->arfcn_weight, 0 );
         }
      }

      if( weight )
      {
         n = weight->hi_weight;
         detector_compensation = (signed short) (n-(1<<TXPC_CL_DET_RES));
      }
      else /* no entry, not found */
      {  detector_compensation = 0;  }
   }
   l1d_rf.txpc_trc.subband_compensation = detector_compensation;

   return detector_compensation;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

short L1D_TXPC_CL_Detector_Temperature_Compensation( unsigned char mod_type )
{
   short detector_compensation = 0;
   short temp_idx = l1d_rf.txpc.temp_info.idx;
   static const sTXPC_TEMPDATA   *p_temp;
          const sTXPC_CL_COMPUTE *p_compute = &l1d_rf.txpc.cl_compute;

   /* Should enter this function ONLY when l1d_rf.txpc_mode == TXPC_NORMAL_MODE */

   if( (l1d_rf.txpc_type == TXPC_BSI_CLOSED_TYPE   ) ||
       (l1d_rf.txpc_type == TXPC_AUXADC_CLOSED_TYPE) ) /* detector temperature compensation */
   {
   #if IS_EPSK_TX_SUPPORT
      if( mod_type )
      {  p_temp = TXTEMP_Data_EPSK[(int)p_compute->rf_band];   }
      else
   #endif
      {
         (void)mod_type;
         if( L1D_RF_TXPC_CL_Check_OHGMSK()==1 )
         {  p_temp = 0;                                     }
         else
         {  p_temp = TXTEMP_Data[(int)p_compute->rf_band];  }
      }

      if( p_temp ) /* p_temp->data[l1d_rf.txpc.temp_info.idx] : detector value at current temperature */
      {            /* p_temp->data[2]                         : detector value at normal temperature  */
         if( temp_idx == 0 )
            detector_compensation = (signed short)( p_temp->data[0] + (p_temp->data[1]-p_temp->data[0])*(L1D_RF_TXPC_GetTemperatureInfo(2)-TEMP_IDX[0])/(TEMP_IDX[1]-TEMP_IDX[0]) );
         else
            detector_compensation = (signed short)( p_temp->data[temp_idx-1] + (p_temp->data[temp_idx]-p_temp->data[temp_idx-1])*(L1D_RF_TXPC_GetTemperatureInfo(2)-TEMP_IDX[temp_idx-1])/(TEMP_IDX[temp_idx]-TEMP_IDX[temp_idx-1]) );
         detector_compensation -= p_temp->data[2];
         /*********************************************************************************************
          detector_compensation - p_temp->data[temp_idx-1]   current_temperature - TEMP_IDX[temp_idx-1]
         ------------------------------------------------- = ------------------------------------------
         p_temp->data[temp_idx] - p_temp->data[temp_idx-1]    TEMP_IDX[temp_idx] - TEMP_IDX[temp_idx-1]
         *********************************************************************************************/
      }
      else /* no entry, not found */
      {
         detector_compensation = 0;
      }
   }
   l1d_rf.txpc_trc.temperature_compensation = detector_compensation;

   return detector_compensation;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_Read_RF_Power( long *sample_array, unsigned char tx_slot, unsigned char mod_type )
{
   #if IS_RF_MT6162 || IS_RF_MT6163
   signed short i;
   signed short n = 0;
   unsigned char is_epsk = 0;


   for( i=0; i<TXPC_SLOT_MAX; i++ )
   {
      if( ((tx_slot>>i)&0x1) )
      {
         is_epsk = (mod_type>>i) & 0x1;
         L1D_RF_GetImmediateBSI( TX_GAIN_READ_ADDRESS[n], &read_back );
         l1d_rf2.real_read_back[i] = (unsigned short)(read_back&0xFFF);
         if( l1d_rf.txpc_mode == TXPC_NORMAL_MODE )
         {  /* we need to compensate the detector read-back value ONLY in the normal mode */
            read_back -= ( L1D_TXPC_CL_Detector_Subband_Compensation( is_epsk ) +
                           L1D_TXPC_CL_Detector_Temperature_Compensation( is_epsk ) );
         }
         l1d_rf2.compensated_read_back[i] = (unsigned short)(read_back&0xFFF);
         sample_array[i] = (long)((read_back&0xFFF)<<TXPC_RD_ADC_RES); /* gain_rf(dB) = (gainrf_read(DAC)-2560)/32 */
         n++;
      }
   }
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_BackUpSubband( int rf_band, char is_EPSK )
{
   sRAMPDATA *band;
   int n;

   if( (l1d_rf.txpc_type==TXPC_AUXADC_CLOSED_TYPE) || (l1d_rf.txpc_type==TXPC_BSI_CLOSED_TYPE) )
   {  /* back up the subband data in the TXPC closed type only */
   #if IS_EPSK_TX_SUPPORT
      if( is_EPSK == 1 )
      {  band = RampData_EPSK[rf_band];  }
      else
   #endif
      {
         if( L1D_RF_TXPC_CL_Check_OHGMSK() == 1 )
         {  return;  }
         else
         {
            band = RampData[rf_band];
            (void)is_EPSK;
         }
      }
      if( band != 0 )
      {
         for( n = 0; n < ARFCN_SECTION_NUM-1; n++ )
         {  band->arfcn_weight[n].low_weight = band->arfcn_weight[n].hi_weight;  }
      }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_RestoreSubband( void )
{
   sRAMPDATA *band;
   int n, rf_band;

   if( (l1d_rf.txpc_type==TXPC_AUXADC_CLOSED_TYPE) || (l1d_rf.txpc_type==TXPC_BSI_CLOSED_TYPE) )
   {  /* restore the subband data in the TXPC closed type only */
      for( rf_band = 1; rf_band < FrequencyBandCount; rf_band++ )
      {
         if( L1D_RF_TXPC_CL_Check_OHGMSK() == 0 )
         {
            band = RampData[rf_band];
            for( n = 0; n < ARFCN_SECTION_NUM-1; n++ )
            {  band->arfcn_weight[n].hi_weight = band->arfcn_weight[n].low_weight;  }
         }
   #if IS_EPSK_TX_SUPPORT
         band = RampData_EPSK[rf_band];
         for( n = 0; n < ARFCN_SECTION_NUM-1; n++ )
         {  band->arfcn_weight[n].hi_weight = band->arfcn_weight[n].low_weight;  }
   #endif
      }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_BackupAllCalADC( void )
{
   int i, j;

   if( (l1d_rf.txpc_type==TXPC_AUXADC_CLOSED_TYPE) || (l1d_rf.txpc_type==TXPC_BSI_CLOSED_TYPE) )
   {  /* back up the ADC data in the TXPC closed type only */
      for( i = 1; i < FrequencyBandCount; i++ )
      {
         for( j = 0; j < 16; j++ )
         {
            TXADC_Data_LSB_Backup[i-1][j] = (unsigned char) (TXADC_Data[i]->data[j] & 0xFF);
            if( (j&0x1) == 0 )
            {  TXADC_Data_MSB_Backup[i-1][j/2] = (unsigned char) ( ((TXADC_Data[i]->data[j+1]&0xF00)>>4) | ((TXADC_Data[i]->data[j]&0xF00)>>8) );  }
         }
   #if IS_EPSK_TX_SUPPORT
         for( j = 0; j < 16; j++ )
         {
            TXADC_Data_LSB_Backup_EPSK[i-1][j] = (unsigned char) (TXADC_Data_EPSK[i]->data[j] & 0xFF);
            if( (j&0x1) == 0 )
            {  TXADC_Data_MSB_Backup_EPSK[i-1][j/2] = (unsigned char) ( ((TXADC_Data_EPSK[i]->data[j+1]&0xF00)>>4) | ((TXADC_Data_EPSK[i]->data[j]&0xF00)>>8) );  }
         }
   #endif
      }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_RestoreAllCalADC( void )
{
   unsigned char lsb_data, msb_data;
   int i, j;

   if( (l1d_rf.txpc_type==TXPC_AUXADC_CLOSED_TYPE) || (l1d_rf.txpc_type==TXPC_BSI_CLOSED_TYPE) )
   {  /* restore the ADC data in the TXPC closed type only */
      for( i = 1; i < FrequencyBandCount; i++ )
      {
         for( j = 0; j < 16; j++ )
         {
            lsb_data = TXADC_Data_LSB_Backup[i-1][j];
            msb_data = ((j&0x1)==0) ? (TXADC_Data_MSB_Backup[i-1][j/2]&0x0F) : ((TXADC_Data_MSB_Backup[i-1][j/2]&0xF0)>>4);
            TXADC_Data[i]->data[j] = (unsigned short) ((msb_data<<8) | (lsb_data));
         }
   #if IS_EPSK_TX_SUPPORT
         for( j = 0; j < 16; j++ )
         {
            lsb_data = TXADC_Data_LSB_Backup_EPSK[i-1][j];
            msb_data = ((j&0x1)==0) ? (TXADC_Data_MSB_Backup_EPSK[i-1][j/2]&0x0F) : ((TXADC_Data_MSB_Backup_EPSK[i-1][j/2]&0xF0)>>4);
            TXADC_Data_EPSK[i]->data[j] = (unsigned short) ((msb_data<<8) | (lsb_data));
         }
   #endif
      }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT */

#if IS_TX_POWER_CONTROL_SUPPORT
void L1D_RF_TXPC_RecordParam( unsigned char scenario, const sRAMPDATA* band, unsigned short weight, short temp_idx, char is_rollback, short target_dac )
{
   sTXPC_SETUP *p_setup    = &l1d_rf.txpc.setup;
   short        temp_right = (temp_idx == 0)? 1 : temp_idx;

   if( (l1d_rf.txpc_type == TXPC_NO_CONTROL_TYPE)  ||
       (l1d_rf.txpc_mode != TXPC_NORMAL_MODE)      )
       return;

   switch( scenario )
   {
      case 0: /* L1D_RF_GetSData_ST2      */
      case 1: /* L1D_RF_SetTxPowerLevel   */
      {
         p_setup->power_dac_target = target_dac;

         if( is_rollback == 1 )
         {  break; } /* For non-zero rollback_dac, already got idx & left/right dac in L1D_RF_PowerRollback() */

         /* No break for zero-rollback_dac case to set idx & left/right dac */
      }
      case 2: /* L1D_RF_PowerRollback     */
      {
         for( ; temp_right > 1; temp_right-- )
         {  /* In order to get the biggest index such that band->power[index] != band->power[index-1] */
            // In case the neighboring PCL dac may be equal
            if( band->power[temp_right] != band->power[temp_right-1] )
               break;
         }

         p_setup->power_idx_right = temp_right;
         p_setup->power_dac_right = (short)((band->power[temp_right  ] * weight)>>14);
         p_setup->power_dac_left  = (short)((band->power[temp_right-1] * weight)>>14);
         break;   /* Will run into case 1 latter to set p_setup->power_dac_target */
      }
   #if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
      case 3: /* EPSK, L1D_RF_PowerRollback */
      {
         p_setup->power_idx_right  = temp_idx;
         p_setup->power_dac_target = target_dac; /* borrow this var. to store roll-back power: n/8 dB */
         break;
      }
   #endif
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

short L1D_RF_TXPC_RecUpdateAPCDAC( const short dac_ori, unsigned char rf_band, short arfcn, short slot, char is_EPSK )
{
   switch( l1d_rf.txpc_type )
   {
   #if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
      case TXPC_AUXADC_CLOSED_TYPE:
      case TXPC_BSI_CLOSED_TYPE:
      {
      #if IS_EPSK_TX_GAIN_CONTROL_SUPPORT
         if( is_EPSK == 1 )
         {  return dac_ori;   }
         else
         {  return L1D_RF_TXPC_CL_RecordAndUpdateDAC( dac_ori, rf_band, arfcn, slot, is_EPSK ); }
      #else
         return L1D_RF_TXPC_CL_RecordAndUpdateDAC( dac_ori, rf_band, arfcn, slot, is_EPSK );
      #endif
      }
   #endif
      default:
      {  (void)rf_band; (void)arfcn; (void)slot; (void)is_EPSK;
         break;
      }
   }
   return dac_ori;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_Update_TemperatureInfo( void )
{
   int rf_mtemp;

   if (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE)
        return;

   rf_mtemp = (int)(l1d_rf.txpc.temp_info.value*1000); /* convert degreeC to m-degreeC */
   if(rf_mtemp<=BBTXParameters.apc_bat_low_temperature)
   {  l1d_rf.bat_temp = 0;
   }
   else  if(rf_mtemp>=BBTXParameters.apc_bat_high_temperature)
   {  l1d_rf.bat_temp = 2;
   }
   else
   {  l1d_rf.bat_temp = 1;
   }

   L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,999,rf_mtemp);
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

short L1D_RF_TXPC_ComputeVAPC_DAC( const short dac_ori, short ratio, short dac_diff )
{  /* dac_diff: approximated APC DAC increment needed for increasing 2 dBm of TX power */
   short dac_offset  = (short)((ratio*dac_diff + TXPC_DB_ROUNDING) >> TXPC_DB_RES);
   short dac_new     = dac_ori + dac_offset;

   if( dac_new > 1023 )
      dac_new = 1023;
   else if( dac_new < 0 )
      dac_new = 0;

   return dac_new;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #if IS_EPSK_TX_SUPPORT
      #if IS_EPSK_TX_GAIN_CONTROL_SUPPORT
static short L1D_RF_TXPC_RecUpdateGain( const short dac_ori, unsigned char rf_band, short arfcn, short slot )
{
   switch( l1d_rf.txpc_type )
   {
         #if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
      case TXPC_AUXADC_CLOSED_TYPE:
      case TXPC_BSI_CLOSED_TYPE:
      {
         return L1D_RF_TXPC_CL_RecordAndUpdateDAC( dac_ori, rf_band, arfcn, slot, 1 );
      }
         #endif
         #if IS_TXPC_OL_BSI_SUPPORT || IS_TXPC_OL_AUXADC_SUPPORT
      case TXPC_BSI_OPEN_TYPE:
      case TXPC_AUXADC_OPEN_TYPE:
      {
         return L1D_RF_TXPC_OL_RecordAndUpdateGain( dac_ori, rf_band, slot );
      }
         #endif
      default:
      {  return dac_ori;   }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
      #endif   /* IS_EPSK_TX_GAIN_CONTROL_SUPPORT */
      #if IS_RF_MT6256RF
short L1D_RF_TXPC_ComputePGA_GAIN( const short gain_ori, short slot, short ratio, short gain_diff )
{
   static unsigned char last_gain_reverse_rf[TXPC_SLOT_MAX] = { 99, 99, 99, 99 };

   long  gain_offset  = (long)(ratio * gain_diff);
   short gain_new     = gain_ori + (short)((gain_offset + TXPC_DB_ROUNDING) >> TXPC_DB_RES);
   short gain_reverse = 291 - gain_new;    // 291=72*4+3, max. EPSK APC DAC for MT6256
   short delta_bb_gain;

   if( gain_reverse > 291 )
      gain_reverse = 291;
   else if( gain_reverse < 0 )
      gain_reverse = 0;

         #if IS_CHIP_MT6256_S00
   (void)last_gain_reverse_rf[0];
   (void)delta_bb_gain;
   l1d_rf2.is_alt_bb_gain = 0;
         #else
   delta_bb_gain = gain_reverse - (short)(last_gain_reverse_rf[slot] << 2);

   /* Record into l1d_rf2.is_alt_bb_gain whether BB PGA gain 4~7 is used */
   if( delta_bb_gain >= 0 && delta_bb_gain <= TXPC_BB_PGA_GAIN_MAX )
   {  /* Prefer setting RF PGA gain to the same value as in the previous frame */
      l1d_rf2.is_alt_bb_gain = (delta_bb_gain>3) ? 1 : 0;
   }
   else if( (gain_reverse>>2) > 0 )
   {  /* Changing RF PGA gain is inevitable.
         Prefer setting BB PGA gain to 2~5 instead of to 0, 1, 6, or 7
         in order to reduce chances of changing RF PGA gain in the following TXPC tracking */
      l1d_rf2.is_alt_bb_gain = ((gain_reverse&0x3)<2) ? 1 : 0;
   }
   else /* RF PGA gain == 0 */
   {
      l1d_rf2.is_alt_bb_gain = 0;
   }
         #endif

   L1D_Setup_BB_TxPower( gain_reverse, l1d_rf2.is_alt_bb_gain );

   last_gain_reverse_rf[slot] = l1d_rf2.is_alt_bb_gain ? ((gain_reverse>>2)-1) : (gain_reverse>>2);
//   l1d_rf2.tx_gain_setting[slot] = (unsigned short)gain_reverse;  /* For trace output */

   return (291 - gain_reverse);  // return un-reversed gain
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
      #elif IS_RF_MT6162 || IS_RF_MT6163
short L1D_RF_TXPC_Compute_OH_PA_GAIN( const short dac_ori, short ratio )
{
   short dac_offset = (short)((ratio*TXPC_RF_PA_GAIN_SLOPE*2 + TXPC_DB_ROUNDING) >> TXPC_DB_RES);

   return (dac_ori + dac_offset);
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
      #elif IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
short L1D_RF_TXPC_Compute_OrionH_Remaining_GAIN( const short dac_ori, short ratio )
{
   short dac_offset = (short)((ratio*2 + (1<<((TXPC_DB_RES-8)-1)) ) >> (TXPC_DB_RES-8)); //MT6280 operate @dB domain

   return (dac_ori + dac_offset); //dac_ori:S7.8
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
      #endif/* IS_RF_MT6256RF */
   #endif   /* IS_EPSK_TX_SUPPORT */
   #if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6256RF || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
void L1D_RF_GetRFTemperatureIdxAndValue( short temp_dac )
{  /* calculate the temperature information */
   short temp_idx, temp_value, i;
   short idx_home, idx_away;
   unsigned short  TEMP_DAC[8];
   sTXPC_TEMP_INFO *p_temp_info = &l1d_rf.txpc.temp_info;
   MMRF_TemperatureInfo_T intpl_result;
   MMRF_TempDac_T temp_dac_for_MMRF;

   for( i=0; i<8; i++ )
      #if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__) && (!defined(__MULTI_RAT_AFC_TADC_SHARE_SUPPORT__))
   {  TEMP_DAC[i] = U_TEMP_DAC[i];            }
      #else
   {  TEMP_DAC[i] = TXTEMP_Data[0]->data[i];  }
      #endif

      #if IS_RF_MT6162 || IS_RF_MT6163
   if(temp_dac>=TEMP_DAC[3])
   {  if(temp_dac>=TEMP_DAC[1])
      {  if(temp_dac>=TEMP_DAC[0])
            temp_idx = 0;
         else
            temp_idx = 1;
      }
      else
      {  if(temp_dac>=TEMP_DAC[2])
            temp_idx = 2;
         else
            temp_idx = 3;
      }
   }
   else
   {  if(temp_dac>=TEMP_DAC[5])
      {  if(temp_dac>=TEMP_DAC[4])
            temp_idx = 4;
         else
            temp_idx = 5;
      }
      else
      {  if(temp_dac>=TEMP_DAC[6])
            temp_idx = 6;
         else
            temp_idx = 7;
      }
   }
      #endif


      #if IS_RF_MT6256RF || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   if(temp_dac<=TEMP_DAC[3])
   {  if(temp_dac<=TEMP_DAC[1])
      {  if(temp_dac<=TEMP_DAC[0])
            temp_idx = 0;
         else
            temp_idx = 1;
      }
      else
      {  if(temp_dac<=TEMP_DAC[2])
            temp_idx = 2;
         else
            temp_idx = 3;
      }
   }
   else
   {  if(temp_dac<=TEMP_DAC[5])
      {  if(temp_dac<=TEMP_DAC[4])
            temp_idx = 4;
         else
            temp_idx = 5;
      }
      else
      {  if(temp_dac<=TEMP_DAC[6])
            temp_idx = 6;
         else
            temp_idx = 7;
      }
   }
      #endif

   if( temp_idx==0 )
   {
      idx_away = 0;
      idx_home = 1;
   }
   else if( temp_idx==7 )
   {
      idx_away = 7;
      idx_home = 6;
   }
   else
   {
      idx_away = temp_idx-1;
      idx_home = temp_idx;
   }

   if( TEMP_DAC[idx_away]==TEMP_DAC[idx_home] )
   {
      /* TEMP_DAC[] from NVRAM abnormal. Don't do interpolation to avoid divide-by-zero! */
      if( TEMP_DAC[temp_idx]==TEMP_DAC[TEMP_IDX_DEFAULT] )
      {  temp_idx = TEMP_IDX_DEFAULT;  } /* Set temperature to default 20oC */

      temp_value = TEMP_IDX[temp_idx];
   }
   else
   {  temp_value = TEMP_IDX[temp_idx]+(TEMP_IDX[idx_away]-TEMP_IDX[idx_home])*(temp_dac-TEMP_DAC[temp_idx])/(TEMP_DAC[idx_away]-TEMP_DAC[idx_home]);
      
      #if IS_RF_MT6179 || IS_RF_MT6176 || IS_RF_MT6177L || IS_RF_MT6177M
   if( rfic_flags_for_scheduleread == L1D_TX )
   {
      for( i=0; i<L1D_TYPE_END; i++ )
      {  temp_dac_for_MMRF.dac[i] = temp_dac;  }
      
      // Use MMRF's API to calculate temperature info
      MML1_RF_CALCULATE_TEMPER_INFO( &temp_dac_for_MMRF, &intpl_result );
      
      // We only use TX chip's DAC, so we don't need 2nd dac result
      temp_idx   = intpl_result.TempInfo[0].temp_index;
      temp_value = intpl_result.TempInfo[0].temp_degree_Celsius;
   }
   else
   {
      temp_dac   = p_temp_info->adc;
      temp_idx   = p_temp_info->idx;
      temp_value = p_temp_info->value;
   }
      #endif
   }

   /************************************************************************************
             temp_value - TEMP_IDX[temp_idx]               temp_dac - TEMP_DAC[temp_idx]
   ----------------------------------------- = -----------------------------------------
   TEMP_IDX[temp_idx-1] - TEMP_IDX[temp_idx]   TEMP_DAC[temp_idx-1] - TEMP_DAC[temp_idx]
   *************************************************************************************/

   p_temp_info->adc   = temp_dac;
   p_temp_info->idx   = temp_idx;
   p_temp_info->value = temp_value;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif /* IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6256RF || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 */
#endif      /* IS_TX_POWER_CONTROL_SUPPORT */

/*===============================================================================*/
/* short  L1D_RF_SetTxPowerLevel( int rf_band, int arfcn, short power_dbm )      */
/*===============================================================================*/
/* rf_band   : RF Band. (3:GSM, 4:DCS, 5:PCS)                                    */
/* arfcn     : ARFCN number                                                      */
/* power_dbm : Request TX power level in dBm                                     */
/* mod_type  : 0:GMSK 1:EPSK                                                     */
/* return    : Txpower level in DAC value                                        */
/* ----------------------------------------------------------------------------- */

short L1D_RF_SetTxPowerLevel( int rf_band, int arfcn, short power_dbm, short mod_type )
{  static char  lowest_dbm;
   static const sRAMPDATA*  band;
   static short apc_dcoffset_threshold = 0;
   static short apc_dcoffset_low = 0;
   static short apc_dcoffset_high = 0;
   static short first_apc_dcoffset = 0;
   signed short tx_dac_info[7]={ 0 };  //0:wanted; 1:custom; 2:TPO; 3:rollback; 4:voltage; 5:DC offset; 6:Real
   short cur_apc_dcoffset;
   static const sARFCN_SECTION* weight;  // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
   short  power_dac = 0;
   unsigned short n, temp_idx;
#if IS_GPRS
   short  rollback_dac;
#endif
#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT || IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
   short  offset_dac;   
#endif
#if IS_GSM_EM_TX_POWER_CONTROL_SUPPORT
   kal_bool  EM_flag = 0;   //TX power control via EM is on/off
   kal_int8  EM_mode = 0;   //-1: invalid value; 0: one PCL; 1: max TX power
   short  slot_num = 0;
#endif

#if IS_FHC_SUPPORT
   if( l1d_rf.fhc_proc==FHC_PROC_UTS_DAC )
   {
      if (IS_1ST_TX_SLOT())
      {
         first_apc_dcoffset = (l1d_rf.fhc_high_apc_dcoffset & 0x3FF);
         l1d_rf.apc_dc_offset = first_apc_dcoffset;
         HW_WRITE( APC_OFFSET, first_apc_dcoffset );
      }
   #if IS_EPSK_TX_GAIN_CONTROL_SUPPORT
      if( mod_type )
      {
//       l1d_rf2.fhc_PGA_gain = (unsigned short)power_dbm;  /* for MT6256 TX PGA gain  */
         power_dac = L1D_RF_GetTxPAVBias();                /* set PA Vbias for MT6256 */
      }
      else
   #endif
      {  power_dac = power_dbm;  }

      if(power_dac > 1023)  /* saturation to 10 bit DAC max. */
      {  power_dac = 1023; }
  
      L1D_RF_Info_Trace( 18323, power_dbm, power_dac );

      return power_dac;
   }
#endif

   if( IS_1ST_TX_SLOT() )
   {
      band = RampData[(int)rf_band];
      lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
      // apply the 1'st burst DC offset for whole frame
      apc_dcoffset_threshold = band->lowest_power&0xFF;
      apc_dcoffset_high = ((band->lowest_power)>>8)&0x3FF;
      apc_dcoffset_low = ((band->lowest_power)>>18)&0x3FF;
      if(power_dbm<apc_dcoffset_threshold)
         first_apc_dcoffset = apc_dcoffset_low;
      else
         first_apc_dcoffset = apc_dcoffset_high;
#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT && IS_FHC_SUPPORT
      if( l1d_rf.fhc_proc==FHC_PROC_UTS_GAIN_RF_IDX )
      {  l1d_rf.apc_dc_offset = apc_dcoffset_low;  }
      else
#endif
      {  l1d_rf.apc_dc_offset = first_apc_dcoffset;  }

      HW_WRITE( APC_OFFSET, first_apc_dcoffset );

#if !IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
      weight = WeightARFCN_BinarySearch(arfcn, rf_band, band->arfcn_weight, mod_type);
#endif
   } /* to simplify the code, we look-up table each burst depends on its modulation type */

#if IS_EPSK_TX_GAIN_CONTROL_SUPPORT
   if( mod_type )
   {  return L1D_RF_GetTxPAVBias();  }
#endif

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   #if IS_EPSK_TX_SUPPORT
   if( mod_type )
   {  band = RampData_EPSK[(int)rf_band];  }
   else
   #endif
   {  band = RampData[(int)rf_band];       }
   weight = WeightARFCN_BinarySearch(arfcn, rf_band, band->arfcn_weight, mod_type);
#endif

   if( weight )
      n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
   else // no entry, not found
      n = WEIGHT(1.0);

#if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
   if( (l1d_rf.txpc_type == TXPC_BSI_CLOSED_TYPE)    ||
       (l1d_rf.txpc_type == TXPC_AUXADC_CLOSED_TYPE) )
   {
      if( L1D_RF_TXPC_CL_Check_OHGMSK()==1 )
      {} /* Use original TX power sub-band weighting for compensation */
      else
      {  n = WEIGHT(1.0);  }  /* Do not use weight from WeightARFCN_BinarySearch,
                                 because in TXPC_CL, weight stores "power detector" sub-band compensation */
   }
#endif

   power_dac = (short)((band->power[(power_dbm-lowest_dbm)/2]*n)>>14);  /* power : dBm --> DAC */
   tx_dac_info[0] = power_dac;

#if IS_GSM_EM_TX_POWER_CONTROL_SUPPORT

   L1T_SetGsmTxPower(&EM_flag, &EM_mode);
   slot_num  = (l1d_rf.tx_slots) & 0x1;
   slot_num += (l1d_rf.tx_slots>>1) & 0x1;
   slot_num += (l1d_rf.tx_slots>>2) & 0x1;
   slot_num += (l1d_rf.tx_slots>>3) & 0x1;
   slot_num += (l1d_rf.tx_slots>>4) & 0x1;

   if(EM_flag)
   {
      if(EM_mode == 1)
      {
         if( (!mod_type) && (slot_num == 1) )
         {/*GMSK SINGLE SLOT MAX POWER + 3dB*/
            power_dac += 96; 
         }
      }
      tx_dac_info[1] = 96;
   } 
   else   /* BYPASS TX POWER OFFSET & ROLLBACK */
#endif
   {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      offset_dac = L1D_RF_Tx_Power_Offset(rf_band, arfcn, power_dbm, mod_type,0xFFFF);
      power_dac += offset_dac;
      tx_dac_info[2] = offset_dac;
   #endif

   #if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
      /* TX power offset */
      offset_dac = L1D_NSFT_Adjust_Tx_Power_Offset(rf_band, arfcn, power_dbm,mod_type);
      power_dac += offset_dac;
      L1D_RF_Info_Trace( 26167, offset_dac, power_dac );
   #endif


   #if IS_GPRS
      // power rollback
      rollback_dac = L1D_RF_PowerRollback( power_dbm, rf_band, n, mod_type);
      // end : power rollback
      power_dac -= rollback_dac;
      tx_dac_info[3] = rollback_dac;
      L1D_RF_TXPC_RECORD_PARAM( 1 /*scenario*/, band, n, (power_dbm - lowest_dbm)/2, (rollback_dac!=0)?1:0, power_dac );
   #else
      L1D_RF_TXPC_RECORD_PARAM( 1 /*scenario*/, band, n, (power_dbm - lowest_dbm)/2, 0,                     power_dac );
   #endif
   }
  
   tx_dac_info[4] = -power_dac;
#if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
   L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();

   L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,15,power_dac);
   if( (!L1D_CheckIfMetaMode()) || (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
   {  power_dac = (short)((power_dac*band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp])>>14);      } //battery volt.& Temp. compensate
   L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,15,power_dac);
   (void)temp_idx;
#else
   if( (!L1D_CheckIfMetaMode()) || (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
   #if IS_TX_POWER_CONTROL_SUPPORT && (IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165)
   {  power_dac = (short)((power_dac*band->battery_compensate[1][(int)(l1d_rf.txpc.temp_info.idx/3)])>>14); }
   #elif IS_TX_POWER_CONTROL_SUPPORT && (IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M)
   {
      if(l1d_rf.txpc.temp_info.value<=20)       // Low temperature : <= 20 degreeC
      {  temp_idx = 0;  }
      else if(l1d_rf.txpc.temp_info.value>55)   // High temperature: > 55 degreeC
      {  temp_idx = 2;  }
      else
      {  temp_idx = 1;  }
      power_dac = (short)((power_dac*band->battery_compensate[1][temp_idx])>>14); 
   }
   #else
   {  power_dac = (short)((power_dac*band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp])>>14);      }
   #endif
#endif
   tx_dac_info[4] += power_dac;

   if(power_dbm<apc_dcoffset_threshold)
      cur_apc_dcoffset = apc_dcoffset_low;
   else
      cur_apc_dcoffset = apc_dcoffset_high;

   // compensate the difference of H/L DC offset
   power_dac -= (first_apc_dcoffset-cur_apc_dcoffset);
   tx_dac_info[5] = (first_apc_dcoffset-cur_apc_dcoffset);

   if(power_dac > 1023)  /* saturation to 10 bit DAC max. */
   {  power_dac = 1023;  }
   tx_dac_info[6] = power_dac;
   L1D_RF_TxDAC_Trace(tx_dac_info[0],tx_dac_info[1],tx_dac_info[2],tx_dac_info[3],tx_dac_info[4],tx_dac_info[5],tx_dac_info[6]);

   return  power_dac;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_EPSK_TX_SUPPORT
short L1D_RF_SetInterslotPowerLevel( int rf_band, int arfcn, short mod_type )
{
   const sRAMPDATA      *band;
   const sARFCN_SECTION *weight;
   short power_dac, interslot_lowest_dac;
   int   n;

   if( mod_type )
   {  band = RampData_EPSK[(int)rf_band];  }
   else
   {  band = RampData[(int)rf_band];       }
   /* Get ARFCN section */
   weight = WeightARFCN_BinarySearch(arfcn, rf_band, band->arfcn_weight, mod_type);

   if(weight)
      n = weight->low_weight;
   else // no entry, not found
      n = WEIGHT(1.0);

   /* switch to EPSK Ramp Table to extract interslot lowest dac */
   band = RampData_EPSK[(int)rf_band];
   interslot_lowest_dac = ((band->lowest_power)>>18)&0xFF;

   #if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
   if( (l1d_rf.txpc_type == TXPC_BSI_CLOSED_TYPE)    ||
       (l1d_rf.txpc_type == TXPC_AUXADC_CLOSED_TYPE) )
   {
      if( L1D_RF_TXPC_CL_Check_OHGMSK()==1 )
      {} /* Use original TX power sub-band weighting for compensation */
      else
      {  n = WEIGHT(1.0);  } /* Do not use weight from WeightARFCN_BinarySearch,
                                because in TXPC_CL, weight stores "power detector" sub-band compensation */
   }
   #endif

   power_dac = (short)((interslot_lowest_dac*n)>>14); /* DAC for gprs_offset */

   /* switch back to correct Ramp Table */
   if( mod_type )
   {  band = RampData_EPSK[(int)rf_band];  }
   else
   {  band = RampData[(int)rf_band];       }

   #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
   L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();

   L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,15,power_dac);
   if( (!L1D_CheckIfMetaMode()) || (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
   {  power_dac = (short)((power_dac*band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp])>>14);      } //battery volt.& Temp. compensate
   L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,15,power_dac);
   #else
   if( (!L1D_CheckIfMetaMode()) || (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
      #if IS_TX_POWER_CONTROL_SUPPORT && (IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M)
   {  power_dac = (short)((power_dac*band->battery_compensate[1][(int)(l1d_rf.txpc.temp_info.idx/3)])>>14); }
      #else
   {  power_dac = (short)((power_dac*band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp])>>14);      } //battery compensate
      #endif
   #endif

   if(power_dac > 1023)  /* saturation to 10 bit DAC max. */
   {  power_dac = 1023; }

   return power_dac;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

void  L1D_RF_SetTxPower( short *tx_power )
{
#if IS_EPSK_TX_SUPPORT || (IS_RF_MT6162 || IS_RF_MT6163)
   int i;

   for( i=0; i<4; i++ )
   {  l1d_rf2.tx_power[i] = (unsigned char)tx_power[i];  }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_RF_CMOSEDGE
short L1D_RF_SetPGASubBandWeight( void )
{
   const sRAMPDATA      *band;
   unsigned char         power_dbm;
   const sARFCN_SECTION *weight;
   int                   arfcn;

   arfcn=(l1d_rf.IFN_data>>20)&0x3FF;
   band = RampData_EPSK[l1d_rf.band];
   power_dbm=l1d_rf2.tx_power[l1d_rf.cur_slot];

   /* Get ARFCN section */
   weight = WeightARFCN_BinarySearch( arfcn,(int)l1d_rf.cur_slot, band->arfcn_weight, mod_type );

   if(!weight) // no entry && not found
   {  return 0;                     }
   else if(power_dbm>weight->mid_level)
   {  return(weight->hi_weight-4);  }
   else
   {  return(weight->low_weight-4); }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

/* To adjust TX_BUF_TS depending on QB_ST2B for MT6256 and MT6251 */
unsigned long L1D_RF_SetTX_BSI_CW( short qb_st2, short timing_bound )
{
#if IS_SET_TX_BSI_CW_NEEDED
   unsigned long bsi_cw = 0;
   char i = 0;

   while( qb_st2 < (timing_bound-i*11) )
   {  i++;
   }

   #if IS_CHIP_MT6256_S00
   bsi_cw = BSI_CW( 0x88, 0x00100|(l1d_rf2.r_cal & 0xF)|(((0xF-i)&0xF)<<11) );  //CW136 for MT6256
   #elif IS_CHIP_MT6256
   bsi_cw = BSI_CW( 0x88, 0x00000|(((0xF-i)&0xF)<<11) );  //CW136 for MT6256
   #elif IS_CHIP_MT6255
   bsi_cw = BSI_CW( 0x84, 0x00FE0|(((0xF-i)&0xF)<<1)  );  //CW132 for MT6255
   #elif IS_CHIP_MT6251
   bsi_cw = BSI_CW( 0x84, 0x06FE0|(((0xF-i)&0xF)<<1)  );  //CW132 for MT6251
   #endif
   return bsi_cw;
#else
   return 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_RF_MT6256RF
   #if IS_EPSK_TX_SUPPORT
void L1D_Setup_BB_TxPower( unsigned short reversed_PGA_gain, unsigned char alt_bb_gain )
{
      #if IS_CHIP_MT6256_S00
   (void)alt_bb_gain;

   l1d_rf2.tx_power_sel &= ~( 0x3 << (l1d_rf.cur_slot*2) );
   l1d_rf2.tx_power_sel |=  ( (reversed_PGA_gain & 0x3) << (l1d_rf.cur_slot*2) );
      #else
   unsigned short bb_gain = reversed_PGA_gain & 0x3;

   if( alt_bb_gain )
   {  bb_gain += 4;  }

   l1d_rf2.tx_power_sel &= ~( 0xF << (l1d_rf.cur_slot*4) );
   l1d_rf2.tx_power_sel |=  ( bb_gain << (l1d_rf.cur_slot*4) );
      #endif

   HW_WRITE( TX_PWR, l1d_rf2.tx_power_sel );
}
   #endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long  L1D_RF_GetSData_ST2( void )
{
   unsigned  long         cw133;
   const     sRAMPDATA*   band_epsk;

   #if IS_CHIP_MT6256_S00
   cw133 = BSI_CW( 0x85, 0x48000|((l1d_rf2.r_cal&0xF)<<3) );
   #elif IS_CHIP_MT6256
   cw133 = BSI_CW( 0x85, 0x48000|((l1d_rf2.r_cal&0xF)<<4)|(l1d_rf2.r_cal&0xF) );
   #endif

   #if IS_EPSK_TX_SUPPORT
   band_epsk = RampData_EPSK[l1d_rf.band];

   if( (l1d_rf.tx_mod_type2>>l1d_rf.cur_slot) & 0x1 )
   {  /*EPSK TX*/
      int              n             = WEIGHT(1.0);
      int              power_idx;
      unsigned  char   power_dbm     = l1d_rf2.tx_power[l1d_rf.cur_slot];
      unsigned  char   lowest_dbm    = LOWEST_TX_POWER[l1d_rf.band];
      unsigned  short  weighted_PGA_gain, reversed_PGA_gain, RF_PGA_gain;
      static    const  sARFCN_SECTION*  weight;    // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
      short            rollback_gain = 0;

      cw133 |= (0x1<<18);  //TX_G8SEL[D18]=1

      #if IS_FHC_SUPPORT && IS_EPSK_TX_GAIN_CONTROL_SUPPORT
      if( l1d_rf.fhc_proc==FHC_PROC_UTS_DAC )
      {
         weighted_PGA_gain = l1d_rf2.fhc_PGA_gain;
         l1d_rf2.fhc_PGA_gain = 0;
      }
      else
      #endif
      {
         /*EPSK TX power*/
         if( power_dbm > (lowest_dbm+2*15) )
         {  power_dbm = lowest_dbm+2*15;  }
         else if( power_dbm < lowest_dbm )
         {  power_dbm = lowest_dbm;  }

         power_idx = (int)((power_dbm-lowest_dbm)/2);

      #if IS_TX_POWER_CONTROL_SUPPORT
         if( l1d_rf.txpc_type == TXPC_AUXADC_CLOSED_TYPE )
         {  /* sub-band compensation is replacd by power detector compensation */
            n = WEIGHT(1.0);
            weighted_PGA_gain = band_epsk->power[power_idx];
         }
         else
      #endif
         {  /* original sub-band compensation */
            weight = WeightARFCN_BinarySearch((l1d_rf2.arfcn&0x3FF), l1d_rf.band , band_epsk->arfcn_weight, 1);
            if( weight )
            {  n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;  }
            else // no entry, not found
            {  n = WEIGHT(1.0);  }
            weighted_PGA_gain = (unsigned short)( ( band_epsk->power[power_idx]*n )>>14 );
         }

         /*TX power rollback start*/
         rollback_gain = L1D_RF_PowerRollback( power_dbm, l1d_rf.band, n, 1);
         weighted_PGA_gain -= rollback_gain;
         /*TX power rollback end*/
      }

      reversed_PGA_gain = (weighted_PGA_gain > 291) ? 0 : (291 - weighted_PGA_gain);  //291=72*4+3, max. EPSK APC DAC for MT6256

      /* write BB PGA gain to BFE register */
      L1D_Setup_BB_TxPower( reversed_PGA_gain, 0 );
      l1d_rf2.is_alt_bb_gain = 0;

      #if IS_TX_POWER_CONTROL_SUPPORT
      {  short arfcn = (short)((l1d_rf.band == FrequencyBand1900)? (l1d_rf2.arfcn | 0x400) : l1d_rf2.arfcn);

         L1D_RF_TXPC_RECORD_PARAM( 0 /*scenario*/, band_epsk, (unsigned short)n, (short)(power_dbm - lowest_dbm)/2, (rollback_gain!=0)?1:0, (short)weighted_PGA_gain );

         /* L1D_RF_TXPC_RecUpdateGain() 1. sets new TX power compensated BB gain into TX_PWR
                                        2. modifies l1d_rf2.is_alt_bb_gain */
         weighted_PGA_gain = (unsigned short)L1D_RF_TXPC_RecUpdateGain( (unsigned short)weighted_PGA_gain, l1d_rf.band, arfcn, (short)l1d_rf.cur_slot );
         reversed_PGA_gain = 291 - weighted_PGA_gain;
         L1D_RF_TXPC_CL_RECORD_PWR_IDX( (power_dbm-lowest_dbm)/2, (short)l1d_rf.cur_slot );
      }
      #endif

      l1d_rf2.tx_gain_setting[l1d_rf.cur_slot] = reversed_PGA_gain; /* For trace output */
      RF_PGA_gain = l1d_rf2.is_alt_bb_gain ? (reversed_PGA_gain>>2)-1 : (reversed_PGA_gain>>2);
      cw133 = (cw133 & ~(0x7f<<8)) | ( (RF_PGA_gain & 0x7f)<<8 );     //TX_RFPGA_GC[D14:D8]
   }
   else //GMSK TX
   #endif
   {  cw133 = cw133 & ~(0x1<<18); //TX_G8SEL[D18]=0
      (void)band_epsk;
   }

   return cw133;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_BPI_DATA_48_BIT_CHIP
#elif IS_AST_B2S_SUPPORT
signed short L1D_RF_GetPData_PR2( int rf_band, char set_2g_own_bsi )
{
   signed short pr2 = PDATA_TABLE[rf_band][0/*RX*/][1/*PR2*/];

   if( set_2g_own_bsi )
   {  pr2 |= (0x1<<GSM_BSI_SWITCH_ID);  }

   return pr2;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_AST_B2S_SUPPORT */

/*===============================================================================*/
/* short  L1D_RF_GetRxPathLoss( int rf_band, int arfcn, short request_gain )     */
/*===============================================================================*/
/* rf_band      : RF Band. (3:GSM, 4:DCS, 5:PCS)                                 */
/* arfcn        : ARFCN number                                                   */
/* request_gain : Request Gain. the unit is 0.125 dBm                            */
/* return       : The path loss . the unit is 0.125 dBm.                         */
/* ----------------------------------------------------------------------------- */
#if IS_2G_RX_DIVERSITY_PATH_SUPPORT
L1D_RX_PATHLOSS L1D_RF_GetRxPathLoss( int rf_band, int arfcn )
{  const  sAGCGAINOFFSET *ofs_ptr;
   L1D_RX_PATHLOSS  loss_gain;

   /* Get ARFCN section */
   //PRX
   ofs_ptr = AGC_PATHLOSS_TABLE[rf_band];
   while( ofs_ptr->max_arfcn>=0 )
   {  if((arfcn)<=ofs_ptr->max_arfcn)
      {  break;
      }
      ofs_ptr++;
   }
   loss_gain.PRX = ofs_ptr->gain_offset;

   //DRX
   ofs_ptr = AGC_PATHLOSS_RXD_TABLE[rf_band];
   while( ofs_ptr->max_arfcn>=0 )
   {  if((arfcn)<=ofs_ptr->max_arfcn)
      {  break;
      }
      ofs_ptr++;
   }
   loss_gain.DRX = ofs_ptr->gain_offset;
/*HAL*/    { extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/      L1D_RF_Info_Trace( 11235, loss_gain.PRX, loss_gain.PRX );                          
/*HAL*/    }   
   return( loss_gain );
}
#else
short L1D_RF_GetRxPathLoss( int rf_band, int arfcn, short request_gain )
{  const  sAGCGAINOFFSET *ofs_ptr;
   short  loss_gain;

   /* Get ARFCN section */
   ofs_ptr = AGC_PATHLOSS_TABLE[rf_band];
   while( ofs_ptr->max_arfcn>=0 )
   {  if((arfcn)<=ofs_ptr->max_arfcn)
      {  break;
      }
      ofs_ptr++;
   }
   loss_gain = ofs_ptr->gain_offset;
   return( loss_gain );
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*===============================================================================*/
/* void  L1D_RF_NotifyBatteryVoltage( int  micro_volt )                          */
/*===============================================================================*/
/* micro_volt : The battery voltage with unit 0.0000001V                         */
/* ----------------------------------------------------------------------------- */
/* PS: The measurement period T and average sample n are set in l1d_custom_rf.h  */
/*     #define    BAT_VOLTAGE_SAMPLE_PERIOD            SECONDS2FRAME( T )        */
/*     #define    BAT_VOLTAGE_AVERAGE_COUNT            n                         */
/* ----------------------------------------------------------------------------- */

void L1D_RF_NotifyBatteryVoltage( int micro_volt )
{
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*===============================================================================*/
/* TX control parameter definition                                               */
/*===============================================================================*/

BPI_DATA_SIZE pdata_gmsk = 0;   //PDATA_GMSK;
BPI_DATA_SIZE pdata_8psk = 0;   //PDATA_8PSK;

/*===============================================================================*/
/* void  L1D_RF_NotifyBatteryTemperature( int  mili_degree )                     */
/*===============================================================================*/
/* mili_degree : The battery temperature with unit 0.001 degree centigrade       */
/* ----------------------------------------------------------------------------- */
/* PS: The measurement period T and average sample n are set in l1d_custom_rf.h  */
/*     #define    BAT_TEMPERATURE_SAMPLE_PERIOD            SECONDS2FRAME( T )    */
/*     #define    BAT_TEMPERATURE_AVERAGE_COUNT            n                     */
/* ----------------------------------------------------------------------------- */

void L1D_RF_NotifyBatteryTemperature( int mili_degree )
{
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_NotifyRFTemperature( int temp_adc )
{
#if IS_TX_POWER_CONTROL_SUPPORT
   #if IS_RF_MT6162 || IS_RF_MT6163
   short data_part = (short)(temp_adc&0xFFF);

   l1d_rf.txpc.temp_info.adc = data_part;
   L1D_RF_GetRFTemperatureIdxAndValue( data_part );
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned char L1D_RF_IS_GetRFTemperatureFromADC( void )
{  /* decide if we need to get the temperature information from AUXADC */
   /* if YES, we should return 1 to register a ADC channel             */
#if IS_TXPC_OL_AUXADC_SUPPORT
   return 1;
#else
   return 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned char L1D_RF_IS_GetBatteryInfoFromADC( void )
{  /* decide if we need to get the battery information from AUXADC     */
   /* if YES, we should return 1 to register a ADC channel             */
   /* IS_TX_VOLTAGE_COMPENSATION_SUPPORT=1                             */
   /* battery voltage info. from ccci but temerature info. from RF     */
#if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
   return 0;
#else
   return 1;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
unsigned short L1D_Query_RFIC_Index( unsigned char TRX_Selection, unsigned char band )
{
   unsigned short result;

#if IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   if( TRX_Selection == L1D_RX )
   #if IS_2G_RX_DIVERSITY_PATH_SUPPORT
      result = (((L1D_SDATA_PRX_LNA_SEL[band]>>22) & 0x1) ? L1D_RFIC2 : L1D_RFIC1);
   #else
      result = (((SDATA_RX_LNA_SEL[band]>>22) & 0x1) ? L1D_RFIC2 : L1D_RFIC1);
   #endif
   else
      result = L1D_RFIC1;
#else
   result = L1D_RFIC1;
#endif

   return result;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_2G_RX_DIVERSITY_PATH_SUPPORT
L1D_RX_PATH L1D_Query_BB_RX_Path( unsigned char band )
{
   L1D_RX_PATH RF_rx_path,rfPortMap;
   RF_rx_path.PRX = ((L1D_SDATA_PRX_LNA_SEL[band]>>20) & 0x7); /*RFIC[bit:2] + RxPath[bit:1,0]*/
   RF_rx_path.DRX = ((L1D_SDATA_DRX_LNA_SEL[band]>>20) & 0x7); /*RFIC[bit:2] + RxPath[bit:1,0]*/
   if(RF_rx_path.PRX<MAX_RFIQ_PORTS)
   {
      rfPortMap.PRX = RFport_BBport_mapping[RF_rx_path.PRX];
   }
   else
   {
      rfPortMap.PRX = MAX_ABB_PORTS;
   }
   if(RF_rx_path.DRX<MAX_RFIQ_PORTS)
   {
      rfPortMap.DRX = RFport_BBport_mapping[RF_rx_path.DRX];
   }
   else
   {
      rfPortMap.DRX = MAX_ABB_PORTS;
   }
   return (rfPortMap);

}
#else
unsigned int L1D_Query_BB_RX_Path( unsigned char band )
{
   unsigned int RF_rx_path= ((SDATA_RX_LNA_SEL[band]>>20) & 0x7); /*RFIC[bit:2] + RxPath[bit:1,0]*/
   if(RF_rx_path<MAX_RFIQ_PORTS)
   {
      return(RFport_BBport_mapping[RF_rx_path]);
   }
   else
   {
      return(MAX_ABB_PORTS);
   }
}
#endif /* IS_2G_RX_DIVERSITY_PATH_SUPPORT */

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_RF_MT6179 || IS_RF_MT6176 || IS_RF_MT6177L || IS_RF_MT6177M
/*---------------------*\
|* BSI Readback Common *|
\*----------------------------------------------------------------------------------------------------------*/
#define MASK(n)                          ((1<<n)-1)
#define REG_SET(val,off,len)             (((val)&(MASK(len)))<<(off))
#define REG_GET(val,off,len)             (((val)>>(off))&(MASK(len)))
#define BSI_READ_TIME                    1  /* Wait 1*2Qbit, at least 6T(61.44MHz)+11T(20.48MHz) = 635ns(~0.688Qbit) is needed for OH */

   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#define BSI_STORE_READBACK_DATA( is_ok, p )
   #else
#define BSI_STORE_READBACK_DATA( is_ok, p )      { p = (is_ok) ? (REG_GET(HW_READ(BSI_RDDAT),0,20)) : ( 0xAAAAA ); }
   #endif
#define BSI_STORE_TDMA_READBACK_DATA( is_ok, p ) { p = (is_ok) ? (REG_GET(HW_READ(BSI_TDMA_RDDAT),0,20)) : ( 0xAAAAA ); }

   #if IS_MIPI_SUPPORT
#define CHECK_BSI_PORT( Ctrl, port )     { port = (((Ctrl)>>16)&0x3); }
   #endif

sBSIread BSIread;
/*----------------------------------------------------------------------------------------------------------*/

/*-----------*\
|* BSI_RDCON *|
\*----------------------------------------------------------------------------------------------------------*/
#define BSI_RDCON_IMMRD_NULL             0  /* 0: not trigger                                               */
#define BSI_RDCON_IMMRD_IMM              1  /* 1: trigger immediate readback                                */
#define BSI_RDCON_IMMRD_EVENT            0  /* 0: not trigger                                               */
#define BSI_RDCON_ENHW_ON                1  /* 1: HW read back function enable                              */
#define BSI_RDCON_RDATA_LEN             20  /* data length                                                  */

#define BSI_RDCON_COMMON_SETTING ((REG_SET(BSI_RDCON_ENHW_ON     ,15,1))|(REG_SET(BSI_RDCON_RDATA_LEN-1,8,6)))         
#define BSI_RDCON_START_SETTING  ((REG_SET(BSI_RDCON_IMMRD_NULL  ,19,1))|BSI_RDCON_COMMON_SETTING)
#define BSI_RDCON_IMMRD_SETTING  ((REG_SET(BSI_RDCON_IMMRD_IMM   ,19,1))|BSI_RDCON_COMMON_SETTING)
#define BSI_RDCON_EVENT_SETTING  ((REG_SET(BSI_RDCON_IMMRD_EVENT ,19,1))|BSI_RDCON_COMMON_SETTING)
/*----------------------------------------------------------------------------------------------------------*/

/*----------------*\
|* BSI_RDADDR_CON *|
\*----------------------------------------------------------------------------------------------------------*/
#define BSI_RDADDR_CON_CS                0  /* CS0 is selected                                              */
#define BSI_RDADDR_CON_LEN              10  /* BSI addr length. The actual length is 10+2(data bit+read bit)=12 */

#define BSI_RDADDR_CON_MAIN(PORT) ((REG_SET(BSI_RDADDR_CON_CS ,15,1))|(REG_SET(BSI_RDADDR_CON_LEN+1 ,8,5))|\
                                   (REG_SET(PORT   , 6,2)))
/*----------------------------------------------------------------------------------------------------------*/

/*------------*\
|* BSI_RDADDR *|
\*----------------------------------------------------------------------------------------------------------*/
#define BSI_RDADDR_RF_RD_IND             1  /* RF Read Indication                                           */
#define SPECIAL_BSI_RDADDR_RF_RD_IND     0  /* Special RF Read Indication                                   */

#define BSI_RDADDRn(addr)             ((REG_SET(BSI_RDADDR_RF_RD_IND         ,BSI_RDADDR_CON_LEN ,1                  ))|\
                                       (REG_SET(addr                         ,0                  ,BSI_RDADDR_CON_LEN )))
#define SPECIAL_BSI_RDADDRn(addr)     ((REG_SET(SPECIAL_BSI_RDADDR_RF_RD_IND ,BSI_RDADDR_CON_LEN ,1                  ))|\
                                       (REG_SET(addr                         ,0                  ,BSI_RDADDR_CON_LEN )))
/*----------------------------------------------------------------------------------------------------------*/

void IMM_RECEIVE_BSI( uintBSI ADD_Ctrl, unsigned long ADD, uintBSI DATA_Ctrl, unsigned long *DATA, unsigned char band )
{
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   #else
   unsigned long bsi_rdaddr_backup;
   unsigned long bsi_rdaddr_con_backup;
   unsigned long bsi_rdcon_backup;
   int           count_down = BSI_READ_TIME;
   int           is_ready   = 0;

   /* do nothing; just to avoid build-warning */
   #if IS_CHIP_TK6291 || IS_CHIP_MT6755
   (void)ADD_Ctrl; (void)DATA_Ctrl;
   #elif IS_MIPI_SUPPORT
   unsigned short bsi_port; UNUSED_PARAMETER(bsi_port);
   (void)ADD_Ctrl;
   CHECK_BSI_PORT( DATA_Ctrl, bsi_port );
   #else
   (void)ADD_Ctrl; (void)DATA_Ctrl;
   #endif

   /* Backup original settings */
      #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #else
   bsi_rdcon_backup      = HW_READ( BSI_RDCON      );
   bsi_rdaddr_con_backup = HW_READ( BSI_RDADDR_CON );
   bsi_rdaddr_backup     = HW_READ( BSI_RDADDR     );
      #endif

   *DATA = 0;

      #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #else
         #if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292
   #elif IS_MIPI_SUPPORT
   if( bsi_port == 3 )
   {
      HW_WRITE( BSI_RDCON, MIPI_C_BSI_RDCON_START_SETTING  );
      HW_WRITE( BSI_RDADDR_CON, MIPI_C_BSI_RDADDR_CON_MAIN );
      HW_WRITE( BSI_RDADDR, MIPI_C_BSI_RDADDRn(ADD)        );
      HW_WRITE( BSI_RDDAT_H, 0x0                           ); /* Clear Ready bit before triggering immediate read back event */
      HW_WRITE( BSI_RDCON, MIPI_C_BSI_RDCON_IMMRD_SETTING  );
   }
   else if( bsi_port == 2 )
   {
      HW_WRITE( BSI_RDCON, MIPI_D_BSI_RDCON_START_SETTING  );
      HW_WRITE( BSI_RDADDR_CON, MIPI_D_BSI_RDADDR_CON_MAIN );
      HW_WRITE( BSI_RDADDR, MIPI_D_BSI_RDADDRn(ADD)        );
      HW_WRITE( BSI_RDDAT_H, 0x0                           ); /* Clear Ready bit before triggering immediate read back event */
      HW_WRITE( BSI_RDCON, MIPI_D_BSI_RDCON_IMMRD_SETTING  );
   }
   if( bsi_port == 0 )
         #endif
   #endif
   {
      unsigned short rfic_idx = L1D_Query_RFIC_Index(L1D_RX,band);
      HW_WRITE( BSI_RDCON, BSI_RDCON_START_SETTING  );
      HW_WRITE( BSI_RDADDR_CON, BSI_RDADDR_CON_MAIN(rfic_idx) );
      HW_WRITE( BSI_RDADDR, BSI_RDADDRn(ADD)        );
      HW_WRITE( BSI_RDDAT_H, 0x0                    ); /* Clear Ready bit before triggering immediate read back event */
      HW_WRITE( BSI_RDCON, BSI_RDCON_IMMRD_SETTING  );
   }

   /*Wait for readback ready*/
   while( count_down > 0 )
   {
      WAIT_TIME_QB(2);
      is_ready = ( HW_READ(BSI_RDDAT_H)&0x80000000 );
      if( is_ready )
         break;
      count_down--;
      LET_SIM_TIME_RUN_A_BIT();
   }

   /*Store RF readback data*/
   BSI_STORE_READBACK_DATA( is_ready, *DATA );

   /*Restore original setting*/
   #if IS_COSIM_ON_L1SIM_SUPPORT
   /* do not restore in the modem sim; otherwise, the settings can not be checked */
   #else
   HW_WRITE( BSI_RDADDR,     bsi_rdaddr_backup     );
   HW_WRITE( BSI_RDADDR_CON, bsi_rdaddr_con_backup );
   HW_WRITE( BSI_RDCON,      bsi_rdcon_backup      );
   #endif
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Readback_BSI_Set_Event( void* data )
{
      #if IS_TDMA_BSI_READBACK_SUPPORT
      sBSIread* p;
      p = (sBSIread*)data;

         #if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
      {
         int      rx_slots, rx_mask, event_timing, slot_idx, i;
         int      bitmap2idx[9] = { 0, 1, 2, 0, 3, 0, 0, 0, 4};

          /*Evaluate the TQ count which be 100QB before the last RX win*/
         rx_slots   = (l1d_rf.rx_slots) & 0xF;
         event_timing = TQ_BSI_READ_TIME;

         for( rx_mask = 0x8; rx_mask != 0; rx_mask >>= 1 )
         { if( rx_slots & rx_mask ) break;}

         slot_idx = bitmap2idx[rx_mask];

         for( i = 1; i < slot_idx; i++)
         { event_timing += 625;  }
            #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
         /*Calc. BSI readback event timing for MMRF BSI read dynamic allocate API*/ 
         p->event_timing = MMRF_GSM_TIME((L1D_GetWinFrameCnt()+1)&0x7,(unsigned short)event_timing);
            #else
         p->event_timing = (unsigned short)event_timing;
            #endif
      }
         #endif

         #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      /*Set BSI read event timing and readback address together in L1D_RF_Readback_BSI_Set_Address by MMRF API*/
         #else
      /*Set TDMA timer*/
      HW_WRITE( TDMA_RD_BSI0, p->event_timing );

      /*Enable HW read back TDMA event mode*/
      HW_WRITE( BSI_TDMA_RDCON, BSI_RDCON_EVENT_SETTING );
         #endif

      #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Readback_BSI_Set_Address( void* data)
{
   #if IS_TDMA_BSI_READBACK_SUPPORT
   sBSIread* p;

   p = (sBSIread*)data;

      #if IS_DUAL_RF_SIP_CHIP_SUPPORT
   rfic_flags_for_scheduleread++;
   if( rfic_flags_for_scheduleread == L1D_TYPE_END )
   {
      rfic_flags_for_scheduleread = L1D_TX;
   }
      #else
   rfic_flags_for_scheduleread = L1D_TX;
      #endif
      
      #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   /*set BSI readback event timing/RF/addr for MMRF BSI read dynamic allocate API*/ 
   MMRF_BSIRFIC_SCHRead_SetEvent( MMRF_MODE_GSM, MML1_RF_RFIC1, (kal_int32)p->event_timing, 0, (kal_uint32)p->ADD);

      #else 
   HW_WRITE( BSI_TDMA_RDADDR_CON, BSI_RDADDR_CON_MAIN(L1D_Query_RFIC_Index(rfic_flags_for_scheduleread, band_info_for_dualrfic)) );

   /*Set readback addr*/
   HW_WRITE( BSI_TDMA_RDADDR, BSI_RDADDRn(p->ADD) );

   // Since BSISPI won't be power off during sleep mode for MT6290 and latter chip, we don't need to re-write it after L1 Init().
   // EX: BSISPI_IC0_PARAM1_RFIC1, BSISPI_IC0_PARAM2_RFIC1, BSISPI_IC0_PARAM1_RFIC2, BSISPI_IC0_PARAM2_RFIC2, BSISPI_IC0_PARAM1_MIPI1, BSISPI_IC0_PARAM2_MIPI1...etc
      #endif
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Readback_BSI_GetData( unsigned short ADD, unsigned long *DATA )
{
   #if IS_TDMA_BSI_READBACK_SUPPORT
      #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   /*Store RF readback data through MMRF API*/
   MMRF_BSIRFIC_SCHRead_GetData(MMRF_MODE_GSM, 0, (kal_uint32*)DATA);
      #else
   unsigned long read_addr;

   /*Get read addr*/
   read_addr = REG_GET(HW_READ(BSI_TDMA_RDADDR), 0, BSI_RDADDR_CON_LEN);

   /*Store RF readback data*/
   BSI_STORE_TDMA_READBACK_DATA( (read_addr == ADD), *DATA );
      #endif
   BSIread.flag |=  BSI_GET_READBACK_DATA ;
   BSIread.ADD_pair = ADD;
   #endif
}

#elif IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165
/*---------------------*\
|* BSI Readback Common *|
\*----------------------------------------------------------------------------------------------------------*/
#define MASK(n)                          ((1<<n)-1)
#define REG_SET(val,off,len)             (((val)&(MASK(len)))<<(off))
#define REG_GET(val,off,len)             (((val)>>(off))&(MASK(len)))
#define BSI_READ_TIME                    1  /* Wait 1*2Qbit, at least 6T(61.44MHz)+11T(20.48MHz) = 635ns(~0.688Qbit) is needed for OH */

#define BSI_STORE_READBACK_DATA( is_ok, p )      { p = (is_ok) ? (REG_GET(HW_READ(BSI_RDDAT),0,20)) : ( 0xAAAAA ); }
#define BSI_STORE_TDMA_READBACK_DATA( is_ok, p ) { p = (is_ok) ? (REG_GET(HW_READ(BSI_TDMA_RDDAT),0,20)) : ( 0xAAAAA ); }

   #if IS_MIPI_SUPPORT
#define CHECK_BSI_PORT( Ctrl, port )     { port = (((Ctrl)>>16)&0x3); }
   #endif

sBSIread BSIread;
/*----------------------------------------------------------------------------------------------------------*/

/*-----------*\
|* BSI_RDCON *|
\*----------------------------------------------------------------------------------------------------------*/
#define BSI_RDCON_IMMRD_NULL             0  /* 0: not trigger                                               */
#define BSI_RDCON_IMMRD_IMM              1  /* 1: trigger immediate readback                                */
#define BSI_RDCON_IMMRD_EVENT            0  /* 0: not trigger                                               */
#define BSI_RDCON_ENHW_ON                1  /* 1: HW read back function enable                              */
/* Ceil(BSI_RDCON_RDATA_LEN/3)+BSI_RDCON_TRANS_LEN should be 8 clock cycles */
   #if IS_COSIM_ON_L1SIM_SUPPORT
/* use the previous setting here, but need to check it if new chip is implemented */
#define BSI_RDCON_RDATA_LEN             21  /* data length                                                  */
   #elif IS_RF_MT6169
#define BSI_RDCON_RDATA_LEN             21  /* data length                                                  */
   #elif IS_RF_MT6166 || IS_RF_MT6165
      #if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#define BSI_RDCON_RDATA_LEN             21  /* data length                                                  */
      #else
#define BSI_RDCON_RDATA_LEN             22  /* data length                                                  */
      #endif
   #elif IS_RF_MT6167
#define BSI_RDCON_RDATA_LEN             22  /* data length                                                  */
   #else
#define BSI_RDCON_RDATA_LEN             21  /* data length                                                  */
   #endif

   #if IS_RF_MT6169 || IS_COSIM_ON_L1SIM_SUPPORT
#define BSI_RDCON_TRANS_CLKON            1  /* 1: with transition                                           */
#define BSI_RDCON_TRANS_LEN              1  /* transiton state length                                       */
   #elif IS_RF_MT6166 || IS_RF_MT6165
      #if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#define BSI_RDCON_TRANS_CLKON            1  /* 1: with transition                                           */
#define BSI_RDCON_TRANS_LEN              1  /* transiton state length                                       */
      #else
#define BSI_RDCON_TRANS_CLKON            0  /* 0: no transition                                             */
#define BSI_RDCON_TRANS_LEN              0  /* transiton state length                                       */
      #endif
   #else
#define BSI_RDCON_TRANS_CLKON            0  /* 0: no transition                                             */
#define BSI_RDCON_TRANS_LEN              0  /* transiton state length                                       */
   #endif

   #if IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
#define BSI_RDCON_RD_CLK_SPD             2                                              
   #else
      #if IS_RF_MT6169                                                                  /* 0: 122.88/ 2 MHz (reserved)                                  */
#define BSI_RDCON_RD_CLK_SPD             2                                              /* 1: 122.88/ 4 MHz (default)                                   */
      #elif IS_RF_MT6166 || IS_RF_MT6165                                                /* 2: 122.88/ 6 MHz                                             */
         #if IS_CHIP_MT6290 || IS_CHIP_MT6595                                           /* 3: 122.88/ 8 MHz                                             */
#define BSI_RDCON_RD_CLK_SPD             5                                              /* 4: 122.88/12 MHz                                             */
         #else                                                                          /* 5: 122.88/16 MHz                                             */
#define BSI_RDCON_RD_CLK_SPD             1                                              /* 6: 122.88/24 MHz                                             */
         #endif                                                                         /* 7: 122.88/32 MHz                                             */
      #else
#define BSI_RDCON_RD_CLK_SPD             1
      #endif
   #endif

#define BSI_RDCON_COMMON_SETTING ((REG_SET(BSI_RDCON_ENHW_ON     ,15,1))|(REG_SET(BSI_RDCON_RDATA_LEN-1,8,6))|\
                                  (REG_SET(BSI_RDCON_TRANS_CLKON , 7,1))|(REG_SET(BSI_RDCON_TRANS_LEN  ,3,4))|\
                                  (REG_SET(BSI_RDCON_RD_CLK_SPD  , 0,3)))
#define BSI_RDCON_START_SETTING  ((REG_SET(BSI_RDCON_IMMRD_NULL  ,19,1))|BSI_RDCON_COMMON_SETTING)
#define BSI_RDCON_IMMRD_SETTING  ((REG_SET(BSI_RDCON_IMMRD_IMM   ,19,1))|BSI_RDCON_COMMON_SETTING)
#define BSI_RDCON_EVENT_SETTING  ((REG_SET(BSI_RDCON_IMMRD_EVENT ,19,1))|BSI_RDCON_COMMON_SETTING)
/*----------------------------------------------------------------------------------------------------------*/

/*----------------*\
|* BSI_RDADDR_CON *|
\*----------------------------------------------------------------------------------------------------------*/
#define BSI_RDADDR_CON_CS                0  /* CS0 is selected                                              */
#define BSI_RDADDR_CON_CLK_POL           1  /* Inverted clock polarity                                      */
   #if IS_COSIM_ON_L1SIM_SUPPORT
/* use the MT6167's setting here, but need to check it if new chip is implemented */
#define BSI_RDADDR_CON_LEN              11  /* The actual length is 11+1=12                                 */
   #elif IS_RF_MT6167 || IS_RF_MT6166 || IS_RF_MT6169 || IS_RF_MT6165
#define BSI_RDADDR_CON_LEN              11  /* The actual length is 11+1=12                                 */
   #else
#define BSI_RDADDR_CON_LEN               8  /* The actual length is  8+1=9                                  */
   #endif
#define BSI_RDADDR_CON_WADDR_CLK_SPD     0  /* 0: 122.88/ 2 MHz (reserved)                                  */
                                            /* 1: 122.88/ 4 MHz (default)                                   */
                                            /* 2: 122.88/ 6 MHz                                             */
                                            /* 3: 122.88/ 8 MHz                                             */
                                            /* 4: 122.88/12 MHz                                             */
                                            /* 5: 122.88/16 MHz                                             */
                                            /* 6: 122.88/24 MHz                                             */
                                            /* 7: 122.88/32 MHz                                             */

#define BSI_RDADDR_CON_MAIN  ((REG_SET(BSI_RDADDR_CON_CS     ,15,1))|(REG_SET(BSI_RDADDR_CON_LEN          ,8,5))|\
                              (REG_SET(BSI_PORT_SELECT       , 6,2))|(REG_SET(BSI_RDADDR_CON_WADDR_CLK_SPD,3,3))|\
                              (REG_SET(BSI_RDADDR_CON_CLK_POL, 1,2)))
/*----------------------------------------------------------------------------------------------------------*/

/*------------*\
|* BSI_RDADDR *|
\*----------------------------------------------------------------------------------------------------------*/
#define BSI_RDADDR_RF_RD_IND             1  /* RF Read Indication                                           */

   #if IS_COSIM_ON_L1SIM_SUPPORT
/* use the MT6167's setting here, but need to check it if new chip is implemented */
#define BSI_RDADDRn(addr)    ((REG_SET(BSI_RDADDR_RF_RD_IND,10,                1))|(REG_SET(addr,2,8                 )))
   #elif IS_RF_MT6167 || IS_RF_MT6166 || IS_RF_MT6169 || IS_RF_MT6165
#define BSI_RDADDRn(addr)    ((REG_SET(BSI_RDADDR_RF_RD_IND,10,                1))|(REG_SET(addr,2,8                 )))
   #else
#define BSI_RDADDRn(addr)    ((REG_SET(BSI_RDADDR_RF_RD_IND,BSI_RDADDR_CON_LEN,1))|(REG_SET(addr,0,BSI_RDADDR_CON_LEN)))
   #endif

   #if IS_COSIM_ON_L1SIM_SUPPORT
/* use the MT6167's setting here, but need to check it if new chip is implemented */
#define SPECIAL_BSI_RDADDR_RF_RD_IND     0  /* Special RF Read Indication                                   */
#define SPECIAL_BSI_RDADDRn(addr)        ((REG_SET(SPECIAL_BSI_RDADDR_RF_RD_IND,10,                1))|(REG_SET(addr,2,8                 )))
   #elif defined(L1_SIM)
   #else
#define SPECIAL_BSI_RDADDR_RF_RD_IND     0  /* Special RF Read Indication                                   */
      #if IS_RF_MT6167 || IS_RF_MT6166 || IS_RF_MT6169 || IS_RF_MT6165
#define SPECIAL_BSI_RDADDRn(addr)        ((REG_SET(SPECIAL_BSI_RDADDR_RF_RD_IND,10,                1))|(REG_SET(addr,2,8                 )))
      #else
#define SPECIAL_BSI_RDADDRn(addr)        ((REG_SET(SPECIAL_BSI_RDADDR_RF_RD_IND,BSI_RDADDR_CON_LEN,1))|(REG_SET(addr,0,BSI_RDADDR_CON_LEN)))
      #endif
   #endif
/*----------------------------------------------------------------------------------------------------------*/

/*--------------*\
|* BSI_RDCS_CON *|
\*----------------------------------------------------------------------------------------------------------*/
#define BSI_RDCS_CON_RDATA_CS_VAL        0  /* 0: CS configure as low in RDATA state                        */
                                            /* 1: CS configure as high in RDATA state                       */
#define BSI_RDCS_CON_TRANS_CS_WAVEFORM   0  /* Bitmap of CS waveform; serial output                         */

#define BSI_RDCS_CON_MAIN    ((REG_SET(BSI_RDCS_CON_RDATA_CS_VAL,15,1))|(REG_SET(BSI_RDCS_CON_TRANS_CS_WAVEFORM,0,15)))
/*----------------------------------------------------------------------------------------------------------*/

   #if IS_BSISPI_SEPARATE_SUPPORT
      #if IS_MMRF_CONTROL_BSI_TOP_SUPPORT
/* If IS_MMRF_CONTROL_BSI_TOP_SUPPORT is supported, it means that BSISPI and BPI_TOP control are moved to MMRF driver. */      
      #else
/*-------------------*\
|* BSISPI_IC0_PARAM1 *|
\*----------------------------------------------------------------------------------------------------------*/
#define BSISPI_RD_CLK_SPD           BSI_RDCON_RD_CLK_SPD
#define BSISPI_RD_TRANS_CLKON       BSI_RDCON_TRANS_CLKON
#define BSISPI_RD_TRANS_LEN         BSI_RDCON_TRANS_LEN
#define BSISPI_IC0_PARAM1_MAIN      (((BSISPI_RD_TRANS_LEN&0xF)<<12)|((BSISPI_RD_TRANS_CLKON&0x1)<<11)|((BSISPI_RD_CLK_SPD&0x7)<<8))
/*----------------------------------------------------------------------------------------------------------*/

/*-------------------*\
|* BSISPI_IC0_PARAM2 *|
\*----------------------------------------------------------------------------------------------------------*/
#define BSISPI_RD_RLEN              BSI_RDCON_RDATA_LEN
#define BSISPI_RD_WLEN              BSI_RDADDR_CON_LEN
#define BSISPI_RD_RDATA_CS_POL      BSI_RDCS_CON_RDATA_CS_VAL
#define BSISPI_RD_TRANS_CS_WAVEFORM BSI_RDCS_CON_TRANS_CS_WAVEFORM
#define BSISPI_IC0_PARAM2_MAIN      ((((BSISPI_RD_RLEN-1)&0x3F)<<24)|((BSISPI_RD_WLEN&0x1F)<<16)|((BSISPI_RD_RDATA_CS_POL&0x1)<<15)|(BSISPI_RD_TRANS_CS_WAVEFORM&0x7FFF))
/*----------------------------------------------------------------------------------------------------------*/
      #endif
   #endif

void IMM_RECEIVE_BSI( uintBSI ADD_Ctrl, unsigned long ADD, uintBSI DATA_Ctrl, unsigned long *DATA )
{
   unsigned long bsi_rdaddr_backup;
   unsigned long bsi_rdaddr_con_backup;
   unsigned long bsi_rdcon_backup;
   int           count_down = BSI_READ_TIME;
   int           is_ready   = 0;
   #if IS_BSISPI_SEPARATE_SUPPORT
   #else
   unsigned long bsi_rdcs_con_backup;
   #endif

   /* do nothing; just to avoid build-warning */
   #if IS_MIPI_SUPPORT
   unsigned short bsi_port;
   (void)ADD_Ctrl;
   CHECK_BSI_PORT( DATA_Ctrl, bsi_port );
   #else
   (void)ADD_Ctrl; (void)DATA_Ctrl;
   #endif

   /* Backup original settings */
   bsi_rdcon_backup      = HW_READ( BSI_RDCON      );
   bsi_rdaddr_con_backup = HW_READ( BSI_RDADDR_CON );
   bsi_rdaddr_backup     = HW_READ( BSI_RDADDR     );
   #if IS_BSISPI_SEPARATE_SUPPORT
   // Since BSISPI won't be power off during sleep mode for MT6290 and latter chip, we don't need to re-write it after L1 Init().
   // EX: BSISPI_IC0_PARAM1_RFIC1, BSISPI_IC0_PARAM2_RFIC1, BSISPI_IC0_PARAM1_RFIC2, BSISPI_IC0_PARAM2_RFIC2, BSISPI_IC0_PARAM1_MIPI1, BSISPI_IC0_PARAM2_MIPI1...etc
   #else
   bsi_rdcs_con_backup   = HW_READ( BSI_RDCS_CON   );
   #endif

   *DATA = 0;

   #if IS_MIPI_SUPPORT   
   if( bsi_port == 3 )
   {
      HW_WRITE( BSI_RDCON, MIPI_C_BSI_RDCON_START_SETTING  );
      HW_WRITE( BSI_RDADDR_CON, MIPI_C_BSI_RDADDR_CON_MAIN );
      HW_WRITE( BSI_RDADDR, MIPI_C_BSI_RDADDRn(ADD)        );
      #if IS_BSISPI_SEPARATE_SUPPORT
      #else
      HW_WRITE( BSI_RDCS_CON, MIPI_C_BSI_RDCS_CON_MAIN     );
      #endif
      HW_WRITE( BSI_RDDAT_H, 0x0                           ); /* Clear Ready bit before triggering immediate read back event */
      HW_WRITE( BSI_RDCON, MIPI_C_BSI_RDCON_IMMRD_SETTING  );
   }
   else if( bsi_port == 2 )
   {
      HW_WRITE( BSI_RDCON, MIPI_D_BSI_RDCON_START_SETTING  );
      HW_WRITE( BSI_RDADDR_CON, MIPI_D_BSI_RDADDR_CON_MAIN );
      HW_WRITE( BSI_RDADDR, MIPI_D_BSI_RDADDRn(ADD)        );
      #if IS_BSISPI_SEPARATE_SUPPORT
      #else
      HW_WRITE( BSI_RDCS_CON, MIPI_D_BSI_RDCS_CON_MAIN     );
      #endif
      HW_WRITE( BSI_RDDAT_H, 0x0                           ); /* Clear Ready bit before triggering immediate read back event */
      HW_WRITE( BSI_RDCON, MIPI_D_BSI_RDCON_IMMRD_SETTING  );
   }   
   if( bsi_port == 0 )
   #endif
   {
      HW_WRITE( BSI_RDCON, BSI_RDCON_START_SETTING  );
      HW_WRITE( BSI_RDADDR_CON, BSI_RDADDR_CON_MAIN );
      HW_WRITE( BSI_RDADDR, BSI_RDADDRn(ADD)        );
   #if IS_BSISPI_SEPARATE_SUPPORT
   #else
      HW_WRITE( BSI_RDCS_CON, BSI_RDCS_CON_MAIN     );
   #endif
      HW_WRITE( BSI_RDDAT_H, 0x0                    ); /* Clear Ready bit before triggering immediate read back event */
      HW_WRITE( BSI_RDCON, BSI_RDCON_IMMRD_SETTING  );
   }

   /*Wait for readback ready*/
   while( count_down > 0 )
   {
      WAIT_TIME_QB(2);
      is_ready = ( HW_READ(BSI_RDDAT_H)&0x80000000 );
      if( is_ready )
         break;
      count_down--;
      LET_SIM_TIME_RUN_A_BIT();
   }

   /*Store RF readback data*/
   BSI_STORE_READBACK_DATA( is_ready, *DATA );

   /*Restore original setting*/
   #if IS_COSIM_ON_L1SIM_SUPPORT
   /* do not restore in the modem sim; otherwise, the settings can not be checked */
   #else
   HW_WRITE( BSI_RDADDR,      bsi_rdaddr_backup             );
   HW_WRITE( BSI_RDADDR_CON, (bsi_rdaddr_con_backup&0xFFFF) );
      #if IS_BSISPI_SEPARATE_SUPPORT
      #else
   HW_WRITE( BSI_RDCS_CON,   (bsi_rdcs_con_backup&0xFFFF)   );
      #endif
   HW_WRITE( BSI_RDCON,       bsi_rdcon_backup              );
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #if IS_RF_MT6280RF || IS_RF_MT6169
void L1D_RF_Readback_BSI_Set_Event( void* data )
{
      #if IS_TDMA_BSI_READBACK_SUPPORT
   sBSIread* p;
   p = (sBSIread*)data;
   /*Set TDMA timer*/
   HW_WRITE( TDMA_RD_BSI0, p->event_timing );

   /*Enable HW read back TDMA event mode*/
   HW_WRITE( BSI_TDMA_RDCON, BSI_RDCON_EVENT_SETTING );
      #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #elif IS_RF_MT6166 || IS_RF_MT6165
void L1D_RF_Readback_BSI_Set_Event( void* data )
{
   sBSIread* p;
   p = (sBSIread*)data;

   {
      int       rx_slots, rx_mask, event_timing, slot_idx, i;
      int       bitmap2idx[9] = { 0, 1, 2, 0, 3, 0, 0, 0, 4};

      /*Evaluate the TQ count which be 100QB before the last RX win*/
      rx_slots     = (l1d_rf.rx_slots) & 0xF;
      event_timing = TQ_BSI_READ_TIME;

      for( rx_mask = 0x8; rx_mask != 0; rx_mask >>= 1 )
      {  if( rx_slots & rx_mask ) break;  }

      slot_idx = bitmap2idx[rx_mask];

      for( i = 1; i < slot_idx; i++)
      {  event_timing += 625;  }
      p->event_timing = (unsigned short)event_timing;
   }

   /*Set TDMA timer*/
   HW_WRITE( TDMA_RD_BSI0, p->event_timing );

   /*Enable HW read back TDMA event mode*/
   HW_WRITE( BSI_TDMA_RDCON, BSI_RDCON_EVENT_SETTING );
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif

void L1D_RF_Readback_BSI_Set_Address( void* data )
{
   #if IS_TDMA_BSI_READBACK_SUPPORT
   sBSIread* p;

   p = (sBSIread*)data;

   HW_WRITE( BSI_TDMA_RDADDR_CON, BSI_RDADDR_CON_MAIN );

   /*Set readback addr*/
   HW_WRITE( BSI_TDMA_RDADDR, BSI_RDADDRn(p->ADD) );

      #if IS_BSISPI_SEPARATE_SUPPORT
   // Since BSISPI won't be power off during sleep mode for MT6290 and latter chip, we don't need to re-write it after L1 Init().
   // EX: BSISPI_IC0_PARAM1_RFIC1, BSISPI_IC0_PARAM2_RFIC1, BSISPI_IC0_PARAM1_RFIC2, BSISPI_IC0_PARAM2_RFIC2, BSISPI_IC0_PARAM1_MIPI1, BSISPI_IC0_PARAM2_MIPI1...etc
      #else
   HW_WRITE( BSI_TDMA_RDCS_CON, BSI_RDCS_CON_MAIN );
      #endif
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Readback_BSI_GetData( unsigned short ADD, unsigned long *DATA )
{
   #if IS_TDMA_BSI_READBACK_SUPPORT
   unsigned long read_addr;

   /*Get read addr*/
      #if IS_CHIP_MT6583_MD1 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   read_addr = REG_GET(HW_READ(BSI_TDMA_RDADDR),2,8                 );
      #else
   read_addr = REG_GET(HW_READ(BSI_TDMA_RDADDR),0,BSI_RDADDR_CON_LEN);
      #endif

   /*Store RF readback data*/
   BSI_STORE_TDMA_READBACK_DATA( (read_addr == ADD), *DATA );

   BSIread.flag |=  BSI_GET_READBACK_DATA ;
   BSIread.ADD_pair = ADD;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#elif IS_RF_MT6162 || IS_RF_MT6163
/* RDATA_CS_VAL   Describe CS value of RD process in RDATA state */
/* 0   CS configure as low in RDATA state                         */
/* 1   CS configure as high in RDATA state                        */
#define BSI_RDCS_CON_RDATA_CS_VAL    0

#define BSI_RDCON_IMMRD_EVENT        0 /* 0: not trigger, 1: trigger immediate readback */
#define BSI_RDCON_IMMRD_IMM          1
#define BSI_RDCON_ENHW_ON            1 /* 1: HW read back function enable 0:OFF         */
#define BSI_RDCON_ENHW_OFF           0
//#define BSI_RDCON_LATCH_POL        0 /* 0: latch data at rising edge                  */
#define BSI_RDCON_RD_MODE_IMM        0 /* 0: SW imm mode, 1: TDMA mode                  */
#define BSI_RDCON_RD_MODE_EVENT      1
#define BSI_RDCON_RDATA_LEN         20 /* data length                                   */
#define BSI_RDCON_TRANS_CLKON        1 /* 0: no transition; 1: clk on                   */
#define BSI_RDCON_TRANS_LEN          1 /* Transiton state length                        */
//#define BSI_RDCON_CLK_POL          1 /* 1: inverted clock polarity                    */
//#define BSI_RDCON_CLK_SPD          1 /* 0, 1, 2 or 3: 52/2,4,6,8 Mhz                  */


/*      WADDR_CLK_SPD          RD_CLK_SPD */
/* 0 -->122.88/ 2=61.44  MHz   reserved   */
/* 1 -->122.88/ 4=30.72  MHz              */
/* 2 -->122.88/ 6=20.48  MHz              */
/* 3 -->122.88/ 8=15.36  MHz              */
/* 4 -->122.88/12=10.24  MHz              */
/* 5 -->122.88/16= 7.68  MHz              */
/* 6 -->122.88/24= 5.12  MHz              */
/* 7 -->122.88/32= 3.84  MHz              */
#define BSI_RDADDR_CON_WADDR_CLK_SPD 0

#define BSI_RDADDR_CON_CS            0
#define BSI_RDADDR_CON_CLK_POL       1
#define BSI_RDADDR_CON_LEN          10

   #if IS_BSI_TRIG_OFFCHIP_BSI_SWITCH_SUPPORT
#define BSI_RDCON_RD_CLK_SPD         7
#define BSI_READ_TIME                4 /* Wait 4*2Qbit, at least 6T(61.44MHz)+11T( 3.84MHz) = 2962ns(~3.209Qbit) is needed for MT6575+AST3001+OT */
   #else
#define BSI_RDCON_RD_CLK_SPD         2
#define BSI_READ_TIME                1 /* Wait 1*2Qbit, at least 6T(61.44MHz)+11T(20.48MHz) =  635ns(~0.688Qbit) is needed for OH */
   #endif

   #if IS_CHIP_MT6276_S00 || IS_CHIP_MT6573 /* for 6276E1 and 6573 */
#define BSI_RDCON_IMMRD_SETTING (((BSI_RDCON_IMMRD_IMM  &0x1)<<19)|((BSI_RDCON_ENHW_ON      &0x1) <<15)|\
                                ( (BSI_RDCON_RD_MODE_IMM&0x1)<<14)|(((BSI_RDCON_RDATA_LEN-1)&0x1F)<< 9)|\
                                ( (BSI_RDCON_TRANS_CLKON&0x1)<< 8)|((BSI_RDCON_TRANS_LEN    &0x7) << 5)|\
                                (  BSI_RDCON_RD_CLK_SPD &0x7     ))
   #elif IS_CHIP_MT6276 || IS_CHIP_MT6575 /* for 6276E2~ and 6575 */
#define BSI_RDCON_IMMRD_SETTING (((BSI_RDCON_IMMRD_IMM  &0x1)<<19)|((BSI_RDCON_ENHW_ON      &0x1) <<15)|\
                                ( (BSI_RDCON_RD_MODE_IMM&0x1)<<14)|(((BSI_RDCON_RDATA_LEN-1)&0x3F)<< 8)|\
                                ( (BSI_RDCON_TRANS_CLKON&0x1)<< 7)|((BSI_RDCON_TRANS_LEN    &0xF) << 3)|\
                                (  BSI_RDCON_RD_CLK_SPD &0x7     ))
   #elif IS_CHIP_MT6583_MD2
#define BSI_RDCON_IMMRD_SETTING (((BSI_RDCON_IMMRD_IMM  &0x1)<<19)|((BSI_RDCON_ENHW_ON      &0x1) <<15)|\
                                                                   (((BSI_RDCON_RDATA_LEN-1)&0x3F)<< 8)|\
                                ( (BSI_RDCON_TRANS_CLKON&0x1)<< 7)|((BSI_RDCON_TRANS_LEN    &0xF) << 3)|\
                                (  BSI_RDCON_RD_CLK_SPD &0x7     ))
#define BSI_RDCON_EVENT_SETTING (                                  ((BSI_RDCON_ENHW_ON      &0x1) <<15)|\
                                                                   (((BSI_RDCON_RDATA_LEN-1)&0x3F)<< 8)|\
                                ( (BSI_RDCON_TRANS_CLKON&0x1)<< 7)|((BSI_RDCON_TRANS_LEN    &0xF) << 3)|\
                                (  BSI_RDCON_RD_CLK_SPD &0x7     ))
   #elif defined(L1_SIM)
#define BSI_RDCON_IMMRD_SETTING 0
   #else
#error "please review new chip BSI read function for MT6162!"
   #endif

   #if IS_CHIP_MT6583_MD2
#define BSI_RDADDR_CON_MAIN     (((BSI_RDADDR_CON_CS    &0x1)<<15)|(((BSI_RDADDR_CON_LEN-1)      &0x1F)<<8)|\
                                ((BSI_PORT_SELECT       &0x1)<< 7)|((BSI_RDADDR_CON_WADDR_CLK_SPD&0x7 )<<3)|\
                                ((BSI_RDADDR_CON_CLK_POL&0x3)<< 1))
   #else
#define BSI_RDADDR_CON_MAIN     (((BSI_RDADDR_CON_CS    &0x1)<<15)|(((BSI_RDADDR_CON_LEN-1)      &0x1F)<<8)|\
                                ((BSI_PORTB_SELECT      &0x1)<< 7)|((BSI_RDADDR_CON_WADDR_CLK_SPD&0x7 )<<3)|\
                                ((BSI_RDADDR_CON_CLK_POL&0x3)<< 1))
   #endif
#define BSI_RDCS_CON_MAIN       0//((BSI_RDCS_CON_RDATA_CS_VAL&0x1)<<15)|(((1<<BSI_RDCON_TRANS_LEN)-1)&0x3FFF)

#define BSI_STORE_READBACK_DATA( is_ok, p ) { p = (is_ok) ? (HW_READ(BSI_RDDAT)&0xFFFFF) : ( 0xAAAAA ); }


void IMM_RECEIVE_BSI( unsigned short ADD_Ctrl, unsigned long ADD, unsigned short DATA_Ctrl, unsigned long *DATA )
{
   unsigned long bsi_rdaddr_backup;
   unsigned long bsi_rdaddr_con_backup;
   unsigned long bsi_rdcs_con_backup;
   unsigned long bsi_rdcon_backup;
   int           count_down     = BSI_READ_TIME;
   int           is_ready       = 0;
   BSI_SWITCH    bsi_switch_ori = IMM_OFFCHIP_BSI_SWITCH_QUERY();

   (void)ADD_Ctrl; (void)DATA_Ctrl;                   /* do nothing */

   if( (bsi_switch_ori==BSI_SWITCH_NO_ACT) ||
       (bsi_switch_ori==BSI_SWITCH_NO_ACT_ONCE) )
   {} /* BSI switch owner remains 2G (for L1D_RF_PowerOn()) or TD (for L1D_RF_Get_TDD_Power_Status()) */
   else
   {  IMM_OFFCHIP_BSI_CFG( BSI_SWITCH_2G );  } /* Change offchip BSI switch owner to 2G */

   bsi_rdaddr_backup     = HW_READ( BSI_RDADDR     ); /* Backup original settings */
   bsi_rdaddr_con_backup = HW_READ( BSI_RDADDR_CON );
   bsi_rdcs_con_backup   = HW_READ( BSI_RDCS_CON   );
   bsi_rdcon_backup      = HW_READ( BSI_RDCON      );

   *DATA = 0;

   HW_WRITE( BSI_RDADDR, ((0x1)<<8)|(ADD&0xFF)   );
   HW_WRITE( BSI_RDADDR_CON, BSI_RDADDR_CON_MAIN );
   HW_WRITE( BSI_RDCS_CON, BSI_RDCS_CON_MAIN     );

   #if IS_CHIP_MT6276_S00 || IS_CHIP_MT6573 /* for 6276E1 and 6573 */
   HW_WRITE( BSI_RDDAT, 0x0                      ); /* Clear Ready bit before triggering immediate read back event */
   #else /* for 6276E2 */
   HW_WRITE( BSI_RDDAT_H, 0x0                    ); /* Clear Ready bit before triggering immediate read back event */
   #endif
   HW_WRITE( BSI_RDCON, BSI_RDCON_IMMRD_SETTING  );

   /*Wait for readback ready*/
   while( count_down > 0 )
   {
      WAIT_TIME_QB(2);
   #if IS_CHIP_MT6276_S00 || IS_CHIP_MT6573 /* for 6276E1 and 6573 */
      is_ready = ( HW_READ(BSI_RDDAT)&0x80000000   );
   #else /* for 6276E2 */
      is_ready = ( HW_READ(BSI_RDDAT_H)&0x80000000 );
   #endif
      if( is_ready )
         break;
      count_down--;
      LET_SIM_TIME_RUN_A_BIT();
   }

   /*Store RF readback data*/
   BSI_STORE_READBACK_DATA( is_ready, *DATA );

   /*Restore original setting*/
   #if IS_COSIM_ON_L1SIM_SUPPORT
   /* do not restore in the modem sim; otherwise, the settings can not be checked */
   #else
   HW_WRITE( BSI_RDADDR,      bsi_rdaddr_backup             );
   HW_WRITE( BSI_RDADDR_CON, (bsi_rdaddr_con_backup&0xFFFF) );
   HW_WRITE( BSI_RDCS_CON,   (bsi_rdcs_con_backup&0xFFFF)   );
   HW_WRITE( BSI_RDCON,       bsi_rdcon_backup              );
   #endif

   if( bsi_switch_ori==BSI_SWITCH_NO_ACT )
   {}                                                    /* Do not change BSI switch owner to TD until the end of L1D_RF_PowerOn() */
   else if( bsi_switch_ori==BSI_SWITCH_NO_ACT_ONCE )
   {  IMM_OFFCHIP_BSI_CFG( BSI_SWITCH_2G_THEN_TD );  }   /* Keep current BSI switch owner but change state back to BSI_SWITCH_2G_THEN_TD */
   else
   {  IMM_OFFCHIP_BSI_CFG( BSI_SWITCH_TD );  }           /* Change offchip BSI switch owner to TD */
}

   #if IS_CHIP_MT6583_MD2
sBSIread BSIread;
#define BSI_STORE_TDMA_READBACK_DATA( is_ok, p ) { p = (is_ok) ? (HW_READ(BSI_TDMA_RDDAT)&0xFFFFF) : ( 0xAAAAA ); }

void L1D_RF_Readback_BSI_Set_Event( void* data )
{
   sBSIread* p;
   p = (sBSIread*)data;
   /*Set TDMA timer*/
   HW_WRITE( TDMA_RD_BSI0, p->event_timing );

   /*Enable HW read back TDMA event mode*/
   HW_WRITE( BSI_TDMA_RDCON, BSI_RDCON_EVENT_SETTING );
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Readback_BSI_Set_Address( void* data )
{
   sBSIread* p;
   p = (sBSIread*)data;

   HW_WRITE( BSI_TDMA_RDADDR_CON, BSI_RDADDR_CON_MAIN );

   /*Set readback addr*/
   HW_WRITE( BSI_TDMA_RDADDR, ((0x1)<<8)|((p->ADD)&0xFF) );

   HW_WRITE( BSI_TDMA_RDCS_CON, BSI_RDCS_CON_MAIN );
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Readback_BSI_GetData( unsigned short ADD, unsigned long *DATA )
{
   unsigned long read_addr;

   /*Get read addr*/
   read_addr = HW_READ(BSI_TDMA_RDADDR)&0xFF;

   /*Store RF readback data*/
   BSI_STORE_TDMA_READBACK_DATA( (read_addr == ADD), *DATA );

   BSIread.flag |=  BSI_GET_READBACK_DATA ;
   BSIread.ADD_pair = ADD;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#elif IS_RF_MT6256RF || IS_RF_MT6251RF || IS_RF_MT6255RF || IS_RF_MT6250RF
/*Immediate BSI control*/
   #if IS_RF_MT6250RF
#define BSI_RDCON_IMMRD_EVENT    0      /* 0: not trigger, 1: trigger immediate readback   */
#define BSI_RDCON_IMMRD_IMM      1
#define BSI_RDCON_ENHW_ON        1      /* 1: HW read back function enable 0:OFF           */
#define BSI_RDCON_ENHW_OFF       0
#define BSI_RDCON_RD_MODE_IMM    0      /* 0: SW imm mode, 1: TDMA mode                    */
#define BSI_RDCON_RD_MODE_EVENT  1
#define BSI_RDCON_RDATA_LEN     32      /* data length                                     */
#define BSI_RDCON_TRANS_CLKON    0      /* 0: no transition                                */
#define BSI_RDCON_TRANS_LEN      0      /* Transiton state length                          */

/*       WADDR_CLK_SPD         RD_CLK_SPD */
/* 0 --> 130/ 2 = 65    MHz    reserved   */
/* 1 --> 130/ 4 = 32.5  MHz               */
/* 2 --> 130/ 6 = 21.67 MHz               */
/* 3 --> 130/ 8 = 16.25 MHz               */
/* 4 --> 130/12 = 10.83 MHz               */
/* 5 --> 130/16 =  8.13 MHz               */
/* 6 --> 130/24 =  5.42 MHz               */
/* 7 --> 130/32 =  4.06 MHz               */
#define BSI_RDADDR_CON_CLK_SPD   0
#define BSI_RDCON_CLK_SPD        3
#define BSI_RDADDR_CON_LEN      10      /* BSI addr length */
#define BSI_RDADDR_CON_CLK_POL   1
#define BSI_READ_TIME           25      /* Wait 25*2 Qb*/
#define BSI_NOT_READBACK_DATA   0x44444 //((1 << BSI_RDCON_RDATA_LEN) | 0x44444)

#define BSI_RDCON_IMMRD_SETTING ((BSI_RDCON_IMMRD_IMM    << 19) | (BSI_RDCON_ENHW_ON      << 15) | (BSI_RDCON_RD_MODE_IMM   << 14) | \
                                ((BSI_RDCON_RDATA_LEN+1) <<  8) | (BSI_RDCON_TRANS_CLKON  <<  7) | \
                                 (BSI_RDCON_TRANS_LEN    <<  3) | (BSI_RDCON_CLK_SPD))
#define BSI_RDCON_EVENT_SETTING ((BSI_RDCON_IMMRD_EVENT  << 19) | (BSI_RDCON_ENHW_ON      << 15) | (BSI_RDCON_RD_MODE_EVENT << 14) | \
                                ((BSI_RDCON_RDATA_LEN+1) <<  8) | (BSI_RDCON_TRANS_CLKON  <<  7) | \
                                 (BSI_RDCON_TRANS_LEN    <<  3) | (BSI_RDCON_CLK_SPD))
#define BSI_RDCON_CLOSE_SETTING  (BSI_RDCON_ENHW_OFF     << 15)

#define BSI_RDADDR_CON_SETTING  (((BSI_RDADDR_CON_LEN-1) <<  8) | (BSI_RDADDR_CON_CLK_SPD <<  3) | (BSI_RDADDR_CON_CLK_POL  <<  1))
   #else
#define BSI_RDCON_IMMRD_EVENT    0      /* 0: not trigger, 1: trigger immediate readback   */
#define BSI_RDCON_IMMRD_IMM      1
#define BSI_RDCON_ENHW_ON        1      /* 1: HW read back function enable 0:OFF           */
#define BSI_RDCON_ENHW_OFF       0
#define BSI_RDCON_LATCH_POL      0      /* 0: latch data at rising edge                    */
#define BSI_RDCON_RD_MODE_IMM    0      /* 0: SW imm mode, 1: TDMA mode                    */
#define BSI_RDCON_RD_MODE_EVENT  1
#define BSI_RDCON_RDATA_LEN     20      /* data length                                     */
#define BSI_RDCON_TRANS_CLKON    0      /* 0: no transition                                */
#define BSI_RDCON_TRANS_LEN      1      /* Transiton state length                          */
#define BSI_RDCON_CLK_POL        1      /* 1: inverted clock polarity                      */
#define BSI_RDCON_CLK_SPD        1      /* 0, 1, 2 or 3: 52/2,4,6,8 Mhz                    */

#define BSI_RDCON_IMMRD_SETTING ((BSI_RDCON_IMMRD_IMM     << 19) | (BSI_RDCON_ENHW_ON   << 15) | (BSI_RDCON_LATCH_POL   << 14) | \
                                 (BSI_RDCON_RD_MODE_IMM   << 13) | (BSI_RDCON_RDATA_LEN <<  8) | (BSI_RDCON_TRANS_CLKON <<  7) | \
                                 (BSI_RDCON_TRANS_LEN     <<  4) | (BSI_RDCON_CLK_POL   <<  2) | (BSI_RDCON_CLK_SPD))
#define BSI_RDCON_EVENT_SETTING ((BSI_RDCON_IMMRD_EVENT   << 19) | (BSI_RDCON_ENHW_ON   << 15) | (BSI_RDCON_LATCH_POL   << 14) | \
                                 (BSI_RDCON_RD_MODE_EVENT << 13) | (BSI_RDCON_RDATA_LEN <<  8) | (BSI_RDCON_TRANS_CLKON <<  7) | \
                                 (BSI_RDCON_TRANS_LEN     <<  4) | (BSI_RDCON_CLK_POL   <<  2) | (BSI_RDCON_CLK_SPD))
#define BSI_RDCON_CLOSE_SETTING  (BSI_RDCON_ENHW_OFF      << 15)
#define BSI_ADDR_LEN             8     /* BSI addr length */
#define BSI_ADDR_READ_BIT        1
#define BSI_RDCON_READADDR(n)   ((BSI_ADDR_READ_BIT << (BSI_ADDR_LEN+16)) | (BSI_ADDR_LEN << 1) | ((n) << 16))
#define BSI_READ_TIME           25     /* Wait 25*2 Qb*/
#define BSI_NOT_READBACK_DATA   ((1 << BSI_RDCON_RDATA_LEN) | 0x44444)
   #endif

#define BSI_STORE_READBACK_DATA( is_ok, p ) { p = (is_ok) ? HW_READ( BSI_RDDAT ) : BSI_NOT_READBACK_DATA; }

sBSIread BSIread;

void IMM_RECEIVE_BSI( unsigned short ADD_Ctrl, unsigned long ADD, unsigned short DATA_Ctrl, unsigned long *DATA )
{
   #if IS_RF_MT6250RF
   unsigned long bsi_rdcon_backup;
   unsigned long bsi_rdaddr_con_backup;
   unsigned long bsi_rdaddr_backup;
   int           count_down = BSI_READ_TIME;
   int           is_ready   = 0;

   (void)ADD_Ctrl; (void)DATA_Ctrl; // do nothing

   /*Backup original setting*/
   bsi_rdaddr_con_backup = HW_READ( BSI_RDADDR_CON );
   bsi_rdcon_backup      = HW_READ( BSI_RDCON      );
   bsi_rdaddr_backup     = HW_READ( BSI_RDADDR     );

   /*Clear Ready bit before triggering immediate read back event*/
   HW_WRITE( BSI_RDCON, (HW_READ( BSI_RDCON ) & (~0x80000000)) );

   HW_WRITE( BSI_RDADDR_CON, BSI_RDADDR_CON_SETTING );

   /*Set readback addr*/
   HW_WRITE( BSI_RDADDR, ((0x1)<<8)|(ADD&0xFF) );

   /*Trigger HW read back active*/
   HW_WRITE( BSI_RDCON, BSI_RDCON_IMMRD_SETTING );

   /*Wait for readback ready*/
   while( count_down > 0 )
   {
      WAIT_TIME_QB(2);
      is_ready = HW_READ( BSI_RDCON ) & 0x80000000;
      if( is_ready )
         break;
      count_down--;
   }

   /*Store RF readback data*/
   BSI_STORE_READBACK_DATA( is_ready, *DATA );

   /*Restore original setting*/
   HW_WRITE(BSI_RDADDR_CON, bsi_rdaddr_con_backup );
   HW_WRITE(BSI_RDCON     , bsi_rdcon_backup      );
   HW_WRITE(BSI_RDADDR    , bsi_rdaddr_backup     );
   #else
   unsigned long bsi_rdcon_backup;
   unsigned long bsi_rdaddr_con_backup;
   int           count_down = BSI_READ_TIME;
   int           is_ready   = 0;

   (void)ADD_Ctrl; (void)DATA_Ctrl; // do nothing
   /*Backup original setting*/
   bsi_rdaddr_con_backup = HW_READ( BSI_RDADDR_CON );
   bsi_rdcon_backup      = HW_READ( BSI_RDCON      );

   /*Set readback addr*/
   HW_WRITE( BSI_RDADDR_CON, BSI_RDCON_READADDR( ADD ) );

   /*Trigger HW read back active*/
   HW_WRITE( BSI_RDCON, BSI_RDCON_IMMRD_SETTING );

   /*Wait for readback ready*/
   while( count_down > 0 )
   {
      WAIT_TIME_QB(2);
      is_ready = HW_READ( BSI_RDADDR_CON ) & 0x1;
      if( is_ready )
         break;
      count_down--;
   }

   /*Store RF readback data*/
   BSI_STORE_READBACK_DATA( is_ready, *DATA );

   /*Restore original setting*/
   HW_WRITE(BSI_RDADDR_CON, bsi_rdaddr_con_backup );
   HW_WRITE(BSI_RDCON     , bsi_rdcon_backup      );
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Readback_BSI_Set_Event( void* data )
{
   sBSIread* p;
   p = (sBSIread*)data;
   /*Set TDMA timer*/
   HW_WRITE( TDMA_RD_BSI0, p->event_timing );

   /*Enable HW read back TDMA event mode*/
   HW_WRITE( BSI_RDCON, BSI_RDCON_EVENT_SETTING );
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Readback_BSI_Set_Address( void* data )
{
   sBSIread* p;
   p = (sBSIread*)data;

   #if IS_RF_MT6250RF
   HW_WRITE( BSI_RDADDR_CON, BSI_RDADDR_CON_SETTING );
   /*Clear ready bit*/
   HW_WRITE( BSI_RDADDR_CON, (HW_READ(BSI_RDADDR_CON)&(~0x80000000)) );
   /*Set readback addr*/
   HW_WRITE( BSI_RDADDR, (p->ADD&0xFF)              );
   #else
   /*Set readback addr*/
   HW_WRITE( BSI_RDADDR_CON, BSI_RDCON_READADDR( p->ADD ) );
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Readback_BSI_GetData( unsigned short ADD, unsigned long *DATA )
{
   #if IS_RF_MT6250RF
   unsigned long read_addr, bsi_rdaddr_con, bsi_rdaddr;

   bsi_rdaddr_con = HW_READ( BSI_RDADDR_CON );
   bsi_rdaddr     = HW_READ( BSI_RDADDR     );

   /*Get real read addr*/
   read_addr = bsi_rdaddr & 0xFF;

   // Does get BSI data ?
   if( bsi_rdaddr_con & (0x1) )
   {  /*Store RF readback data*/
      BSI_STORE_READBACK_DATA( (read_addr == ADD), *DATA );
      /*Clear ready bit*/
      HW_WRITE( BSI_RDADDR_CON, bsi_rdaddr_con & (~0x80000000) );
      BSIread.flag |=  BSI_GET_READBACK_DATA ;
      BSIread.ADD_pair = ADD;
   }
   #else
   unsigned long read_addr, bsi_rdaddr_con;

   bsi_rdaddr_con = HW_READ( BSI_RDADDR_CON );

   /*Get real read addr*/
   read_addr = (bsi_rdaddr_con >> 16) & ((1 << BSI_ADDR_LEN) - 1);

   // Does get BSI data ?
   if( bsi_rdaddr_con & (0x1) )
   {  /*Store RF readback data*/
      BSI_STORE_READBACK_DATA( (read_addr == ADD), *DATA );
      /*Clear ready bit*/
      HW_WRITE( BSI_RDADDR_CON, bsi_rdaddr_con & (~0x1) );
      BSIread.flag |=  BSI_GET_READBACK_DATA ;
      BSIread.ADD_pair = ADD;
   }
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#elif IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B || IS_RF_MT6140C || IS_RF_CMOSEDGE || IS_RF_MTKSOC1 || IS_RF_MTKSOC1T || IS_RF_MT6252RF
   #if IS_CHIP_MT6227_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
#define  HW_BSI_DOUT_CTRL(clk, cs, data) (*(BSI_DOUT) = ((clk&0x1)|((cs<<1)&0x2)|((data<<2)&0x4)))
#define  GPIO_BSI_DIN_PORT   1 /* Use GPIO1 as BSI DATA input port       */
#define  GPIO_BSI_DIN_MODE   1 /* mode 1 : BSI RF calibration data input */
#define  GPIO_BSI_DIN_DIR    0 /* input                                  */

void IMM_RECEIVE_BSI( unsigned short ADD_Ctrl, unsigned long ADD, unsigned short DATA_Ctrl, unsigned long *DATA )
{
      #if !IS_SMARTPHONE_CHIP_TK6516_AND_LATTER_VERSION && !IS_SOC_CHIP
   unsigned short saved_data[2];
   void L1D_GPIO_InitIO(char, char);
   void L1D_GPIO_ModeSetup(kal_uint16, kal_uint16);
   extern char L1D_GPIO_ReturnMode(char);
   extern char L1D_GPIO_ReturnDir(char);
      #endif
   short  tx_bit_cnt, rx_bit_cnt, n;
   unsigned long  rx_data;

   tx_bit_cnt = ((ADD_Ctrl>>8)&0x7F)+1;
   rx_bit_cnt = ((DATA_Ctrl>>8)&0x7F)+1;
   rx_data  = 0;

      // TK6516 BSI_CS1_GPIO & BSI_DIN_GPIO are in AP side, we cannot do it directly
      #if !IS_SMARTPHONE_CHIP_TK6516_AND_LATTER_VERSION  && !IS_SOC_CHIP
   // set GPIO_MODE
   saved_data[0] =L1D_GPIO_ReturnMode(GPIO_BSI_DIN_PORT);
   L1D_GPIO_ModeSetup(GPIO_BSI_DIN_PORT, GPIO_BSI_DIN_MODE);
   // set GPIO_DIR as input
         #ifndef __CUST_NEW__
   saved_data[1] =L1D_GPIO_ReturnDir(GPIO_BSI_DIN_PORT);
   L1D_GPIO_InitIO(GPIO_BSI_DIN_DIR, GPIO_BSI_DIN_PORT);
         #endif /*__CUST_NEW__ */
   // BSI IO mode control register
      #endif

      #if IS_RF_MTKSOC1T || IS_RF_MTKSOC1 || IS_RF_MT6252RF
   HW_WRITE( BSI_IO_CON, 0x1); //SW control
      #elif IS_RF_MT6140B || IS_RF_MT6140C || IS_RF_MT6140D || IS_RF_CMOSEDGE
   HW_WRITE( BSI_IO_CON, 0x3); //MJ 3-wire BSI SW control
      #else
   HW_WRITE( BSI_IO_CON, 0x7); //MJ 4-wire BSI SW control
      #endif

      #if IS_RF_CMOSEDGE || IS_RF_MTKSOC1T || IS_RF_MTKSOC1
   ADD|=0x20L; //read bit
      #elif IS_RF_MT6252RF
   ADD|=0x100L; //read bit
      #endif

      #if IS_RF_CMOSEDGE || IS_RF_MTKSOC1T || IS_RF_MTKSOC1 || IS_RF_MT6252RF
   // Initial BSI DOUT
   HW_BSI_DOUT_CTRL(0, 0, 0); /*input: CLK, CS, DATA */
   /* BSI TX begin: Send AUXOUT command */
   for( n=tx_bit_cnt-1; n>=0; n--)
   {
      static unsigned short BSI_DOUT_DATA;
      BSI_DOUT_DATA=(ADD>>n)&0x0001;
      HW_BSI_DOUT_CTRL(0, 1, BSI_DOUT_DATA); /*input: CLK, CS, DATA */
      HW_BSI_DOUT_CTRL(1, 1, BSI_DOUT_DATA); /*input: CLK, CS, DATA */
   }
   HW_BSI_DOUT_CTRL(0, 1, 0); /*input: CLK, CS, DATA */

      #else
   // Initial BSI DOUT
   HW_BSI_DOUT_CTRL(0, 0, 0); /*input: CLK, CS, DATA */
   /* BSI TX begin: Send AUXOUT command */
   for( n=tx_bit_cnt-1; n>=0; n--)
   {
      static unsigned short BSI_DOUT_DATA;
      BSI_DOUT_DATA=(ADD>>n)&0x0001;
      HW_BSI_DOUT_CTRL(0, 0, BSI_DOUT_DATA); /*input: CLK, CS, DATA */
      HW_BSI_DOUT_CTRL(1, 0, BSI_DOUT_DATA); /*input: CLK, CS, DATA */
   }
   HW_BSI_DOUT_CTRL(0, 1, 0); /*input: CLK, CS, DATA */
      #endif

      #if IS_RF_MT6140B || IS_RF_MT6140C || IS_RF_MT6140D || IS_RF_CMOSEDGE || IS_RF_MTKSOC1T || IS_RF_MTKSOC1
   HW_WRITE( BSI_IO_CON, 0x1); //MJ 3-wire BSI read back control
      #endif

      #if IS_RF_CMOSEDGE || IS_RF_MTKSOC1T || IS_RF_MTKSOC1 || IS_RF_MT6252RF
   WAIT_TIME_QB(3);
   /* BSI TX end: Send AUXOUT command */
   /* BSI RX begin: Receive AUXOUT DATA */
   for( n=rx_bit_cnt; n>=0; n--)
   {
      HW_BSI_DOUT_CTRL(1, 0, 0); /*input: CLK, CS, DATA */
      WAIT_TIME_QB(3);
      //latch AUXOUT Data
      if( HW_READ(BSI_DINT) & 0x1 )  // DAT=1
         rx_data |= 1;
      rx_data <<=1;
      HW_BSI_DOUT_CTRL(0, 0, 0); /*input: CLK, CS, DATA */
   }
   /* BSI RX end: Receive AUXOUT DATA */
   HW_BSI_DOUT_CTRL(0, 0, 0); /*input: CLK, CS, DATA */
   WAIT_TIME_QB(3);

      #else
   WAIT_TIME_QB(3);
   /* BSI TX end: Send AUXOUT command */
   /* BSI RX begin: Receive AUXOUT DATA */
   for( n=rx_bit_cnt; n>=0; n--)
   {
      HW_BSI_DOUT_CTRL(0, 1, 0); /*input: CLK, CS, DATA */
      WAIT_TIME_QB(3);
      //latch AUXOUT Data
      if( HW_READ(BSI_DINT) & 0x1 )  // DAT=1
         rx_data |= 1;
      rx_data <<=1;
      HW_BSI_DOUT_CTRL(1, 1, 0); /*input: CLK, CS, DATA */
   }
   /* BSI RX end: Receive AUXOUT DATA */
   HW_BSI_DOUT_CTRL(0, 1, 0); /*input: CLK, CS, DATA */
   WAIT_TIME_QB(3);
   HW_BSI_DOUT_CTRL(0, 0, 0); /*input: CLK, CS, DATA */
      #endif

      // TK6516 BSI_CS1_GPIO & BSI_DIN_GPIO are in AP side, we cannot do it directly
      #if !IS_SMARTPHONE_CHIP_TK6516_AND_LATTER_VERSION && !IS_SOC_CHIP
   L1D_GPIO_ModeSetup(GPIO_BSI_DIN_PORT, saved_data[0]);
         #ifndef __CUST_NEW__
   L1D_GPIO_InitIO(saved_data[1] , GPIO_BSI_DIN_PORT);
         #endif /*__CUST_NEW__ */
      #endif

   // BSI IO mode control register
   HW_WRITE( BSI_IO_CON, 0x2);  //BSI return HW control
   *DATA = rx_data>>1;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #elif IS_CHIP_MT6205_AND_LATTER_VERSION
      #ifdef __CUST_NEW__
extern const char gpio_rf_control2_pin;
#define  GPIO_BSI_DIN_PORT   gpio_rf_control2_pin /* Use GPIO as BSI DATA input port */
      #else /* __CUST_NEW__ */
#define  GPIO_BSI_DIN_PORT   1 /* Use GPIO1 as BSI DATA input port */
      #endif /* __CUST_NEW__ */
#define  GPIO_BSI_DIN_MODE   0 /* mode 0 : GPIO                    */
#define  GPIO_BSI_DIN_DIR    0 /* input                            */

      #if IS_CHIP_MT6205
         #ifdef __CUST_NEW__
extern const char gpio_rf_control3_pin;
#define  GPIO_BSI_CLK_PORT   gpio_rf_control3_pin /* Use GPIO as BSI CLK output port*/
         #else /* __CUST_NEW__ */
#define  GPIO_BSI_CLK_PORT  6 /* Use GPIO6(BPI6) as BSI CLK output port*/
         #endif /* __CUST_NEW__ */

#define  GPIO_BSI_CLK_MODE   0 /* mode 0 : GPIO                    */
#define  GPIO_BSI_CLK_DIR    1 /* output                           */

      #else /* IS_CHIP_MT6205 */

         #ifdef __CUST_NEW__
extern const char gpio_rf_control3_pin;
#define  GPIO_BSI_CLK_PORT   gpio_rf_control3_pin /* Use GPIO as BSI CLK output port*/
         #else /* __CUST_NEW__ */
#define  GPIO_BSI_CLK_PORT  10 /* Use GPIO10(BPI6) as BSI CLK output port*/
         #endif /* __CUST_NEW__ */

#define  GPIO_BSI_CLK_MODE   0 /* mode 0 : GPIO                    */
#define  GPIO_BSI_CLK_DIR    1 /* output                           */

      #endif /* IS_CHIP_MT6205 */

void IMM_RECEIVE_BSI( unsigned short ADD_Ctrl, unsigned long ADD, unsigned short DATA_Ctrl, unsigned long *DATA )
{
   unsigned short saved_data[4];
   short  n, rx_bit_cnt;
   unsigned long  rx_data;
   void L1D_GPIO_InitIO(char, char);
   extern char L1D_GPIO_ReadIO(char);
   void L1D_GPIO_WriteIO(char, char);
   void L1D_GPIO_ModeSetup(kal_uint16, kal_uint16);
   extern char L1D_GPIO_ReturnMode(char);
   extern char L1D_GPIO_ReturnDir(char);

   rx_bit_cnt = ((DATA_Ctrl>>8)&0x7F)+1;
   rx_data  = 0;

   // set GPIO_MODE as BSI read back CLK
   saved_data[0] =L1D_GPIO_ReturnMode(GPIO_BSI_CLK_PORT);
   L1D_GPIO_ModeSetup(GPIO_BSI_DIN_PORT, GPIO_BSI_CLK_MODE);
   // set GPIO_DIR as input to avoid interfering with BSI CLK
   saved_data[1] =L1D_GPIO_ReturnDir(GPIO_BSI_CLK_PORT);
   L1D_GPIO_InitIO(~GPIO_BSI_CLK_DIR, GPIO_BSI_CLK_PORT);
   // set GPIO_MODE as BSI read back DATA_IN
   saved_data[2] =L1D_GPIO_ReturnMode(GPIO_BSI_DIN_PORT);
   L1D_GPIO_ModeSetup(GPIO_BSI_DIN_PORT, GPIO_BSI_DIN_MODE);
   // set GPIO_DIR as input
   saved_data[3] =L1D_GPIO_ReturnDir(GPIO_BSI_DIN_PORT);
   L1D_GPIO_InitIO(GPIO_BSI_DIN_DIR, GPIO_BSI_DIN_PORT);

   {  volatile unsigned long  addr;
      HW_WRITE( BSI_CON, SCTRL_IMOD_RX_MAIN );
      addr = (long)BSI_Dn_CON(0);
      HW_WRITE( (APBADDR)addr, ADD_Ctrl );  addr += 4;
      HW_WRITE_BSI_DATA( addr, ADD );
      HW_WRITE( BSI_CON, SCTRL_IMOD_RX_SEND );  // send AUXOUT commend
      WAIT_TIME_QB(64);
   }
   L1D_GPIO_InitIO(GPIO_BSI_CLK_DIR, GPIO_BSI_CLK_PORT);// set GPIO_DIR as output to generate BSI read back CLK

   L1D_GPIO_WriteIO(0, GPIO_BSI_CLK_PORT);   // set GPIO_CLK_DOUT = 0
   for( n=rx_bit_cnt; n>=0; n--)
   {
      L1D_GPIO_WriteIO(1, GPIO_BSI_CLK_PORT);    // set GPIO_CLK_DOUT = 1
      //latch AUXOUT Data
      if( L1D_GPIO_ReadIO(GPIO_BSI_DIN_PORT) & 0x1 )  // DAT=1
         rx_data |= 1;
      rx_data <<=1;
      L1D_GPIO_WriteIO(0, GPIO_BSI_CLK_PORT);   // set GPIO_CLK_DOUT = 0
   }
   rx_data >>=1;
   L1D_GPIO_ModeSetup(GPIO_BSI_DIN_PORT, saved_data[0] );
   L1D_GPIO_InitIO(  saved_data[1] , GPIO_BSI_CLK_PORT);
   L1D_GPIO_ModeSetup(GPIO_BSI_DIN_PORT, saved_data[2] );
   L1D_GPIO_InitIO(saved_data[3] , GPIO_BSI_DIN_PORT);
   *DATA = rx_data;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #endif
#endif /*IS_RF_MT6139C || IS_RF_MT6140A || IS_RF_MT6140B  || IS_RF_MT6140C || IS_RF_CMOSEDGE || IS_RF_MTKSOC1 || IS_RF_MTKSOC1T || IS_RF_MT6252RF*/

/*===============================================================================================*/

void L1D_RF_TXIQ_Dynamic_Swap( void )
{
#if BBTX_IQSWAP_ONFLY //BBTx has double buffer design for TXIQSWAP
   l1d_rf.d2c_txiqswap = 0;
#elif IS_RF_SKY74117 || IS_RF_SKY74400
   l1d_rf.d2c_txiqswap = 1;
#else
   l1d_rf.d2c_txiqswap = 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_BFE_SetTxIQSwap( void )
{
#if IS_DLIF_CHIP || IS_DCR_IN_DLIF_CHIP
   // do nothing
#else
   BFETXSET  bfetxset;
   HW_READ_BFETXSET( bfetxset );

   if(l1d_rf.inj)
      bfetxset.field.iqswap = 1;
   else
      bfetxset.field.iqswap = 0;

   HW_WRITE_BFETXSET( bfetxset );
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_BBTXRX_CHIP_DESIGN_VER_2 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2

#define HW_WRITE_TX_PH( data )                             \
{  APBADDR _reg = TX_PH(0);                                \
   HW_WRITE( _reg, data );   _reg += 2;                    \
   HW_WRITE( _reg, data );   _reg += 2;                    \
   HW_WRITE( _reg, data );   _reg += 2;                    \
   HW_WRITE( _reg, data );   _reg += 2;                    \
   HW_WRITE( _reg, data );   _reg += 2;                    \
   HW_WRITE( _reg, data );                                 \
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#define HW_WRITE_TX_GAIN( data )                           \
{  unsigned short _data;                                   \
   APBADDR _reg = TX_GAIN(0);                              \
   _data = ( data & 0x00FF )|( data<<8 );                  \
   HW_WRITE( _reg, _data );   _reg += 2;                   \
   HW_WRITE( _reg, _data );   _reg += 2;                   \
   HW_WRITE( _reg, _data );                                \
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#define HW_WRITE_TX_OFF( data )                            \
{  APBADDR _reg = TX_OFFSET(0);                            \
   HW_WRITE( _reg, data );   _reg += 2;                    \
   HW_WRITE( _reg, data );   _reg += 2;                    \
   HW_WRITE( _reg, data );   _reg += 2;                    \
   HW_WRITE( _reg, data );   _reg += 2;                    \
   HW_WRITE( _reg, data );   _reg += 2;                    \
   HW_WRITE( _reg, data );                                 \
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_BFE_SET_TX_CON( int idx, void *_set )
{
   BFETXCON *bfetxcon = (BFETXCON *)_set;
   APBADDR        reg = TX_GAIN( ((idx>>1)&0x3) );
   unsigned short d16 = HW_READ( reg );

   d16 &= ~(0xFF                     << (idx&0x1)*8);
   d16 |=  (bfetxcon->field2.tx_gain << (idx&0x1)*8);
   HW_WRITE( reg, d16 );
   HW_WRITE( TX_PH(idx),     bfetxcon->field2.tx_ph  );
   HW_WRITE( TX_OFFSET(idx), bfetxcon->field2.tx_off );
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#endif

void L1D_BFE_GET_RxRegisters( void *_set )
{
   BFERXSET *set = (BFERXSET *)_set;
#if IS_DLIF_CHIP
   #if IS_CHIP_MT6256_S00 || IS_CHIP_MT6251
/*MT6251*/         {
/*MT6251*/            set->data[0] = HW_READ( RX_CON0 );
/*MT6251*/            set->data[1] = HW_READ( RX_CON3 );
/*MT6251*/            set->data[2] = HW_READ( IREST_CON0 );
/*MT6251*/            set->data[3] = HW_READ( BFE_CON1 );
/*MT6251*/            set->data[4] = HW_READ( RX_MON );
/*MT6251*/         }
   #elif IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/*MT6572*/         {
/*MT6572*/            set->data[0] = HW_READ( RX_CON0 );
/*MT6572*/            set->data[1] = HW_READ( RX_TIME_CON0 );
/*MT6572*/            set->data[2] = HW_READ( RX_TIME_CON1 );
/*MT6572*/            set->data[3] = HW_READ( RX_TIME_CON2 );
      #if IS_2GRXD_CHIP_MT6765_AND_LATTER_VERSION
/*MT6295*/            set->data[4] = HW_READ( RX_CON0_BFE1 );
/*MT6295*/            set->data[5] = HW_READ( RX_TIME_CON0_BFE1 );
/*MT6295*/            set->data[6] = HW_READ( RX_TIME_CON1_BFE1 );
/*MT6295*/            set->data[7] = HW_READ( RX_TIME_CON2_BFE1 );
      #endif /* IS_GL1D_RXD_SUPPORT */
/*MT6572*/         }
   #elif IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1
/*MT6250*/         {
/*MT6250*/            set->data[0] = HW_READ( RX_CON0 );
/*MT6250*/            set->data[1] = HW_READ( RX_TIME_CON0 );
/*MT6250*/            set->data[2] = HW_READ( RX_TIME_CON1 );
/*MT6250*/         }
   #else
/*MT6256,MT6255*/  {
/*MT6256,MT6255*/     set->data[0] = HW_READ( RX_CON0 );
/*MT6256,MT6255*/     set->data[1] = HW_READ( RX_TIME_CON0 );
/*MT6256,MT6255*/     set->data[2] = HW_READ( RX_TIME_CON1 );
/*MT6256,MT6255*/     set->data[3] = HW_READ( RX_MON );
/*MT6256,MT6255*/  }
   #endif
#elif IS_BBTXRX_CHIP_DESIGN_VER_3
/*MT6583_MD2*/     {
/*MT6583_MD2*/        set->data[0] = HW_READ( RX_CON0 );
/*MT6583_MD2*/        set->data[1] = HW_READ( RX_TIME_CON0 );
/*MT6583_MD2*/        set->data[2] = HW_READ( RX_TIME_CON1 );
/*MT6583_MD2*/     }
#elif IS_CHIP_MT6227
/*MT6227*/         {
/*MT6227*/            set->data[0] = HW_READ( RX_CFG );
/*MT6227*/            set->data[1] = HW_READ( RX_CON );
/*MT6227*/            set->data[2] = HW_READ( BBRX_AC_CON );
/*MT6227*/         }
#elif IS_CHIP_MT6225_AND_LATTER_VERSION || IS_CHIP_MT6223 || IS_CHIP_MT6253
/*MT6223,MT6225~*/ {
/*MT6223,MT6225~*/    set->data[0] = HW_READ( RX_CFG );
/*MT6223,MT6225~*/    set->data[1] = HW_READ( RX_CON );
/*MT6223,MT6225~*/    set->data[2] = HW_READ( BBRX_AC_CON );
/*MT6223,MT6225~*/    set->data[3] = HW_READ( RX_PM_CON   );
/*MT6223,MT6225~*/    set->data[4] = HW_READ( RX_FIR_CSID_CON );
/*MT6223,MT6225~*/ }
#elif IS_CHIP_MT6218_AND_LATTER_VERSION
/*MT6218~*/        {
/*MT6218~*/           set->data[0] = HW_READ( RX_CFG );
/*MT6218~*/           set->data[1] = HW_READ( RX_CON );
/*MT6218~*/           set->data[2] = HW_READ( BBRX_AC_CON );
/*MT6218~*/        }
#elif IS_BBTXRX_CHIP_DESIGN_VER_2
/*MT6276~*/        {
/*MT6276~*/           set->data[0] = HW_READ( RX_CFG );
/*MT6276~*/           set->data[1] = HW_READ( RX_CON );
/*MT6276~*/           set->data[2] = HW_READ( RX_CON1 );
/*MT6276~*/           set->data[3] = HW_READ( RX_PM_CON );
/*MT6276~*/           set->data[4] = HW_READ( RX_FIR_CSID_CON );
/*MT6276~*/        }
#elif IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION
/*MT6238~*/        {
/*MT6238~*/           set->data[0] = HW_READ( RX_CFG );
/*MT6238~*/           set->data[1] = HW_READ( RX_CON );
/*MT6238~*/           set->data[2] = HW_READ( BBRX_AC_CON );
/*MT6238~*/           set->data[3] = HW_READ( RX_PM_CON   );
/*MT6238~*/           set->data[4] = HW_READ( RX_FIR_CSID_CON );
/*MT6238~*/        }
#elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION && !IS_CHIP_MT6223 && !IS_CHIP_MT6238 && !IS_CHIP_MT6253
/*MT6229~*/        {
/*MT6229~*/           set->data[0] = HW_READ( RX_CFG );
/*MT6229~*/           set->data[1] = HW_READ( RX_CON );
/*MT6229~*/           set->data[2] = HW_READ( BBRX_AC_CON );
/*MT6229~*/           set->data[3] = HW_READ( RX_PM_CON   );
/*MT6229~*/           set->data[4] = HW_READ( RX_FIR_CSID_CON );
/*MT6229~*/        }
#else
/*OTHERS*/         {
/*OTHERS*/            set->data[0] = HW_READ( RX_CFG );
/*OTHERS*/            set->data[1] = HW_READ( RX_CON );
/*OTHERS*/         }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_BFE_SET_RxRegisters( void *_set )
{
   BFERXSET *set = (BFERXSET *)_set;
#if IS_DLIF_CHIP
   #if IS_CHIP_MT6256_S00 || IS_CHIP_MT6251
/*MT6251*/         {
/*MT6251*/            HW_WRITE( RX_CON0        , set->data[0] );
/*MT6251*/            HW_WRITE( RX_CON3        , set->data[1] );
/*MT6251*/            HW_WRITE( IREST_CON0     , set->data[2] );
/*MT6251*/            HW_WRITE( BFE_CON1       , set->data[3] );
/*MT6251*/            HW_WRITE( RX_MON         , set->data[4] );
/*MT6251*/         }
   #elif IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/*MT6572*/         {
/*MT6572*/            HW_WRITE( RX_CON0        , set->data[0] );
/*MT6572*/            HW_WRITE( RX_TIME_CON0   , set->data[1] );
/*MT6572*/            HW_WRITE( RX_TIME_CON1   , set->data[2] );
/*MT6572*/            HW_WRITE( RX_TIME_CON2   , set->data[3] );
      #if IS_2GRXD_CHIP_MT6765_AND_LATTER_VERSION
/*MT6295*/            HW_WRITE( RX_CON0_BFE1     , set->data[4] ); 
/*MT6295*/            HW_WRITE( RX_TIME_CON0_BFE1, set->data[5] );
/*MT6295*/            HW_WRITE( RX_TIME_CON1_BFE1, set->data[6] );
/*MT6295*/            HW_WRITE( RX_TIME_CON2_BFE1, set->data[7] );
      #endif /* IS_2GRXD_CHIP_MT6765_AND_LATTER_VERSION */

/*MT6572*/         }
   #elif IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1
/*MT6250*/         {
/*MT6250*/            HW_WRITE( RX_CON0        , set->data[0] );
/*MT6250*/            HW_WRITE( RX_TIME_CON0   , set->data[1] );
/*MT6250*/            HW_WRITE( RX_TIME_CON1   , set->data[2] );
/*MT6250*/         }
   #else
/*MT6256,MT6255*/  {
/*MT6256,MT6255*/     HW_WRITE( RX_CON0        , set->data[0] );
/*MT6256,MT6255*/     HW_WRITE( RX_TIME_CON0   , set->data[1] );
/*MT6256,MT6255*/     HW_WRITE( RX_TIME_CON1   , set->data[2] );
/*MT6256,MT6255*/     HW_WRITE( RX_MON         , set->data[3] );
/*MT6256,MT6255*/  }
   #endif
#elif IS_BBTXRX_CHIP_DESIGN_VER_3
/*MT6583_MD2*/     {
/*MT6583_MD2*/        HW_WRITE( RX_CON0        , set->data[0] );
/*MT6583_MD2*/        HW_WRITE( RX_TIME_CON0   , set->data[1] );
/*MT6583_MD2*/        HW_WRITE( RX_TIME_CON1   , set->data[2] );
/*MT6583_MD2*/     }
#elif IS_CHIP_MT6227
/*MT6227*/         {
/*MT6227*/            HW_WRITE( RX_CFG         , set->data[0] );
/*MT6227*/            HW_WRITE( RX_CON         , set->data[1] );
/*MT6227*/            HW_WRITE( BBRX_AC_CON    , set->data[2] );
/*MT6227*/         }
#elif IS_CHIP_MT6225_AND_LATTER_VERSION || IS_CHIP_MT6223 || IS_CHIP_MT6253
/*MT6223,MT6225~*/ {
/*MT6223,MT6225~*/    HW_WRITE( RX_CFG         , set->data[0] );
/*MT6223,MT6225~*/    HW_WRITE( RX_CON         , set->data[1] );
/*MT6223,MT6225~*/    HW_WRITE( BBRX_AC_CON    , set->data[2] );
/*MT6223,MT6225~*/    HW_WRITE( RX_PM_CON      , set->data[3] );
/*MT6223,MT6225~*/    HW_WRITE( RX_FIR_CSID_CON, set->data[4] );
/*MT6223,MT6225~*/ }
#elif IS_CHIP_MT6218_AND_LATTER_VERSION
/*MT6218~*/        {
/*MT6218~*/           HW_WRITE( RX_CFG         , set->data[0] );
/*MT6218~*/           HW_WRITE( RX_CON         , set->data[1] );
/*MT6218~*/           HW_WRITE( BBRX_AC_CON    , set->data[2] );
/*MT6218~*/        }
#elif IS_BBTXRX_CHIP_DESIGN_VER_2
/*MT6276~*/        {
/*MT6276~*/           HW_WRITE( RX_CFG         , set->data[0] );
/*MT6276~*/           HW_WRITE( RX_CON         , set->data[1] );
/*MT6276~*/           HW_WRITE( RX_CON1        , set->data[2] );
/*MT6276~*/           HW_WRITE( RX_PM_CON      , set->data[3] );
/*MT6276~*/           HW_WRITE( RX_FIR_CSID_CON, set->data[4] );
/*MT6276~*/        }
#elif IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION
/*MT6238~*/        {
/*MT6238~*/           HW_WRITE( RX_CFG         , set->data[0] );
/*MT6238~*/           HW_WRITE( RX_CON         , set->data[1] );
/*MT6238~*/           HW_WRITE( BBRX_AC_CON    , set->data[2] );
/*MT6238~*/           HW_WRITE( RX_PM_CON      , set->data[3] );
/*MT6238~*/           HW_WRITE( RX_FIR_CSID_CON, set->data[4] );
/*MT6238~*/        }
#elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION && !IS_CHIP_MT6223 && !IS_CHIP_MT6238 && !IS_CHIP_MT6253
/*MT6229~*/        {
/*MT6229~*/           HW_WRITE( RX_CFG         , set->data[0] );
/*MT6229~*/           HW_WRITE( RX_CON         , set->data[1] );
/*MT6229~*/           HW_WRITE( BBRX_AC_CON    , set->data[2] );
/*MT6229~*/           HW_WRITE( RX_PM_CON      , set->data[3] );
/*MT6229~*/           HW_WRITE( RX_FIR_CSID_CON, set->data[4] );
/*MT6229~*/        }
#else
/*OTHERS*/         {
/*OTHERS*/            HW_WRITE( RX_CFG         , set->data[0] );
/*OTHERS*/            HW_WRITE( RX_CON         , set->data[1] );
/*OTHERS*/         }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_BFE_GET_TxRegisters( void *_set )
{
   BFETXSET *set = (BFETXSET *)_set;
#if IS_DLIF_CHIP
   #if IS_CHIP_MT6256_S00 || IS_CHIP_MT6251
/*MT6251*/         {
/*MT6251*/            set->data[0] = HW_READ( TX_CON0 );
/*MT6251*/            set->data[1] = HW_READ( TX_CON1 );
/*MT6251*/            set->data[2] = HW_READ( TX_PWR  );
/*MT6251*/         }
   #elif IS_CHIP_MT6250
/*MT6250*/         {
/*MT6250*/            set->data[0] = HW_READ( TX_CON0 );
/*MT6250*/            set->data[1] = HW_READ( TX_CON1 );
/*MT6250*/         }
   #elif IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/*MT6572*/         {
/*MT6572*/            set->data[0]  = HW_READ( TX_CON0 );
/*MT6572*/            set->data[1]  = HW_READ( TX_CON1 );
/*MT6572*/            set->data[2]  = HW_READ( TX_CON2 );
/*MT6572*/            set->data[3]  = HW_READ( TX_PWR0 );
/*MT6572*/            set->data[4]  = HW_READ( TX_PWR1 );
/*MT6572*/            set->data[5]  = HW_READ( TX_PWR2 );
/*MT6572*/            set->data[6]  = HW_READ( TX_PWR3 );
/*MT6572*/            set->data[7]  = HW_READ( TX_PWR4 );
/*MT6572*/            set->data[8]  = HW_READ( TX_PWR5 );
      #if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/*MT6572*/            set->data[9]  = HW_READ( TX_CON3 );
      #else
/*MT6572*/            set->data[9]  = HW_READ( TX_DLY_CON );
      #endif
/*MT6572*/         }
   #elif IS_CHIP_MT6583_MD1
/*MT6583*/         {
/*MT6583*/            set->data[0]  = HW_READ( TX_CON0 );
/*MT6583*/            set->data[1]  = HW_READ( TX_CON1 );
/*MT6583*/            set->data[2]  = HW_READ( TX_CON2 );
/*MT6583*/            set->data[3]  = HW_READ( TX_PWR0 );
/*MT6583*/            set->data[4]  = HW_READ( TX_PWR1 );
/*MT6583*/            set->data[5]  = HW_READ( TX_PWR2 );
/*MT6583*/            set->data[6]  = HW_READ( TX_PWR3 );
/*MT6583*/            set->data[7]  = HW_READ( TX_PWR4 );
/*MT6583*/            set->data[8]  = HW_READ( TX_PWR5 );
/*MT6583*/            set->data[9]  = HW_READ( TX_DLY_CON   );
/*MT6583*/            set->data[10] = HW_READ( TX_PH(0)     );
/*MT6583*/            set->data[11] = HW_READ( TX_GAIN(0)   );
/*MT6583*/            set->data[12] = HW_READ( TX_OFFSET(0) );
/*MT6583*/         }
   #elif IS_CHIP_MT6280
/*MT6280*/         {
/*MT6280*/            set->data[0] = HW_READ( TX_CON0 );
/*MT6280*/            set->data[1] = HW_READ( TX_CON1 );
/*MT6280*/            set->data[2] = HW_READ( TX_CON2 );
/*MT6280*/            set->data[3] = HW_READ( TX_PWR0 );
/*MT6280*/            set->data[4] = HW_READ( TX_PWR1 );
/*MT6280*/            set->data[5] = HW_READ( TX_PWR2 );
/*MT6280*/            set->data[6] = HW_READ( TX_PWR3 );
/*MT6280*/            set->data[7] = HW_READ( TX_DLY_CON );
/*MT6280*/         }
   #else
/*MT6256,MT6255*/  {
/*MT6256,MT6255*/     set->data[0] = HW_READ( TX_CON0 );
/*MT6256,MT6255*/     set->data[1] = HW_READ( TX_CON1 );
/*MT6256,MT6255*/     set->data[2] = HW_READ( TX_CON2 );
/*MT6256,MT6255*/     set->data[3] = HW_READ( TX_PWR  );
/*MT6256,MT6255*/  }
   #endif
#elif IS_BBTXRX_CHIP_DESIGN_VER_3
/*MT6583_MD2*/     {
/*MT6583_MD2*/        set->data[0]  = HW_READ( TX_CON0 );
/*MT6583_MD2*/        set->data[1]  = HW_READ( TX_CON1 );
/*MT6583_MD2*/        set->data[2]  = HW_READ( TX_CON2 );
/*MT6583_MD2*/        set->data[3]  = HW_READ( TX_PWR0 );
/*MT6583_MD2*/        set->data[4]  = HW_READ( TX_PWR1 );
/*MT6583_MD2*/        set->data[5]  = HW_READ( TX_PWR2 );
/*MT6583_MD2*/        set->data[6]  = HW_READ( TX_PWR3 );
/*MT6583_MD2*/        set->data[7]  = HW_READ( TX_PWR4 );
/*MT6583_MD2*/        set->data[8]  = HW_READ( TX_PWR5 );
/*MT6583_MD2*/        set->data[9]  = HW_READ( TX_DLY_CON   );
/*MT6583_MD2*/        set->data[10] = HW_READ( TX_PH(0)     );
/*MT6583_MD2*/        set->data[11] = HW_READ( TX_GAIN(0)   );
/*MT6583_MD2*/        set->data[12] = HW_READ( TX_OFFSET(0) );
/*MT6583_MD2*/     }
#elif IS_CHIP_MT6227
/*MT6227*/         {
/*MT6227*/            set->data[0] = HW_READ( TX_CFG );
/*MT6227*/            set->data[1] = HW_READ( TX_CON );
/*MT6227*/            set->data[2] = HW_READ( TX_OFF );
/*MT6227*/            set->data[3] = HW_READ( BBTX_AC_CON0 );
/*MT6227*/            set->data[4] = HW_READ( BBTX_AC_CON1 );
/*MT6227*/         }
#elif IS_CHIP_MT6252
/*MT6252*/         {
/*MT6252*/            set->data[0] = HW_READ( TX_CFG );
/*MT6252*/            set->data[1] = HW_READ( TX_CON );
/*MT6252*/            set->data[2] = HW_READ( TX_OFF );
/*MT6252*/         // phsel: 1's complement -> 2's before read out
/*MT6252*/            if(set->field.phsel & ((unsigned char)1<<(3-1)))
/*MT6252*/               set->field.phsel++;
/*MT6252*/         }
#elif IS_CHIP_MT6225_AND_LATTER_VERSION || IS_CHIP_MT6223 || IS_CHIP_MT6253
/*MT6223,MT6225~*/ {
/*MT6223,MT6225~*/    set->data[0] = HW_READ( TX_CFG );
/*MT6223,MT6225~*/    set->data[1] = HW_READ( TX_CON );
/*MT6223,MT6225~*/    set->data[2] = HW_READ( TX_OFF );
/*MT6223,MT6225~*/    set->data[3] = HW_READ( BBTX_AC_CON0 );
/*MT6223,MT6225~*/    set->data[4] = HW_READ( BBTX_AC_CON1 );
/*MT6223,MT6225~*/    set->data[5] = HW_READ( BBTX_AC_CON2 );
/*MT6223,MT6225~*/ // phsel: 1's complement -> 2's before read out
/*MT6223,MT6225~*/    if(set->field.phsel & ((unsigned char)1<<(3-1)))
/*MT6223,MT6225~*/       set->field.phsel++;
/*MT6223,MT6225~*/ }
#elif IS_CHIP_MT6218_AND_LATTER_VERSION
   #if defined(MT6228)
/*MT6228*/         {
/*MT6228*/            set->data[0] = HW_READ( TX_CFG );
      #if ( defined(MT6228_S00) ||  defined(MT6228_S01) )
/*MT6228_S00&01*/     set->data[1] = HW_READ( TX_CON );
      #else
/*MT6228_S02~*/       set->data[1] = HW_READ( TX_CON ) & 0xFFFE;
/*MT6228_S02~*/       set->data[1]|= ((HW_READ( TDMA_EVTENA(1) )&0x80)>>7)&0x1;
      #endif
/*MT6228*/            set->data[2] = HW_READ( TX_OFF );
/*MT6228*/            set->data[3] = HW_READ( BBTX_AC_CON0 );
/*MT6228*/            set->data[4] = HW_READ( BBTX_AC_CON1 );
/*MT6228*/         }
   #else
/*MT6218~*/        {
/*MT6218~*/           set->data[0] = HW_READ( TX_CFG );
/*MT6218~*/           set->data[1] = HW_READ( TX_CON );
/*MT6218~*/           set->data[2] = HW_READ( TX_OFF );
/*MT6218~*/           set->data[3] = HW_READ( BBTX_AC_CON0 );
/*MT6218~*/           set->data[4] = HW_READ( BBTX_AC_CON1 );
/*MT6218~*/        }
   #endif
#elif IS_BBTXRX_CHIP_DESIGN_VER_2
/*MT6276~*/        {
/*MT6276~*/           set->data[0] = HW_READ( TX_CFG   );
/*MT6276~*/           set->data[1] = HW_READ( TX_CFG1  );
/*MT6276~*/           set->data[2] = HW_READ( TX_CON   );
/*MT6276~*/           set->data[3] = HW_READ( TX_CON1  );
/*MT6276~*/           set->data[4] = HW_READ( TX_PH(0) );
/*MT6276~*/           set->data[5] = HW_READ( TX_GAIN(0)   );
/*MT6276~*/           set->data[6] = HW_READ( TX_OFFSET(0) );
   #if IS_CHIP_MT6575
/*MT6575 */           set->data[7] = HW_READ( BBTX_CON5    ) & 0x2000 ? 0x0000 : 0x1000; // only read CMV
   #else
/*MT6276~*/           set->data[7] = HW_READ( BBTX_CON5    ) & 0x3000; // only read CMV
   #endif
/*MT6276~*/        }
#elif IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION
   #if IS_CHIP_MT6268
/*MT6268~*/        {
/*MT6268~*/           set->data[0] = HW_READ( TX_CFG );
/*MT6268~*/           set->data[1] = HW_READ( TX_CON );
/*MT6268~*/           set->data[2] = HW_READ( TX_OFF );
/*MT6268~*/           set->data[3] = HW_READ( BBTX_AC_CON0 );
/*MT6268~*/           set->data[4] = HW_READ( BBTX_AC_CON1 );
/*MT6268~*/           set->data[5] = HW_READ( BBTX_AC_CON2 );
/*MT6268~*/           set->data[6] = HW_READ( BBTX_AC_CON3 );
/*MT6268~*/           set->data[7] = HW_READ( BBTX_AC_CON4 );
/*MT6268~*/        // phsel: 1's complement -> 2's before read out
/*MT6268~*/           if(set->field.phsel & ((unsigned char)1<<(4-1)))
/*MT6268~*/              set->field.phsel++;
/*MT6268~*/           if (set->field.offi & ((signed char)1<<(6-1)))
/*MT6268~*/              set->field.offi = -( set->field.offi - ((signed char)1<<6));
/*MT6268~*/           else
/*MT6268~*/              set->field.offi = -( set->field.offi - ((signed char)0));
/*MT6268~*/           if (set->field.offq & ((signed char)1<<(6-1)))
/*MT6268~*/              set->field.offq = -( set->field.offq - ((signed char)1<<6));
/*MT6268~*/           else
/*MT6268~*/              set->field.offq = -( set->field.offq - ((signed char)0));
/*MT6268~*/        }
   #elif IS_CHIP_MT6516 || IS_CHIP_MT6236
/*MT6516~*/        {
/*MT6516~*/           set->data[0] = HW_READ( TX_CFG );
/*MT6516~*/           set->data[1] = HW_READ( TX_CON );
/*MT6516~*/           set->data[2] = HW_READ( TX_OFF );
/*MT6516~*/           set->data[3] = HW_READ( BBTX_AC_CON0 );
/*MT6516~*/           set->data[4] = HW_READ( BBTX_AC_CON1 );
/*MT6516~*/           set->data[5] = HW_READ( BBTX_AC_CON2 );
/*MT6516~*/        // phsel: 1's complement -> 2's before read out
/*MT6516~*/           if(set->field.phsel & ((unsigned char)1<<(4-1)))
/*MT6516~*/              set->field.phsel++;
/*MT6516~*/           if (set->field.offi & ((signed char)1<<(6-1)))
/*MT6516~*/              set->field.offi = -( set->field.offi - ((signed char)1<<6));
/*MT6516~*/           else
/*MT6516~*/              set->field.offi = -( set->field.offi - ((signed char)0));
/*MT6516~*/           if (set->field.offq & ((signed char)1<<(6-1)))
/*MT6516~*/              set->field.offq = -( set->field.offq - ((signed char)1<<6));
/*MT6516~*/           else
/*MT6516~*/              set->field.offq = -( set->field.offq - ((signed char)0));
/*MT6516~*/        }
   #else
/*MT6238~*/        {
/*MT6238~*/           set->data[0] = HW_READ( TX_CFG );
/*MT6238~*/           set->data[1] = HW_READ( TX_CON );
/*MT6238~*/           set->data[2] = HW_READ( TX_OFF );
/*MT6238~*/           set->data[3] = HW_READ( BBTX_AC_CON0 );
/*MT6238~*/           set->data[4] = HW_READ( BBTX_AC_CON1 );
/*MT6238~*/           set->data[5] = HW_READ( BBTX_AC_CON2 );
/*MT6238~*/        // phsel: 1's complement -> 2's before read out
/*MT6238~*/           if(set->field.phsel & ((unsigned char)1<<(4-1)))
/*MT6238~*/              set->field.phsel++;
/*MT6238~*/        }
   #endif
#elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION && !IS_CHIP_MT6223 && !IS_CHIP_MT6238 && !IS_CHIP_MT6253
/*MT6229_S00*/     {
/*MT6229_S00*/        set->data[0] = HW_READ( TX_CFG );
   #if IS_CHIP_MT6229_S00 || IS_CHIP_MT6268T
/*MT6229_S00*/        set->data[1] = HW_READ( TX_CON );
   #else
/*MT6229_S01*/        set->data[1] = HW_READ( TX_CON ) & 0xFFFE;
/*MT6229_S01*/        set->data[1]|= ((HW_READ( TDMA_EVTENA(1) )&0x80)>>7)&0x1;
   #endif
/*MT6229_S00*/        set->data[2] = HW_READ( TX_OFF );
/*MT6229_S00*/        set->data[3] = HW_READ( BBTX_AC_CON0 );
/*MT6229_S00*/        set->data[4] = HW_READ( BBTX_AC_CON1 );
/*MT6229_S00*/     // phsel: 1's complement -> 2's before read out
/*MT6229_S00*/        if(set->field.phsel & ((unsigned char)1<<(3-1)))
/*MT6229_S00*/           set->field.phsel++;
/*MT6229_S00*/     }
#else
/*OTHERS*/         {
/*OTHERS*/            set->data[0] = HW_READ( TX_CFG );
/*OTHERS*/            set->data[1] = HW_READ( TX_CON );
/*OTHERS*/            set->data[2] = HW_READ( TX_OFFI );
/*OTHERS*/            set->data[3] = HW_READ( TX_OFFQ );
/*OTHERS*/         }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_BFE_SET_TxRegisters( void *_set )
{
   BFETXSET *set = (BFETXSET *)_set;

#if defined(L1D_TEST) && (!IS_DLIF_CHIP && !IS_DCR_IN_DLIF_CHIP)
   set->field.iqswap = 0;
#endif

#if IS_DLIF_CHIP
   #if IS_CHIP_MT6256_S00 || IS_CHIP_MT6251
/*MT6251*/         {  HW_WRITE( TX_CON0     , set->data[0] );
/*MT6251*/            HW_WRITE( TX_CON1     , set->data[1] );
/*MT6251*/            HW_WRITE( TX_PWR      , set->data[2] );
/*MT6251*/         }
   #elif IS_CHIP_MT6250
/*MT6250*/         {  HW_WRITE( TX_CON0     , set->data[0] );
/*MT6250*/            HW_WRITE( TX_CON1     , set->data[1] );
/*MT6250*/         }
   #elif IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/*MT6572*/         {  HW_WRITE( TX_CON0     , set->data[0]  );
/*MT6572*/            HW_WRITE( TX_CON1     , set->data[1]  );
/*MT6572*/            HW_WRITE( TX_CON2     , set->data[2]  );
/*MT6572*/            HW_WRITE( TX_PWR0     , set->data[3]  );
/*MT6572*/            HW_WRITE( TX_PWR1     , set->data[4]  );
/*MT6572*/            HW_WRITE( TX_PWR2     , set->data[5]  );
/*MT6572*/            HW_WRITE( TX_PWR3     , set->data[6]  );
/*MT6572*/            HW_WRITE( TX_PWR4     , set->data[7]  );
/*MT6572*/            HW_WRITE( TX_PWR5     , set->data[8]  );
      #if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/*MT6572*/            HW_WRITE( TX_CON3     , set->data[9]  );
      #else
/*MT6572*/            HW_WRITE( TX_DLY_CON  , set->data[9]  );
      #endif
/*MT6572*/         }
   #elif IS_CHIP_MT6583_MD1
/*MT6583*/         {  HW_WRITE( TX_CON0     , set->data[0]  );
/*MT6583*/            HW_WRITE( TX_CON1     , set->data[1]  );
/*MT6583*/            HW_WRITE( TX_CON2     , set->data[2]  );
/*MT6583*/            HW_WRITE( TX_PWR0     , set->data[3]  );
/*MT6583*/            HW_WRITE( TX_PWR1     , set->data[4]  );
/*MT6583*/            HW_WRITE( TX_PWR2     , set->data[5]  );
/*MT6583*/            HW_WRITE( TX_PWR3     , set->data[6]  );
/*MT6583*/            HW_WRITE( TX_PWR4     , set->data[7]  );
/*MT6583*/            HW_WRITE( TX_PWR5     , set->data[8]  );
/*MT6583*/            HW_WRITE( TX_DLY_CON  , set->data[9]  );
/*MT6583*/            HW_WRITE_TX_PH(         set->data[10] );
/*MT6583*/            HW_WRITE_TX_GAIN(       set->data[11] );
/*MT6583*/            HW_WRITE_TX_OFF(        set->data[12] );
/*MT6583*/         }
   #elif IS_CHIP_MT6280
/*MT6280*/         {  HW_WRITE( TX_CON0     , set->data[0] );
/*MT6280*/            HW_WRITE( TX_CON1     , set->data[1] );
/*MT6280*/            HW_WRITE( TX_CON2     , set->data[2] );
/*MT6280*/            HW_WRITE( TX_PWR0     , set->data[3] );
/*MT6280*/            HW_WRITE( TX_PWR1     , set->data[4] );
/*MT6280*/            HW_WRITE( TX_PWR2     , set->data[5] );
/*MT6280*/            HW_WRITE( TX_PWR3     , set->data[6] );
/*MT6280*/            HW_WRITE( TX_DLY_CON  , set->data[7] );
/*MT6280*/         }
   #else
/*MT6256,MT6255*/  {  HW_WRITE( TX_CON0     , set->data[0] );
/*MT6256,MT6255*/     HW_WRITE( TX_CON1     , set->data[1] );
/*MT6256,MT6255*/     HW_WRITE( TX_CON2     , set->data[2] );
/*MT6256,MT6255*/     HW_WRITE( TX_PWR      , set->data[3] );
/*MT6256,MT6255*/  }
   #endif
#elif IS_BBTXRX_CHIP_DESIGN_VER_3
/*MT6583_MD2*/     {  HW_WRITE( TX_CON0     , set->data[0]  );
/*MT6583_MD2*/        HW_WRITE( TX_CON1     , set->data[1]  );
/*MT6583_MD2*/        HW_WRITE( TX_CON2     , set->data[2]  );
/*MT6583_MD2*/        HW_WRITE( TX_PWR0     , set->data[3]  );
/*MT6583_MD2*/        HW_WRITE( TX_PWR1     , set->data[4]  );
/*MT6583_MD2*/        HW_WRITE( TX_PWR2     , set->data[5]  );
/*MT6583_MD2*/        HW_WRITE( TX_PWR3     , set->data[6]  );
/*MT6583_MD2*/        HW_WRITE( TX_PWR4     , set->data[7]  );
/*MT6583_MD2*/        HW_WRITE( TX_PWR5     , set->data[8]  );
/*MT6583_MD2*/        HW_WRITE( TX_DLY_CON  , set->data[9]  );
/*MT6583_MD2*/        HW_WRITE_TX_PH(         set->data[10] );
/*MT6583_MD2*/        HW_WRITE_TX_GAIN(       set->data[11] );
/*MT6583_MD2*/        HW_WRITE_TX_OFF(        set->data[12] );
/*MT6583_MD2*/     }
#elif IS_CHIP_MT6227
/*MT6227*/         {  HW_WRITE( TX_CFG      , set->data[0] );
/*MT6227*/            HW_WRITE( TX_CON      , set->data[1] );
/*MT6227*/            HW_WRITE( TX_OFF      , set->data[2] );
/*MT6227*/            HW_WRITE( BBTX_AC_CON0, set->data[3] );
/*MT6227*/            HW_WRITE( BBTX_AC_CON1, set->data[4] );
/*MT6227*/         }
#elif IS_CHIP_MT6252
/*MT6252*/         // phsel: 2's complement -> 1's before write in
/*MT6252*/         {  if(set->field.phsel & ((unsigned char)1<<(3-1)))
/*MT6252*/               set->field.phsel--;
/*MT6252*/            HW_WRITE( TX_CFG      , set->data[0] );
/*MT6252*/            HW_WRITE( TX_CON      , set->data[1] );
/*MT6252*/            HW_WRITE( TX_OFF      , set->data[2] );
/*MT6252*/         }
#elif IS_CHIP_MT6225_AND_LATTER_VERSION || IS_CHIP_MT6223 || IS_CHIP_MT6253
/*MT6223,MT6225~*/ // phsel: 2's complement -> 1's before write in
/*MT6223,MT6225~*/ {  if(set->field.phsel & ((unsigned char)1<<(3-1)))
/*MT6223,MT6225~*/       set->field.phsel--;
/*MT6223,MT6225~*/    HW_WRITE( TX_CFG      , set->data[0] );
/*MT6223,MT6225~*/    HW_WRITE( TX_CON      , set->data[1] );
/*MT6223,MT6225~*/    HW_WRITE( TX_OFF      , set->data[2] );
/*MT6223,MT6225~*/    HW_WRITE( BBTX_AC_CON0, set->data[3] );
/*MT6223,MT6225~*/    HW_WRITE( BBTX_AC_CON1, set->data[4] );
/*MT6223,MT6225~*/    HW_WRITE( BBTX_AC_CON2, set->data[5] );
/*MT6223,MT6225~*/ }
#elif IS_CHIP_MT6218_AND_LATTER_VERSION
   #if defined(MT6228)
/*MT6228_S00&01*/  {  HW_WRITE( TX_CFG      , set->data[0] );
/*MT6228_S00&01*/     HW_WRITE( TX_CON      , set->data[1] );
      #if ( defined(MT6228_S00) || defined(MT6228_S01) )
      #else
/*MT6228_S02~*/       HW_WRITE( TDMA_EVTENA(1),
/*MT6228_S02~*/     ( HW_READ( TDMA_EVTENA(1) )&0xFF7F)|(( set->data[1]<<7)&0x0080));
      #endif
/*MT6228_S00&01*/     HW_WRITE( TX_OFF      , set->data[2] );
/*MT6228_S00&01*/     HW_WRITE( BBTX_AC_CON0, set->data[3] );
/*MT6228_S00&01*/     HW_WRITE( BBTX_AC_CON1, set->data[4] );
/*MT6228_S00&01*/  }
   #else
/*MT6218~*/        {  HW_WRITE( TX_CFG      , set->data[0] );
/*MT6218~*/           HW_WRITE( TX_CON      , set->data[1] );
/*MT6218~*/           HW_WRITE( TX_OFF      , set->data[2] );
/*MT6218~*/           HW_WRITE( BBTX_AC_CON0, set->data[3] );
/*MT6218~*/           HW_WRITE( BBTX_AC_CON1, set->data[4] );
/*MT6218~*/        }
   #endif
#elif IS_BBTXRX_CHIP_DESIGN_VER_2
/*MT6276~*/        {  unsigned short d16 = HW_READ( BBTX_CON5 ) & (~0x3000);
   #if IS_CHIP_MT6575
/*MT6575 */                          d16|= ((~set->field.cmv)&0x1) << 13;
/*MT6575 */                          d16|= 0x000C; // set TX low power mode
   #else
/*MT6276~*/                          d16|= set->field.cmv << 12;
   #endif
/*MT6276~*/           HW_WRITE( BBTX_CON5   , d16          ); // only write CMV
/*MT6276~*/           HW_WRITE( TX_CFG      , set->data[0] );
/*MT6276~*/           HW_WRITE( TX_CFG1     , set->data[1] );
/*MT6276~*/           HW_WRITE( TX_CON      , set->data[2] );
/*MT6276~*/           HW_WRITE( TX_CON1     , set->data[3] );
/*MT6276~*/           HW_WRITE_TX_PH(         set->data[4] );
/*MT6276~*/           HW_WRITE_TX_GAIN(       set->data[5] );
/*MT6276~*/           HW_WRITE_TX_OFF(        set->data[6] );
/*MT6276~*/        }
#elif IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION
   #if IS_CHIP_MT6268
/*MT6268~*/        // phsel: 2's complement -> 1's before write in
/*MT6268~*/        {  signed char TxOffsetI=set->field.offi;
/*MT6268~*/           signed char TxOffsetQ=set->field.offq;
/*MT6268~*/           if(set->field.phsel & ((unsigned char)1<<(4-1)))
/*MT6268~*/              set->field.phsel--;
/*MT6268~*/           if (set->field.offi & ((signed char)1<<(6-1)))
/*MT6268~*/              set->field.offi = -( set->field.offi - ((signed char)1<<6));
/*MT6268~*/           else
/*MT6268~*/              set->field.offi = -( set->field.offi - ((signed char)0));
/*MT6268~*/           if (set->field.offq & ((signed char)1<<(6-1)))
/*MT6268~*/              set->field.offq = -( set->field.offq - ((signed char)1<<6));
/*MT6268~*/           else
/*MT6268~*/              set->field.offq = -( set->field.offq - ((signed char)0));
/*MT6268~*/           HW_WRITE( TX_CFG      , set->data[0] );
/*MT6268~*/           HW_WRITE( TX_CON      , set->data[1] );
/*MT6268~*/           HW_WRITE( TX_OFF      , set->data[2] );
/*MT6268~*/           HW_WRITE( BBTX_AC_CON0, set->data[3] );
/*MT6268~*/           HW_WRITE( BBTX_AC_CON1, set->data[4] );
/*MT6268~*/           HW_WRITE( BBTX_AC_CON2, set->data[5] );
/*MT6268~*/           HW_WRITE( BBTX_AC_CON3, set->data[6] );
/*MT6268~*/           HW_WRITE( BBTX_AC_CON4, set->data[7] );
/*MT6268~*/           set->field.offi=TxOffsetI;
/*MT6268~*/           set->field.offq=TxOffsetQ;
/*MT6268~*/        }
   #elif IS_CHIP_MT6516 || IS_CHIP_MT6236
/*MT6516~*/        // phsel: 2's complement -> 1's before write in
/*MT6516~*/        {  signed char TxOffsetI=set->field.offi;
/*MT6516~*/           signed char TxOffsetQ=set->field.offq;
/*MT6516~*/           if(set->field.phsel & ((unsigned char)1<<(4-1)))
/*MT6516~*/              set->field.phsel--;
/*MT6516~*/           if (set->field.offi & ((signed char)1<<(6-1)))
/*MT6516~*/              set->field.offi = -( set->field.offi - ((signed char)1<<6));
/*MT6516~*/           else
/*MT6516~*/              set->field.offi = -( set->field.offi - ((signed char)0));
/*MT6516~*/           if (set->field.offq & ((signed char)1<<(6-1)))
/*MT6516~*/              set->field.offq = -( set->field.offq - ((signed char)1<<6));
/*MT6516~*/           else
/*MT6516~*/              set->field.offq = -( set->field.offq - ((signed char)0));
/*MT6516~*/           HW_WRITE( TX_CFG      , set->data[0] );
/*MT6516~*/           HW_WRITE( TX_CON      , set->data[1] );
/*MT6516~*/           HW_WRITE( TX_OFF      , set->data[2] );
/*MT6516~*/           HW_WRITE( BBTX_AC_CON0, set->data[3] );
/*MT6516~*/           HW_WRITE( BBTX_AC_CON1, set->data[4] );
/*MT6516~*/           HW_WRITE( BBTX_AC_CON2, set->data[5] );
/*MT6516~*/           set->field.offi=TxOffsetI;
/*MT6516~*/           set->field.offq=TxOffsetQ;
/*MT6516~*/        }
   #else
/*MT6238~*/        // phsel: 2's complement -> 1's before write in
/*MT6238~*/        {  if(set->field.phsel & ((unsigned char)1<<(4-1)))
/*MT6238~*/              set->field.phsel--;
/*MT6238~*/           HW_WRITE( TX_CFG      , set->data[0] );
/*MT6238~*/           HW_WRITE( TX_CON      , set->data[1] );
/*MT6238~*/           HW_WRITE( TX_OFF      , set->data[2] );
/*MT6238~*/           HW_WRITE( BBTX_AC_CON0, set->data[3] );
/*MT6238~*/           HW_WRITE( BBTX_AC_CON1, set->data[4] );
/*MT6238~*/           HW_WRITE( BBTX_AC_CON2, set->data[5] );
/*MT6238~*/        }
   #endif
#elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION && !IS_CHIP_MT6223 && !IS_CHIP_MT6238 && !IS_CHIP_MT6253 && !IS_CHIP_MT6256 && !IS_CHIP_MT6251 && !IS_CHIP_MT6255 && !IS_CHIP_MT6250 && !IS_CHIP_MT6280 && !IS_CHIP_MT6583_MD1 && !IS_CHIP_MT6583_MD2 && !IS_CHIP_MT6572 && !IS_CHIP_MT6290 && !IS_CHIP_MT6595 && !IS_CHIP_MT6752_MD1 && !IS_CHIP_MT6752_MD2 && !IS_CHIP_TK6291 && !IS_CHIP_MT6755 && !IS_CHIP_MT6292 && !IS_CHIP_MT6293
/*MT6229_S00*/     // phsel: 2's complement -> 1's before write in
/*MT6229_S00*/     {  if(set->field.phsel & ((unsigned char)1<<(3-1)))
/*MT6229_S00*/           set->field.phsel--;
/*MT6229_S00*/        HW_WRITE( TX_CFG      , set->data[0] );
/*MT6229_S00*/        HW_WRITE( TX_CON      , set->data[1] );
   #if IS_CHIP_MT6229_S00 || IS_CHIP_MT6268T
   #else
/*MT6229_S01*/        HW_WRITE( TDMA_EVTENA(1),
/*MT6229_S01*/      ( HW_READ( TDMA_EVTENA(1) )&0xFF7F)|(( set->data[1]<<7)&0x0080));
   #endif
/*MT6229_S00*/        HW_WRITE( TX_OFF      , set->data[2] );
/*MT6229_S00*/        HW_WRITE( BBTX_AC_CON0, set->data[3] );
/*MT6229_S00*/        HW_WRITE( BBTX_AC_CON1, set->data[4] );
/*MT6229_S00*/     }
#else
/*OTHERS*/         {  HW_WRITE( TX_CFG , set->data[0] );
/*OTHERS*/            HW_WRITE( TX_CON , set->data[1] );
/*OTHERS*/            HW_WRITE( TX_OFFI, set->data[2] );
/*OTHERS*/            HW_WRITE( TX_OFFQ, set->data[3] );
/*OTHERS*/         }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_CHIP_MT6218_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
#define IQSWAP_BIT   0x0001
#else
#define IQSWAP_BIT   0x0200
#endif

void L1D_BFE_SET_TxIQSwapRegister( int is_swap )
{
#if defined(L1D_TEST)   // For L1D_TEST, always turn off IQSWAP
   (void)is_swap;
#elif IS_DLIF_CHIP || IS_DCR_IN_DLIF_CHIP
   (void)is_swap;
#else
   unsigned short d16;

   d16 = HW_READ( TX_CON );
   if( is_swap )
      d16 |=  IQSWAP_BIT;
   else
      d16 &= ~IQSWAP_BIT;
   HW_WRITE( TX_CON, d16 );
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
void L1D_RF_TXIQ_Dynamic_Config( void )
{
   #if IS_RF_MT6140B || IS_RF_MT6140C || IS_RF_MT6140D || IS_RF_CMOSEDGE || IS_RF_MTKSOC1T || IS_RF_MTKSOC1 || IS_RF_MT6252RF
   l1d_rf.d2c_txiqconfig = 1;
   #else
   l1d_rf.d2c_txiqconfig = 0;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_DLIF_CHIP
void L1D_BFE_SetTxIQ_Config( void )
{
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#elif IS_BBTXRX_CHIP_DESIGN_VER_3
void L1D_BFE_SetTxIQ_Config( void )
{
   BFETXSET  bfetxset;

   HW_READ_BFETXSET( bfetxset );

   if(l1d_rf.band<=2) //Low band
   {
      //bfetxset.field.cmv        = BBTXParameters.bbtx_common_mode_voltage;
      bfetxset.field.offi       = DC_OFFSET_TO_OFFSET( BBTXParameters.bbtx_offsetI, BBTXParameters.bbtx_dccoarseI );
      bfetxset.field.offq       = DC_OFFSET_TO_OFFSET( BBTXParameters.bbtx_offsetQ, BBTXParameters.bbtx_dccoarseQ );
      bfetxset.field.gain_comp  = TRIM_IQ_TO_GAIN_COMP( BBTXParameters.bbtx_trimI, BBTXParameters.bbtx_trimQ );
      bfetxset.field.iqgain_sel = TRIM_IQ_TO_GAIN_SEL( BBTXParameters.bbtx_trimI, BBTXParameters.bbtx_trimQ );
      bfetxset.field.phseli     = PHASE_COMP_TO_PHSEL_I( BBTXParameters.bbtx_phsel );
      bfetxset.field.phselq     = PHASE_COMP_TO_PHSEL_Q( BBTXParameters.bbtx_phsel );
   }
   else   //High band
   {
      //bfetxset.field.cmv        = BBTXParameters.bbtx_common_mode_voltage_h;
      bfetxset.field.offi       = DC_OFFSET_TO_OFFSET( BBTXParameters.bbtx_offsetI_h, BBTXParameters.bbtx_dccoarseI_h );
      bfetxset.field.offq       = DC_OFFSET_TO_OFFSET( BBTXParameters.bbtx_offsetQ_h, BBTXParameters.bbtx_dccoarseQ_h );
      bfetxset.field.gain_comp  = TRIM_IQ_TO_GAIN_COMP( BBTXParameters.bbtx_trimI_h, BBTXParameters.bbtx_trimQ_h );
      bfetxset.field.iqgain_sel = TRIM_IQ_TO_GAIN_SEL( BBTXParameters.bbtx_trimI_h, BBTXParameters.bbtx_trimQ_h );
      bfetxset.field.phseli     = PHASE_COMP_TO_PHSEL_I( BBTXParameters.bbtx_phsel_h );
      bfetxset.field.phselq     = PHASE_COMP_TO_PHSEL_Q( BBTXParameters.bbtx_phsel_h );
   }
   HW_WRITE_BFETXSET( bfetxset );
   l1d_rf.old_band=l1d_rf.band;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
void L1D_BFE_SetTxIQ_Config( void )
{
   BFETXSET  bfetxset;

   HW_READ_BFETXSET( bfetxset );

   if(l1d_rf.band<=2) //Low band
   {
   #if IS_CHIP_MT6252
      bfetxset.field.offi       = BBTXParameters.bbtx_offsetI;
      bfetxset.field.offq       = BBTXParameters.bbtx_offsetQ;
      bfetxset.field.phsel      = BBTXParameters.bbtx_phsel;
   #elif IS_BBTXRX_CHIP_DESIGN_VER_2
      bfetxset.field.cmv        = BBTXParameters.bbtx_common_mode_voltage;
      bfetxset.field.offi       = DC_OFFSET_TO_OFFSET( BBTXParameters.bbtx_offsetI, BBTXParameters.bbtx_dccoarseI );
      bfetxset.field.offq       = DC_OFFSET_TO_OFFSET( BBTXParameters.bbtx_offsetQ, BBTXParameters.bbtx_dccoarseQ );
      bfetxset.field.gain_comp  = TRIM_IQ_TO_GAIN_COMP( BBTXParameters.bbtx_trimI, BBTXParameters.bbtx_trimQ );
      bfetxset.field.iqgain_sel = TRIM_IQ_TO_GAIN_SEL( BBTXParameters.bbtx_trimI, BBTXParameters.bbtx_trimQ );
      bfetxset.field.phseli     = PHASE_COMP_TO_PHSEL_I( BBTXParameters.bbtx_phsel );
      bfetxset.field.phselq     = PHASE_COMP_TO_PHSEL_Q( BBTXParameters.bbtx_phsel );
   #else
      bfetxset.field.trimi      = BBTXParameters.bbtx_trimI;
      bfetxset.field.trimq      = BBTXParameters.bbtx_trimQ;
      bfetxset.field.offi       = BBTXParameters.bbtx_offsetI;
      bfetxset.field.offq       = BBTXParameters.bbtx_offsetQ;
      bfetxset.field.gain       = BBTXParameters.bbtx_gain;
      bfetxset.field.cmv        = BBTXParameters.bbtx_common_mode_voltage;
      bfetxset.field.calrcsel   = BBTXParameters.bbtx_calrcsel;
      bfetxset.field.phsel      = BBTXParameters.bbtx_phsel;
      #if IS_SAIC_CHIP_MT6223_AND_LATTER_VERSION // 23 may use MT6140D
      bfetxset.field.dccoarsei  = BBTXParameters.bbtx_dccoarseI;
      bfetxset.field.dccoarseq  = BBTXParameters.bbtx_dccoarseQ;
      #endif
   #endif
   }
   else   //High band
   {
   #if IS_CHIP_MT6252
      bfetxset.field.offi       = BBTXParameters.bbtx_offsetI_h;
      bfetxset.field.offq       = BBTXParameters.bbtx_offsetQ_h;
      bfetxset.field.phsel      = BBTXParameters.bbtx_phsel_h;
   #elif IS_BBTXRX_CHIP_DESIGN_VER_2
      bfetxset.field.cmv        = BBTXParameters.bbtx_common_mode_voltage_h;
      bfetxset.field.offi       = DC_OFFSET_TO_OFFSET( BBTXParameters.bbtx_offsetI_h, BBTXParameters.bbtx_dccoarseI_h );
      bfetxset.field.offq       = DC_OFFSET_TO_OFFSET( BBTXParameters.bbtx_offsetQ_h, BBTXParameters.bbtx_dccoarseQ_h );
      bfetxset.field.gain_comp  = TRIM_IQ_TO_GAIN_COMP( BBTXParameters.bbtx_trimI_h, BBTXParameters.bbtx_trimQ_h );
      bfetxset.field.iqgain_sel = TRIM_IQ_TO_GAIN_SEL( BBTXParameters.bbtx_trimI_h, BBTXParameters.bbtx_trimQ_h );
      bfetxset.field.phseli     = PHASE_COMP_TO_PHSEL_I( BBTXParameters.bbtx_phsel_h );
      bfetxset.field.phselq     = PHASE_COMP_TO_PHSEL_Q( BBTXParameters.bbtx_phsel_h );
   #else
      bfetxset.field.trimi      = BBTXParameters.bbtx_trimI_h;
      bfetxset.field.trimq      = BBTXParameters.bbtx_trimQ_h;
      bfetxset.field.offi       = BBTXParameters.bbtx_offsetI_h;
      bfetxset.field.offq       = BBTXParameters.bbtx_offsetQ_h;
      bfetxset.field.gain       = BBTXParameters.bbtx_gain_h;
      bfetxset.field.cmv        = BBTXParameters.bbtx_common_mode_voltage_h;
      bfetxset.field.calrcsel   = BBTXParameters.bbtx_calrcsel_h;
      bfetxset.field.phsel      = BBTXParameters.bbtx_phsel_h;
      #if IS_SAIC_CHIP_MT6223_AND_LATTER_VERSION // 23 may use MT6140D
      bfetxset.field.dccoarsei  = BBTXParameters.bbtx_dccoarseI_h;
      bfetxset.field.dccoarseq  = BBTXParameters.bbtx_dccoarseQ_h;
      #endif
   #endif
   }

   HW_WRITE_BFETXSET( bfetxset );
   l1d_rf.old_band=l1d_rf.band;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_RF_MTKSOC1T || IS_RF_MTKSOC1 || IS_RF_MT6252RF
void L1D_SetTxIQSwap_NO_PCS1900( void )
{
   BFETXSET  bfetxset;

   HW_READ_BFETXSET( bfetxset );

   if(l1d_rf.band == FrequencyBand1900)
      bfetxset.field.iqswap = ~(BBTX_IQ_SWAP) & 0x1; // TX don't swap high side down mixing
   else
      bfetxset.field.iqswap =  (BBTX_IQ_SWAP) & 0x1;

   HW_WRITE_BFETXSET( bfetxset );
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

void L1D_AFCDAC_On( void )
{
#if IS_AST_B2S_SUPPORT
   /* do nothing */
#elif IS_AFC_EVENT_ENABLE
   unsigned short d16;
   if( l1d_rf.is_crystal_vcxo )
   {
      #if IS_RF_AD6548 || IS_RF_AD6546
   L1D_RF_CAP_SET();
      #endif

      if( !IS_AFC_TRIGGER_BSI() )
      {
         if( l1d_rf.is_crystal_vcxo || AFC_ALWAYS_CHARGE )
            HW_WRITE( AFC_PUPER, TQ_Afc_ChargeInIdle_VCXO );
         else
            HW_WRITE( AFC_PUPER, TQ_Afc_ChargeInIdle_VCTCXO );

         d16  = HW_READ( AFC_CON );
         d16 |= AFC_FORCE_POWER_ON;
         HW_WRITE( AFC_CON, d16 );
      }
   }
#endif
   L1D_AfterSleep();
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_AFCDAC_Off( void )
{
#if IS_AST_B2S_SUPPORT
   /* do nothing */
#elif IS_AFC_EVENT_ENABLE
   unsigned short d16;
   if( l1d_rf.is_crystal_vcxo )
   {
      d16 = HW_READ( AFC_CON );
      d16 &= ~AFC_FORCE_POWER_ON;
      HW_WRITE( AFC_CON, d16 );
      HW_WRITE( AFC_PUPER, 0 );           /* For AFC SW power down bit PDN_CON2[4]/PDN_CON4[4] is malfunction */
                                          /* This HW bug is fixed in MT6227 and MT6225 */
      #if IS_RF_AD6548 || IS_RF_AD6546
      L1D_RF_CAP_CLEAR();
      #endif
   }

   #if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__) // MTK 3G
      // chliu modify for sleep mode dbg, 2G real sleep
      #if IS_CHIP_MT6268A
   IMM_MODE_BEGIN( IMMMASK_ALL /*IMMMASK_BPI*/ ); // Raymond debug: 2G use force power-on mode
      #endif
   #endif
#endif
   L1D_BeforeSleep();
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

char L1D_RF_Check_DCXO_Enable( void )
{
#if IS_DCXO_ENABLE
   return 1;
#else
   return 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Set_DCXO_2G_AFCDAC_Active( char set )
{
#if IS_DCXO_ENABLE
   #if IS_DUAL_TALK_SUPPORT
   l1d_rf2.is_bsi_afc_active = 1;   // For Dual talk Project, 2G use itself's RF and can always update AFC DAC.
   #else
   l1d_rf2.is_bsi_afc_active = set;
   #endif
   L1D_RF_Info_Trace(6566,l1d_rf2.is_bsi_afc_active,set);
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_GetITC_PCL( void ) /* For META 2 range PCL calibration*/
{
#if IS_EPSK_TX_SUPPORT
   #if IS_RF_MT6140D
   extern unsigned short LB_CW_High_Idx;
   extern unsigned short HB_CW_High_Idx;
   return (((15-HB_CW_High_Idx) <<16)|(19-LB_CW_High_Idx));
   #else
   return 0xFFFFFFFF;
   #endif
#else //add a return value for removing compile warning.
   return 0xFFFFFFFF;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*=======================================================================================================*/
/* short  L1D_RF_GetTxPAVBias_TxITC(  unsigned short lb_cw_high_idx, unsigned short hb_cw_high_idx )     */
/*=======================================================================================================*/
/* lb_cw_high_idx      : Low  band PCL switch point                                                      */
/* hb_cw_high_idx      : High band PCL switch point                                                      */
/* return              : PA Vbias                                                                        */
/* ----------------------------------------------------------------------------------------------------- */

unsigned short L1D_RF_GetTxPAVBias_TxITC( unsigned short lb_cw_high_idx, unsigned short hb_cw_high_idx )
{
#if IS_EPSK_TX_SUPPORT
   #if IS_RF_MT6140D
   const  pa_vbias *ofs_ptr;
   unsigned short   pcl2idx;
   unsigned char    pa_vbias, is_new_cw;
   unsigned short   idx;
      #if IS_FHC_SUPPORT
   if( l1d_rf.fhc_proc == FHC_PROC_UTS_DAC )
   {
      pa_vbias = l1d_rf.fhc_vbias[l1d_rf.cur_slot];
      is_new_cw = l1d_rf.fhc_is_low_pcl[l1d_rf.cur_slot];
   }
   else
      #endif
   {
      idx = (l1d_rf2.tx_power[l1d_rf.cur_slot]-LOWEST_TX_POWER[l1d_rf.band])/2;
      /* Get PCL index section */
      if(l1d_rf.band>2)
      {
         ofs_ptr = (l1d_rf.band==3)? RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias : RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias;
         is_new_cw=(idx<hb_cw_high_idx)? 1:0;
         pcl2idx=15;
      }
      else
      {
         ofs_ptr = (l1d_rf.band==1)?RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias : RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias;
         is_new_cw=(idx<lb_cw_high_idx)? 1:0;
         pcl2idx=19;
      }

      while( (ofs_ptr->pcl_index>=0))
      {  if((idx)>=(pcl2idx-ofs_ptr->pcl_index))
         {  break;
         }
         ofs_ptr++;
      }
      pa_vbias = ofs_ptr->pa_vbias;
   }
   return( (pa_vbias&0x7)|((is_new_cw)&0x1)<<4 );
   #else
   return 0;
   #endif //IS_RF_MT6140D
#else
   return 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
sTX_GAINRF_CAL TX_GAIN_RF_CAL_INFO;
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
short L1D_RF_GetTxPAVBias( void )
{
#if IS_EPSK_TX_SUPPORT
   #if IS_RF_MT6162 || IS_RF_MT6163
   pa_vbias *ofs_ptr;
   unsigned short   idx;
   short dcoffset_mismatch;
   int i, size;

   if( l1d_rf.band <= FrequencyBand900 )
      idx = 19-(l1d_rf2.tx_power[l1d_rf.cur_slot_n]-LOWEST_TX_POWER[l1d_rf.band])/2;
   else
      idx = 15-(l1d_rf2.tx_power[l1d_rf.cur_slot_n]-LOWEST_TX_POWER[l1d_rf.band])/2;

   #if IS_FHC_SUPPORT
   if( l1d_rf.fhc_proc==FHC_PROC_UTS_DAC )
   {  /* Skip compensation for FHC EPSK calibration */
      dcoffset_mismatch = 0;
   }
   else
   #endif
   {  /* Whether 1st TX slot applies low or high APC DC offset,
         always apply high DC offset to high-power PCL, and low DC offset to low-power PCL */
      const sRAMPDATA* band         = RampData[l1d_rf.band];
      short dcoffset;
      short apc_dcoffset_threshold  = band->lowest_power&0xFF;
      short apc_dcoffset_high       = ((band->lowest_power)>> 8)&0x3FF;
      short apc_dcoffset_low        = ((band->lowest_power)>>18)&0x3FF;

      dcoffset = (l1d_rf2.tx_power[l1d_rf.cur_slot_n] < apc_dcoffset_threshold) ? apc_dcoffset_low : apc_dcoffset_high;
      dcoffset_mismatch = dcoffset - l1d_rf.apc_dc_offset;
   }

   switch( l1d_rf.band )
   {
      case FrequencyBand850:
         ofs_ptr = RFSpecialCoef.tx.mt6162tx.data.GSM850_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.mt6162tx.data.GSM850_pa_vbias) / sizeof(pa_vbias);
         break;
      case FrequencyBand900:
         ofs_ptr = RFSpecialCoef.tx.mt6162tx.data.GSM900_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.mt6162tx.data.GSM900_pa_vbias) / sizeof(pa_vbias);
         break;
      case FrequencyBand1800:
         ofs_ptr = RFSpecialCoef.tx.mt6162tx.data.DCS1800_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.mt6162tx.data.DCS1800_pa_vbias) / sizeof(pa_vbias);
         break;
      case FrequencyBand1900:
      default:
         ofs_ptr = RFSpecialCoef.tx.mt6162tx.data.PCS1900_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.mt6162tx.data.PCS1900_pa_vbias) / sizeof(pa_vbias);
   }
   for( i = 0; i < size-1; i++)
   {  if( idx <= ofs_ptr[i].pcl_index )
      {
         return ofs_ptr[i].pa_vbias*96 + dcoffset_mismatch; /* targeted APC_DAC(512) = 96*pa_vbias+APC_DC_OFFSET(128) */
      }
   }
   return ofs_ptr[size-1].pa_vbias*96 + dcoffset_mismatch;  /* targeted APC_DAC(512) = 96*pa_vbias+APC_DC_OFFSET(128) */
   #elif IS_ORION_RF_SERIES
   pa_vbias *ofs_ptr;
   unsigned short   idx;
   short dcoffset_mismatch;
   int i, size;
   int Vbias_2_DAC = 4; /* pa_vbias range:0~255 (8bits) -> DAC range:0~1023(10bits) (DAC = pa_vbias*4) */

   if( l1d_rf.band <= FrequencyBand900 )
      idx = 19-(l1d_rf2.tx_power[l1d_rf.cur_slot_n]-LOWEST_TX_POWER[l1d_rf.band])/2;
   else
      idx = 15-(l1d_rf2.tx_power[l1d_rf.cur_slot_n]-LOWEST_TX_POWER[l1d_rf.band])/2;

   {  /* Whether 1st TX slot applies low or high APC DC offset,
         always apply high DC offset to high-power PCL, and low DC offset to low-power PCL */
      const sRAMPDATA* band         = RampData[l1d_rf.band];
      short dcoffset;
      short apc_dcoffset_threshold  = band->lowest_power&0xFF;
      short apc_dcoffset_high       = ((band->lowest_power)>> 8)&0x3FF;
      short apc_dcoffset_low        = ((band->lowest_power)>>18)&0x3FF;
      #if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
      dcoffset = 0;
      (void)apc_dcoffset_threshold; 
      (void)apc_dcoffset_high; 
      (void)apc_dcoffset_low;
      #else
      dcoffset = (l1d_rf2.tx_power[l1d_rf.cur_slot_n] < apc_dcoffset_threshold) ? apc_dcoffset_low : apc_dcoffset_high;
      #endif
      dcoffset_mismatch = dcoffset - l1d_rf.apc_dc_offset;
   }

      #if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
         #if IS_FHC_SUPPORT
   if( l1d_rf.fhc_proc==FHC_PROC_UTS_GAIN_RF_IDX )
      return l1d_rf.fhc_vbias[0]*Vbias_2_DAC + dcoffset_mismatch;  
         #endif
   if( TX_GAIN_RF_CAL_INFO.gain_rf_cal_state == EPSKTxGainCalibrationState )
      return TX_GAIN_RF_CAL_INFO.pa_Vbias*Vbias_2_DAC + dcoffset_mismatch;
      #endif

   switch( l1d_rf.band )
   {
      case FrequencyBand850:
         ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias) / sizeof(pa_vbias);
         break;
      case FrequencyBand900:
         ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias) / sizeof(pa_vbias);
         break;
      case FrequencyBand1800:
         ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias) / sizeof(pa_vbias);
         break;
      case FrequencyBand1900:
      default:
         ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias) / sizeof(pa_vbias);
   }
   for( i = 0; i < size-1; i++)
   {  if( idx <= ofs_ptr[i].pcl_index )
      {
         return ofs_ptr[i].pa_vbias*Vbias_2_DAC + dcoffset_mismatch;
      }
   }
   return ofs_ptr[size-1].pa_vbias*Vbias_2_DAC + dcoffset_mismatch;
   #elif IS_RF_MT6256RF
   pa_vbias *ofs_ptr;
   unsigned short   idx;
   int i, size;

   if( l1d_rf.band <= FrequencyBand900 )
   {  idx = 19-(l1d_rf2.tx_power[l1d_rf.cur_slot_n]-LOWEST_TX_POWER[l1d_rf.band])/2;  }
   else
   {  idx = 15-(l1d_rf2.tx_power[l1d_rf.cur_slot_n]-LOWEST_TX_POWER[l1d_rf.band])/2;  }

   switch( l1d_rf.band )
   {
      case FrequencyBand850:
         ofs_ptr = RFSpecialCoef.tx.mt6256tx.data.GSM850_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.mt6256tx.data.GSM850_pa_vbias) / sizeof(pa_vbias);
         break;
      case FrequencyBand900:
         ofs_ptr = RFSpecialCoef.tx.mt6256tx.data.GSM900_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.mt6256tx.data.GSM900_pa_vbias) / sizeof(pa_vbias);
         break;
      case FrequencyBand1800:
         ofs_ptr = RFSpecialCoef.tx.mt6256tx.data.DCS1800_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.mt6256tx.data.DCS1800_pa_vbias) / sizeof(pa_vbias);
         break;
      case FrequencyBand1900:
      default:
         ofs_ptr = RFSpecialCoef.tx.mt6256tx.data.PCS1900_pa_vbias;
         size = sizeof(RFSpecialCoef.tx.mt6256tx.data.PCS1900_pa_vbias) / sizeof(pa_vbias);
   }

   for( i = 0; i < size-1; i++)
   {  if( idx <= ofs_ptr[i].pcl_index )
      {  return ofs_ptr[i].pa_vbias*128; /* APC_DAC = pa_vbias*4*/  }
   }
   return ofs_ptr[size-1].pa_vbias*128; /* APC_DAC = pa_vbias*4*/

   #else
   return 0;
   #endif /*IS_RF_MT6256RF*/
#else
   return 0;
#endif /*IS_EPSK_TX_SUPPORT*/
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*=======================================================================================================*/
/* AMR QI fine tune  for RF chip                                                                         */
/*=======================================================================================================*/
#if IS_SAIC_CHIP_MT6223_AND_LATTER_VERSION
/* For SAIC AMR QI testing FTA14.10.3 and 14.10.4, could be fine tuned by PIX   */
#elif IS_CHIP_MT6227_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   #if IS_RF_MT6129D
unsigned short  AMR_QI_FINE_TUNE = 233;
   #else
unsigned short  AMR_QI_FINE_TUNE = 256;
   #endif
#endif

/* ----------------------------------------------------------------------------------------------------- */

#if IS_RF_AD6546  // VIto for AD6546 Register8 calculation
/*AD6546*/  unsigned int AM_Loop_Calculate( void )
/*AD6546*/  {
/*AD6546*/  #if IS_EPSK_TX_SUPPORT
/*AD6546*/     int gama_level, slope_skew_value;
/*AD6546*/     signed char APC_CAP_DELTA, SLOPE_SKEW_DELTA;
/*AD6546*/     ad6546tx_reg8 Reg8;
/*AD6546*/
/*AD6546*/     Reg8.RegData = RFSpecialCoef.tx.ad6546tx.Reg8_default[l1d_rf.band -1];  // read default value (VGA_SLOPE is included)
/*AD6546*/     Reg8.AM_LOOP.AM_FB_DAC= RFSpecialCoef.tx.ad6546tx.CalData[l1d_rf.band -1].AM_FB_DAC;  // read calibrated AM_FB_DAC
/*AD6546*/     Reg8.AM_LOOP.REFDET_SLOPE_SKEW=  RFSpecialCoef.tx.ad6546tx.CalData[l1d_rf.band -1].REFDET_SLOPE_SKEW; // sign bit x -4 + normal bits value
/*AD6546*/
/*AD6546*/     if (((l1d_rf.tx_mod_type2>>l1d_rf.cur_slot)&0x1)&&(l1d_rf.band > 2)) // Vito calculate APC_CAP & SLOPE delta for highband
/*AD6546*/     {
/*AD6546*/        gama_level = 15 - ((l1d_rf2.tx_power[l1d_rf.cur_slot]-LOWEST_TX_POWER[l1d_rf.band])/2);
/*AD6546*/        if (gama_level >= RFSpecialCoef.tx.ad6546tx.AMLoopDelta.MID_GAMA_THRESHOLD)  // delta for gama level > 8
/*AD6546*/        {
/*AD6546*/           slope_skew_value = Reg8.AM_LOOP.REFDET_SLOPE_SKEW; // sign bit x -4 + normal bits value // read calibrated SLOPE_SKEW if lowband
/*AD6546*/
/*AD6546*/           if ( slope_skew_value >= 8 )
/*AD6546*/              slope_skew_value = ( slope_skew_value & 0x7 ) - 4 ;
/*AD6546*/
/*AD6546*/           if (gama_level >= RFSpecialCoef.tx.ad6546tx.AMLoopDelta.LOW_GAMA_THRESHOLD)  //  delta for gama level > 12
/*AD6546*/           {
/*AD6546*/              APC_CAP_DELTA = RFSpecialCoef.tx.ad6546tx.AMLoopDelta.LOW_DELTA_APC_CAP;
/*AD6546*/              SLOPE_SKEW_DELTA = RFSpecialCoef.tx.ad6546tx.AMLoopDelta.LOW_DELTA_SLOPE_SKEW;
/*AD6546*/           }
/*AD6546*/           else
/*AD6546*/           {
/*AD6546*/              APC_CAP_DELTA = RFSpecialCoef.tx.ad6546tx.AMLoopDelta.MID_DELTA_APC_CAP;
/*AD6546*/              SLOPE_SKEW_DELTA = RFSpecialCoef.tx.ad6546tx.AMLoopDelta.MID_DELTA_SLOPE_SKEW;
/*AD6546*/           }
/*AD6546*/
/*AD6546*/           Reg8.AM_LOOP.POLAR_APC_CAP = (Reg8.AM_LOOP.POLAR_APC_CAP + APC_CAP_DELTA)>0x1F? 0x1F : (Reg8.AM_LOOP.POLAR_APC_CAP + APC_CAP_DELTA);// POLAR_APC_CAP
/*AD6546*/           slope_skew_value = ((slope_skew_value + SLOPE_SKEW_DELTA)<-4)? -4 : (slope_skew_value + SLOPE_SKEW_DELTA);
/*AD6546*/           if (slope_skew_value<0)
/*AD6546*/              Reg8.AM_LOOP.REFDET_SLOPE_SKEW = ( 0x8 |((slope_skew_value+4)&0x7) );  // REFDET_SLOPE_SKEW
/*AD6546*/           else
/*AD6546*/              Reg8.AM_LOOP.REFDET_SLOPE_SKEW = slope_skew_value;
/*AD6546*/        }
/*AD6546*/     }
/*AD6546*/     return Reg8.RegData;
/*AD6546*/  #else
/*AD6546*/     return RFSpecialCoef.tx.ad6546tx.Reg8_default[l1d_rf.band -1];
/*AD6546*/  #endif
/*AD6546*/  }
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

/*=======================================================================================================*/
/*  AFC linear compensation mechanism                                                                    */
/*=======================================================================================================*/

void XO_LC_Initialize( void )
{
#if IS_VCXO_LC_SUPPORT
   unsigned char *src, *dst;
   int  n;
   XO_SLOPE_AREA_DATA  *Curr_area, *Start_area, *End_area;

   Start_area=&(XO_SlopeAreaData[0]);
   End_area  =&(XO_SlopeAreaData[XO_SlopeArea_Num]);
   Curr_area =&(XO_SlopeAreaData[0]);

   /*Find Zero freq point as initial value*/
   while( Curr_area != End_area )
   {
      if( Curr_area->min_freq < 0 )
      {
         Curr_area--;
         XO_LC_TableParams.curr_idx= Curr_area - Start_area;
         break;
      }
      Curr_area++;
   }

   /*Find table ending point*/
   while( Curr_area != End_area )
   {
      if( ((Curr_area+1)->min_dac == -1) || (Curr_area == (End_area-1)) )
      {
         XO_LC_TableParams.first_element = Start_area;
         XO_LC_TableParams.last_element = Curr_area;
         break;
      }
      Curr_area++;
   }

   /*Check if Look-up table abnormal or not*/
   if( Curr_area == End_area )
   {
      XO_SET_FLAG(XO_LC_Flags, XO_LC_INIT_FAIL);
      return;
   }

   /*For Crystal ege effect, reduce 5% of AFC S-cuve first*/
   Curr_area = XO_LC_TableParams.first_element;
   End_area = XO_LC_TableParams.last_element+1;
   while( Curr_area != End_area )
   {
      Curr_area->min_freq = (Curr_area->min_freq)*RATIO_20_DIV_21 >> 7;
      Curr_area++;
   }

   {
      /* Backup the initial value of XO_SlopeAreaData for the following restore action */
      src = (unsigned char*)(XO_SlopeAreaData);
      dst = (unsigned char*)(XO_SlopeAreaData_ori);
      for( n=sizeof(XO_SLOPE_AREA_DATA)*XO_SlopeArea_Num; n>0; n--)
         *dst++ = *src++;
   }

   /*Initial related global variable for FB AFC*/
   afc_inv_slope = XO_LC_GetCurrentPhi_est();
   afc_dac_default = XO_LC_CalculateNewDacNBSB(0, 0);
   onek_hz_dac = (signed short int)((1200*afc_inv_slope)/ONE);

   #ifdef  __UMTS_RAT__
   {  int i;
      extern void L1T_AFCInit( unsigned char simIndex );

      for( i=0; i<NUM_OF_SIM; i++ )
      {  L1T_AFCInit( i ); }
   }
   #endif

#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void XO_LC_TuneAFCTable( signed int Ratio_ind )
{
#if IS_VCXO_LC_SUPPORT
   XO_SLOPE_AREA_DATA  *Curr_element, *table_end;
   signed int RATIO_FREQ = Ratio_ind > 0 ? RATIO_4_DIV_5 : RATIO_5_DIV_4;

   /*For Crystal ege effect, further adjust AFC S-cuve*/
   Curr_element = XO_LC_TableParams.first_element;
   table_end    = XO_LC_TableParams.last_element+1;
   while( Curr_element != table_end )
   {
      Curr_element->min_freq = (Curr_element->min_freq/PHI_Factor)*RATIO_FREQ >> 7;
      Curr_element++;
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short int XO_LC_CalculateNewDacNBSB( signed int Current_Freq, signed short int Servingstarted )
{
#if IS_VCXO_LC_SUPPORT
   XO_SLOPE_AREA_DATA *target, *table_start, *table_end;
   signed int x, y, Inv_slope;

   table_start = XO_LC_TableParams.first_element;
   table_end = XO_LC_TableParams.last_element-1;
   target = table_start+XO_LC_TableParams.curr_idx;

   /*clipping frequency offset*/
   if ( Current_Freq > table_start->min_freq )
   {  Current_Freq = table_start->min_freq;
   }
   else if ( Current_Freq < (table_end+1)->min_freq )
   {  Current_Freq =(table_end+1)->min_freq;
   }

   /*Start Searching new DAC by current absulte frequency offset*/
   if( target->min_freq < Current_Freq )
   {
      while (!(( target->min_freq >= Current_Freq) && ((target+1)->min_freq < Current_Freq)) && (target != table_start))
      {
         target--;
      }
   }
   else
   {
      while (!(( target->min_freq >= Current_Freq) && ((target+1)->min_freq < Current_Freq)) && (target != table_end))
      {
         target++;
      }
   }

   /*Update initial index if it is serving cell for fasting next searching*/
   if( Servingstarted )
   {
      XO_LC_TableParams.curr_idx = target - table_start;
   }

   y= target->min_freq - (target+1)->min_freq;
   x= (target+1)->min_dac - target->min_dac;
   Inv_slope= ((x*0x10000+y/2)/y);

   return target->min_dac+(Inv_slope*(target->min_freq-Current_Freq))/0x10000;

#else
   return 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed int XO_LC_InitialPhiFactor( signed short int DacValue )
{
#if IS_VCXO_LC_SUPPORT
   XO_SLOPE_AREA_DATA  *target, *table_start, *table_end;
   signed int x, y, slope;

   table_start = XO_LC_TableParams.first_element;
   table_end = XO_LC_TableParams.last_element-1;
   target = table_start+XO_LC_TableParams.curr_idx;

   if( target->min_dac > DacValue )
   {
      while (!(( target->min_dac <= DacValue) && ((target+1)->min_dac > DacValue)) && (target != table_start))
      {
         target--;
      }
   }
   else
   {
      while (!(( target->min_dac <= DacValue) && ((target+1)->min_dac > DacValue)) && (target != table_end))
      {
         target++;
      }
   }

   y= target->min_freq - (target+1)->min_freq;
   x= (target+1)->min_dac - target->min_dac;
   slope= ((y*0x100+x/2)/x);

   return target->min_freq + (slope*( target->min_dac - DacValue ))/0x100;
#else
   return 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed int XO_LC_GetCurrentPhi_est( void )
{
#if IS_VCXO_LC_SUPPORT
   XO_SLOPE_AREA_DATA  *target = XO_LC_TableParams.first_element + XO_LC_TableParams.curr_idx;
   signed int x, y, Inv_slope;

   y= target->min_freq - (target+1)->min_freq;
   x= (target+1)->min_dac - target->min_dac;
   Inv_slope= ((x*0x20000+y/2)/y);

   return Inv_slope;
#else
   return 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static unsigned char L1D_RF_RefineTxMaxPowerDecrement( int rf_band, int mod_type, int tx_slot_cnt )
{
   (void)rf_band; (void)mod_type; (void)tx_slot_cnt;
#if IS_DECREASE_RF_TX_MAX_POWER_SUPPORT
   #if IS_TAS_MAX_TXPWR_REDUCTION_SUPPORT
      if(  l1d_rf.tas_ant_sel == 1)
      {
         if( IS_RF_TX_MAX_POWER_DECREASED_TAS())
         {
            /* Unit of Tx_Power_Decrement_Table.power_decrement: 1/8 dB */
            if( rf_band>0 && rf_band<=4 && tx_slot_cnt>0 && tx_slot_cnt<=4 )
            { 
               L1D_RF_Info_Trace(60433,3,Tx_Power_Decrement_Table_Tas.power_decrement[rf_band-1][mod_type][tx_slot_cnt-1]);
               return Tx_Power_Decrement_Table_Tas.power_decrement[rf_band-1][mod_type][tx_slot_cnt-1];
            }
            else
            {  return 0;
            }     
         }
         else
         {   return 0;
         }
      }
      else
      #endif
      {
         if( IS_RF_TX_MAX_POWER_DECREASED() )
         {
            /* Unit of Tx_Power_Decrement_Table.power_decrement: 1/8 dB */
            if( rf_band>0 && rf_band<=4 && tx_slot_cnt>0 && tx_slot_cnt<=4 )
            {  
               L1D_RF_Info_Trace(60433,7,Tx_Power_Decrement_Table.power_decrement[rf_band-1][mod_type][tx_slot_cnt-1]);
               return Tx_Power_Decrement_Table.power_decrement[rf_band-1][mod_type][tx_slot_cnt-1];
            }
            else
            {  return 0;
            }
         }
         else
         {   return 0;
         }
      }
#endif
      {  return 0;
      }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
short L1D_RF_Tx_Power_Offset( int rf_band, int arfcn, short power_dbm, short mod_type,int ant_idx )
{
      int power_idx,nloop;
      static const sTX_POWER_OFFSET*  band_ptr;
      static const sTX_POWER_OFFSET_TABLE*  table_ptr;
      static char  lowest_dbm;
      short offset = 0;
      short offset_result = 0;
      signed short subband_dB = 0;
      sSWTP_GetTableIdx tpo_param;
      unsigned short   n = WEIGHT(1.0);
      int tpo_table_num;
      kal_uint16 l1d_tbl_index;
  #if (IS_2G_TAS_SUPPORT)
  static const sARFCN_SECTION_Power_Offset* weight;
  uint8 tas_ant_sel = l1d_rf.tas_ant_sel;

  if (ant_idx != 0xFFFF)
  {
    tas_ant_sel = ant_idx;
  }

  #else
  static const sARFCN_SECTION* weight;
  #endif
   // confirm below API
      tpo_param.rat = MMRF_AP_SENSOR_RELATIVE_GSM;
      tpo_param.table_idx = MMRF_AP_Sensor_Relative_Feature_Query_Status(OP_CODE_SAR, MMRF_AP_SENSOR_RELATIVE_GSM);

      tpo_table_num = (tpo_param.table_idx >= GGE_SAR_RF_STATE_1 && tpo_param.table_idx <= GGE_SAR_RF_STATE_8) ? 2 : 1;
  if(tpo_param.table_idx != 0xFFFF)
  {
      for (nloop = 0; nloop < tpo_table_num; nloop++)
      {
        offset = 0;
        l1d_tbl_index = (nloop == 0) ? 0 : tpo_param.table_idx;
        if(mod_type == 0)
        {/*GMSK*/
           band_ptr = Tx_Power_Offset_GMSK[rf_band];
        }
         #if IS_EPSK_TX_SUPPORT
         else
         {/*EPSK*/
            band_ptr = Tx_Power_Offset_EPSK[rf_band];
         }
        #endif

         lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
         power_idx = (power_dbm-lowest_dbm)/2;
         table_ptr = &band_ptr->table[l1d_tbl_index];
   #if (IS_2G_TAS_SUPPORT)
         offset = table_ptr->power_offset[tas_ant_sel][power_idx];
   #else 
         offset = table_ptr->power_offset[power_idx];
   #endif

         #if IS_EPSK_TX_SUPPORT 
         if( mod_type )
         { /*EPSK*/
            #if IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6177L || IS_RF_MT6177M
                offset   = (offset<<5); //S7.8
               /* TX power sub-band compensation */
               weight = TPO_WeightARFCN_BinarySearch((arfcn&0x3FF), rf_band , table_ptr->arfcn_weight, mod_type, l1d_tbl_index);
            if( weight )
            {
            #if (IS_2G_TAS_SUPPORT)
               n = (power_dbm > weight->mid_level) ? weight->wt[tas_ant_sel].hi_weight : weight->wt[tas_ant_sel].low_weight;
            #else
               n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
            #endif
            }
            else // no entry, not found
            {  n = ((0.0)*(1<<3)) + 4096;  }// + 4096;
               subband_dB = (signed short)(n) - 4096;// - 4096; //S12.3
               offset += (subband_dB<<5); //S7.8    
            #else
               #error
            #endif   //  IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6177L

            /* Debug trace for EPSK */
            //add for SAR Tx Power Offset
            L1D_RF_SWTP_Trace_SAR_Table(power_dbm, l1d_tbl_index, subband_dB/*1/8 dB*/, (offset>>5)/*1/8 dB*/);
         }
         #endif   // IS_EPSK_TX_SUPPORT
         else
         { /*GMSK*/

            weight = TPO_WeightARFCN_BinarySearch(arfcn, rf_band, table_ptr->arfcn_weight, mod_type, l1d_tbl_index);

            if( weight )
            {
            #if (IS_2G_TAS_SUPPORT||IS_2G_TAS_FOR_C2K_ONOFF_SUPPORT)
               n = (power_dbm > weight->mid_level) ? weight->wt[tas_ant_sel].hi_weight : weight->wt[tas_ant_sel].low_weight;
            #else
               n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
            #endif
            }
            else // no entry, not found
            {  n = WEIGHT(1.0);  }
            offset = ((offset*n)>>14);

             /* Debug trace for GMSK */
             //add for SAR Tx Power Offset
             L1D_RF_SWTP_Trace_SAR_Table(power_dbm, l1d_tbl_index, n/*2^14*/, offset/*APC DAC*/);
         }
         offset_result += offset;
      }
        }
        else
  {
       offset_result = 0;
  }

      return offset_result;
}


int TPO_PowerOffset_BinarySearch(int rf_band,short power_dbm,short dac_offset)
{
    int power_idx = 0;
    int loop = 0;
    int max_power_idx = 0;
    signed short left_pcl_idx, mid_pcl_idx, right_pcl_idx;
    signed short threhold_pcl_idx = 0;
    const sRAMPDATA *ramp_data = RampData[rf_band];
    unsigned short power_dac[16] = {0};
    int new_dac = 0;
    int final_pwr  = 0;
    char  lowest_dbm;
    short max_power = 0;
    short apc_dcoffset_low = 0;
    short apc_dcoffset_high = 0;

    if(rf_band <= FrequencyBand900)
    {/*LB*/
       max_power = GMSK_LB_MAX_POWER;
    }
    else
    {/*HB*/
       max_power = GMSK_HB_MAX_POWER;
    }

    if (power_dbm >= max_power)
    {
        power_dbm = max_power;
    }
        
    lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
    max_power_idx = (max_power-lowest_dbm)/2;
   power_idx = (power_dbm-lowest_dbm) / 2;

    memcpy(power_dac,ramp_data->power,sizeof(power_dac));
    threhold_pcl_idx = ((ramp_data->lowest_power & 0xFF) - lowest_dbm) / 2;
    apc_dcoffset_high = ((ramp_data->lowest_power)>>8)&0x3FF;
    apc_dcoffset_low = ((ramp_data->lowest_power)>>18)&0x3FF;
    for (loop = threhold_pcl_idx + 1; loop < 16; loop++)
    {
        power_dac[loop] = power_dac[loop] + (apc_dcoffset_high - apc_dcoffset_low);
    }
    
    
    left_pcl_idx = 0;
    right_pcl_idx = max_power_idx;
    new_dac = power_dac[power_idx] + dac_offset;
    if (new_dac >= power_dac[max_power_idx])
    {
       return (int)(max_power - power_dbm);
    }

    if (new_dac <= power_dac[0])
    {
       return (int)(LOWEST_TX_POWER[(int)rf_band] - power_dbm);
    }

    while (left_pcl_idx < right_pcl_idx)
    {
       mid_pcl_idx = (left_pcl_idx + right_pcl_idx) >> 1;

       if (new_dac  <= power_dac[mid_pcl_idx])
       {
          right_pcl_idx = mid_pcl_idx;
       }
       else
       {
          left_pcl_idx = mid_pcl_idx + 1;
       }
    }

    if (right_pcl_idx < 1)
    {
        right_pcl_idx = 1;
    }

    if (power_dac[right_pcl_idx] == power_dac[right_pcl_idx - 1])
    {
        final_pwr = ((right_pcl_idx - 1) * 2 + LOWEST_TX_POWER[(int)rf_band]) * F2I_Resolution;
    }
    else
    {
        final_pwr = ((right_pcl_idx - 1) * 2 + LOWEST_TX_POWER[(int)rf_band]) * F2I_Resolution + (new_dac - power_dac[right_pcl_idx - 1]) * 2 * F2I_Resolution / (power_dac[right_pcl_idx] - power_dac[right_pcl_idx - 1]);
    }

    return ((final_pwr - power_dbm * F2I_Resolution) / F2I_Resolution);
}

int L1D_UpdateSARTxPowerOffset_db( int rf_band, short power_dbm, unsigned char ant_idx )
{
    short offset_result = 0;
    int offset_pwr = 0;
    int arfcn[5] = {0,190,65,698,610};

    offset_result = L1D_RF_Tx_Power_Offset(rf_band,arfcn[(int)rf_band],power_dbm,0/*GMSK*/,ant_idx);
    offset_pwr = TPO_PowerOffset_BinarySearch(rf_band,power_dbm,offset_result);
#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
    /*Only during CS connected mode,Tx power is considered for SAR backoff.*/
    /*During PS call,L1C consider BCH channel for TAS switch.*/
    /*Single slot apply for TAS algorithm.*/
    /*So,L1D only return tx power offset to L1C for GMSK and single slot*/
    offset_pwr += L1D_RF_PowerRollback_dB( power_dbm, rf_band, 0/*GMSK*/, ant_idx, 0x1 );
    L1D_RF_Info_Trace(14688,power_dbm,offset_pwr);
#endif
    
    return offset_pwr;
}



void L1D_RF_SetTxPowerOffsetData_GMSK( int rf_band, void *table )
{  
   signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(Tx_Power_Offset_GMSK[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sTX_POWER_OFFSET); n>0; n-- )
   {  *dst++ = *src++;  }

   /*Calculate TPO_weight_section_end_idx*/
   L1D_RF_InitRampTable_TPO( rf_band );
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #if IS_EPSK_TX_SUPPORT
void L1D_RF_SetTxPowerOffsetData_EPSK( int rf_band, void *table )
{
   signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(Tx_Power_Offset_EPSK[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sTX_POWER_OFFSET); n>0; n-- )
   {  *dst++ = *src++;  }

   /*Calculate TPO_weight_section_end_idx_EPSK*/
   L1D_RF_InitRampTableEPSK_TPO( rf_band );
}
   #endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif //IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT

   #if IS_GSM_EM_TX_POWER_CONTROL_SUPPORT
short L1D_RF_UpdateTxInfo( short sc_mode, int rf_band, short power_dbm, short *mod_type)
{
   static char  lowest_dbm;
   static const sRAMPDATA*  band;
   short  result = 0;
   kal_bool  EM_flag = 0;   //TX power control via EM is on/off
   kal_int8  EM_mode = 0;   //-1: invalid value; 0: one PCL; 1: max TX power

   *mod_type = l1d_rf.EMmodType;
   lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
   if( *mod_type )
   {  band = RampData_EPSK[(int)rf_band];  }
   else
   {  band = RampData[(int)rf_band];  }
 
   L1T_SetGsmTxPower(&EM_flag, &EM_mode);

   if(sc_mode)   //TCH or PDTCH mode return max value among every slot
   {
      if(*mod_type)
      {  result = l1d_rf.EMmaxPower;  }
      else
      {  result = l1d_rf.EMmaxDAC;  }
   }
   else   //idle mode return GMSK DAC value in NVRAM
   {
      if(*mod_type)
      {
         if(EM_mode == 0)
         {  result = (short)(band->power[(power_dbm-lowest_dbm)/2]);  }
         else
         {  result = -1;  }
      }
      else   //GMSK
      {
         result = (short)(band->power[(power_dbm-lowest_dbm)/2]);
         if(EM_mode == -1)
         {  result = -1;  }
         else if(EM_mode == 1)
         {  result += 96;  }
         else
         {}
         if(result > 1023)
         {  result = 1023;  }
      }
   }
   L1D_RF_Info_Trace( 20185, power_dbm, result );
   return result;
}
#endif

#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
short L1D_NSFT_Adjust_Tx_Power_Offset( int rf_band, int arfcn, short power_dbm,short mod_type)
{
      int power_idx;
      static const sNSFT_ADJUST_TPO*  band_ptr;
      static const sNSFT_ADJUST_TPO_TABLE*  table_ptr;
      static char  lowest_dbm;
      short offset = 0;
      static const sARFCN_SECTION* weight;
      unsigned short   n = WEIGHT(1.0);
      #if IS_EPSK_TX_SUPPORT
        #if IS_EPSK_ADJUST_TPO_SUPPORT
      signed short subband_dB = 0;
        #endif//IS_EPSK_ADJUST_TPO_SUPPORT
      #endif//IS_EPSK_TX_SUPPORT
      
      if(tableidx_nsftadjusttpo != 0xFFFF)
      {
        if (0 == mod_type)
        {/*GMSK*/
          band_ptr = Adjust_TPO_GMSK[rf_band];
        }
        #if IS_EPSK_TX_SUPPORT
           #if IS_EPSK_ADJUST_TPO_SUPPORT
        else
        {
          band_ptr = Adjust_TPO_EPSK[rf_band];
        }
           #endif//IS_EPSK_ADJUST_TPO_SUPPORT
        #endif//IS_EPSK_TX_SUPPORT

        lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
        power_idx = (power_dbm-lowest_dbm)/2;
        table_ptr = &band_ptr->table[tableidx_nsftadjusttpo];
        offset = table_ptr->power_offset[power_idx];

        #if IS_EPSK_TX_SUPPORT 
           #if IS_EPSK_ADJUST_TPO_SUPPORT
        if( mod_type )
        { /*EPSK*/
        #if IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L
          offset   = (offset<<5); //S7.8
          /* TX power sub-band compensation */
          weight = AdjustTPO_WeightARFCN_BinarySearch((arfcn&0x3FF), rf_band , table_ptr->arfcn_weight, mod_type, tableidx_nsftadjusttpo);
          if( weight )
            n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
          else // no entry, not found
            n = ((0.0)*(1<<3)) + 4096;
            subband_dB = (signed short)(n) - 4096; //S12.3
            offset += (subband_dB<<5); //S7.8    
        #else
          #error
        #endif   //  IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L

        /* Debug trace for EPSK */
          extern void L1D_RF_Adjust_TPO_Trace( uint32 v1, uint32 v2, uint32 v3, int32 v4, int32 v5 );
          L1D_RF_Adjust_TPO_Trace(tableidx_nsftadjusttpo, power_dbm, mod_type, subband_dB/*1/8 dB*/, (offset>>5)/*1/8 dB*/);
        }
        else
           #endif//IS_EPSK_ADJUST_TPO_SUPPORT
        #endif   // IS_EPSK_TX_SUPPORT
        { /*GMSK*/
            weight = AdjustTPO_WeightARFCN_BinarySearch(arfcn, rf_band, table_ptr->arfcn_weight, mod_type, tableidx_nsftadjusttpo);
            if( weight )
               n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
            else // no entry, not found
               n = WEIGHT(1.0);
            offset = ((offset*n)>>14);
            /* Debug trace for GMSK */
            extern void L1D_RF_Adjust_TPO_Trace( uint32 v1, uint32 v2, uint32 v3, int32 v4, int32 v5);
            L1D_RF_Adjust_TPO_Trace(tableidx_nsftadjusttpo, power_dbm, mod_type, n/*2^14*/, offset/*APC DAC*/);
        }
      }
      else
      {  offset = 0;  }
         
      return offset;
}

void  L1D_SetTableIdxOfNSFTAdjustTxPowerOffset(kal_uint16 table_idx)
{
    tableidx_nsftadjusttpo = table_idx;
}

void  L1D_LIDOfNSFTAdjustTxPowerOffset(int rf_band,int* plid,int* ssize,short mod_type)
{
    #if IS_EPSK_TX_SUPPORT 
        #if IS_EPSK_ADJUST_TPO_SUPPORT
    if (mod_type)
    {
        switch(rf_band)
        {
        case FrequencyBand850:
        *plid = NVRAM_EF_L1_EPSK_ADJUST_TPO_GSM850_LID;
        break;
        case FrequencyBand900:
        *plid = NVRAM_EF_L1_EPSK_ADJUST_TPO_GSM900_LID;
        break;
        case FrequencyBand1800:
        *plid = NVRAM_EF_L1_EPSK_ADJUST_TPO_DCS_LID;
        break;
        case FrequencyBand1900:
        *plid = NVRAM_EF_L1_EPSK_ADJUST_TPO_PCS_LID;
        break;
        }
    }
    else
        #endif//IS_EPSK_ADJUST_TPO_SUPPORT
    #endif//IS_EPSK_TX_SUPPORT
    {
        switch(rf_band)
        {
        case FrequencyBand850:
        *plid = NVRAM_EF_L1_GMSK_ADJUST_TPO_GSM850_LID;
        break;
        case FrequencyBand900:
        *plid = NVRAM_EF_L1_GMSK_ADJUST_TPO_GSM900_LID;
        break;
        case FrequencyBand1800:
        *plid = NVRAM_EF_L1_GMSK_ADJUST_TPO_DCS_LID;
        break;
        case FrequencyBand1900:
        *plid = NVRAM_EF_L1_GMSK_ADJUST_TPO_PCS_LID;
        break;
        }
    }
    *ssize = sizeof(nsft_adjust_tpo_t);
}

void L1D_RF_SetAdjustTPOData_GMSK( int rf_band, void *table )
{  
   signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(Adjust_TPO_GMSK[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sNSFT_ADJUST_TPO); n>0; n-- )
   {  *dst++ = *src++;  }

   /*Calculate TPO_weight_section_end_idx*/
   L1D_RF_InitRampTable_AdjustTPO( rf_band );
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #if IS_EPSK_TX_SUPPORT
       #if IS_EPSK_ADJUST_TPO_SUPPORT
void L1D_RF_SetAdjustTPOData_EPSK( int rf_band, void *table )
{
   signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(Adjust_TPO_EPSK[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sNSFT_ADJUST_TPO); n>0; n-- )
   {  *dst++ = *src++;  }

   /*Calculate TPO_weight_section_end_idx_EPSK*/
   L1D_RF_InitRampTableEPSK_AdjustTPO( rf_band );
}
       #else
void L1D_RF_SetAdjustTPOData_EPSK( int rf_band, void *table )
{
}
       #endif//IS_EPSK_ADJUST_TPO_SUPPORT
   #endif//IS_EPSK_TX_SUPPORT
#endif//IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*=======================================================================================================*/
/*  L1D_RF_PowerRollback                                                                                 */
/*=======================================================================================================*/
/*
Account:
   This function will rollback power for multislots. You can set reduced power value (dB, positive)
   to the number of multislots separately (2,3,4). Then, you will get power DAC value (positive) should be
   reduced by interpolation method. This function works on each PCL except min PCL.

Input :
   power_dbm: TX power. i.e. power_dbm = 30
   rf_band:   used band. i.e. GSM900 = 2
   Weight:    now used weight value. i.e. high_weight, low_weight

Output:
   Power DAC value should be reduced (positive)
*/
#if IS_GPRS
short L1D_RF_PowerRollback( short power_dbm, int rf_band, unsigned short weight, short mod_type)
{
   short  left_idx, right_idx, power_idx,max_power_idx, max_power = 0, i = 0;
   int  rollback_db = 0, decrement_db = 0;
   #if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   int SAR_db = 0,power_rollback_dbm;
   short result_offset = 0,real_power_dbm;
   signed short sar_tx_rb_info[5]={ 0 };
   #endif
   static const sRAMPDATA*  band;
   static char  lowest_dbm;
   short  result;
   short dcoffset_thres_idx;
   static short apc_dcoffset_threshold, apc_dcoffset_high, apc_dcoffset_low;
   short power_dc_offset_dac, dc_offset_dac, right_dc_offset_dac, power_dac, left_dac, right_dac;
   sTX_POWER_ROLLBACK* tx_power_rollback = 0;
   signed short tx_rb_info[5]={ 0 };  //0:modType; 1:bySlotRoll; 2:upperLayerDecrement; 3:lowerPowerRoll; 4:result
   tx_rb_info[0] = mod_type;
   #if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   sar_tx_rb_info[0] = mod_type;
   #endif

   
/* This function is only active at max power, LB max power is 33 dBm, HB max power is 30 dBm */
// if( (rf_band <= 2 && power_dbm != 33) || (rf_band > 2 && power_dbm != 30) )
//    return 0;

// Find MAX power level index GMSK(LB33 dbm, HB30dBm), 8PSK(LB 27dbm, HB 26dBm)
   if(mod_type == 0)
   {/*GMSK*/
      if(rf_band <= FrequencyBand900)
      {/*LB*/
         max_power = GMSK_LB_MAX_POWER;
      }
      else
      {/*HB*/
         max_power = GMSK_HB_MAX_POWER;
      }
      tx_power_rollback = tx_power_rollback_gmsk[rf_band];
      band = RampData[rf_band];
   }
   #if IS_EPSK_TX_SUPPORT /*need to modify with tx_power_rollback_epsk*/
   else
   {/*EPSK*/
      if(rf_band <= FrequencyBand900)
      {/*LB*/
         max_power = EPSK_LB_MAX_POWER;
      }
      else
      {/*HB*/
         max_power = EPSK_HB_MAX_POWER;
      }
      tx_power_rollback = tx_power_rollback_epsk[rf_band];
      band = RampData_EPSK[rf_band];
   }
   #endif

   if( max_power==0 || tx_power_rollback==0 )
   {  /*Chuwei: mod_type error or memory corruption*/
      return 0;
   }

   lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
   max_power_idx = (max_power-lowest_dbm)/2;
   power_idx = (power_dbm-lowest_dbm)/2;

   /*If exceed array "band->power" range, return 0 */
   if( power_idx <= 0 )
      return 0;

   /*choose rollback value by # of TX slots*/
   i  = (l1d_rf.tx_slots)    & 0x1;
   i += (l1d_rf.tx_slots>>1) & 0x1;
   i += (l1d_rf.tx_slots>>2) & 0x1;
   i += (l1d_rf.tx_slots>>3) & 0x1;
   i += (l1d_rf.tx_slots>>4) & 0x1;
   switch (i)
   {
      case 2:
         rollback_db = tx_power_rollback->rollback_2t;
         break;
      case 3:
         rollback_db = tx_power_rollback->rollback_3t;
         break;
      case 4:
         rollback_db = tx_power_rollback->rollback_4t;
         break;
      case 5:
         rollback_db = tx_power_rollback->rollback_5t;
         break;
      default:
      {
         #if IS_TAS_MAX_TXPWR_REDUCTION_SUPPORT
         if(l1d_rf.tas_ant_sel == 1) 
         {
            if( IS_RF_TX_MAX_POWER_DECREASED_TAS())
            {   rollback_db = 0;  }
            else
            {
            #if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
               rollback_db = 0;
            #else
               return 0;
            #endif
            }
         }
         else
         #endif
         {
            if( IS_RF_TX_MAX_POWER_DECREASED() )
            {  rollback_db = 0;  }
            else
            {
         #if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
               rollback_db = 0;
         #else
               return 0;
         #endif
            }
         }
      }
   }
   tx_rb_info[1] = rollback_db;

   /*Check the request of TX max power decrement from upper layers*/
   decrement_db = L1D_RF_RefineTxMaxPowerDecrement( rf_band, mod_type, i );

   tx_rb_info[2] = decrement_db;

   /*Determine final rollback value*/
   rollback_db = decrement_db>rollback_db ? decrement_db : rollback_db;
   
   #if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   SAR_db = L1D_RF_SAR_Tx_Power_Backoff_DB( rf_band, mod_type, i, 0xFFFF );
   sar_tx_rb_info[1] = SAR_db;
   rollback_db = ( SAR_db > rollback_db ) ? SAR_db : rollback_db;

   power_rollback_dbm = ( max_power - ( rollback_db/F2I_Resolution ) );   /*rollback value from max power*/

   real_power_dbm = ( power_rollback_dbm > power_dbm ) ? power_dbm : power_rollback_dbm;//choose the smaller as iuput power.
   sar_tx_rb_info[2] = real_power_dbm;
   result_offset = L1D_RF_SAR_Tx_Power_Backoff_DB_Offset( rf_band, mod_type, i, real_power_dbm, weight, lowest_dbm, max_power, band );
   sar_tx_rb_info[3] = result_offset;
   #endif
   
   /*decrease rollback value for lower power*/
   rollback_db = rollback_db-(max_power_idx-power_idx)*F2I_Resolution*2;

   tx_rb_info[3] = rollback_db;
   #if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   sar_tx_rb_info[4] = rollback_db;
   #endif
   
   #if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   if( rollback_db <= 0 ) return result_offset;
   #else
   if( rollback_db <= 0 ) return 0;
   #endif

   /* Interpolation interval */
   //rollback_db = ROUNDSHORT((rollback_db_f * f2I_Resolution));
   right_idx = power_idx-rollback_db/(2*F2I_Resolution);   //(rollback_db/2)=How much idx should we rollback
   left_idx = right_idx-1;

#if IS_RF_MT6162 || IS_RF_MT6163
   if( mod_type ) /* EPSK */
   {  (void)left_idx;
      L1D_RF_TXPC_RECORD_PARAM( 3, band, weight, power_idx, 1, rollback_db /*roll-back n/8 dB*/ );
      result = (short)( (rollback_db<<5)/F2I_Resolution ); /* rollback_db is 1/8 dB per DAC, but PCL_DAC in OH is 1/32 dB per DAC */
   }
   else           /* GMSK */
#elif IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   if( mod_type ) /* EPSK */
   {  (void)left_idx;
      L1D_RF_TXPC_RECORD_PARAM( 3, band, weight, power_idx, 1, rollback_db /*roll-back n/8 dB*/ );
      result = (short)( rollback_db ); /* for MT6280RF rollback 1/8 dB rather than DAC */
   }
   else           /* GMSK */
#endif
   {  L1D_RF_TXPC_RECORD_PARAM( 2, band, weight, right_idx, 1, -1 /*target DAC unknown*/ );

      // power_dac = (short)((band->power[(power_dbm-lowest_dbm)/2]*n)>>14);  /* power : dBm --> DAC */
      // Rollback value (DAC) : interpolation part + PCL part  /* power : dBm --> DAC */

      apc_dcoffset_threshold = band->lowest_power&0xFF;
      apc_dcoffset_high = ((band->lowest_power)>>8)&0x3FF;
      apc_dcoffset_low = ((band->lowest_power)>>18)&0x3FF;

      if((apc_dcoffset_threshold - ((apc_dcoffset_threshold - lowest_dbm)/2*2 + lowest_dbm))>0)
      {  dcoffset_thres_idx = (apc_dcoffset_threshold - lowest_dbm)/2;  }
      else
      {  dcoffset_thres_idx = (apc_dcoffset_threshold - lowest_dbm)/2-1;  }

      //compensate PA vbias first for current power idx
      power_dc_offset_dac = (power_idx <= dcoffset_thres_idx) ? apc_dcoffset_low : apc_dcoffset_high;
      //compensate PA vbias first
      dc_offset_dac = (left_idx <= dcoffset_thres_idx) ? apc_dcoffset_low : apc_dcoffset_high;
      //compensate PA vbias first for right idx
      right_dc_offset_dac = (right_idx <= dcoffset_thres_idx) ? apc_dcoffset_low : apc_dcoffset_high;

      power_dac = band->power[power_idx] + power_dc_offset_dac;
      left_dac = band->power[left_idx] + dc_offset_dac;
      right_dac = band->power[right_idx] + right_dc_offset_dac;

      result = (short)(  ( (right_dac - left_dac)*( rollback_db-(power_idx - right_idx)* 2 * F2I_Resolution )*weight )>>14  )/(2*F2I_Resolution)+(  ( (power_dac - right_dac)*weight )>>14  );

      //result = (short)(  ( (band->power[right_idx] - band->power[left_idx])*( rollback_db-(power_idx - right_idx)* 2 * F2I_Resolution )*weight )>>14  )/(2*F2I_Resolution)+(  ( (band->power[power_idx] - band->power[right_idx])*weight )>>14  );
   }
   
   tx_rb_info[4] = result;
   L1D_RF_Rollback_Trace(tx_rb_info[0],tx_rb_info[1],tx_rb_info[2],tx_rb_info[3],tx_rb_info[4]);
   #if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   L1D_RF_SWTP_SAR_db_Trace(sar_tx_rb_info[0],sar_tx_rb_info[1],sar_tx_rb_info[2],sar_tx_rb_info[3],sar_tx_rb_info[4]);
   #endif
   
   #if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   return result + result_offset;
   #else
   return result;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetTxPowerRollbackData( int rf_band, void *table )
{  signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(tx_power_rollback_gmsk[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sTX_POWER_ROLLBACK); n>0; n--)
   {  *dst++ = *src++;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #if IS_EGPRS
void L1D_RF_SetTxPowerRollbackData_EPSK( int rf_band, void *table )
{  signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(tx_power_rollback_epsk[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sTX_POWER_ROLLBACK); n>0; n--)
   {  *dst++ = *src++;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif

#endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_RF_RAMPPROFILE_ROLLBACK_SUPPORT
short L1D_RF_RampProfile_RollBack( short power_dbm, int rf_band, short mod_type)
{
   short  power_idx,max_power_idx, max_power = 0, i = 0;
   int  rollback_db = 0, decrement_db = 0;
   static char  lowest_dbm;
   short  rollback_idx, result;
   sTX_POWER_ROLLBACK* tx_power_rollback = 0;
   
// Find MAX power level index GMSK(LB33 dbm, HB30dBm), 8PSK(LB 27dbm, HB 26dBm)
   if(mod_type == 0)
   {/*GMSK*/
      if(rf_band <= FrequencyBand900)
      {/*LB*/
         max_power = GMSK_LB_MAX_POWER;
      }
      else
      {/*HB*/
         max_power = GMSK_HB_MAX_POWER;
      }
      tx_power_rollback = tx_power_rollback_gmsk[rf_band];
   }
   #if IS_EPSK_TX_SUPPORT /*need to modify with tx_power_rollback_epsk*/
   else
   {/*EPSK*/
      if(rf_band <= FrequencyBand900)
      {/*LB*/
         max_power = EPSK_LB_MAX_POWER;
      }
      else
      {/*HB*/
         max_power = EPSK_HB_MAX_POWER;
      }
         tx_power_rollback = tx_power_rollback_epsk[rf_band];
   }
   #endif
   
   if( max_power==0 || tx_power_rollback==0 )
   {  /*Chuwei: mod_type error or memory corruption*/
      return 0;
   }
   
   lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
   max_power_idx = (max_power-lowest_dbm)/2;
   power_idx = (power_dbm-lowest_dbm)/2;
   
   /*If exceed array "band->power" range, return 0 */
   if( power_idx <= 0 )
      return 0;
   
   /*choose rollback value by # of TX slots*/
   i  = (l1d_rf.tx_slots)   & 0x1;
   i += (l1d_rf.tx_slots>>1) & 0x1;
   i += (l1d_rf.tx_slots>>2) & 0x1;
   i += (l1d_rf.tx_slots>>3) & 0x1;
   i += (l1d_rf.tx_slots>>4) & 0x1;
   switch (i)
   {
      case 2:
         rollback_db = tx_power_rollback->rollback_2t;
         break;
      case 3:
         rollback_db = tx_power_rollback->rollback_3t;
         break;
      case 4:
         rollback_db = tx_power_rollback->rollback_4t;
         break;
      case 5:
         rollback_db = tx_power_rollback->rollback_5t;
         break;
      default:
      {
         #if IS_TAS_MAX_TXPWR_REDUCTION_SUPPORT
         if(l1d_rf.tas_ant_sel == 1) 
         {
            if( IS_RF_TX_MAX_POWER_DECREASED_TAS())
            {   rollback_db = 0;   }
            else
            {   return 0;}
         }
         else
         #endif
         {
            if( IS_RF_TX_MAX_POWER_DECREASED() )
            {  rollback_db = 0;  }
            else
            {  return 0;  }
         }
      }
   }
   
   /*Check the request of TX max power decrement from upper layers*/
   decrement_db = L1D_RF_RefineTxMaxPowerDecrement( rf_band, mod_type, i );
   /*Determine final rollback value*/
   rollback_db = decrement_db>rollback_db ? decrement_db : rollback_db;
   
   /*decrease rollback value for lower power*/
   rollback_db = rollback_db-(max_power_idx-power_idx)*F2I_Resolution*2;
   
   if( rollback_db <= 0 ) return 0;
   
   rollback_idx = rollback_db/(2*F2I_Resolution);   //(rollback_db/2)=How much idx should we rollback
   result = ((rollback_db-(rollback_idx*2*F2I_Resolution))>8)? (rollback_idx+1) : rollback_idx;  // 0~1 dB: none, 1.1~2dB: rollback 1 ramping profile

   return result;
   
}

#endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
//int CLoad_FreqOffset = 0;   //CUSTOM_CLOAD_FREQ_OFFSET;

char L1D_RF_Check_32K_XO_Status( void )
{
   return l1d_ext_32k_exist;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int L1D_RF_UpdateCLoadFreqOffset( int freq_offset )
{
   /******************************************************************************************************/
   /* Compensate CLoad_FreqOffset if RF LPM's 32K Clk is X ppm(EX: MT6167 X=20ppm) faster than FPM's     */
   /* EX:                                                                                                */
   /*  CLoad_FreqOffset = freq_offset * (1 + Xppm) + 900MHz * Xppm.                                      */
   /*  freq_offset * (1 + Xppm): freq_offset has to add on X ppm for LPM/FPM compensation                */
   /*  900MHz * Xppm: Since LPM's clk is actually (900MHz + freq_offset)*(1+Xppm), L1D also have to      */
   /*                 compensate the term "900MHz * Xppm", and include this value into Cload_FreqOffset. */
   /*                 Sleep Mode will use 900Mhz + CLoad_FreqOffset as LPM's clk.                        */
   /******************************************************************************************************/

   //int freq_offset_comp;
   //#if IS_CLOAD_CAL_BBLPM_V1_SUPPORT
   //// use BBLPM in FHC and SW LPM in traditional cal, compensate the freq_offset in FT
   //freq_offset_comp = freq_offset;
   //#else
   //freq_offset_comp = (freq_offset+(freq_offset*LPM_FREQ_DRIFT_PPM/1000000)+(LPM_FREQ_DRIFT_PPM*900))  ;
   //#endif
   //return freq_offset_comp;

   return freq_offset;  //LPM_FREQ_DRIFT_PPM compensate in FHC flow, let BBLPM and old flow capid255 can use the same cal data
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetCLoadFreqOffset( int *freq_offset )
{
   extern int CLoad_FreqOffset;
   extern void L1D_SetDCXOFreqLPM(int);
   
   //Update CLoad_FreqOffset based on clock drift between FPM/LPM
   CLoad_FreqOffset = L1D_RF_UpdateCLoadFreqOffset(*freq_offset);
   L1D_SetDCXOFreqLPM(CLoad_FreqOffset);
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetDFCFreqOffset( int *freq_offset )
{
   extern signed short int afc_dac_default;
   short dacOffset;
   
   if( l1d_rf.is_lock_dcxo )
   {
      if( l1d_rf.is_crystal_on_pmic )
         dacOffset = afc_dac_initial - current_DacValue;
      else
         dacOffset = afc_dac_default - current_DacValue;

      if( afc_Phi_est != 0 )
      {  *freq_offset = dacOffset*0x1000 / afc_Phi_est;  }
      else
      {  *freq_offset = 0;  }
   }
   else
   {  *freq_offset = 0;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetAfcDacFreqOffset( int *freq_offset )
{
   extern signed short int afc_dac_default;
   short dacOffset;
   
   if( afc_Phi_est != 0 )
   {
      if( l1d_rf.is_crystal_on_pmic )
         dacOffset = afc_dac_initial - current_DacValue;  // using afc_dac_default for locked_DacValue for fix afc case, too.
      else
         dacOffset = afc_dac_default - current_DacValue;  // using afc_dac_default for locked_DacValue for fix afc case, too.
      //if( l1d_rf.is_lock_dcxo )
      //{  dacOffset = locked_DacValue - current_DacValue;      }  //DFC freq. offset
      //else
      //{  dacOffset = afc_dac_default_ori - current_DacValue;  }  //CAFC freq. offset

      *freq_offset = dacOffset*0x1000 / afc_Phi_est;
   }
   else
   {  *freq_offset = 0;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Set_DCXO_LPM_Divider( unsigned int dcxo_frac )
{
   #if IS_RF_MT6255RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW( 0x4A, ((dcxo_frac&0xFFF)<<8)|0xFF ) );  //CW74: Set DCXO LPM divider
   IMM_MODE_END( );
   #elif IS_RF_MT6280RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW( 0xF9, ((XO_CapID&0xFF)<<12)|(dcxo_frac&0xFFF) ) ); //CW249: Set previous Cap ID value
   IMM_MODE_END( );
   #elif IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW( 0xF9, ((XO_CapID&0xFF)<<12)|(dcxo_frac&0xFFF) ) ); //CW249: Set previous Cap ID value
   IMM_MODE_END( );
   #elif IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   //LPM divider should be update by Sleep Mode by MMRF API after MT6176
   #else
   #error "Please implement L1D_RF_Set_DCXO_LPM_Divider() for removing external 32K"
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Set_DCXO_FPM_Divider( unsigned int dcxo_frac )
{
   #if IS_RF_MT6255RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW( 0x4B, dcxo_frac&0xFFF ) );  //CW75: Set DCXO FPM divider
   IMM_MODE_END( );
   #elif IS_RF_MT6280RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW( 0xFA, (0xFF000)|(dcxo_frac&0xFFF) ) ); //CW250: Set previous Cap ID value
   IMM_MODE_END( );
   #elif IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW( 0xFA, (0xFF000)|(dcxo_frac&0xFFF) ) ); //CW250: Set previous Cap ID value
   IMM_MODE_END( );
   #elif IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   //This API is not used. 2G will update FPM divider by 2G BSI or MMRF API.
   #else
   #error "Please implement L1D_RF_Set_DCXO_FPM_Divider() for removing external 32K"
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void L1D_RF_IMM_Set_CapID( long capid )
{
   #if IS_RF_MT6255RF
   unsigned long cw132 = L1D_RF_SetTX_BSI_CW( QB_ST2B, 150 );  // MT6255RF enters TX mode in ST2B

   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), cw132|(0x1<<18)            );  //CW132: Enable to force to set Cap ID in RX/TX mode
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW( 0x38, capid&0xFF ) );  //CW56:  Set Cap ID value
   IMM_SEND_BSI( SCTRL_IMOD(0,29), cw132|(0x0<<18)            );  //CW132: Disable to force to set Cap ID in RX/TX mode
   IMM_MODE_END( );
   #elif IS_RF_MT6280RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW( 0xF9, ((capid&0xFF)<<12)|(0x008C6) ) ); //CW249: Set previous Cap ID value
   IMM_MODE_END( );
   #elif IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW( 0xF9, ((capid&0xFF)<<12)|(0x008C6) ) ); //CW249: Set previous Cap ID value
   IMM_MODE_END( );
   #elif IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   MML1_RF_SetCapID(capid);
   #else
   #error "Please implement L1D_RF_IMM_Set_CapID() for removing external 32K"
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

unsigned short L1D_RF_Check_DCXO_LPM( void )
{
#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
   unsigned short afc_data = (l1d_rf.dcxo_lpm == 1) ? 0x1FFF : l1d_rf.AFC_data;

   return afc_data;
#else
   return l1d_rf.AFC_data;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void L1D_RF_Set_DCXO_Power_Mode( char mode )
{
#if IS_32K_CRYSTAL_REMOVAL_SUPPORT

   if( mode == 0 )  //DCXO LPM
   {
   #if IS_CLOAD_CAL_BBLPM_V1_SUPPORT
         L1D_RF_Set_Cload_Cal_Mode(1);
   #else
         L1D_RF_IMM_Set_CapID( 0xFF );
   #endif
   }
   else if( mode == 1 )  //DCXO FPM
   {
   #if IS_CLOAD_CAL_BBLPM_V1_SUPPORT
         L1D_RF_Set_Cload_Cal_Mode(0);
   #else
         L1D_RF_IMM_Set_CapID( XO_CapID );
   #endif
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Set_Cload_Cal_Mode( char mode )
{
#if IS_CLOAD_CAL_BBLPM_V1_SUPPORT
   if( mode == 1 )
   {
   #if IS_FHC_SUPPORT
      if( (l1d_rf.fhc_proc==FHC_PROC_DTS_DCXO_LPM) && (l1d_rf.is_crystal_on_pmic) )
      #if IS_CHIP_MT6292 || IS_CHIP_MT6293
         MML1_DCXO_Operating_Mode_Switch(DCXO_BBLPM);// FPM -> BBLPM
      #else
         #error "Please add BBLPM procedure"
      #endif
      else
   #endif
   #if IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
      {  L1D_RF_IMM_Set_CapID( 0xC8 ); }
   #else
      {  L1D_RF_IMM_Set_CapID( 0xFF ); }
   #endif
   }
   else if( mode == 0 )
   {
   #if IS_FHC_SUPPORT
      if( (l1d_rf.fhc_proc==FHC_PROC_DTS_DCXO_LPM) && (l1d_rf.is_crystal_on_pmic) )
      #if IS_CHIP_MT6292 || IS_CHIP_MT6293
         MML1_DCXO_Operating_Mode_Switch(DCXO_FPM);// BBLPM -> FPM
      #else
         #error "Please add BBLPM procedure"
      #endif
      else
   #endif
      {  L1D_RF_IMM_Set_CapID( XO_CapID ); }
   }
#endif
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Set_FixAFC_Status( void )
{
#if IS_DUAL_LOOP_AFC_CONTROL_SUPPORT
   extern void L1D_DualLoopAFC_SetStatus( void );
   L1D_DualLoopAFC_SetStatus();
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed char L1D_RF_Get_FixAFC_Status( void )
{
#if IS_DUAL_LOOP_AFC_CONTROL_SUPPORT
   extern signed char L1D_DualLoopAFC_GetStatus( void );
   return L1D_DualLoopAFC_GetStatus();
#else
   return 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Relock_RxSynthesizer( unsigned short afc_data )
{
#if IS_DUAL_LOOP_AFC_CONTROL_SUPPORT
   extern void L1D_DualLoopAFC_TuneSynthesizer( unsigned short, unsigned char );

   unsigned long IFN_data, RFN_data, rfic = L1D_Query_RFIC_Index(L1D_RX, l1d_rf.band);
   #if IS_SMP_ARCHITECTURE
      unsigned long _savedMask = kal_hrt_SaveAndSetIRQMask();   /* disable interrupt */
   #else
      unsigned long _savedMask=SaveAndSetIRQMask();
   #endif
   // update Nfrac and Nint for synthesizer base on the freq err of FB
   L1D_DualLoopAFC_TuneSynthesizer( afc_data, 0 );
   IFN_data = l1d_rf.IFN_data;
   RFN_data = l1d_rf.RFN_data;
   #if IS_SMP_ARCHITECTURE
      kal_hrt_RestoreIRQMask(_savedMask);
   #else
      RestoreIRQMask(_savedMask);
   #endif
   #if IS_RF_MT6166
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW( 0xDF, RFN_data     ) );  //CW223 : RX PLL
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW( 0xE0, IFN_data|0x1 ) );  //CW224: RX PLL
   IMM_MODE_END( );
   #elif IS_RF_MT6165
   {
      unsigned short daoffset;
      daoffset = L1D_RF_GetSxDAoffsetSetting(RFN_data);
      IMM_MODE_BEGIN( IMMMASK_ALL );
      IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW( 0xB5, RFN_data            ) );                    //CW181 : RX PLL
      IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW( 0xB6, IFN_data|(0x1<<9)|((daoffset&0xFF)<<1) ) ); //CW182 : RX PLL
      IMM_MODE_END( );
   }
   #elif IS_RF_MT6169
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW( 0x73, RFN_data ) );  //CW115: Set SRX Frequency
   IMM_SEND_BSI( SCTRL_IMOD(0,30), BSI_CW( 0x74, IFN_data ) );  //CW116: Set SRX Frequency
   IMM_MODE_END( );
   #elif IS_RF_MT6176
   (void)rfic;
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW( 0x82, RFN_data ));  //CW130: Set SRX Frequency
   MML1_RF_IMM_SEND_BSI(MML1_RF_RFIC1, BSI_CW( 0x83, IFN_data ));  //CW131: Set SRX Frequency
   #elif IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   if( rfic == L1D_RFIC1 )
      {rfic = MML1_RF_RFIC1;}
   else
      {rfic = MML1_RF_RFIC2;}
   MML1_RF_IMM_SEND_BSI(rfic, BSI_CW( 0x82, RFN_data ));  //CW130: Set SRX Frequency
   MML1_RF_IMM_SEND_BSI(rfic, BSI_CW( 0x83, IFN_data ));  //CW131: Set SRX Frequency
   #else
#error "Please implement L1D_RF_Relock_RxSynthesizer() for enable Fix AFC"
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


void L1D_RF_UpdateAFCDac( unsigned short afc_data )
{
#if IS_AST_B2S_SUPPORT
   /* do nothing */
#elif IS_RF_MT6280RF
   /* update the AFC DAC based on the freq err of FB */
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), ((afc_data<<AFC_SHIFT_PART)&AFC_MASK_PART)|(AFC_VALUE_PART) );
   IMM_MODE_END( );
#elif IS_DCXO_ENABLE
   /* For SOC chips or RFs that update AFC DAC via BSI */
   #if IS_RF_MTKSOC1T || IS_RF_MTKSOC1
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,26), (afc_data&0x1FFF)|0x0300000 );
   WAIT_TIME_QB(23); //Delay 20us
   IMM_MODE_END( );
   #elif IS_RF_MT6252RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
      #if IS_CHIP_MT6252_S00
   IMM_SEND_BSI( SCTRL_IMOD(0,29), 0x0D00200 );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), (afc_data&0x1FFF)|0x3900000 );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), 0x0D00000 );
      #else
   IMM_SEND_BSI( SCTRL_IMOD(0,29), 0x0D00300 );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), (afc_data&0x1FFF)|0x3900000 );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), 0x0D00100 );
      #endif
   IMM_MODE_END( );
   #elif IS_RF_MT6256RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW( 0x84, 0x188D8 ) );  //CW132: Enable to force to set AFC DAC in RX/TX mode
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW( 0x39, afc_data&0x1FFF ) );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW( 0x84, 0x088D8 ) );  //CW132: Disable to force to set AFC DAC in RX/TX mode
   IMM_MODE_END( );
   #elif IS_RF_MT6255RF
   unsigned long cw132 = L1D_RF_SetTX_BSI_CW( QB_ST2B, 150 );  // MT6255RF enters TX mode in ST2B

   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), cw132|(0x1<<18) );          //CW132: Enable to force to set AFC DAC in RX/TX mode
   IMM_SEND_BSI( SCTRL_IMOD(0,29), BSI_CW( 0x39, afc_data&0x1FFF ) );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), cw132|(0x0<<18) );          //CW132: Disable to force to set AFC DAC in RX/TX mode
   IMM_MODE_END( );
   #elif IS_RF_MT6251RF
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), 0x8426FFA );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), (afc_data&0x1FFF)|0x3900000 );
   IMM_SEND_BSI( SCTRL_IMOD(0,29), 0x8406FFA );
   IMM_MODE_END( );
   #elif IS_RF_MT6162
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_SEND_BSI( SCTRL_IMOD(0,30), (afc_data&0x1FFF)|0x0E100000 );
   IMM_MODE_END( );
   #elif IS_RF_MT6163
   IMM_MODE_BEGIN( IMMMASK_ALL );
   IMM_OFFCHIP_BSI_CFG( BSI_SWITCH_NO_ACT_ONCE );  /* Change state from BSI_SWITCH_2G_THEN_TD to BSI_SWITCH_NO_ACT_ONCE,
                                                      in order to avoid changing remote BSI switch owner to TD after IMM_SEND_BSI.
                                                      The state will be restored back to BSI_SWITCH_2G_THEN_TD after IMM_SEND_BSI
                                                      for future use of IMM_SEND_BSI */
   IMM_SEND_BSI( SCTRL_IMOD(0,30), (afc_data&0x1FFF)|0x0E100000 );
   IMM_MODE_END( );
   #elif IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165
      #if IS_DUAL_LOOP_AFC_CONTROL_SUPPORT
   if( l1d_rf.is_lock_dcxo )
   {
      L1D_RF_Relock_RxSynthesizer( afc_data );
   }
   else
      #endif
   {
      IMM_MODE_BEGIN( IMMMASK_ALL );
      IMM_SEND_BSI( SCTRL_IMOD(0,30), ((afc_data<<AFC_SHIFT_PART)&AFC_MASK_PART)|(AFC_VALUE_PART) );
      IMM_MODE_END( );
   }
#elif IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   #if IS_DUAL_LOOP_AFC_CONTROL_SUPPORT
      if( l1d_rf.is_lock_dcxo )
      {
         L1D_RF_Relock_RxSynthesizer( afc_data );
      }
      else
   #endif
      {
   #if defined(L1_SIM)
         IMM_MODE_BEGIN( IMMMASK_ALL );
         if( l1d_rf.is_crystal_vcxo )
            IMM_SEND_BSI( SCTRL_IMOD(0,30), ((afc_data<<AFC_SHIFT_PART)&AFC_MASK_PART)|(AFC_VALUE_PART_VCXO) );
         else
            IMM_SEND_BSI( SCTRL_IMOD(0,30), ((afc_data<<AFC_SHIFT_PART)&AFC_MASK_PART)|(AFC_VALUE_PART_VCTCXO) );
         IMM_MODE_END( );
   #else
         MML1_RF_SetAFCDAC( afc_data );
   #endif
      }

   #else
#error "Please implement L1D_RF_UpdateAFCDac() for DCXO-enabled chips"
   #endif
#endif /* IS_DCXO_ENABLE */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* Run in CTIRQ2 */
void L1D_RF_SetStandbyMode( void )
{
#if IS_RF_VCO_PARTIAL_DOO_ON || IS_RF_VCO_DOO_OFF
   if( l1d_rf2.dedicated_flag&SC_NON_IDLE )
   {
      //check if there is RX/PM window to open or not. If no, send a immediate BSI to let RF enter stand-by mode
      /* Remove settings below to prevent abnormal high TXFE on RF SX integer channels.
      if( ( l1d_rf2.rx_pm_flag == 0 ) )
      {
   #if IS_RF_MT6251RF || IS_RF_MT6256RF
         IMM_MODE_BEGIN( IMMMASK_ALL );
         IMM_SEND_BSI( SCTRL_IMOD(0,29), l1d_rf.IFN_data | 0x0244000 );
         IMM_MODE_END( );
   #endif
      }*/

   #if IS_RF_VCO_PARTIAL_DOO_ON
      if( IS_2_TX_CWIN() )
      {
         char ori_cwin_idx;
         //if the next frame has 2 CWINs for TX windows, change ST3 of first TX CWIN to let RF enter standby mode
         ori_cwin_idx = l1d_rf.cwin_idx;
         l1d_rf.cwin_idx = l1d_rf2.tx_1st_cwin_idx;
         l1d_rf2.dedicated_flag |= SC_DEDICATED_2TX;
         IMM_UPDATE_BSI_BEGIN();
         L1D_RF_SetSData_ST3();
         IMM_UPDATE_BSI_END();
         l1d_rf2.dedicated_flag &= ~SC_DEDICATED_2TX;
         l1d_rf.cwin_idx = ori_cwin_idx;
      }
   #endif
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Access_Dedicated_Mode_Start( char mode_flag )
{
   (void)(mode_flag);
#if IS_RF_VCO_PARTIAL_DOO_ON || IS_RF_VCO_DOO_OFF || IS_REPORT_RF_TEMPERATURE_SUPPORT || IS_REPORT_RF_TEMPERATURE_BYATCMD_SUPPORT
   l1d_rf2.dedicated_flag |= mode_flag;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Access_Dedicated_Mode_End( char mode_flag )
{
   (void)(mode_flag);
#if IS_RF_VCO_PARTIAL_DOO_ON || IS_RF_VCO_DOO_OFF || IS_REPORT_RF_TEMPERATURE_SUPPORT || IS_REPORT_RF_TEMPERATURE_BYATCMD_SUPPORT
   l1d_rf2.dedicated_flag &= ~mode_flag;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Check_RTX_PM( unsigned char rx_slots, int pm_count, char tx_cwin_idx, unsigned short is_fsi_win )
{
   (void)(rx_slots);
   (void)(pm_count);
   (void)(tx_cwin_idx);
#if IS_RF_VCO_PARTIAL_DOO_ON || IS_RF_VCO_DOO_OFF
   //for PARTIAL_DOO_ON/DOO_OFF, rf need to know if there are RX/PM windows to open or not in the next frame
   l1d_rf2.rx_pm_flag = ( rx_slots !=0 || pm_count != 0 || is_fsi_win != 0 ) ? 1 : 0;
   l1d_rf2.tx_1st_cwin_idx = tx_cwin_idx;  //to record the 1st TX cwin idx for replace ST3 data usage
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_CHIP_MT6223
unsigned short L1D_BT_Co_Clock_EINT_Setting( void )
{  char port = (BT_Co_Clock_GPIO_PORT)&0x7F;
   unsigned short setting = 0;

   switch( port )
   {
      case 42: case 43:
      {  setting = 1;
         break;
      }
      case 26: case 27: case 28:
      {  setting = 2;
         break;
      }
   }
   return setting;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_RF_MT6256RF
unsigned char L1D_RF_Get_BT_Rcal( void )
{
   unsigned char  r_cal=8; //default value

   #if IS_BT_R_CAL_SUPPORT
   extern unsigned char  Brt_SingleArm_R_Calibration( void );
   r_cal = Brt_SingleArm_R_Calibration() & 0xF;
   #endif

   return r_cal;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif


#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT /* for MT6516 only */
void L1D_RF_Custom_Table_Update( void )
{
   int i,j,k;
   for(i=1;i<5;i++)
   {
      for(j=0;j<2;j++)
      {
         for(k=0;k<5;k++)
         {
            PDATA_TABLE[i][j][k]=l1_rf_table.xPDATA_TABLE[i][j][k];
         }
      }
   }
   for(i=1;i<5;i++)
   {
      for(j=0;j<3;j++)
      {
         for(k=0;k<3;k++)
         {
            PDATA_TABLE3[i][j][k]=l1_rf_table.xPDATA_TABLE3[i][j][k];
         }
      }
   }
   for(i=0;i<8;i++)
   {
      RX_START_TQ_TABLE[i]=l1_rf_table.xRX_START_TQ_TABLE[i];
   }
   for(i=0;i<5;i++)
   {
      RX_END_TQ_TABLE[i]=l1_rf_table.xRX_END_TQ_TABLE[i];
   }
   #if IS_GPRS
   for(i=0;i<3;i++)
   {
      RX_MIDDLE_TQ_TABLE[i]=l1_rf_table.xRX_MIDDLE_TQ_TABLE[i];
   }
   for(i=0;i<2;i++)
   {
      RX_MIDDLE_TQ_TABLE2[i]=l1_rf_table.xRX_MIDDLE_TQ_TABLE2[i];
   }
   #endif
   for(i=0;i<8;i++)
   {
      TX_START_TQ_TABLE[i]=l1_rf_table.xTX_START_TQ_TABLE[i];
   }
   for(i=0;i<1;i++)
   {
      TX_START_TQ_TABLE2[i]=l1_rf_table.xTX_START_TQ_TABLE2[i];
   }
   for(i=0;i<1;i++)
   {
      TX_START_TQ_TABLE3[i]=l1_rf_table.xTX_START_TQ_TABLE3[i];
   }
   for(i=0;i<6;i++)
   {
      TX_END_TQ_TABLE[i]=l1_rf_table.xTX_END_TQ_TABLE[i];
   }
   #if IS_GPRS || IS_MULTISLOT_TX_SUPPORT
   for(i=0;i<4;i++)
   {
      TX_MIDDLE_TQ_TABLE[i]=l1_rf_table.xTX_MIDDLE_TQ_TABLE[i];
   }
      #if IS_EPSK_TX_SUPPORT
   for(i=0;i<2;i++)
   {
      for(j=0;j<4;j++)
      {
         TX_MIDDLE_TQ_TABLE2[i][j]=l1_rf_table.xTX_MIDDLE_TQ_TABLE2[i][j];
      }
   }
      #endif
   #endif
   PM_START_TQ_TABLE[6]=l1_rf_table.xPM_START_TQ_TABLE[6];

   for(i=0;i<10;i++)
   {
      PM_TQ_TABLE[i]=l1_rf_table.xPM_TQ_TABLE[i];
   }
   #if L1D_PM_ENHANCE
   for(i=0;i<10;i++)
   {
      PM_IN_IDLE_TQ_TABLE[i]=l1_rf_table.xPM_IN_IDLE_TQ_TABLE[i];
   }
      #if L1D_PM_1R7PM
   for(i=0;i<10;i++)
   {
      PM_1R7PM_TQ_TABLE[i]=l1_rf_table.xPM_1R7PM_TQ_TABLE[i];
   }
      #endif
   #endif
   for(i=0;i<7;i++)
   {
      FSWIN_STOP_DATA_TABLE[i]=l1_rf_table.xFSWIN_STOP_DATA_TABLE[i];
   }

   //txios_pcl_tab
   #if  IS_RF_MT6140D
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
         for(k=1;k<5;k++)
         {
            TXCW[i][j][k]=TXCW[i][j][k]&0xFE3FFFF|(l1_rf_table.xtxios_pcl_tab[i][j][k]<<18);
            TXCW[i][j][k]=TXCW[i][j][k]&0xFFFFF0F|(l1_rf_table.xtxitc_pcl_tab[i][j][k]<<4 );
            TXCW[i][j][k]=TXCW[i][j][k]&0xFFE3FFF|(l1_rf_table.xtxmod_gc_tab[i][j][k]<<14 );
         }
      }
   }
   #endif
   pdata_gmsk = l1_rf_table.xPDATA_GMSK;
   pdata_8psk = l1_rf_table.xPDATA_8PSK;

   apc_bat_voltage_period                   = l1_rf_table.xBAT_VOLTAGE_SAMPLE_PERIOD;
   apc_bat_voltage_count                    = l1_rf_table.xBAT_VOLTAGE_AVERAGE_COUNT;
   apc_bat_temperature_period               = l1_rf_table.xBAT_TEMPERATURE_SAMPLE_PERIOD;
   apc_bat_temperature_count                = l1_rf_table.xBAT_TEMPERATURE_AVERAGE_COUNT;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
void L1D_RF_Custom_BPI_Table_Update(void)
{
   sRF_BPI_VARIABLE *p=&l1d_rf_custom_input_data.RF_BPI_Variable;

   #if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   /* FrequencyBand850  */
   PDATA_TABLE[1][0][0]=p->xPDATA_GSM850_PR1;
   PDATA_TABLE[1][0][1]=p->xPDATA_GSM850_PR2;
   PDATA_TABLE[1][0][2]=p->xPDATA_GSM850_PR2B;
   PDATA_TABLE[1][0][3]=p->xPDATA_GSM850_PR3;
   PDATA_TABLE[1][0][4]=p->xPDATA_GSM850_PR3A;
   PDATA_TABLE[1][1][0]=p->xPDATA_GSM850_PT1;
   PDATA_TABLE[1][1][1]=p->xPDATA_GSM850_PT2;
   PDATA_TABLE[1][1][2]=p->xPDATA_GSM850_PT2B;
   PDATA_TABLE[1][1][3]=p->xPDATA_GSM850_PT3;
   PDATA_TABLE[1][1][4]=p->xPDATA_GSM850_PT3A;
   /* FrequencyBand900  */
   PDATA_TABLE[2][0][0]=p->xPDATA_GSM_PR1;
   PDATA_TABLE[2][0][1]=p->xPDATA_GSM_PR2;
   PDATA_TABLE[2][0][2]=p->xPDATA_GSM_PR2B;
   PDATA_TABLE[2][0][3]=p->xPDATA_GSM_PR3;
   PDATA_TABLE[2][0][4]=p->xPDATA_GSM_PR3A;
   PDATA_TABLE[2][1][0]=p->xPDATA_GSM_PT1;
   PDATA_TABLE[2][1][1]=p->xPDATA_GSM_PT2;
   PDATA_TABLE[2][1][2]=p->xPDATA_GSM_PT2B;
   PDATA_TABLE[2][1][3]=p->xPDATA_GSM_PT3;
   PDATA_TABLE[2][1][4]=p->xPDATA_GSM_PT3A;
   /* FrequencyBand1800 */
   PDATA_TABLE[3][0][0]=p->xPDATA_DCS_PR1;
   PDATA_TABLE[3][0][1]=p->xPDATA_DCS_PR2;
   PDATA_TABLE[3][0][2]=p->xPDATA_DCS_PR2B;
   PDATA_TABLE[3][0][3]=p->xPDATA_DCS_PR3;
   PDATA_TABLE[3][0][4]=p->xPDATA_DCS_PR3A;
   PDATA_TABLE[3][1][0]=p->xPDATA_DCS_PT1;
   PDATA_TABLE[3][1][1]=p->xPDATA_DCS_PT2;
   PDATA_TABLE[3][1][2]=p->xPDATA_DCS_PT2B;
   PDATA_TABLE[3][1][3]=p->xPDATA_DCS_PT3;
   PDATA_TABLE[3][1][4]=p->xPDATA_DCS_PT3A;
   /* FrequencyBand1900 */
   PDATA_TABLE[4][0][0]=p->xPDATA_PCS_PR1;
   PDATA_TABLE[4][0][1]=p->xPDATA_PCS_PR2;
   PDATA_TABLE[4][0][2]=p->xPDATA_PCS_PR2B;
   PDATA_TABLE[4][0][3]=p->xPDATA_PCS_PR3;
   PDATA_TABLE[4][0][4]=p->xPDATA_PCS_PR3A;
   PDATA_TABLE[4][1][0]=p->xPDATA_PCS_PT1;
   PDATA_TABLE[4][1][1]=p->xPDATA_PCS_PT2;
   PDATA_TABLE[4][1][2]=p->xPDATA_PCS_PT2B;
   PDATA_TABLE[4][1][3]=p->xPDATA_PCS_PT3;
   PDATA_TABLE[4][1][4]=p->xPDATA_PCS_PT3A;

   /* FrequencyBand850  */
   PDATA_TABLE3[1][0][0]=p->xPDATA_GSM850_PR2M1;
   PDATA_TABLE3[1][0][1]=p->xPDATA_GSM850_PR2M2;
   PDATA_TABLE3[1][0][2]=p->xPDATA_GSM850_PR2M3;
   PDATA_TABLE3[1][1][0]=p->xPDATA_GSM850_PT2M1_G8;
   PDATA_TABLE3[1][1][1]=p->xPDATA_GSM850_PT2M2_G8;
   PDATA_TABLE3[1][1][2]=p->xPDATA_GSM850_PT2M3_G8;
   PDATA_TABLE3[1][2][0]=p->xPDATA_GSM850_PT2M1_8G;
   PDATA_TABLE3[1][2][1]=p->xPDATA_GSM850_PT2M2_8G;
   PDATA_TABLE3[1][2][2]=p->xPDATA_GSM850_PT2M3_8G;
   /* FrequencyBand900  */
   PDATA_TABLE3[2][0][0]=p->xPDATA_GSM_PR2M1;
   PDATA_TABLE3[2][0][1]=p->xPDATA_GSM_PR2M2;
   PDATA_TABLE3[2][0][2]=p->xPDATA_GSM_PR2M3;
   PDATA_TABLE3[2][1][0]=p->xPDATA_GSM_PT2M1_G8;
   PDATA_TABLE3[2][1][1]=p->xPDATA_GSM_PT2M2_G8;
   PDATA_TABLE3[2][1][2]=p->xPDATA_GSM_PT2M3_G8;
   PDATA_TABLE3[2][2][0]=p->xPDATA_GSM_PT2M1_8G;
   PDATA_TABLE3[2][2][1]=p->xPDATA_GSM_PT2M2_8G;
   PDATA_TABLE3[2][2][2]=p->xPDATA_GSM_PT2M3_8G;
   /* FrequencyBand1800 */
   PDATA_TABLE3[3][0][0]=p->xPDATA_DCS_PR2M1;
   PDATA_TABLE3[3][0][1]=p->xPDATA_DCS_PR2M2;
   PDATA_TABLE3[3][0][2]=p->xPDATA_DCS_PR2M3;
   PDATA_TABLE3[3][1][0]=p->xPDATA_DCS_PT2M1_G8;
   PDATA_TABLE3[3][1][1]=p->xPDATA_DCS_PT2M2_G8;
   PDATA_TABLE3[3][1][2]=p->xPDATA_DCS_PT2M3_G8;
   PDATA_TABLE3[3][2][0]=p->xPDATA_DCS_PT2M1_8G;
   PDATA_TABLE3[3][2][1]=p->xPDATA_DCS_PT2M2_8G;
   PDATA_TABLE3[3][2][2]=p->xPDATA_DCS_PT2M3_8G;
   /* FrequencyBand1900 */
   PDATA_TABLE3[4][0][0]=p->xPDATA_PCS_PR2M1;
   PDATA_TABLE3[4][0][1]=p->xPDATA_PCS_PR2M2;
   PDATA_TABLE3[4][0][2]=p->xPDATA_PCS_PR2M3;
   PDATA_TABLE3[4][1][0]=p->xPDATA_PCS_PT2M1_G8;
   PDATA_TABLE3[4][1][1]=p->xPDATA_PCS_PT2M2_G8;
   PDATA_TABLE3[4][1][2]=p->xPDATA_PCS_PT2M3_G8;
   PDATA_TABLE3[4][2][0]=p->xPDATA_PCS_PT2M1_8G;
   PDATA_TABLE3[4][2][1]=p->xPDATA_PCS_PT2M2_8G;
   PDATA_TABLE3[4][2][2]=p->xPDATA_PCS_PT2M3_8G;
      #if IS_2G_RX_DIVERSITY_PATH_SUPPORT
   /* FrequencyBand850  */
   PDATA_DIVERSITY_TABLE[1][0][0]=p->xPDATA_GSM850_DIVERSITY_PR1;
   PDATA_DIVERSITY_TABLE[1][0][1]=p->xPDATA_GSM850_DIVERSITY_PR2;
   PDATA_DIVERSITY_TABLE[1][0][2]=p->xPDATA_GSM850_DIVERSITY_PR2B;
   PDATA_DIVERSITY_TABLE[1][0][3]=p->xPDATA_GSM850_DIVERSITY_PR3;
   PDATA_DIVERSITY_TABLE[1][0][4]=p->xPDATA_GSM850_DIVERSITY_PR3A;
   PDATA_DIVERSITY_TABLE[1][1][0]=0;//p->xPDATA_GSM850_PT1;
   PDATA_DIVERSITY_TABLE[1][1][1]=0;//p->xPDATA_GSM850_PT2;
   PDATA_DIVERSITY_TABLE[1][1][2]=0;//p->xPDATA_GSM850_PT2B;
   PDATA_DIVERSITY_TABLE[1][1][3]=0;//p->xPDATA_GSM850_PT3;
   PDATA_DIVERSITY_TABLE[1][1][4]=0;//p->xPDATA_GSM850_PT3A;
   /* FrequencyBand900  */
   PDATA_DIVERSITY_TABLE[2][0][0]=p->xPDATA_GSM_DIVERSITY_PR1;
   PDATA_DIVERSITY_TABLE[2][0][1]=p->xPDATA_GSM_DIVERSITY_PR2;
   PDATA_DIVERSITY_TABLE[2][0][2]=p->xPDATA_GSM_DIVERSITY_PR2B;
   PDATA_DIVERSITY_TABLE[2][0][3]=p->xPDATA_GSM_DIVERSITY_PR3;
   PDATA_DIVERSITY_TABLE[2][0][4]=p->xPDATA_GSM_DIVERSITY_PR3A;
   PDATA_DIVERSITY_TABLE[2][1][0]=0;//p->xPDATA_GSM_PT1;
   PDATA_DIVERSITY_TABLE[2][1][1]=0;//p->xPDATA_GSM_PT2;
   PDATA_DIVERSITY_TABLE[2][1][2]=0;//p->xPDATA_GSM_PT2B;
   PDATA_DIVERSITY_TABLE[2][1][3]=0;//p->xPDATA_GSM_PT3;
   PDATA_DIVERSITY_TABLE[2][1][4]=0;//p->xPDATA_GSM_PT3A;
   /* FrequencyBand1800 */
   PDATA_DIVERSITY_TABLE[3][0][0]=p->xPDATA_DCS_DIVERSITY_PR1;
   PDATA_DIVERSITY_TABLE[3][0][1]=p->xPDATA_DCS_DIVERSITY_PR2;
   PDATA_DIVERSITY_TABLE[3][0][2]=p->xPDATA_DCS_DIVERSITY_PR2B;
   PDATA_DIVERSITY_TABLE[3][0][3]=p->xPDATA_DCS_DIVERSITY_PR3;
   PDATA_DIVERSITY_TABLE[3][0][4]=p->xPDATA_DCS_DIVERSITY_PR3A;
   PDATA_DIVERSITY_TABLE[3][1][0]=0;//p->xPDATA_DCS_PT1;
   PDATA_DIVERSITY_TABLE[3][1][1]=0;//p->xPDATA_DCS_PT2;
   PDATA_DIVERSITY_TABLE[3][1][2]=0;//p->xPDATA_DCS_PT2B;
   PDATA_DIVERSITY_TABLE[3][1][3]=0;//p->xPDATA_DCS_PT3;
   PDATA_DIVERSITY_TABLE[3][1][4]=0;//p->xPDATA_DCS_PT3A;
   /* FrequencyBand1900 */
   PDATA_DIVERSITY_TABLE[4][0][0]=p->xPDATA_PCS_DIVERSITY_PR1;
   PDATA_DIVERSITY_TABLE[4][0][1]=p->xPDATA_PCS_DIVERSITY_PR2;
   PDATA_DIVERSITY_TABLE[4][0][2]=p->xPDATA_PCS_DIVERSITY_PR2B;
   PDATA_DIVERSITY_TABLE[4][0][3]=p->xPDATA_PCS_DIVERSITY_PR3;
   PDATA_DIVERSITY_TABLE[4][0][4]=p->xPDATA_PCS_DIVERSITY_PR3A;
   PDATA_DIVERSITY_TABLE[4][1][0]=0;//p->xPDATA_PCS_PT1;
   PDATA_DIVERSITY_TABLE[4][1][1]=0;//p->xPDATA_PCS_PT2;
   PDATA_DIVERSITY_TABLE[4][1][2]=0;//p->xPDATA_PCS_PT2B;
   PDATA_DIVERSITY_TABLE[4][1][3]=0;//p->xPDATA_PCS_PT3;
   PDATA_DIVERSITY_TABLE[4][1][4]=0;//p->xPDATA_PCS_PT3A;

   /* FrequencyBand850  */
   PDATA_DIVERSITY_TABLE3[1][0][0]=p->xPDATA_GSM850_DIVERSITY_PR2M1;
   PDATA_DIVERSITY_TABLE3[1][0][1]=p->xPDATA_GSM850_DIVERSITY_PR2M2;
   PDATA_DIVERSITY_TABLE3[1][0][2]=p->xPDATA_GSM850_DIVERSITY_PR2M3;
   PDATA_DIVERSITY_TABLE3[1][1][0]=0;//p->xPDATA_GSM850_PT2M1_G8;
   PDATA_DIVERSITY_TABLE3[1][1][1]=0;//p->xPDATA_GSM850_PT2M2_G8;
   PDATA_DIVERSITY_TABLE3[1][1][2]=0;//p->xPDATA_GSM850_PT2M3_G8;
   PDATA_DIVERSITY_TABLE3[1][2][0]=0;//p->xPDATA_GSM850_PT2M1_8G;
   PDATA_DIVERSITY_TABLE3[1][2][1]=0;//p->xPDATA_GSM850_PT2M2_8G;
   PDATA_DIVERSITY_TABLE3[1][2][2]=0;//p->xPDATA_GSM850_PT2M3_8G;
   /* FrequencyBand900  */
   PDATA_DIVERSITY_TABLE3[2][0][0]=p->xPDATA_GSM_DIVERSITY_PR2M1;
   PDATA_DIVERSITY_TABLE3[2][0][1]=p->xPDATA_GSM_DIVERSITY_PR2M2;
   PDATA_DIVERSITY_TABLE3[2][0][2]=p->xPDATA_GSM_DIVERSITY_PR2M3;
   PDATA_DIVERSITY_TABLE3[2][1][0]=0;//p->xPDATA_GSM_PT2M1_G8;
   PDATA_DIVERSITY_TABLE3[2][1][1]=0;//p->xPDATA_GSM_PT2M2_G8;
   PDATA_DIVERSITY_TABLE3[2][1][2]=0;//p->xPDATA_GSM_PT2M3_G8;
   PDATA_DIVERSITY_TABLE3[2][2][0]=0;//p->xPDATA_GSM_PT2M1_8G;
   PDATA_DIVERSITY_TABLE3[2][2][1]=0;//p->xPDATA_GSM_PT2M2_8G;
   PDATA_DIVERSITY_TABLE3[2][2][2]=0;//p->xPDATA_GSM_PT2M3_8G;
   /* FrequencyBand1800 */
   PDATA_DIVERSITY_TABLE3[3][0][0]=p->xPDATA_DCS_DIVERSITY_PR2M1;
   PDATA_DIVERSITY_TABLE3[3][0][1]=p->xPDATA_DCS_DIVERSITY_PR2M2;
   PDATA_DIVERSITY_TABLE3[3][0][2]=p->xPDATA_DCS_DIVERSITY_PR2M3;
   PDATA_DIVERSITY_TABLE3[3][1][0]=0;//p->xPDATA_DCS_PT2M1_G8;
   PDATA_DIVERSITY_TABLE3[3][1][1]=0;//p->xPDATA_DCS_PT2M2_G8;
   PDATA_DIVERSITY_TABLE3[3][1][2]=0;//p->xPDATA_DCS_PT2M3_G8;
   PDATA_DIVERSITY_TABLE3[3][2][0]=0;//p->xPDATA_DCS_PT2M1_8G;
   PDATA_DIVERSITY_TABLE3[3][2][1]=0;//p->xPDATA_DCS_PT2M2_8G;
   PDATA_DIVERSITY_TABLE3[3][2][2]=0;//p->xPDATA_DCS_PT2M3_8G;
   /* FrequencyBand1900 */
   PDATA_DIVERSITY_TABLE3[4][0][0]=p->xPDATA_PCS_DIVERSITY_PR2M1;
   PDATA_DIVERSITY_TABLE3[4][0][1]=p->xPDATA_PCS_DIVERSITY_PR2M2;
   PDATA_DIVERSITY_TABLE3[4][0][2]=p->xPDATA_PCS_DIVERSITY_PR2M3;
   PDATA_DIVERSITY_TABLE3[4][1][0]=0;//p->xPDATA_PCS_PT2M1_G8;
   PDATA_DIVERSITY_TABLE3[4][1][1]=0;//p->xPDATA_PCS_PT2M2_G8;
   PDATA_DIVERSITY_TABLE3[4][1][2]=0;//p->xPDATA_PCS_PT2M3_G8;
   PDATA_DIVERSITY_TABLE3[4][2][0]=0;//p->xPDATA_PCS_PT2M1_8G;
   PDATA_DIVERSITY_TABLE3[4][2][1]=0;//p->xPDATA_PCS_PT2M2_8G;
   PDATA_DIVERSITY_TABLE3[4][2][2]=0;//p->xPDATA_PCS_PT2M3_8G;
      #endif
   pdata_gmsk = p->xPDATA_GMSK;
   pdata_8psk = p->xPDATA_8PSK;

      #if IS_BSI_TRIG_OFFCHIP_BPI_SUPPORT
   {
      sRF_PDATA_OFFCHIP *p2 = &l1d_rf_custom_input_data.RF_BPI_Variable.xPDATA_OFFCHIP;
      /* FrequencyBand850  */
      PDATA_SX_TABLE[1][0][0]=p2->GSM850.P_SR0;
      PDATA_SX_TABLE[1][0][1]=p2->GSM850.P_SR3;
      PDATA_SX_TABLE[1][1][0]=p2->GSM850.P_ST0;
      PDATA_SX_TABLE[1][1][1]=p2->GSM850.P_ST3;
      /* FrequencyBand900  */
      PDATA_SX_TABLE[2][0][0]=p2->GSM.P_SR0;
      PDATA_SX_TABLE[2][0][1]=p2->GSM.P_SR3;
      PDATA_SX_TABLE[2][1][0]=p2->GSM.P_ST0;
      PDATA_SX_TABLE[2][1][1]=p2->GSM.P_ST3;
      /* FrequencyBand1800 */
      PDATA_SX_TABLE[3][0][0]=p2->DCS.P_SR0;
      PDATA_SX_TABLE[3][0][1]=p2->DCS.P_SR3;
      PDATA_SX_TABLE[3][1][0]=p2->DCS.P_ST0;
      PDATA_SX_TABLE[3][1][1]=p2->DCS.P_ST3;
      /* FrequencyBand1900 */
      PDATA_SX_TABLE[4][0][0]=p2->PCS.P_SR0;
      PDATA_SX_TABLE[4][0][1]=p2->PCS.P_SR3;
      PDATA_SX_TABLE[4][1][0]=p2->PCS.P_ST0;
      PDATA_SX_TABLE[4][1][1]=p2->PCS.P_ST3;
   }
      #endif
   #endif /* IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_Timing_Table_Update(void)
{
   signed short xTQ_SR0;
   signed short xTQ_SR1;
   signed short xTQ_SR2;
   signed short xTQ_SR2M;
   signed short xTQ_SR3;
   signed short xTQ_PR1;
   signed short xTQ_PR2;
   signed short xTQ_PR2M1;
   signed short xTQ_PR2M2;
   signed short xTQ_PR3;
   signed short xTQ_PR3A;
   signed short xTQ_ST0;
   signed short xTQ_ST1;
   signed short xTQ_ST2;
   signed short xTQ_ST3;
   signed short xTQ_PT1;
   signed short xTQ_PT2;
   signed short xTQ_PT2B;
   signed short xTQ_PT3;
   #if IS_BPI_V2_PT3A_SUPPORT
   signed short xTQ_PT3A;
   #endif
   signed short xTQ_APCON;
   signed short xTQ_APCMID;
   signed short xTQ_APCOFF;
   signed short xTQ_BDLON;
   signed short xTQ_BDLOFF;
   signed short xTQ_BULON;
   signed short xTQ_BULOFF;
   signed short xTQ_AFC2_2_BOFF;

   signed short xTQ_PR2B;
   signed short xTQ_PT2M1_G8;
   signed short xTQ_PT2M2_G8;
   signed short xTQ_PT2M3_G8;
   signed short xTQ_PT2M1_8G;
   signed short xTQ_PT2M2_8G;
   signed short xTQ_PT2M3_8G;
   signed short xTQ_ST2B;
   signed short xTQ_ST2M_G8;
   signed short xTQ_ST2M_8G;
   //signed short xQR_BOFF_2_IDLE;

   sRF_TIMING_VARIABLE *t=&l1d_rf_custom_input_data.RF_Timing_Variable;

   xTQ_SR0                    =    (t->xQB_SR0-QB_RON_2_FSYNC);
   xTQ_SR1                    =    (t->xQB_SR1-QB_RON_2_FSYNC);
   xTQ_SR2                    =    (t->xQB_SR2-QB_RON_2_FSYNC);
   xTQ_SR2M                   =    (t->xQB_SR2M-QB_RON_2_FSYNC);
   xTQ_SR3                    =    (t->xQB_SR3-QB_FSYNC_2_ROFF);
   xTQ_PR1                    =    (t->xQB_PR1-QB_RON_2_FSYNC);
   xTQ_PR2                    =    (t->xQB_PR2-QB_RON_2_FSYNC);
   xTQ_PR2M1                  =    (t->xQB_PR2M1-QB_RON_2_FSYNC);
   xTQ_PR2M2                  =    (t->xQB_PR2M2-QB_RON_2_FSYNC);
   xTQ_PR3                    =    (t->xQB_PR3-QB_FSYNC_2_ROFF);
   xTQ_PR3A                   =    (t->xQB_PR3A-QB_FSYNC_2_ROFF);
   xTQ_ST0                    =    (t->xQB_ST0-QB_TON_2_FSYNC);
   xTQ_ST1                    =    (t->xQB_ST1-QB_TON_2_FSYNC);
   xTQ_ST2                    =    (t->xQB_ST2-QB_TON_2_FSYNC);
   xTQ_ST3                    =    (t->xQB_ST3-QB_FSYNC_2_TOFF);
   xTQ_PT1                    =    (t->xQB_PT1-QB_TON_2_FSYNC);
   xTQ_PT2                    =    (t->xQB_PT2-QB_TON_2_FSYNC);
   xTQ_PT2B                   =    (t->xQB_PT2B-QB_TON_2_FSYNC);
   xTQ_PT3                    =    (t->xQB_PT3-QB_FSYNC_2_TOFF);
   #if IS_BPI_V2_PT3A_SUPPORT
   xTQ_PT3A                   =    (t->xQB_PT3A-QB_FSYNC_2_TOFF);
   #endif
   xTQ_APCON                  =    (t->xQB_APCON-QB_TON_2_FSYNC);
   xTQ_APCMID                 =    (t->xQB_APCMID-QB_TON_2_FSYNC);
   xTQ_APCOFF                 =    (t->xQB_APCOFF-QB_FSYNC_2_TOFF);
   xTQ_BDLON                  =    (t->xQB_RX_FENA_2_FSYNC+QB_RX_ADEN_2_FENA-QB_RON_2_FSYNC);
   xTQ_BDLOFF                 =    (-QB_FSYNC_2_ROFF);
   xTQ_BULON                  =    (t->xQB_TX_FENA_2_FSYNC+QB_TX_DAEN_2_FENA-QB_TON_2_FSYNC);
   xTQ_BULOFF                 =    (-QB_FSYNC_2_TOFF);
   xTQ_AFC2_2_BOFF            =    (xTQ_BULOFF+t->xQB_TX_FSYNC_2_FENA);
   xTQ_PR2B                   =    (t->xQB_PR2B-QB_RON_2_FSYNC);
   xTQ_PT2M1_G8               =    (t->xQB_PT2M1_G8-QB_TON_2_FSYNC);
   xTQ_PT2M2_G8               =    (t->xQB_PT2M2_G8-QB_TON_2_FSYNC);
   xTQ_PT2M3_G8               =    (t->xQB_PT2M3_G8-QB_TON_2_FSYNC);
   xTQ_PT2M1_8G               =    (t->xQB_PT2M1_8G-QB_TON_2_FSYNC);
   xTQ_PT2M2_8G               =    (t->xQB_PT2M2_8G-QB_TON_2_FSYNC);
   xTQ_PT2M3_8G               =    (t->xQB_PT2M3_8G-QB_TON_2_FSYNC);
   xTQ_ST2B                   =    (t->xQB_ST2B-QB_TON_2_FSYNC);
   xTQ_ST2M_G8                =    (t->xQB_ST2M_G8-QB_TON_2_FSYNC);
   xTQ_ST2M_8G                =    (t->xQB_ST2M_8G-QB_TON_2_FSYNC);

   qb_boff_2_idle             =    (t->xQR_BOFF_2_IDLE);

   #if IS_BSI_SX0_SUPPORT
   RTX_START_TQ_TABLE[0]=  -xTQ_SR0;
   RTX_START_TQ_TABLE[1]=  -xTQ_ST0;
   if( t->xQB_SR0 != (-10000) )
      TQ_FBWin_Start_Offset = (xTQ_SR0+TQ_SBWIN_DSP_EXTEND1+TQ_BURST_HEAD_GUARD);  /* 216 QB  */
   else
      TQ_FBWin_Start_Offset = (xTQ_SR1+TQ_SBWIN_DSP_EXTEND1+TQ_BURST_HEAD_GUARD);  /* 216 QB  */
   #else
   TQ_FBWin_Start_Offset = (xTQ_SR1+TQ_SBWIN_DSP_EXTEND1+TQ_BURST_HEAD_GUARD);  /* 216 QB  */
   #endif

   #if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   RX_START_TQ_TABLE[0]      = -xTQ_SR1;
   RX_START_TQ_TABLE[1]      = -xTQ_PR1;
   RX_START_TQ_TABLE[2]      = -xTQ_PR2;
   RX_START_TQ_TABLE[3]      = -xTQ_PR2B;
   RX_START_TQ_TABLE[4]      = -xTQ_SR2;
   RX_START_TQ_TABLE[5]      = -xTQ_BDLON;
   RX_START_TQ_TABLE[6]      =  TQ_MAXIMUM;
   RX_START_TQ_TABLE[7]      = -TQ_AFC_READY_RX;

   RX_END_TQ_TABLE[0]        =  xTQ_SR3;
   RX_END_TQ_TABLE[1]        =  xTQ_PR3;
   RX_END_TQ_TABLE[2]        =  xTQ_PR3A;
   RX_END_TQ_TABLE[3]        =  xTQ_BDLOFF;
   RX_END_TQ_TABLE[4]        =  TQ_MAXIMUM;
   #endif
   #if IS_GPRS
   RX_MIDDLE_TQ_TABLE[0]     = +xTQ_BDLOFF;
   RX_MIDDLE_TQ_TABLE[1]     = -xTQ_BDLON;
   RX_MIDDLE_TQ_TABLE[2]     = -xTQ_SR2M;
      #if IS_CHIP_MT6218_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   RX_MIDDLE_TQ_TABLE2[0]    = -xTQ_PR2M1;
   RX_MIDDLE_TQ_TABLE2[1]    = -xTQ_PR2M2;
      #endif
   #endif

   TX_START_TQ_TABLE[0]      = -TQ_AFC_READY;
   TX_START_TQ_TABLE[1]      = -xTQ_ST1;
   TX_START_TQ_TABLE[2]      = -xTQ_PT1;
   TX_START_TQ_TABLE[3]      = -xTQ_PT2;
   TX_START_TQ_TABLE[4]      = -xTQ_APCON;
   TX_START_TQ_TABLE[5]      = -xTQ_APCON;
   TX_START_TQ_TABLE[6]      = -xTQ_BULON;
   TX_START_TQ_TABLE[7]      = -xTQ_ST2;

   #if IS_CHIP_MT6218_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   TX_START_TQ_TABLE2[0]     = -xTQ_PT2B;
   #endif

   #if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   TX_START_TQ_TABLE3[0]     = -xTQ_ST2B;
   #endif

   TX_END_TQ_TABLE[0]        =xTQ_AFC2_2_BOFF;
   TX_END_TQ_TABLE[1]        =xTQ_ST3;
   TX_END_TQ_TABLE[2]        =xTQ_PT3;
   TX_END_TQ_TABLE[3]        =xTQ_BULOFF;
   TX_END_TQ_TABLE[4]        =xTQ_APCOFF;
   TX_END_TQ_TABLE[5]        =xTQ_APCOFF;

   #if IS_BPI_V2_PT3A_SUPPORT
   TX_END_TQ_TABLE2[0]       =xTQ_PT3A;
   #endif

   #if IS_GPRS || IS_MULTISLOT_TX_SUPPORT
   TX_MIDDLE_TQ_TABLE[0]     =+xTQ_BULOFF;
   TX_MIDDLE_TQ_TABLE[1]     =-xTQ_BULON;
   TX_MIDDLE_TQ_TABLE[2]     =-xTQ_APCMID;
   TX_MIDDLE_TQ_TABLE[3]     =-xTQ_APCMID;
      #if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   TX_MIDDLE_TQ_TABLE2[0][0] =-xTQ_ST2M_G8;
   TX_MIDDLE_TQ_TABLE2[0][1] =-xTQ_PT2M1_G8;
   TX_MIDDLE_TQ_TABLE2[0][2] =-xTQ_PT2M2_G8;
   TX_MIDDLE_TQ_TABLE2[0][3] =-xTQ_PT2M3_G8;

   TX_MIDDLE_TQ_TABLE2[1][0] =-xTQ_ST2M_8G;
   TX_MIDDLE_TQ_TABLE2[1][1] =-xTQ_PT2M1_8G;
   TX_MIDDLE_TQ_TABLE2[1][2] =-xTQ_PT2M2_8G;
   TX_MIDDLE_TQ_TABLE2[1][3] =-xTQ_PT2M3_8G;
      #endif
   #endif
   PM_START_TQ_TABLE[6]=TQ_VALIDATE-1-TQ_SHORT_PMWIN_LEN-(t->xQR_BOFF_2_IDLE);

   #if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   PM_TQ_TABLE[0]           = -xTQ_SR1;
   PM_TQ_TABLE[1]           = -xTQ_PR1;
   PM_TQ_TABLE[2]           = -xTQ_PR2;
   PM_TQ_TABLE[3]           = -xTQ_PR2B;
   PM_TQ_TABLE[4]           = TQ_SHORT_PMWIN_LEN+xTQ_SR3;
   PM_TQ_TABLE[5]           = TQ_SHORT_PMWIN_LEN+xTQ_PR3;
   PM_TQ_TABLE[6]           = TQ_SHORT_PMWIN_LEN+xTQ_PR3A;
   PM_TQ_TABLE[7]           = -xTQ_SR2;
   PM_TQ_TABLE[8]           = -xTQ_BDLON;
   PM_TQ_TABLE[9]           = TQ_SHORT_PMWIN_LEN+xTQ_BDLOFF;
      #if L1D_PM_ENHANCE
   PM_IN_IDLE_TQ_TABLE[0]   = -xTQ_SR1;
   PM_IN_IDLE_TQ_TABLE[1]   = -xTQ_PR1;
   PM_IN_IDLE_TQ_TABLE[2]   = -xTQ_PR2;
   PM_IN_IDLE_TQ_TABLE[3]   = -xTQ_PR2B;
   PM_IN_IDLE_TQ_TABLE[4]   = TQ_SHORT_PMWIN_LEN_IN_IDLE+xTQ_SR3;
   PM_IN_IDLE_TQ_TABLE[5]   = TQ_SHORT_PMWIN_LEN_IN_IDLE+xTQ_PR3;
   PM_IN_IDLE_TQ_TABLE[6]   = TQ_SHORT_PMWIN_LEN_IN_IDLE+xTQ_PR3A;
   PM_IN_IDLE_TQ_TABLE[7]   = -xTQ_SR2;
   PM_IN_IDLE_TQ_TABLE[8]   = -xTQ_BDLON;
   PM_IN_IDLE_TQ_TABLE[9]   = TQ_SHORT_PMWIN_LEN_IN_IDLE+xTQ_BDLOFF;
         #if L1D_PM_1R7PM
   PM_1R7PM_TQ_TABLE[0]     = -xTQ_SR1;
   PM_1R7PM_TQ_TABLE[1]     = -xTQ_PR1;
   PM_1R7PM_TQ_TABLE[2]     = -xTQ_PR2;
   PM_1R7PM_TQ_TABLE[3]     = -xTQ_PR2B;
   PM_1R7PM_TQ_TABLE[4]     = TQ_1R7PM_PMWIN_LEN_IN_IDLE+xTQ_SR3;
   PM_1R7PM_TQ_TABLE[5]     = TQ_1R7PM_PMWIN_LEN_IN_IDLE+xTQ_PR3;
   PM_1R7PM_TQ_TABLE[6]     = TQ_1R7PM_PMWIN_LEN_IN_IDLE+xTQ_PR3A;
   PM_1R7PM_TQ_TABLE[7]     = -xTQ_SR2;
   PM_1R7PM_TQ_TABLE[8]     = -xTQ_BDLON;
   PM_1R7PM_TQ_TABLE[9]     = TQ_1R7PM_PMWIN_LEN_IN_IDLE+xTQ_BDLOFF;
         #endif
   FSWIN_STOP_DATA_TABLE[0] = TQ_FSWIN_STOP_FSYNC+xTQ_SR3;
   FSWIN_STOP_DATA_TABLE[1] = TQ_FSWIN_STOP_FSYNC+xTQ_PR3;
   FSWIN_STOP_DATA_TABLE[2] = TQ_FSWIN_STOP_FSYNC+xTQ_PR3A;
   FSWIN_STOP_DATA_TABLE[3] = TQ_MAXIMUM;
   FSWIN_STOP_DATA_TABLE[4] = TQ_FSWIN_STOP_FSYNC+xTQ_BDLOFF,
   FSWIN_STOP_DATA_BPI_TABLE[0] = l1d_rf_custom_input_data.RF_BPI_Variable.xPDATA_IDLE;
   FSWIN_STOP_DATA_BPI_TABLE[1] = l1d_rf_custom_input_data.RF_BPI_Variable.xPDATA_IDLE;
// FSWIN_STOP_DATA_TABLE[5]     = l1d_rf_custom_input_data.RF_BPI_Variable.xPDATA_IDLE;
// FSWIN_STOP_DATA_TABLE[6]     = l1d_rf_custom_input_data.RF_BPI_Variable.xPDATA_IDLE;
      #endif
   #endif

   TD_DM_PM_TQ_TABLE[0] =-xTQ_SR1;
   TD_DM_PM_TQ_TABLE[1] =-xTQ_PR1;
   TD_DM_PM_TQ_TABLE[2] =-xTQ_PR2;
   TD_DM_PM_TQ_TABLE[3] =-xTQ_PR2B;
   TD_DM_PM_TQ_TABLE[4] =TQ_1R7PM_PMWIN_LEN_IN_IDLE+xTQ_SR3;
   TD_DM_PM_TQ_TABLE[5] =TQ_1R7PM_PMWIN_LEN_IN_IDLE+xTQ_PR3;
   TD_DM_PM_TQ_TABLE[6] =TQ_1R7PM_PMWIN_LEN_IN_IDLE+xTQ_PR3A;
   TD_DM_PM_TQ_TABLE[7] =-xTQ_SR2;
   TD_DM_PM_TQ_TABLE[8] =-xTQ_BDLON;
   TD_DM_PM_TQ_TABLE[9] =TQ_1R7PM_PMWIN_LEN_IN_IDLE+xTQ_BDLOFF;

   #if IS_TDMA_AD_DA_WINDOW_SUPPORT
      #if IS_BBTXRX_CHIP_DESIGN_VER_3
   bulcon2_data         = ( ((QB_TX_DAEN_2_FENA+t->xQB_TX_FENA_2_FSYNC-t->xQB_APCDACON)&0x0FF) );
      #else
   bulcon2_data         = ( ((QB_BFE_TXCOMP_HYS)<<8) | ((QB_TX_DAEN_2_FENA+t->xQB_TX_FENA_2_FSYNC-t->xQB_APCDACON)&0x0FF) );
      #endif
   #else
   bulcon2_data         = ( ((QB_BFE_TXCOMP_HYS)<<8) | ((t->xQB_TX_FENA_2_FSYNC-t->xQB_APCDACON)&0x0FF) );
   #endif
   TQ_FSWin_DTIRQ_Delay = ((TQ_SLOT_LEN-TQ_FBWin_Start_Offset-TQ_SBWIN_DSP_EXTEND2)/2);
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_APC_Compensate_Update(void)
{
   apc_bat_voltage_period                   = SECONDS2FRAME( l1d_rf_custom_input_data.RF_APC_Compensate_Variable.xBAT_VOLTAGE_SAMPLE_PERIOD );
   apc_bat_voltage_count                    = l1d_rf_custom_input_data.RF_APC_Compensate_Variable.xBAT_VOLTAGE_AVERAGE_COUNT;
   apc_bat_temperature_period               = SECONDS2FRAME( l1d_rf_custom_input_data.RF_APC_Compensate_Variable.xBAT_TEMPERATURE_SAMPLE_PERIOD );
   apc_bat_temperature_count                = l1d_rf_custom_input_data.RF_APC_Compensate_Variable.xBAT_TEMPERATURE_AVERAGE_COUNT;
   apc_rf_temperature_period                = SECONDS2FRAME( l1d_rf_custom_input_data.RF_APC_Compensate_Variable.xRF_TEMPERATURE_SAMPLE_PERIOD);
   apc_rf_temperature_count                 = l1d_rf_custom_input_data.RF_APC_Compensate_Variable.xRF_TEMPERATURE_AVERAGE_COUNT;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_TX_PCL_Table_Update(void)
{
   #if  IS_RF_MT6140D
   //TXCW[i][j][k]= TXCW[i][j][k]&0xFE3FFFF|(l1_rf_table.xtxios_pcl_tab[i][j][k]<<18);

   sRF_PCL_VARIABLE *p=&l1d_rf_custom_input_data.RF_PCL_Varaible;
   sRF_ITC_PCL_VARIABLE *p1=&l1d_rf_custom_input_data.RF_ITC_PCL_Variable;
   sRF_LBMOD_GC_VARIABLE *p3=&l1d_rf_custom_input_data.RF_Lbmod_GC_Variable;
   sRF_HBMOD_GC_VARIABLE *p2=&l1d_rf_custom_input_data.RF_Hbmod_GC_Variable;

   TXCW[0][0][1]= TXCW[0][0][1]&0xFE3FFFF|(p->txios_highpcl_850_GMSK<<18);
   TXCW[0][0][2]= TXCW[0][0][2]&0xFE3FFFF|(p->txios_highpcl_900_GMSK<<18);
   TXCW[0][0][3]= TXCW[0][0][3]&0xFE3FFFF|(p->txios_highpcl_DCS_GMSK<<18);
   TXCW[0][0][4]= TXCW[0][0][4]&0xFE3FFFF|(p->txios_highpcl_PCS_GMSK<<18);

   TXCW[0][1][1]= TXCW[0][1][1]&0xFE3FFFF|(p->txios_highpcl_850_EPSK<<18);
   TXCW[0][1][2]= TXCW[0][1][2]&0xFE3FFFF|(p->txios_highpcl_900_EPSK<<18);
   TXCW[0][1][3]= TXCW[0][1][3]&0xFE3FFFF|(p->txios_highpcl_DCS_EPSK<<18);
   TXCW[0][1][4]= TXCW[0][1][4]&0xFE3FFFF|(p->txios_highpcl_PCS_EPSK<<18);

   TXCW[1][0][1]= TXCW[1][0][1]&0xFE3FFFF|(p->txios_lowpcl_850_GMSK<<18);
   TXCW[1][0][2]= TXCW[1][0][2]&0xFE3FFFF|(p->txios_lowpcl_900_GMSK<<18);
   TXCW[1][0][3]= TXCW[1][0][3]&0xFE3FFFF|(p->txios_lowpcl_DCS_GMSK<<18);
   TXCW[1][0][4]= TXCW[1][0][4]&0xFE3FFFF|(p->txios_lowpcl_PCS_GMSK<<18);

   TXCW[1][1][1]= TXCW[1][1][1]&0xFE3FFFF|(p->txios_lowpcl_850_EPSK<<18);
   TXCW[1][1][2]= TXCW[1][1][2]&0xFE3FFFF|(p->txios_lowpcl_900_EPSK<<18);
   TXCW[1][1][3]= TXCW[1][1][3]&0xFE3FFFF|(p->txios_lowpcl_DCS_EPSK<<18);
   TXCW[1][1][4]= TXCW[1][1][4]&0xFE3FFFF|(p->txios_lowpcl_PCS_EPSK<<18);

   // TXCW[i][j][k]=TXCW[i][j][k]&0xFFFFF0F|(l1_rf_table.xtxitc_pcl_tab[i][j][k]<<4 );

   TXCW[0][0][1]=TXCW[0][0][1]&0xFFFFF0F|( p1->txitc_highpcl_850_GMSK<<4);
   TXCW[0][0][2]=TXCW[0][0][2]&0xFFFFF0F|( p1->txitc_highpcl_900_GMSK<<4);
   TXCW[0][0][3]=TXCW[0][0][3]&0xFFFFF0F|( p1->txitc_highpcl_DCS_GMSK<<4);
   TXCW[0][0][4]=TXCW[0][0][4]&0xFFFFF0F|( p1->txitc_highpcl_PCS_GMSK<<4);

   TXCW[0][1][1]=TXCW[0][1][1]&0xFFFFF0F|( p1->txitc_highpcl_850_EPSK<<4);
   TXCW[0][1][2]=TXCW[0][1][2]&0xFFFFF0F|( p1->txitc_highpcl_900_EPSK<<4);
   TXCW[0][1][3]=TXCW[0][1][3]&0xFFFFF0F|( p1->txitc_highpcl_DCS_EPSK<<4);
   TXCW[0][1][4]=TXCW[0][1][4]&0xFFFFF0F|( p1->txitc_highpcl_PCS_EPSK<<4);

   TXCW[1][0][1]=TXCW[1][0][1]&0xFFFFF0F|( p1->txitc_lowpcl_850_GMSK<<4);
   TXCW[1][0][2]=TXCW[1][0][2]&0xFFFFF0F|( p1->txitc_lowpcl_900_GMSK<<4);
   TXCW[1][0][3]=TXCW[1][0][3]&0xFFFFF0F|( p1->txitc_lowpcl_DCS_GMSK<<4);
   TXCW[1][0][4]=TXCW[1][0][4]&0xFFFFF0F|( p1->txitc_lowpcl_PCS_GMSK<<4);

   TXCW[1][1][1]=TXCW[1][1][1]&0xFFFFF0F|( p1->txitc_lowpcl_850_EPSK<<4);
   TXCW[1][1][2]=TXCW[1][1][2]&0xFFFFF0F|( p1->txitc_lowpcl_900_EPSK<<4);
   TXCW[1][1][3]=TXCW[1][1][3]&0xFFFFF0F|( p1->txitc_lowpcl_DCS_EPSK<<4);
   TXCW[1][1][4]=TXCW[1][1][4]&0xFFFFF0F|( p1->txitc_lowpcl_PCS_EPSK<<4);

   //TXCW[i][j][k]=TXCW[i][j][k]&0xFFE3FFF|(l1_rf_table.xtxmod_gc_tab[i][j][k]<<14 );

   TXCW[0][0][1]=TXCW[0][0][1] &0xFFE3FFF|(((p2->hbmod_gc_highpcl_850_GMSK<<1)+p3->lbmod_gc_highpcl_850_GMSK)<<14);
   TXCW[0][0][2]=TXCW[0][0][2] &0xFFE3FFF|(((p2->hbmod_gc_highpcl_900_GMSK<<1)+p3->lbmod_gc_highpcl_900_GMSK)<<14);
   TXCW[0][0][3]=TXCW[0][0][3] &0xFFE3FFF|(((p2->hbmod_gc_highpcl_DCS_GMSK<<1)+p3->lbmod_gc_highpcl_DCS_GMSK)<<14);
   TXCW[0][0][4]=TXCW[0][0][4] &0xFFE3FFF|(((p2->hbmod_gc_highpcl_PCS_GMSK<<1)+p3->lbmod_gc_highpcl_PCS_GMSK)<<14);

   TXCW[0][1][1]=TXCW[0][1][1] &0xFFE3FFF|(((p2->hbmod_gc_highpcl_850_EPSK<<1)+p3->lbmod_gc_highpcl_850_EPSK)<<14);
   TXCW[0][1][2]=TXCW[0][1][2] &0xFFE3FFF|(((p2->hbmod_gc_highpcl_900_EPSK<<1)+p3->lbmod_gc_highpcl_900_EPSK)<<14);
   TXCW[0][1][3]=TXCW[0][1][3] &0xFFE3FFF|(((p2->hbmod_gc_highpcl_DCS_EPSK<<1)+p3->lbmod_gc_highpcl_DCS_EPSK)<<14);
   TXCW[0][1][4]=TXCW[0][1][4] &0xFFE3FFF|(((p2->hbmod_gc_highpcl_PCS_EPSK<<1)+p3->lbmod_gc_highpcl_PCS_EPSK)<<14);

   TXCW[1][0][1]=TXCW[1][0][1] &0xFFE3FFF|(((p2->hbmod_gc_lowpcl_850_GMSK<<1) +p3->lbmod_gc_lowpcl_850_GMSK )<<14);
   TXCW[1][0][2]=TXCW[1][0][2] &0xFFE3FFF|(((p2->hbmod_gc_lowpcl_900_GMSK<<1) +p3->lbmod_gc_lowpcl_900_GMSK )<<14);
   TXCW[1][0][3]=TXCW[1][0][3] &0xFFE3FFF|(((p2->hbmod_gc_lowpcl_DCS_GMSK<<1) +p3->lbmod_gc_lowpcl_DCS_GMSK )<<14);
   TXCW[1][0][4]=TXCW[1][0][4] &0xFFE3FFF|(((p2->hbmod_gc_lowpcl_PCS_GMSK<<1) +p3->lbmod_gc_lowpcl_PCS_GMSK )<<14);

   TXCW[1][1][1]=TXCW[1][1][1] &0xFFE3FFF|(((p2->hbmod_gc_lowpcl_850_EPSK<<1) +p3->lbmod_gc_lowpcl_850_EPSK )<<14);
   TXCW[1][1][2]=TXCW[1][1][2] &0xFFE3FFF|(((p2->hbmod_gc_lowpcl_900_EPSK<<1) +p3->lbmod_gc_lowpcl_900_EPSK )<<14);
   TXCW[1][1][3]=TXCW[1][1][3] &0xFFE3FFF|(((p2->hbmod_gc_lowpcl_DCS_EPSK<<1) +p3->lbmod_gc_lowpcl_DCS_EPSK )<<14);
   TXCW[1][1][4]=TXCW[1][1][4] &0xFFE3FFF|(((p2->hbmod_gc_lowpcl_PCS_EPSK<<1) +p3->lbmod_gc_lowpcl_PCS_EPSK )<<14);
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_TX_Power_Control_Table_Update(void)
{
   #if IS_TX_POWER_CONTROL_SUPPORT
   sRF_TX_POWERFEEDBACK_VARIABLE *p=&l1d_rf_custom_input_data.RF_TX_PowerFeedback_Variable;

   closed_loop_txpc_type = p->xCLOSED_LOOP_TXPC_TYPE;

      #if IS_TXPC_CL_AUXADC_SUPPORT
   TQ_TxSampleOffsetGMSK = p->xQB_TX_SAMPLE_OFFSET_GMSK;
         #if IS_EPSK_TX_SUPPORT
   TQ_TxSampleOffsetEPSK = p->xQB_TX_SAMPLE_OFFSET_EPSK;
         #endif
      #endif

      #if IS_TXPC_OL_BSI_SUPPORT || IS_TXPC_OL_AUXADC_SUPPORT
         #if IS_CHIP_MT6256 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   txpc_epsk_tp_slope_lb = p->xTXPC_EPSK_TP_SLOPE_LB;
   txpc_epsk_tp_slope_hb = p->xTXPC_EPSK_TP_SLOPE_HB;
         #elif IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION
   txpc_epsk_tp_slope_lb = p->xTXPC_EPSK_TP_SLOPE_LB;
   txpc_epsk_tp_slope_hb = p->xTXPC_EPSK_TP_SLOPE_HB;
         #endif
      #endif
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_RF_RX_Band_Update( void )
{
   #if IS_2G_RX_DIVERSITY_PATH_SUPPORT
      #if IS_RF_MT6177L || IS_RF_MT6177M
   sRF_RX_BAND_VARIABLE  *p = &l1d_rf_custom_input_data.RF_RX_Band_Variable;   
   L1D_SDATA_PRX_LNA_SEL[1] = (p->xGSM850_PATH_SEL);
   L1D_SDATA_PRX_LNA_SEL[2] = (p->xGSM_PATH_SEL);
   L1D_SDATA_PRX_LNA_SEL[3] = (p->xDCS_PATH_SEL);
   L1D_SDATA_PRX_LNA_SEL[4] = (p->xPCS_PATH_SEL);
   L1D_SDATA_DRX_LNA_SEL[1] = (p->xGSM850_DIVERSITY_PATH_SEL);
   L1D_SDATA_DRX_LNA_SEL[2] = (p->xGSM_DIVERSITY_PATH_SEL);
   L1D_SDATA_DRX_LNA_SEL[3] = (p->xDCS_DIVERSITY_PATH_SEL);
   L1D_SDATA_DRX_LNA_SEL[4] = (p->xPCS_DIVERSITY_PATH_SEL);
      #else
         #error "This chip is not supported with IS_2G_RX_DIVERSITY_PATH_SUPPORT yet!" 
      #endif
   #elif IS_RF_MT6162
   sRF_RX_BAND_VARIABLE *p=&l1d_rf_custom_input_data.RF_RX_Band_Variable;
   SDATA_RX_BAND[1] = (SDATA_RX_BAND[1]&0xFFFFFFF0)|(p->xGSM850_PATH_SEL&0xF);
   SDATA_RX_BAND[2] = (SDATA_RX_BAND[2]&0xFFFFFFF0)|(p->xGSM_PATH_SEL   &0xF);
   SDATA_RX_BAND[3] = (SDATA_RX_BAND[3]&0xFFFFFFF0)|(p->xDCS_PATH_SEL   &0xF);
   SDATA_RX_BAND[4] = (SDATA_RX_BAND[4]&0xFFFFFFF0)|(p->xPCS_PATH_SEL   &0xF);
   #elif IS_RF_MT6163
   sRF_RX_BAND_VARIABLE *p=&l1d_rf_custom_input_data.RF_RX_Band_Variable;
   SDATA_D1_BAND[1] = (SDATA_D1_BAND[1]&0xFFFFF8FF)|((p->xGSM850_PATH_SEL&0x7)<<8);
   SDATA_D1_BAND[2] = (SDATA_D1_BAND[2]&0xFFFFF8FF)|((p->xGSM_PATH_SEL   &0x7)<<8);
   SDATA_D1_BAND[3] = (SDATA_D1_BAND[3]&0xFFFFF8FF)|((p->xDCS_PATH_SEL   &0x7)<<8);
   SDATA_D1_BAND[4] = (SDATA_D1_BAND[4]&0xFFFFF8FF)|((p->xPCS_PATH_SEL   &0x7)<<8);
   #elif IS_RF_MT6280RF
   sRF_RX_BAND_VARIABLE  *p = &l1d_rf_custom_input_data.RF_RX_Band_Variable;
   SDATA_RX_LNA_BAND_SEL[1] = (SDATA_RX_LNA_BAND_SEL[1]&0xFFFF8FFF)|((p->xGSM850_PATH_SEL&0x7)<<12);
   SDATA_RX_LNA_BAND_SEL[2] = (SDATA_RX_LNA_BAND_SEL[2]&0xFFFF8FFF)|((p->xGSM_PATH_SEL   &0x7)<<12);
   SDATA_RX_LNA_BAND_SEL[3] = (SDATA_RX_LNA_BAND_SEL[3]&0xFFFF8FFF)|((p->xDCS_PATH_SEL   &0x7)<<12);
   SDATA_RX_LNA_BAND_SEL[4] = (SDATA_RX_LNA_BAND_SEL[4]&0xFFFF8FFF)|((p->xPCS_PATH_SEL   &0x7)<<12);
   #elif IS_RF_MT6169
   sRF_RX_BAND_VARIABLE  *p = &l1d_rf_custom_input_data.RF_RX_Band_Variable;
   SDATA_IORX1[1] = (SDATA_IORX1[1]&0xFFF8FFFF)|((p->xGSM850_PATH_SEL&0x7)<<16);
   SDATA_IORX1[2] = (SDATA_IORX1[2]&0xFFF8FFFF)|((p->xGSM_PATH_SEL   &0x7)<<16);
   SDATA_IORX1[3] = (SDATA_IORX1[3]&0xFFF8FFFF)|((p->xDCS_PATH_SEL   &0x7)<<16);
   SDATA_IORX1[4] = (SDATA_IORX1[4]&0xFFF8FFFF)|((p->xPCS_PATH_SEL   &0x7)<<16);
   SDATA_IORX2[1] = (SDATA_IORX2[1]&0xFFFFFE3F)|((p->xGSM850_PATH_SEL&0x7)<< 6);
   SDATA_IORX2[2] = (SDATA_IORX2[2]&0xFFFFFE3F)|((p->xGSM_PATH_SEL   &0x7)<< 6);
   SDATA_IORX2[3] = (SDATA_IORX2[3]&0xFFFFFE3F)|((p->xDCS_PATH_SEL   &0x7)<< 6);
   SDATA_IORX2[4] = (SDATA_IORX2[4]&0xFFFFFE3F)|((p->xPCS_PATH_SEL   &0x7)<< 6);
   #elif IS_RF_MT6166
   sRF_RX_BAND_VARIABLE  *p = &l1d_rf_custom_input_data.RF_RX_Band_Variable;
      #if IS_DUAL_TALK_SUPPORT
   SDATA_RX_LNA_SEL[1] = (SDATA_RX_LNA_SEL[1]&0xFFFFF8FF)|((p->xGSM850_PATH_SEL&0x7)<< 8);
   SDATA_RX_LNA_SEL[2] = (SDATA_RX_LNA_SEL[2]&0xFFFFF8FF)|((p->xGSM_PATH_SEL   &0x7)<< 8);
   SDATA_RX_LNA_SEL[3] = (SDATA_RX_LNA_SEL[3]&0xFFFFF8FF)|((p->xDCS_PATH_SEL   &0x7)<< 8);
   SDATA_RX_LNA_SEL[4] = (SDATA_RX_LNA_SEL[4]&0xFFFFF8FF)|((p->xPCS_PATH_SEL   &0x7)<< 8);
      #else
   SDATA_RX_LNA_SEL[1] = (SDATA_RX_LNA_SEL[1]&0xFFFFC7FF)|((p->xGSM850_PATH_SEL&0x7)<<11);
   SDATA_RX_LNA_SEL[2] = (SDATA_RX_LNA_SEL[2]&0xFFFFC7FF)|((p->xGSM_PATH_SEL   &0x7)<<11);
   SDATA_RX_LNA_SEL[3] = (SDATA_RX_LNA_SEL[3]&0xFFFFC7FF)|((p->xDCS_PATH_SEL   &0x7)<<11);
   SDATA_RX_LNA_SEL[4] = (SDATA_RX_LNA_SEL[4]&0xFFFFC7FF)|((p->xPCS_PATH_SEL   &0x7)<<11);
      #endif
   #elif IS_RF_MT6165
   sRF_RX_BAND_VARIABLE  *p = &l1d_rf_custom_input_data.RF_RX_Band_Variable;
   SDATA_RX_LNA_SEL[1] = (SDATA_RX_LNA_SEL[1]&0xFFFFFF8F)|((p->xGSM850_PATH_SEL&0x7)<<4);
   SDATA_RX_LNA_SEL[2] = (SDATA_RX_LNA_SEL[2]&0xFFFFFF8F)|((p->xGSM_PATH_SEL   &0x7)<<4);
   SDATA_RX_LNA_SEL[3] = (SDATA_RX_LNA_SEL[3]&0xFFFFFF8F)|((p->xDCS_PATH_SEL   &0x7)<<4);
   SDATA_RX_LNA_SEL[4] = (SDATA_RX_LNA_SEL[4]&0xFFFFFF8F)|((p->xPCS_PATH_SEL   &0x7)<<4);
   #elif IS_RF_MT6176
   sRF_RX_BAND_VARIABLE  *p = &l1d_rf_custom_input_data.RF_RX_Band_Variable;
   SDATA_RX_LNA_SEL[1] = (SDATA_RX_LNA_SEL[1]&0xFE0FF810)|(p->xGSM850_PATH_SEL&0x01F007EF);
   SDATA_RX_LNA_SEL[2] = (SDATA_RX_LNA_SEL[2]&0xFE0FF810)|(p->xGSM_PATH_SEL   &0x01F007EF);
   SDATA_RX_LNA_SEL[3] = (SDATA_RX_LNA_SEL[3]&0xFE0FF810)|(p->xDCS_PATH_SEL   &0x01F007EF);
   SDATA_RX_LNA_SEL[4] = (SDATA_RX_LNA_SEL[4]&0xFE0FF810)|(p->xPCS_PATH_SEL   &0x01F007EF);
   #elif IS_RF_MT6179
   sRF_RX_BAND_VARIABLE  *p = &l1d_rf_custom_input_data.RF_RX_Band_Variable;
   SDATA_RX_LNA_SEL[1] = (SDATA_RX_LNA_SEL[1]&0xFE0FF810)|(p->xGSM850_PATH_SEL&0x01F007EF);
   SDATA_RX_LNA_SEL[2] = (SDATA_RX_LNA_SEL[2]&0xFE0FF810)|(p->xGSM_PATH_SEL   &0x01F007EF);
   SDATA_RX_LNA_SEL[3] = (SDATA_RX_LNA_SEL[3]&0xFE0FF810)|(p->xDCS_PATH_SEL   &0x01F007EF);
   SDATA_RX_LNA_SEL[4] = (SDATA_RX_LNA_SEL[4]&0xFE0FF810)|(p->xPCS_PATH_SEL   &0x01F007EF);
   #elif IS_RF_MT6177L
   // keep index for MML1_FE_ELNA_ROUTE_E from bit[24] to bit[28]
   sRF_RX_BAND_VARIABLE  *p = &l1d_rf_custom_input_data.RF_RX_Band_Variable;
   SDATA_RX_LNA_SEL[1] = (SDATA_RX_LNA_SEL[1]&0xE00FFFF8)|(p->xGSM850_PATH_SEL&0x1FF00007);
   SDATA_RX_LNA_SEL[2] = (SDATA_RX_LNA_SEL[2]&0xE00FFFF8)|(p->xGSM_PATH_SEL   &0x1FF00007);
   SDATA_RX_LNA_SEL[3] = (SDATA_RX_LNA_SEL[3]&0xE00FFFF8)|(p->xDCS_PATH_SEL   &0x1FF00007);
   SDATA_RX_LNA_SEL[4] = (SDATA_RX_LNA_SEL[4]&0xE00FFFF8)|(p->xPCS_PATH_SEL   &0x1FF00007);
   #elif IS_RF_MT6177M
   // keep index for MML1_FE_ELNA_ROUTE_E from bit[24] to bit[28]
   sRF_RX_BAND_VARIABLE  *p = &l1d_rf_custom_input_data.RF_RX_Band_Variable;
   SDATA_RX_LNA_SEL[1] = (SDATA_RX_LNA_SEL[1]&0xE00FFF10)|(p->xGSM850_PATH_SEL&0x1FF000EF);
   SDATA_RX_LNA_SEL[2] = (SDATA_RX_LNA_SEL[2]&0xE00FFF10)|(p->xGSM_PATH_SEL   &0x1FF000EF);
   SDATA_RX_LNA_SEL[3] = (SDATA_RX_LNA_SEL[3]&0xE00FFF10)|(p->xDCS_PATH_SEL   &0x1FF000EF);
   SDATA_RX_LNA_SEL[4] = (SDATA_RX_LNA_SEL[4]&0xE00FFF10)|(p->xPCS_PATH_SEL   &0x1FF000EF);
   #endif
   #if IS_2G_EXTERNAL_LNA_SUPPORT
   L1D_RF_Init_ELNA_database();
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_Others_Update( void )
{
   sRF_OTHERS_VARIABLE *p=&l1d_rf_custom_input_data.RF_Others_Variable;
   gsm_err_det_id      =p->xGSM_ERR_DET_ID;
   l1d_rf.egsm_disable =p->xEGSM_DISABLE;
   TxPropagationDelay  =p->xTX_PROPAGATION_DELAY;
   #if IS_DYNAMIC_G_E_TXWIN_POSITION_SUPPORT
   TQ_EPSK_TX_delay    =p->xTQ_EPSK_TX_DELAY;
   #endif
   #if IS_RF_RAMPPROFILE_ROLLBACK_SUPPORT
   is_rampprofile_rollback_enable = p->xIS_RAMPPROFILE_ROLLBACK_ENABLE;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_AFC_Tracking_Update( void )
{
   extern unsigned char  crystal_rxgap_afc_prediction ;
   extern unsigned short afc_prediction_interval;
   extern unsigned char  afc_prediction_decaying_factor;
   sRF_AFC_TRACKING_VARIABLE *p=&l1d_rf_custom_input_data.RF_AFC_Tracking_Variable;
   //extern
   crystal_rxgap_afc_prediction  =p->xAFC_PREDICTION_ON;
   afc_prediction_interval       =p->xAFC_PREDICTION_INTERVAL;
   afc_prediction_decaying_factor=p->xAFC_PREDICTION_DECAYING_FACTOR;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_RF_CLK_Buffer_Variable_Update( void )
{
   #if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165
   sRF_CLK_BUFFER_VARIABLE *p=&l1d_rf_custom_input_data.RF_CLK_Buffer_Variable;
   CLK_EN_TABLE[0] = p->xCLK1_EN;
   CLK_EN_TABLE[1] = p->xCLK2_EN;
   CLK_EN_TABLE[2] = p->xCLK3_EN;
   CLK_EN_TABLE[3] = p->xCLK4_EN;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2 */

void L1D_RF_Custom_Table_Update_V2( void )
{
#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
   if(l1d_rf_custom_input_data.is_data_update)
   {
      L1D_RF_Custom_Table_Update_V2_No_Check();
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_Table_Update_V2_No_Check( void )
{
#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
   L1D_RF_Custom_BPI_DefaultValue_Handler();
   L1D_RF_Custom_Timing_DefaultValue_Handler();
   L1D_RF_Custom_BPI_Table_Update();
   L1D_RF_Custom_Timing_Table_Update();

   L1D_RF_Custom_APC_Compensate_DefaultValue_Handler();
   L1D_RF_Custom_APC_Compensate_Update();

   L1D_RF_Custom_TX_PCL_DefaultValue_Handler();
   L1D_RF_Custom_TX_PCL_Table_Update();

   L1D_RF_Custom_TX_Power_Control_DefaultValue_Handler();
   L1D_RF_Custom_TX_Power_Control_Table_Update();

   L1D_RF_Custom_TX_Power_Rollback_DefaultValue_Handler();
   //L1D_RF_Custom_TX_Power_Rollback_Table_Update_GPRS();
   //L1D_RF_Custom_TX_Power_Rollback_Table_Update_EGPRS();

   L1D_RF_Custom_RF_RX_Band_DefaultValue_Handler();
   L1D_RF_Custom_RF_RX_Band_Update();

   L1D_RF_Custom_Others_DefaultValue_Handler();
   L1D_RF_Custom_Others_Update();

   L1D_RF_Custom_AFC_Tracking_DefaultValue_Handler();
   L1D_RF_Custom_AFC_Tracking_Update();

   L1D_RF_Custom_RF_CLK_Buffer_Variable_DefaultValue_Handler();
   L1D_RF_Custom_RF_CLK_Buffer_Variable_Update();
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_RF_MT6251RF
void L1D_RF_OBB_trace_setting( void )
{
   if( !( BSIread.flag & BSI_READBACK_ENABLE ) )
   {  BSIread.flag |= BSI_READBACK_ENABLE;
      if( l1d_rf.band < FrequencyBand1800 )
      {  BSI_READ_INDICATE_ADDR(99); }
      else
      {  BSI_READ_INDICATE_ADDR(98); }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

void L1D_RF_SetWakeUpFlag( void )
{
#if IS_DYNAMIC_MACRO_SUPPORT
   l1d_rf2.is_wakeup = 1;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_ClearWakeUpFlag( void )
{
#if IS_DYNAMIC_MACRO_SUPPORT
   l1d_rf2.is_wakeup = 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PMIC_ADPT2_PWM_ENABLE( char pwm_ena )
{
#if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   MML1_RF_VRF18_FPWMSwitched_ByRAT( MML1_RF_2G, pwm_ena );
#elif IS_CHIP_MT6280
   DCL_HANDLE pmu_handle;
   PMU_CTRL_VRF18_SET_FPWM SetFpwm;
   #if IS_DCM_ISSUE_WORKAROUND_ON
   static kal_uint8 dcm_handle = 0xFF;
   #endif

   #if IS_DCM_ISSUE_WORKAROUND_ON
   if (dcm_handle==0xFF)
      dcm_handle = DCM_GetHandle();
   DCM_Disable(dcm_handle);
   #endif

   pmu_handle     = DclPMU_Open( DCL_PMU, FLAGS_NONE );
   SetFpwm.enable = (DCL_BOOLEAN)(pwm_ena ? KAL_TRUE : KAL_FALSE);
   DclPMU_Control( pmu_handle, VRF18_SET_FPWM, (DCL_CTRL_DATA_T *)&SetFpwm );
   DclPMU_Close( pmu_handle );

   #if IS_DCM_ISSUE_WORKAROUND_ON
   DCM_Enable(dcm_handle);
   #endif
#elif IS_CHIP_MT6583_MD1
   DCL_HANDLE pmu_handle;
   PMU_CTRL_VRF18_SET_MODESET SetModeset;
   pmu_handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   SetModeset.vrf18Idx = PMIC_VRF18_1;
   SetModeset.enable = (pwm_ena ? DCL_TRUE : DCL_FALSE); // (DCL_TRUE / DCL_FALSE);
   DclPMU_Control(pmu_handle, VRF18_SET_MODESET, (DCL_CTRL_DATA_T *)&SetModeset);
   DclPMU_Close(pmu_handle);
#elif IS_CHIP_MT6583_MD2
   DCL_HANDLE pmu_handle;
   PMU_CTRL_VRF18_SET_MODESET SetModeset;
   pmu_handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   SetModeset.vrf18Idx = PMIC_VRF18_2;
   SetModeset.enable = (pwm_ena ? DCL_TRUE : DCL_FALSE); // (DCL_TRUE / DCL_FALSE);
   DclPMU_Control(pmu_handle, VRF18_SET_MODESET, (DCL_CTRL_DATA_T *)&SetModeset);
   DclPMU_Close(pmu_handle);
#elif IS_CHIP_MT6290
   #if IS_DUAL_TALK_SUPPORT
      #if IS_RF_MT6166 || IS_RF_MT6165
   DCL_HANDLE handle;
   PMU_CTRL_VRF18_SET_FPWM val;
   val.enable = (pwm_ena ? DCL_TRUE : DCL_FALSE); // (DCL_TRUE / DCL_FALSE);
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, VRF18_2_SET_FPWM, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
      #endif
   #else
      #if IS_RF_MT6169
         #if IS_RF_CENTRAL_CONTROL_ENABLE
   // do nothing
         #else
   DCL_HANDLE handle;
   PMU_CTRL_VRF18_SET_FPWM val;
   val.enable = (pwm_ena ? DCL_TRUE : DCL_FALSE); // (DCL_TRUE / DCL_FALSE);
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, VRF18_SET_FPWM, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
         #endif
      #endif
   #endif
#elif IS_CHIP_MT6595
   #if IS_DUAL_TALK_SUPPORT
      #if IS_RF_MT6165
      DCL_HANDLE handle;
      PMU_CTRL_LDO_BUCK_SET_MODESET val;
      handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
      val.mod = VRF2;
      val.mode = (pwm_ena ? FORCE_PWM_MODE : AUTO_MODE); // (AUTO_MODE / FORCE_PWM_MODE)
      DclPMU_Control(handle, LDO_BUCK_SET_MODESET, (DCL_CTRL_DATA_T *)&val);
      DclPMU_Close(handle);
      #endif
   #else
      #if IS_RF_MT6169
         #if IS_RF_CENTRAL_CONTROL_ENABLE
   MML1_RF_VRF18_FPWMSwitched_ByRAT( MML1_RF_2G, pwm_ena );
         #else
   DCL_HANDLE handle;
   PMU_CTRL_VRF1_SET_MODESET_CKPDN_SET val;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   val.regval = 0x1; // bit[0] is for 2G
   if( pwm_ena == 1 )
   {  DclPMU_Control(handle, VRF1_SET_MODESET_CKPDN_SET, (DCL_CTRL_DATA_T *)&val);  }
   else
   {  DclPMU_Control(handle, VRF1_SET_MODESET_CKPDN_CLR, (DCL_CTRL_DATA_T *)&val);  }
   DclPMU_Close(handle);

// DCL_HANDLE handle;
// PMU_CTRL_LDO_BUCK_SET_MODESET val;
// handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
// val.mod = VRF1;
// val.mode = ( pwm_ena ? FORCE_PWM_MODE : AUTO_MODE ); // (AUTO_MODE / FORCE_PWM_MODE)
// DclPMU_Control(handle, LDO_BUCK_SET_MODESET, (DCL_CTRL_DATA_T *)&val);
// DclPMU_Close(handle);
         #endif
      #endif
   #endif
#elif IS_CHIP_MT6752_MD1
   #if IS_RF_MT6169
      #if IS_RF_CENTRAL_CONTROL_ENABLE
   MML1_RF_VRF18_FPWMSwitched_ByRAT( MML1_RF_2G, pwm_ena );
      #else
//CL_HANDLE handle;
//PMU_CTRL_LDO_BUCK_SET_MODESET val;
//handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
//val.mod = VRF18_1;
//val.mode = ( isFPWM ? FORCE_PWM_MODE : AUTO_MODE ); // (AUTO_MODE / FORCE_PWM_MODE)
//DclPMU_Control(handle, LDO_BUCK_SET_MODESET, (DCL_CTRL_DATA_T *)&val);
//DclPMU_Close(handle);
      #endif
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#else
void L1D_PMU_VRF18Setting( char vrf18on )
{
#if IS_CHIP_MT6276 || IS_CHIP_MT6573 || IS_CHIP_MT6575
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_EN val;

   if( L1D_PMU_IS_FIX_VRF1828SETTING() )
      vrf18on = KAL_TRUE; /* workaround for BT EVM performace due to VRF18/28 change (keep VRF18/28 always ON) */

   #if IS_CHIP_MT6276_S00
   vrf18on    = KAL_TRUE; /* Vrf18 can be turned on ONLY and can not be turned off */
   #endif
   val.enable = vrf18on ? DCL_TRUE : DCL_FALSE;
   val.mod    = VRF18;
   handle     = DclPMU_Open( DCL_PMU, FLAGS_NONE );
   DclPMU_Control( handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val );
   DclPMU_Close( handle );
#elif IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6290
   #if IS_DUAL_TALK_SUPPORT
      #if IS_RF_MT6166 || IS_RF_MT6165
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_EN val;
   val.mod    = VRF18_2;
   val.enable = vrf18on ? DCL_TRUE : DCL_FALSE;
   handle     = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
      #endif
   #else
      #if IS_RF_MT6169
   L1D_PMIC_ADPT2_PWM_ENABLE( vrf18on );
      #endif
   #endif
#elif IS_CHIP_MT6595
   #if IS_DUAL_TALK_SUPPORT
      #if IS_RF_MT6165
      DCL_HANDLE handle;
      PMU_CTRL_LDO_BUCK_SET_EN val;
      handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
      val.enable = vrf18on ? DCL_TRUE : DCL_FALSE; // (DCL_TRUE / DCL_FALSE);
      val.mod = VRF2;
      DclPMU_Control(handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
      DclPMU_Close(handle);
      #endif
   #else
      #if IS_RF_MT6169
   L1D_PMIC_ADPT2_PWM_ENABLE( vrf18on );
      #endif
   #endif
#elif IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
   #if IS_RF_MT6165
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_EN val;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   val.enable = vrf18on ? DCL_TRUE : DCL_FALSE; // (DCL_TRUE / DCL_FALSE);
   val.mod = VRF18_2;
   DclPMU_Control(handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
   #else
   //For MT6572 with MT6169, VRF18 is controlled by MML1
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PMU_VRF28Setting( char vrf28on )
{
#if IS_CHIP_MT6276_S00
   /* Vrf28 is not workable in MT6276E1 */
#elif IS_CHIP_MT6276 || IS_CHIP_MT6573 || IS_CHIP_MT6575
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_EN val;

   if( L1D_PMU_IS_FIX_VRF1828SETTING() )
      vrf28on = KAL_TRUE; /* workaround for BT EVM performace due to VRF18/28 change (keep VRF18/28 always ON) */

   val.enable = vrf28on ? DCL_TRUE : DCL_FALSE;
   val.mod    = VRF;
   handle     = DclPMU_Open( DCL_PMU, FLAGS_NONE );
   DclPMU_Control( handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val );
   DclPMU_Close( handle );
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PMU_VRF18ModeSetting( char onSel )
{
#if IS_CHIP_MT6280
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_ON_SEL val;
   val.onSel = (PMU_ON_SEL_ENUM)onSel;
   val.mod = VRF18;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_ON_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
#elif IS_CHIP_MT6583_MD1
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_ON_SEL val;
   val.onSel = onSel ? ENABLE_WITH_SRCLKEN : ENABLE_LDO_BUCK_EN_REGISTER;  // 1:HW_Mode(ENABLE_WITH_SRCLKEN) / 0:SW_Mode(ENABLE_LDO_BUCK_EN_REGISTER)
   val.mod = VRF18_1;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle,LDO_BUCK_SET_ON_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
#elif IS_CHIP_MT6583_MD2
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_ON_SEL val;
   val.onSel = onSel ? ENABLE_WITH_SRCLKEN : ENABLE_LDO_BUCK_EN_REGISTER;  // 1:HW_Mode(ENABLE_WITH_SRCLKEN) / 0:SW_Mode(ENABLE_LDO_BUCK_EN_REGISTER)
   val.mod = VRF18_2;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle,LDO_BUCK_SET_ON_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
#elif IS_CHIP_MT6572
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_ON_CTRL val;
   val.mode = onSel? HW_CONTROL : SW_CONTROL_BY_REG;                       // 1:HW_Mode / 0:SW_Mode
   val.mod = VRF18;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_ON_CTRL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
#elif IS_CHIP_MT6290
   #if IS_DUAL_TALK_SUPPORT
      #if IS_RF_MT6166 || IS_RF_MT6165
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_ON_SEL val;
   val.mod=VRF18_2;
   val.onSel = onSel ? ENABLE_WITH_SRCLKEN : ENABLE_LDO_BUCK_EN_REGISTER; // 1:HW_Mode(ENABLE_WITH_SRCLKEN) / 0:SW_Mode(ENABLE_LDO_BUCK_EN_REGISTER)
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_ON_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
      #endif
   #else
      #if IS_RF_MT6169
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_ON_SEL val;
   val.mod=VRF18;
   val.onSel = onSel ? ENABLE_WITH_SRCLKEN : ENABLE_LDO_BUCK_EN_REGISTER; // 1:HW_Mode(ENABLE_WITH_SRCLKEN) / 0:SW_Mode(ENABLE_LDO_BUCK_EN_REGISTER)
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_ON_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
      #endif
   #endif
#elif IS_CHIP_MT6595
   #if IS_DUAL_TALK_SUPPORT
      #if IS_RF_MT6165
      DCL_HANDLE handle;
      PMU_CTRL_LDO_BUCK_SET_EN_CTRL val;
      handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
      val.mode = onSel? HW_CONTROL : SW_CONTROL_BY_REG; // (SW_CONTROL_BY_REG / HW_CONTROL)
      val.mod = VRF2;
      DclPMU_Control(handle, LDO_BUCK_SET_EN_CTRL, (DCL_CTRL_DATA_T *)&val);
      DclPMU_Close(handle);
      #endif
   #else
      #if IS_RF_MT6169
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_EN_CTRL val;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   val.mode = ( onSel ? HW_CONTROL : SW_CONTROL_BY_REG ); // (SW_CONTROL_BY_REG / HW_CONTROL)
   val.mod = VRF1;
   DclPMU_Control(handle, LDO_BUCK_SET_EN_CTRL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
      #endif
   #endif
#elif IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
   #if IS_RF_MT6165
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_EN_CTRL val;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   val.mode = onSel? HW_CONTROL : SW_CONTROL_BY_REG; // (SW_CONTROL_BY_REG / HW_CONTROL)
   val.mod = VRF18_2;
   DclPMU_Control(handle, LDO_BUCK_SET_EN_CTRL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
   #else
   //For MT6572 with MT6169, VRF18 is controlled by MML1   
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PMU_VRF28ModeSetting( char onSel )
{
#if IS_CHIP_MT6583_MD2
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_ON_SEL val;
   val.onSel = onSel ? ENABLE_WITH_SRCLKEN : ENABLE_LDO_BUCK_EN_REGISTER;  // 1:HW_Mode(ENABLE_WITH_SRCLKEN) / 0:SW_Mode(ENABLE_LDO_BUCK_EN_REGISTER)
   val.mod = (VRF28_SOURCE == 0) ? VRF28_1 : VRF28_2; /* VRF28_SOURCE: 0(VRF28_1) or 1(VRF28_2) */
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle,LDO_BUCK_SET_ON_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PMU_VRF18HWModeSelect( void )
{
#if IS_CHIP_MT6583_MD2
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_SRCLKEN_SEL val;
   #if IS_MODEM_DUALTALK_TURNON
   val.SrclkenSel = SRCLKEN_MD2; //  MD1 & MD2(use SRCLKEN_MD2)
   #else
   val.SrclkenSel = 0/*SRCVOLTEN*/;   //  MD2 Only(use SRCVOLTEN)
   #endif
   val.mod = VRF18_2;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_SRCLKEN_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
#elif IS_CHIP_MT6290
   #if IS_DUAL_TALK_SUPPORT
      #if IS_RF_MT6166 || IS_RF_MT6165
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_SRCLKEN_SEL val;
   val.mod=VRF18_2;
   val.SrclkenSel = SRCLKEN_IN2; //(SRCLKEN_IN1_AND_SRCLKEN_IN2/SRCLKEN_IN1/SRCLKEN_IN2/SRCLKEN_IN1_OR_SRCLKEN_IN2)
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_SRCLKEN_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
      #endif
   #else
      #if IS_RF_MT6169
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_SRCLKEN_SEL val;
   val.mod=VRF18;
   val.SrclkenSel = SRCLKEN_IN2; //(SRCLKEN_IN1_AND_SRCLKEN_IN2/SRCLKEN_IN1/SRCLKEN_IN2/SRCLKEN_IN1_OR_SRCLKEN_IN2)
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_SRCLKEN_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
      #endif
   #endif
#elif IS_CHIP_MT6595
   #if IS_DUAL_TALK_SUPPORT
      #if IS_RF_MT6165
      DCL_HANDLE handle;
      PMU_CTRL_LDO_BUCK_SET_EN_SEL val;
      handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
      val.sel = SRCLKEN_IN2_SEL; /* SRCLKEN_IN1_SEL / SRCLKEN_IN2_SEL/ SRCLKEN_IN1_OR_SRCLKEN_IN2_SEL/SRCLKEN_IN1_AND_SRCLKEN_IN2_SEL/ SRCLKEN_IN1_AND_SRCLKEN_IN2_SEL */
      val.mod = VRF2;
      DclPMU_Control(handle, LDO_BUCK_SET_EN_SEL, (DCL_CTRL_DATA_T *)&val);
      DclPMU_Close(handle);
      #endif
   #else
      #if IS_RF_MT6169
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_EN_SEL val;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   val.sel = SRCLKEN_IN1_SEL; /* SRCLKEN_IN1_SEL/SRCLKEN_IN2_SEL/SRCLKEN_IN1_OR_SRCLKEN_IN2_SEL/SRCLKEN_IN1_AND_SRCLKEN_IN2_SEL */
   val.mod = VRF1;
   DclPMU_Control(handle, LDO_BUCK_SET_EN_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
      #endif
   #endif
#elif IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
   #if IS_RF_MT6165
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_EN_SEL val;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   val.sel = SRCLKEN_IN1_SEL; /* SRCLKEN_IN0_SEL/SRCLKEN_IN1_SEL/SRCLKEN_IN0_OR_SRCLKEN_IN1_SEL/SRCLKEN_IN0_AND_SRCLKEN_IN1_SEL */
   val.mod = VRF18_2;
   DclPMU_Control(handle, LDO_BUCK_SET_EN_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
   #else
   //For MT6572 with MT6169, VRF18 is controlled by MML1
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PMU_VRF28HWModeSelect( void )
{
#if IS_CHIP_MT6583_MD2
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_SRCLKEN_SEL val;
   #if IS_MODEM_DUALTALK_TURNON
   val.SrclkenSel = SRCLKEN_MD2;                 //  MD1 & MD2(use SRCLKEN_MD2)
   #else
   val.SrclkenSel = 3/*SRCVOLTEN_OR_SRCLKEN_PERI*/;   //  MD2 Only(use SRCVOLTEN_OR_SRCLKEN_PERI)
   #endif
   val.mod = (VRF28_SOURCE == 0) ? VRF28_1 : VRF28_2; /* VRF28_SOURCE: 0(VRF28_1) or 1(VRF28_2) */
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_SRCLKEN_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PMU_LPModeSetting( char modeSel )
{
#if IS_CHIP_MT6572 && IS_FDD_DUAL_MODE_SUPPORT
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_LP_SEL val;
   val.onSel = modeSel ? SW_CONTROL : SRCLKEN_CONTROL;
   val.mod = VRF18;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_LP_SEL, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PMU_LPSetting( char lpSel )
{
   #if IS_CHIP_MT6572 && IS_FDD_DUAL_MODE_SUPPORT
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_LP_MODE_SET val;
   val.enable = lpSel ? DCL_TRUE : DCL_FALSE; // 1: low power mode,0: normal mode
   val.mod = VRF18;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_LP_MODE_SET, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 */

unsigned long L1D_PMU_AUXADCRead( void )
{
#if IS_CHIP_MT6572
   unsigned long           AUXADC_Result = 0;
   DCL_HANDLE              handle;
   PMU_CTRL_ADC_SET_RQST   val_RQST;
   PMU_CTRL_ADC_GET_RDY_MD val_RDY;
   PMU_CTRL_ADC_GET_OUT_MD val_Result;

   val_RQST.enable = DCL_TRUE;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, ADC_SET_RQST, (DCL_CTRL_DATA_T *)&val_RQST);

   WAIT_TIME_QB( 2600 );

   DclPMU_Control(handle, ADC_GET_RDY_MD, (DCL_CTRL_DATA_T *)&val_RDY);
   if( val_RDY.status == DCL_TRUE )
   {  DclPMU_Control(handle, ADC_GET_OUT_MD, (DCL_CTRL_DATA_T *)&val_Result);
      AUXADC_Result   |= (val_Result.data & 0xFFFF);
   }
   DclPMU_Close(handle);

   if( val_RDY.status == DCL_TRUE )
   {  return AUXADC_Result;  }
   else
#elif IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   unsigned long           AUXADC_Result = 0;
   DCL_HANDLE              handle;
   PMU_CTRL_ADC_SET_RQST   val_RQST;
   PMU_CTRL_ADC_GET_RDY_MD val_RDY;
   PMU_CTRL_ADC_GET_OUT_MD val_Result;

   val_RQST.enable = DCL_TRUE;
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, ADC_SET_RQST, (DCL_CTRL_DATA_T *)&val_RQST);

   WAIT_TIME_QB( 5200 );

   DclPMU_Control(handle, ADC_GET_RDY_MD, (DCL_CTRL_DATA_T *)&val_RDY);
   if( val_RDY.status == DCL_TRUE )
   {  DclPMU_Control(handle, ADC_GET_OUT_MD, (DCL_CTRL_DATA_T *)&val_Result);
      AUXADC_Result   |= ((val_Result.data & 0x7FFF)<<1);
   }
   DclPMU_Close(handle);

   if( val_RDY.status == DCL_TRUE )
   {  return AUXADC_Result;  }
   else
#endif
   {  return (0x1<<16);  }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_ABB_Set_ADCMUX_DLPad( void )
{
#if IS_CHIP_MT6276 || IS_CHIP_MT6573 || IS_CHIP_MT6575
   #if IS_RF_MT6162 || IS_RF_MT6163
/*MT6162*/ unsigned short d16;
/*MT6162*/
/*MT6162*/ /* Set DL_INPUT_SEL_MODE to SW control mode */
/*MT6162*/    #if IS_CHIP_MT6573
/*MT6162*/ d16 = HW_READ(PMIC_RESERVE_CON0);
/*MT6162*/ d16 |= 0x0002;
/*MT6162*/ HW_WRITE(PMIC_RESERVE_CON0, d16);
/*MT6162*/
/*MT6162*/    #elif IS_CHIP_MT6276_S01
/*MT6162*/ d16 = HW_READ(BBRX_CON3);
/*MT6162*/ d16 |=  0x0001;
/*MT6162*/ HW_WRITE(BBRX_CON3, d16);
/*MT6162*/
/*MT6162*/    #elif IS_CHIP_MT6575
/*MT6162*/ d16  = HW_READ(BBRX_CON3);
/*MT6162*/ d16 &= ~0x0003;
/*MT6162*/ d16 |=  0x0002;
/*MT6162*/ HW_WRITE(BBRX_CON3, d16);
/*MT6162*/    #endif
/*MT6162*/
/*MT6162*/ /* Switch ADC MUX to DL Pads (OH uses the same path as O3)*/
/*MT6162*/ d16 = HW_READ(BBRX_CON0);
/*MT6162*/ d16 &= ~0x0300;
/*MT6162*/ HW_WRITE(BBRX_CON0, d16);
   #else
/*else*/   unsigned short d16;
/*else*/
/*else*/   d16  = HW_READ( BBRX_CON0 );
/*else*/   d16 &= ~0x0300;
/*else*/   d16 |= 0x1<<8;
/*else*/   HW_WRITE( BBRX_CON0, d16 );
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_ABB_Set_BBRX_CON( void )
{
#if IS_CHIP_MT6583_MD2
   #if IS_RF_MT6163
   unsigned short d16;

   /* set bit[14] to 1 for OT               */
   /* clock source                          */
   /* 0: MDPLL1                             */
   /* 1: MDPLL2                             */
   d16  =  HW_READ(BBRX2_2_CON0);
   d16 &= ~0x4000;
   d16 |=  0x4000;
   HW_WRITE(BBRX2_2_CON0, d16);

   /* set bit[6] to 1 for OT                */
   /* BBRX IQ2 overload gain adjust enabled */
   /* 0: enable                             */
   /* 1: disable                            */
   d16  =  HW_READ(BBRX2_2_CON1);
   d16 &= ~0x0040;
   d16 |=  0x0040;
   HW_WRITE(BBRX2_2_CON1, d16);

   /* set bit[2] to 0 for OT                */
   /* Enable OT interface R1 in SC mode     */
   /* 0: R1=32K                             */
   /* 1: R1=16K                             */
   d16  =  HW_READ(BBRX2_2_CON2);
   d16 &= ~0x0004;
   HW_WRITE(BBRX2_2_CON2, d16);

   /* set bit[7] to 1 for OT                */
   /* Enable OT interface VICM in SC mode   */
   /* 0: VICM=0.7V                          */
   /* 1: VICM=1.2V                          */
   d16  =  HW_READ(BBRX2_2_CON3);
   d16 &= ~0x0080;
   d16 |=  0x0080;
   HW_WRITE(BBRX2_2_CON3, d16);

   /* set bit[1:0] to 01 for OT             */
   /* BBRX IQ2 INT R1 overload value        */
   /* 00: 64K                               */
   /* 01: 32K                               */
   /* 10: 16K                               */
   /* 11:  8K                               */
   d16  =  HW_READ(BBRX2_2_CON9);
   d16 &= ~0x0003;
   d16 |=  0x0001;
   HW_WRITE(BBRX2_2_CON9, d16);
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*===============================================================================*/
/* for OthelloH                                                                  */
/*===============================================================================*/
#if IS_RF_MT6162
#define RX_GAIN_LNA_0              0x08300300L
#define RX_GAIN_TEST_DISABLE       0x09031000L
#define CW08_TXIQMMCAL             0x00826464L /* set PLL to type2 in the calibration */
#define CW08_INIT                  0x00826424L

#define POWER_BB                    346 /* 1.35*256, S(8,8) */
#define GAIN_PA                    7936 /*   31*256, S(8,8) */
#define GAIN_PBBOFS               -2304 /*   -9*256, S(8,8) */
#define GAIN_CPL_LB               -8896 /*  -34.75*256, S(8,8) */
#define GAIN_CPL_HB               -8381 /*  -32.74*256, S(8,8) */
#define DCOFFSET_MAX                127 /* (800-6.25)mV => convert to OH DAC value: 127 ((800-6.25)/6.25=127) */
#define DCOFFSET_CLIPPING_THRESHOLD  63 /* (400-6.25)mV => convert to OH DAC value:  63 ((400-6.25)/6.25= 63) */
#define TQ_DELAY_RX_IN_TXIQMM        94
#define TQ_DELAY_TX_IN_TXIQMM        70
   #if IS_CHIP_MT6276_S00 || IS_CHIP_MT6573_S00
#define TX_DC_COMP_THRESHOLD        127 /* for 6276E1 and 6573E1, BFE DAC : -127~127 */
   #else
#define TX_DC_COMP_THRESHOLD        114 /* for 6276E2 and 6573E2, BFE DAC : -114~114 */
   #endif
#define TX_PHASE_COMP_THRESHOLD      27 /* BFE DAC :  -27~27  */
   #if IS_CHIP_MT6575
#define TX_GAIN_COMP_THRESHOLD       62 /* BFE DAC :  -62~62  */
   #else
#define TX_GAIN_COMP_THRESHOLD       29 /* BFE DAC :  -29~29  */
   #endif
#define UNITY_ONE                 32768 /* 1 => cahnge to U(1,15)*/
#define RAD_2_DEG                 58670 /* 180/pi = 57.296... => change to U(6,10) */
#define DEG_2_BFEDAC              36571 /* 1/0.112 = 8.929... => change to U(4,12) (1 BFEDAC is equal to 0.112 degree) */
#define K_BB                        179 /* gain_bb_1000/(gain_bb_300-gain_bb_1000), in U(5,11) (linear value) */
#define K_RF                       1790 /* gain_bb_1000, in U(1,15) (linear value) */
   #if IS_CHIP_MT6276_S00 || IS_CHIP_MT6573_S00
#define VOLT_2_DCDAC               3629 /* for 6276E1 and 6573E1, 127(DAC) <=> 35(mv); 127/(0.035) = 3629 */
   #else
#define VOLT_2_DCDAC               2000 /* for 6276E2 and 6573E2, 114(DAC) <=> 57(mv); 114/(0.057) = 2000 */
   #endif
#define G_PGA_MUL                     1
#define RX_VIN                     2000

unsigned char TX_GAINRF_MAPPING[4][16] =
{
   /* GSM850 */
   /* PCL 19,18,17,16,15,14,13,12,11,10, 9, 8, 7, 6, 5, 4 */
   {       6, 6, 6, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3, 3, 3, 3 },
   /* GSM900 */
   /* PCL 19,18,17,16,15,14,13,12,11,10, 9, 8, 7, 6, 5, 4 */
   {       6, 6, 6, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3, 3, 3, 3 },
   /* DCS1800 */
   /* PCL 15,14,13,12,11,10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 */
   {       6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3 },
   /* PCS1900 */
   /* PCL 15,14,13,12,11,10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 */
   {       6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 3, 3, 3, 3 },
};

signed short BBGAIN_DECODE_TABLE[14][2] =
{
   { 0, -7},
   { 0, -4},
   { 0, -1},
   { 0,  2},
   { 0,  5},
   { 6,  2},
   { 6,  5},
   { 6,  8},
   {12,  5},
   {12,  8},
   {12, 11},
   {18,  8},
   {18, 11},
   {18, 14},
};

unsigned long read_back;
unsigned long TX_GAIN_READ_ADDRESS[5] = {  0xBB, 0xBC, 0xBD, 0xBE, 0xBF  };
unsigned long RECORD_DATA[4];

   #if IS_RF_RX_DCOC_SUPPORT
const signed int G_PGA_TABLE[8] =
{
    /* 6415*10^(G_pga/20) @ different PGA gain */
    2865, /* @ gain = -7dB,  2865.475244 */
    4047, /* @ gain = -4dB,  4047.591365 */
    5717, /* @ gain = -1dB,  5717.374768 */
    8076, /* @ gain =  2dB,  8076.006517 */
   11407, /* @ gain =  5dB, 11407.66242  */
   16113, /* @ gain =  8dB, 16113.75146  */
   22761, /* @ gain = 11dB, 22761.27892  */
   32151, /* @ gain = 14dB, 32151.16104  */
};
   #endif

   #if IS_RF_TX_CALIBRATION_SUPPORT
const sTX_GAIN_BB_MAPPING TX_GAIN_BB_TABLE[17] =
{
   {    0,  1026 }, /* gain_bb_inverse = 10^(-((6-(gain_bb_dac/32))/20))*2^11 */
   {   64,  1292 },
   {  128,  1627 },
   {  192,  2048 },
   {  256,  2578 },
   {  320,  3246 },
   {  384,  4086 },
   {  448,  5144 },
   {  512,  6476 },
   {  576,  8153 },
   {  640, 10264 },
   {  704, 12922 },
   {  768, 16268 },
   {  832, 20480 },
   {  896, 25783 },
   {  960, 32459 },
   { 1024, 40863 },
};
   #endif

#endif

/*===============================================================================*/
/* For Othello T                                                                 */
/*===============================================================================*/
#if IS_RF_MT6163
#define RX_GAIN_LNA_0              0x08300300L  /* LNA_GAIN[1:0]=0x3: 16 dB, BB_GAIN[3:0]=0x0: -7 dB */
#define RX_GAIN_TEST_DISABLE       0x09031000L  /* bit[17] is a dummy setting, undefined in OT */
#define CW128_TX_CAL_EN            0x08000002L  /* set TX_CAL_EN[1] to 1 to enable the TX feedback path */
#define CW128_TX_CAL_DIS           0x08000000L  /* set TX_CAL_EN[1] to 1 to disable the TX feedback path */

#define POWER_BB                    346 /*   1.35*256, S(8,8) */
#define GAIN_PBBOFS               -2304 /*  -9.00*256, S(8,8) */
#define GAIN_CPL_LB               -8896 /* -34.75*256, S(8,8) */
#define GAIN_CPL_HB               -8381 /* -32.74*256, S(8,8) */
#define DCOFFSET_MAX                127 /* (800-6.25)mV => convert to OH DAC value: 127 ((800-6.25)/6.25=127) */
#define DCOFFSET_CLIPPING_THRESHOLD  63 /* (400-6.25)mV => convert to OH DAC value:  63 ((400-6.25)/6.25= 63) */
#define TQ_DELAY_RX_IN_TXIQMM       118
#define TQ_DELAY_TX_IN_TXIQMM        70
   #if IS_CHIP_MT6276_S00 || IS_CHIP_MT6573_S00
#define TX_DC_COMP_THRESHOLD        127 /* for 6276E1 and 6573E1, BFE DAC : -127~127 */
   #else
#define TX_DC_COMP_THRESHOLD        114 /* for 6276E2 and 6573E2, BFE DAC : -114~114 */
   #endif
#define TX_PHASE_COMP_THRESHOLD      27 /* BFE DAC :  -27~27  */
   #if IS_CHIP_MT6575 || IS_CHIP_MT6583_MD2
#define TX_GAIN_COMP_THRESHOLD       62 /* BFE DAC :  -62~62  */
   #else
#define TX_GAIN_COMP_THRESHOLD       29 /* BFE DAC :  -29~29  */
   #endif
#define UNITY_ONE                 32768 /* 1 => cahnge to U(1,15)*/
#define RAD_2_DEG                 58670 /* 180/pi = 57.296... => change to U(6,10) */
#define DEG_2_BFEDAC              36571 /* 1/0.112 = 8.929... => change to U(4,12) (1 BFEDAC is equal to 0.112 degree) */
#define K_BB                        179 /* gain_bb_1000/(gain_bb_300-gain_bb_1000), in U(5,11) (linear value) */
#define K_RF                       1790 /* gain_bb_1000, in U(1,15) (linear value) */
   #if IS_CHIP_MT6276_S00 || IS_CHIP_MT6573_S00
#define VOLT_2_DCDAC               3629 /* for 6276E1 and 6573E1, 127(DAC) <=> 35(mv); 127/(0.035) = 3629 */
   #else
#define VOLT_2_DCDAC               2000 /* for 6276E2 and 6573E2, 114(DAC) <=> 57(mv); 114/(0.057) = 2000 */
   #endif
   #if IS_BBTXRX_CHIP_DESIGN_VER_3
#define G_PGA_MUL                    32
#define RX_VIN                     3200
   #else
#define G_PGA_MUL                     1
#define RX_VIN                     2000
   #endif

signed short BBGAIN_DECODE_TABLE[14][2] =
{
   { 0, -7},
   { 0, -4},
   { 0, -1},
   { 0,  2},
   { 0,  5},
   { 6,  2},
   { 6,  5},
   { 6,  8},
   {12,  5},
   {12,  8},
   {12, 11},
   {18,  8},
   {18, 11},
   {18, 14},
};

unsigned long read_back;
unsigned long TX_GAIN_READ_ADDRESS[5] = {  0xBB, 0xBC, 0xBD, 0xBE, 0xBF  };
unsigned long RECORD_DATA[4];

   #if IS_RF_RX_DCOC_SUPPORT
      #if IS_BBTXRX_CHIP_DESIGN_VER_3
const signed int G_PGA_TABLE[8] =
{
    /* 110592*10^(G_pga/20) @ different PGA gain */
    1543, /* @ gain = -7dB,  49399.63 =  1543.738*32 */
    2180, /* @ gain = -4dB,  69778.83 =  2180.589*32 */
    3080, /* @ gain = -1dB,  98565.22 =  3080.163*32 */
    4350, /* @ gain =  2dB, 139227.1  =  4350.846*32 */
    6145, /* @ gain =  5dB, 196663.5  =  6145.734*32 */
    8681, /* @ gain =  8dB, 277794.5  =  8681.08 *32 */
   12262, /* @ gain = 11dB, 392395.2  = 12262.35 *32 */
   17321, /* @ gain = 14dB, 554273    = 17321.03 *32 */
};
      #else
const signed int G_PGA_TABLE[8] =
{
    /* 6415*10^(G_pga/20) @ different PGA gain */
    2865, /* @ gain = -7dB,  2865.475244 */
    4047, /* @ gain = -4dB,  4047.591365 */
    5717, /* @ gain = -1dB,  5717.374768 */
    8076, /* @ gain =  2dB,  8076.006517 */
   11407, /* @ gain =  5dB, 11407.66242  */
   16113, /* @ gain =  8dB, 16113.75146  */
   22761, /* @ gain = 11dB, 22761.27892  */
   32151, /* @ gain = 14dB, 32151.16104  */
};
      #endif
   #endif

   #if IS_RF_TX_CALIBRATION_SUPPORT
const sTX_GAIN_BB_MAPPING TX_GAIN_BB_TABLE[17] =
{
   {    0,  1026 }, /* gain_bb_inverse = 10^(-((6-(gain_bb_dac/32))/20))*2^11 */
   {   64,  1292 },
   {  128,  1627 },
   {  192,  2048 },
   {  256,  2578 },
   {  320,  3246 },
   {  384,  4086 },
   {  448,  5144 },
   {  512,  6476 },
   {  576,  8153 },
   {  640, 10264 },
   {  704, 12922 },
   {  768, 16268 },
   {  832, 20480 },
   {  896, 25783 },
   {  960, 32459 },
   { 1024, 40863 },
};
   #endif
#endif /* IS_RF_MT6163 */

/*===============================================================================*/
/* For Orion H                                                                   */
/*===============================================================================*/
#if IS_RF_MT6280RF
#define POWER_BB0                  2363 /*   9.23(dBm) * 256, S7.8 */
#define POWER_ADC_SETPOINT        -4096 /*    -16(dB)  * 256, S7.8 */
#define GAIN_CPL                  -7680 /*    -30(dB)  * 256, S7.8 */
#define GAIN_BACKOFF_LB               0 /*      0(dB)  * 32 ,S10.5 */
#define GAIN_BACKOFF_HB              96 /*      3(dB)  * 32 ,S10.5 */
#define ALPHA_FILTER_COEFF            1
#define GAINBB0_CODE_LENGTH           9
#endif /* IS_RF_MT6280RF */

#if IS_RF_MT6169
#define POWER_BB0                  2363 /*   9.23(dBm) * 256, S7.8 */
#define POWER_ADC_SETPOINT        -2765 /*  -10.8(dB)  * 256, S7.8 */
#define GAIN_CPL                  -7680 /*    -30(dB)  * 256, S7.8 */
#define GAIN_BACKOFF_LB              96 /*      3(dB)  * 32 ,S10.5 */
#define GAIN_BACKOFF_HB              96 /*      3(dB)  * 32 ,S10.5 */
#define ALPHA_FILTER_COEFF            1
#define GAINBB0_CODE_LENGTH           9
#endif /* IS_RF_MT6169 */

#if IS_RF_MT6166
#define POWER_BB0                  2363 /*   9.23(dBm) * 256, S7.8 */
#define POWER_ADC_SETPOINT        -4096 /*    -16(dB)  * 256, S7.8 */
#define GAIN_CPL                  -7680 /*    -30(dB)  * 256, S7.8 */
#define GAIN_BACKOFF_LB               0 /*      0(dB)  * 32 ,S10.5 */
#define GAIN_BACKOFF_HB               0 /*      0(dB)  * 32 ,S10.5 */
#define ALPHA_FILTER_COEFF            1
#define GAINBB0_CODE_LENGTH           9
#endif /* IS_RF_MT6166 */

#if IS_RF_MT6176
#define POWER_BB0                  2180 /* 8.5165(dBm) * 256, S7.8 */
   #if IS_CHIP_TK6291
#define GAIN_BACKOFF_LB               0 /*       0(dB)  * 32 ,S10.5 */
#define GAIN_BACKOFF_HB               0 /*       0(dB)  * 32 ,S10.5 */
   #else
#define GAIN_BACKOFF_LB              13 /*     0.4(dB)  * 32 ,S10.5, back off 5% to enlarge DC offset compensate range */
#define GAIN_BACKOFF_HB              13 /*     0.4(dB)  * 32 ,S10.5, back off 5% to enlarge DC offset compensate range */
   #endif
#define GAINBB0_CODE_LENGTH           9
#define GAINBB0_BACKOFF          (-384) /* Backoff 12dB on TK6291 for correct ABB DAC setpoing, S10.5 */
#endif /* IS_RF_MT6176 */

#if IS_RF_MT6179
#define POWER_BB0                  2180 /* 8.5165(dBm) * 256, S7.8 */
#define GAIN_BACKOFF_LB              13 /*     0.4(dB)  * 32 ,S10.5, back off 5% to enlarge DC offset compensate range */
#define GAIN_BACKOFF_HB              13 /*     0.4(dB)  * 32 ,S10.5, back off 5% to enlarge DC offset compensate range */
#define GAINBB0_CODE_LENGTH           9
#endif /* IS_RF_MT6179 */

#if IS_RF_MT6177L
#define POWER_BB0                  2180 /* 8.5165(dBm) * 256, S7.8 */
#define GAIN_BACKOFF_LB              13 /*     0.4(dB)  * 32 ,S10.5, back off 5% to enlarge DC offset compensate range */
#define GAIN_BACKOFF_HB              13 /*     0.4(dB)  * 32 ,S10.5, back off 5% to enlarge DC offset compensate range */
#define GAINBB0_CODE_LENGTH           9
#endif /* IS_RF_MT6177L */

#if IS_RF_MT6177M
#define POWER_BB0                  2180 /* 8.5165(dBm) * 256, S7.8 */
#define GAIN_BACKOFF_LB              13 /*     0.4(dB)  * 32 ,S10.5, back off 5% to enlarge DC offset compensate range */
#define GAIN_BACKOFF_HB              13 /*     0.4(dB)  * 32 ,S10.5, back off 5% to enlarge DC offset compensate range */
#define GAINBB0_CODE_LENGTH           9
#endif /* IS_RF_MT6177M */


#if IS_BBTXRX_CHIP_DESIGN_VER_2 || IS_BBTXRX_CHIP_DESIGN_VER_3
void L1D_RF_IMM_SEND_BSI( char type )
{
   #if IS_RF_MT6162
   IMM_MODE_BEGIN( IMMMASK_BSI );
   switch( type )
   {
      case RX_LNA_0:
         IMM_SEND_BSI( SCTRL_IMOD(0,30), RX_GAIN_LNA_0 ); /* set Gain_LNA = -7dB */
         break;
      case RX_TEST_DISABLE:
         /* disable Rx Gain control overwrites (0x90, RX_GAIN_TEST), RXGAIN_OW_EN[8]=0 */
         IMM_SEND_BSI( SCTRL_IMOD(0,30), RX_GAIN_TEST_DISABLE );
         break;
      case PLL_TYPE2_SWITCH:
         /* set PLL to Type2 for the TXIQMM calibration */
         IMM_SEND_BSI( SCTRL_IMOD(0,30), CW08_TXIQMMCAL );
         break;
      case PLL_TYPE1_SWITCH:
         /* set PLL to Type1 for the normal operation */
         IMM_SEND_BSI( SCTRL_IMOD(0,30), CW08_INIT );
         break;
   }
   IMM_MODE_END();

   #elif IS_RF_MT6163
   IMM_MODE_BEGIN( IMMMASK_BSI );
   switch( type )
   {
      case RX_LNA_0:
         IMM_SEND_BSI( SCTRL_IMOD(0,30), RX_GAIN_LNA_0 ); /* set Gain_LNA = -7dB */
         break;
      case RX_TEST_DISABLE:
         /* disable Rx Gain control overwrites (0x90, RX_GAIN_TEST), RXGAIN_OW_EN[8]=0 */
         IMM_SEND_BSI( SCTRL_IMOD(0,30), RX_GAIN_TEST_DISABLE );
         break;
      case TX_CAL_EN:
         /* enable the TX feedback path for TXIQMM calibration */
         IMM_SEND_BSI( SCTRL_IMOD(0,30), CW128_TX_CAL_EN );
         break;
      case TX_CAL_DIS:
         /* disable the TX feedback path for the normal operation */
         IMM_SEND_BSI( SCTRL_IMOD(0,30), CW128_TX_CAL_DIS );
         break;
   }
   IMM_MODE_END();
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetData( unsigned long data, unsigned char idx )
{
   #if IS_RF_RX_DCOC_SUPPORT
   RECORD_DATA[idx] = data;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Get_RXDCOffset( FrequencyBand band, signed short idx )
{
   #if IS_RF_RX_DCOC_SUPPORT
   long div_i, div_q, rd_i, rd_q;   /* for divider & rounding */
   signed short dc_i, dc_q;

   /*               *6.25                    */
   /* DCoffset_DAC  <===>            Voltage */
   /*    -127~+127  <===>  -793.75~+793.75mV */

   if( idx==4 )
   {
      dc_i = l1d_rf.rx_dc_i;
      dc_q = l1d_rf.rx_dc_q;

      // If RX Vin is 2000 mV, ADC value is 6415.
      // If RX Vin is 2000 mV, PGA gain is 5 dB, ADC value is 6415 * 1.7 = 11407
      div_i = G_PGA_TABLE[4];
      div_q = div_i;
      rd_i  = (dc_i>=0) ? (div_i>>1) : (-1)*(div_i>>1);
      rd_q  = (dc_q>=0) ? (div_q>>1) : (-1)*(div_q>>1);

      l1d_rf2.rx_dac_to_voltage_i = (signed short) ( ((dc_i*RX_VIN+rd_i)/div_i)/G_PGA_MUL );
      l1d_rf2.rx_dac_to_voltage_q = (signed short) ( ((dc_q*RX_VIN+rd_q)/div_q)/G_PGA_MUL );
   }
   else
   {
      /* get results of previous BURST from DSP */
      dc_i = -l1d_rf.rx_dc_i;
      dc_q = -l1d_rf.rx_dc_q;

      div_i = l1d_rf2.rx_dac_to_voltage_i*G_PGA_TABLE[4];
      div_q = l1d_rf2.rx_dac_to_voltage_q*G_PGA_TABLE[4];
      rd_i  = (dc_i*div_i>=0) ? (div_i>>1) : (-1)*(div_i>>1);
      rd_q  = (dc_q*div_q>=0) ? (div_q>>1) : (-1)*(div_q>>1);

      dc_i = (signed short) ( ((dc_i*RX_VIN*8+rd_i)/div_i)/G_PGA_MUL );
                    /* (rx_I_offset*2000*8)/(l1d_rf2.rx_dac_to_voltage_i)*(6415*10^(G_pga/20)); */
      dc_q = (signed short) ( ((dc_q*RX_VIN*8+rd_q)/div_q)/G_PGA_MUL );
                    /* (rx_Q_offset*2000*8)/(l1d_rf2.rx_dac_to_voltage_q)*(6415*10^(G_pga/20)); */
                    /* multiplying 8 is because rx_dac_to_voltage_i/q is stored in the S(4,3) format */

      /* clip the DC offset measurement result and multiply scale factor */
      /* the range of compensation DAC value is -127~+127 */
      if( dc_i > DCOFFSET_MAX )
         l1d_rf2.rx_dc_offset_i[band-1][idx] = (signed short) (  DCOFFSET_MAX<<ALPHA_FILTER_SCALE );
      else if( dc_i < -DCOFFSET_MAX )
         l1d_rf2.rx_dc_offset_i[band-1][idx] = (signed short) (-(DCOFFSET_MAX<<ALPHA_FILTER_SCALE));
      else
         l1d_rf2.rx_dc_offset_i[band-1][idx] = (signed short) (dc_i<<ALPHA_FILTER_SCALE);

      if( dc_q > DCOFFSET_MAX )
         l1d_rf2.rx_dc_offset_q[band-1][idx] = (signed short) (  DCOFFSET_MAX<<ALPHA_FILTER_SCALE );
      else if( dc_q < -DCOFFSET_MAX )
         l1d_rf2.rx_dc_offset_q[band-1][idx] = (signed short) (-(DCOFFSET_MAX<<ALPHA_FILTER_SCALE));
      else
         l1d_rf2.rx_dc_offset_q[band-1][idx] = (signed short) (dc_q<<ALPHA_FILTER_SCALE);
   }
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* for OH, on-the-fly RX DCOffset Calibration */
void L1D_RF_Update_DCoffset( unsigned char slot, FrequencyBand band, unsigned long gain_setting )
{
   #if IS_RF_RX_DCOC_SUPPORT
   /* Voltage  <==>  ADC_value */
   /*  2000mV  <==>       6415 */

   /*               *6.25                    */
   /* DCoffset_DAC  <===>            Voltage */
   /*    -127~+127  <===>  -793.75~+793.75mV */
   /*     -63~ +63  <===>  -393.75~+393.75mV */

   long div_i, div_q, rd_i, rd_q;   /* for divider & rounding */
   signed short rx_I_offset, rx_Q_offset;
   signed short bbgain_setting;
   signed short G_biquad, G_pga;
   signed short rx_I_offset_DAC, rx_Q_offset_DAC;
   signed short rx_I_offset_DAC_temp, rx_Q_offset_DAC_temp;
   signed short rx_dc_i_temp, rx_dc_q_temp;

   rx_dc_i_temp = l1d_rf.rx_dc_i;
   rx_dc_q_temp = l1d_rf.rx_dc_q;

   if( rx_dc_i_temp > 600 )
   {  l1d_rf.rx_dc_i = 600;  }
   else if( rx_dc_i_temp < -600 )
   {  l1d_rf.rx_dc_i = -600;  }

   if( rx_dc_q_temp > 600 )
   {  l1d_rf.rx_dc_q = 600;  }
   else if( rx_dc_q_temp < -600 )
   {  l1d_rf.rx_dc_q = -600;  }

   bbgain_setting = gain_setting&0xF;
   G_biquad = BBGAIN_DECODE_TABLE[bbgain_setting][0];
   G_pga    = BBGAIN_DECODE_TABLE[bbgain_setting][1];

   div_i = l1d_rf2.rx_dac_to_voltage_i*G_PGA_TABLE[(G_pga+7)/3];
   div_q = l1d_rf2.rx_dac_to_voltage_q*G_PGA_TABLE[(G_pga+7)/3];
   rd_i  = (-l1d_rf.rx_dc_i*div_i>=0) ? (div_i>>1) : (-1)*(div_i>>1);
   rd_q  = (-l1d_rf.rx_dc_q*div_q>=0) ? (div_q>>1) : (-1)*(div_q>>1);

   rx_I_offset = ( ((-l1d_rf.rx_dc_i*RX_VIN*8+rd_i)/div_i)/G_PGA_MUL );
                                  /* (rx_I_offset*2000*8)/(l1d_rf2.rx_dac_to_voltage_i)*(6514*10^(G_pga/20)); */
   rx_Q_offset = ( ((-l1d_rf.rx_dc_q*RX_VIN*8+rd_q)/div_q)/G_PGA_MUL );
                                  /* (rx_Q_offset*2000*8)/(l1d_rf2.rx_dac_to_voltage_q)*(6514*10^(G_pga/20)); */
                                  /* multiplying 8 is because rx_dac_to_voltage_i/q is stored in the S(4,3) format */
   /* clip the DC offset measurement result and multiply scale factor */
   if( rx_I_offset > DCOFFSET_CLIPPING_THRESHOLD )
      rx_I_offset_DAC = (DCOFFSET_CLIPPING_THRESHOLD<<ALPHA_FILTER_SCALE);
   else if( rx_I_offset < -DCOFFSET_CLIPPING_THRESHOLD )
      rx_I_offset_DAC = (-(DCOFFSET_CLIPPING_THRESHOLD<<ALPHA_FILTER_SCALE));
   else
      rx_I_offset_DAC =(rx_I_offset<<ALPHA_FILTER_SCALE);

   if( rx_Q_offset > DCOFFSET_CLIPPING_THRESHOLD )
      rx_Q_offset_DAC = (DCOFFSET_CLIPPING_THRESHOLD<<ALPHA_FILTER_SCALE);
   else if( rx_Q_offset < -DCOFFSET_CLIPPING_THRESHOLD )
      rx_Q_offset_DAC = (-(DCOFFSET_CLIPPING_THRESHOLD<<ALPHA_FILTER_SCALE));
   else
      rx_Q_offset_DAC = (rx_Q_offset<<ALPHA_FILTER_SCALE);

   rx_I_offset_DAC_temp = l1d_rf2.rx_dc_offset_i[band-1][G_biquad/6];
   rx_Q_offset_DAC_temp = l1d_rf2.rx_dc_offset_q[band-1][G_biquad/6];

   /* use the alpha filter to do the calculation */
   if( ALPHA_FILTER_COEFF == 0 )
   {
      rx_I_offset_DAC_temp += rx_I_offset_DAC;
      rx_Q_offset_DAC_temp += rx_Q_offset_DAC;
   }
   else
   {
      if( rx_I_offset_DAC > 0 )
         rx_I_offset_DAC_temp += (  ( rx_I_offset_DAC+(1<<(ALPHA_FILTER_COEFF-1)))>>ALPHA_FILTER_COEFF  );
      else
         rx_I_offset_DAC_temp += (-((-rx_I_offset_DAC+(1<<(ALPHA_FILTER_COEFF-1)))>>ALPHA_FILTER_COEFF));
      if( rx_Q_offset_DAC > 0 )
         rx_Q_offset_DAC_temp += (  ( rx_Q_offset_DAC+(1<<(ALPHA_FILTER_COEFF-1)))>>ALPHA_FILTER_COEFF  );
      else
         rx_Q_offset_DAC_temp += (-((-rx_Q_offset_DAC+(1<<(ALPHA_FILTER_COEFF-1)))>>ALPHA_FILTER_COEFF));
   }

   /* clip the DC offset calculation result */
   /* the range of compensation DAC value is (-127~+127)*(scale factor) */
   if( rx_I_offset_DAC_temp > DCOFFSET_MAX<<ALPHA_FILTER_SCALE )
      l1d_rf2.rx_dc_offset_i[band-1][G_biquad/6] = ( DCOFFSET_MAX<<ALPHA_FILTER_SCALE);
   else if( rx_I_offset_DAC_temp < -(DCOFFSET_MAX<<ALPHA_FILTER_SCALE) )
      l1d_rf2.rx_dc_offset_i[band-1][G_biquad/6] = (-(DCOFFSET_MAX<<ALPHA_FILTER_SCALE));
   else
      l1d_rf2.rx_dc_offset_i[band-1][G_biquad/6] = rx_I_offset_DAC_temp;

   if( rx_Q_offset_DAC_temp > DCOFFSET_MAX<<ALPHA_FILTER_SCALE )
      l1d_rf2.rx_dc_offset_q[band-1][G_biquad/6] = ( DCOFFSET_MAX<<ALPHA_FILTER_SCALE);
   else if( rx_Q_offset_DAC_temp < -(DCOFFSET_MAX<<ALPHA_FILTER_SCALE) )
      l1d_rf2.rx_dc_offset_q[band-1][G_biquad/6] = (-(DCOFFSET_MAX<<ALPHA_FILTER_SCALE));
   else
      l1d_rf2.rx_dc_offset_q[band-1][G_biquad/6] = rx_Q_offset_DAC_temp;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int L1D_RF_SetRXDelayInTXIQMM( int tq_cnt )
{
   int return_tq_cnt = tq_cnt;
   #if IS_RF_TX_CALIBRATION_SUPPORT
   if( L1D_RF_TXIQMM_Check() )
   {  return_tq_cnt = TQ_SLOT0_BEGIN+TQ_DELAY_RX_IN_TXIQMM;  }
   #endif
   return return_tq_cnt;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int L1D_RF_SetTXDelayInTXIQMM( int tq_cnt )
{
   int return_tq_cnt = tq_cnt;
   #if IS_RF_TX_CALIBRATION_SUPPORT
   if( L1D_RF_TXIQMM_Check() )
   {  return_tq_cnt = TQ_SLOT0_BEGIN+TQ_DELAY_TX_IN_TXIQMM;  }
   #endif
   return return_tq_cnt;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Calibration_Start( void )
{
   #if IS_RF_RX_DCOC_SUPPORT || IS_RF_TX_CALIBRATION_SUPPORT
   l1d_rf.cal_band  = 1; /* start from FrequencyBand850 */
   #else
   l1d_rf.cal_band  = 0;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_RXDCOC_Start( void )
{
   #if IS_RF_RX_DCOC_SUPPORT
   l1d_rf2.is_rx_cal = 1;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_RXDCOC_End( void )
{
   #if IS_RF_RX_DCOC_SUPPORT
   l1d_rf2.is_rx_cal = 0;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

char L1D_RF_RXDCOC_Check( void )
{
   char return_value = 0;
   #if IS_RF_RX_DCOC_SUPPORT
   return_value = l1d_rf2.is_rx_cal;
   #endif
   return return_value;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXIQMM_Start( char tx_cal )
{
   #if IS_RF_TX_CALIBRATION_SUPPORT
   l1d_rf2.is_tx_cal = tx_cal;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXIQMM_End( void )
{
   #if IS_RF_TX_CALIBRATION_SUPPORT
   l1d_rf2.is_tx_cal = 0;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

char L1D_RF_TXIQMM_Check( void )
{
   char return_value = 0;
   #if IS_RF_TX_CALIBRATION_SUPPORT
   return_value = l1d_rf2.is_tx_cal;
   #endif
   return return_value;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Get_TXIQMM_Results_DCBB( short dc_i_1, short dc_i_2, short dc_q_1, short dc_q_2 )
{
   #if IS_RF_TX_CALIBRATION_SUPPORT
   l1d_rf2.tx_dc_bb_i[l1d_rf.cal_band-1] = ( dc_i_1-(((dc_i_2-dc_i_1)*K_BB)>>11) ); /* calculate DC_BB */
   l1d_rf2.tx_dc_bb_q[l1d_rf.cal_band-1] = ( dc_q_1-(((dc_q_2-dc_q_1)*K_BB)>>11) ); /* >>11 */
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Get_TXIQMM_Results( short g, short phi, short dc_i, short dc_q, unsigned char idx )
{
   #if IS_RF_TX_CALIBRATION_SUPPORT
      #if IS_RF_MT6162
   l1d_rf2.tx_gain_error[l1d_rf.cal_band-1][idx-2]  = g;
   l1d_rf2.tx_phase_error[l1d_rf.cal_band-1][idx-2] = phi;
   l1d_rf2.tx_dc_rf_i[l1d_rf.cal_band-1][idx-2] = ( ((dc_i-l1d_rf2.tx_dc_bb_i[l1d_rf.cal_band-1])*K_RF)>>15 ); /* calculate DC_RF_3 */
   l1d_rf2.tx_dc_rf_q[l1d_rf.cal_band-1][idx-2] = ( ((dc_q-l1d_rf2.tx_dc_bb_q[l1d_rf.cal_band-1])*K_RF)>>15 ); /* >>15 */

      #elif IS_RF_MT6163
         #if IS_BBTXRX_CHIP_DESIGN_VER_3
   /* gainrf 3 (high-power mode) has different dc_rf_i/dc_rf_q from gainrf 4~6 (low-power mode) due to C0h gainrf_lp setting */
   {  unsigned char i;
      unsigned char band = l1d_rf.cal_band-1;

      for( i=0; i<=3; i++ )
      {
         l1d_rf2.tx_gain_error[band][i]  = g;
         l1d_rf2.tx_phase_error[band][i] = phi;
      }

      l1d_rf2.tx_dc_comp_i[band][idx] = l1d_rf2.tx_dc_meas_i[band][0]+l1d_rf2.tx_dc_meas_i[band][1]+l1d_rf2.tx_dc_meas_i[band][2];
      l1d_rf2.tx_dc_comp_q[band][idx] = l1d_rf2.tx_dc_meas_q[band][0]+l1d_rf2.tx_dc_meas_q[band][1]+l1d_rf2.tx_dc_meas_q[band][2];
   }
         #else
   /* gainrf 3 (high-power mode) has different dc_rf_i/dc_rf_q from gainrf 4~6 (low-power mode) due to C0h gainrf_lp setting */
   {  unsigned char i, start, end;

      if( idx==0 )
      {  start=0; end=0;  }   /* gainRF 3 */
      else
      {  start=1; end=3;  }   /* gainRF 4~6 */

      for( i=start; i<=end; i++ )
      {
         l1d_rf2.tx_gain_error[l1d_rf.cal_band-1][i]  = g;
         l1d_rf2.tx_phase_error[l1d_rf.cal_band-1][i] = phi;
         l1d_rf2.tx_dc_rf_i[l1d_rf.cal_band-1][i] = ( ((dc_i-l1d_rf2.tx_dc_bb_i[l1d_rf.cal_band-1])*K_RF)>>15 ); /* calculate DC_RF_3 */
         l1d_rf2.tx_dc_rf_q[l1d_rf.cal_band-1][i] = ( ((dc_q-l1d_rf2.tx_dc_bb_q[l1d_rf.cal_band-1])*K_RF)>>15 ); /* >>15 */
      }
   }
         #endif
      #endif
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

signed short L1D_RF_TXIQMM_Query_IQ_Setup( char query_idx, signed short band, signed short gain_rf )
{
   #if IS_RF_TX_CALIBRATION_SUPPORT
   signed long  gain, phseli;

   /* Copy computation from L1D_RF_SetEPSKTxIQ() */
   switch( query_idx )
   {
      case 0: /* gain_comp */
      {
         if( l1d_rf2.tx_gain_error[band-1][gain_rf-3]>0 ) /* I is greater than Q */
         {
            /* iqgain_sel = 0, choose I to compensate */
            gain = UNITY_ONE+(-2)*l1d_rf2.tx_gain_error[band-1][gain_rf-3];
            gain = ( ((gain-UNITY_ONE)>>6)+1 );
         }
         else if( l1d_rf2.tx_gain_error[band-1][gain_rf-3]<0 ) /* Q is greater than I */
         {
            /* iqgain_sel = 1, choose Q to compensate */
            gain = UNITY_ONE+2*l1d_rf2.tx_gain_error[band-1][gain_rf-3];
            gain = ( ((gain-UNITY_ONE)>>6)+1 );
         }
         else
         {
            gain = 0;
         }

         if( gain < -TX_GAIN_COMP_THRESHOLD )
         {  gain = -TX_GAIN_COMP_THRESHOLD;  }

         return (signed short)gain;
      }
      case 1: /* iqgain_sel */
      {
         return (l1d_rf2.tx_gain_error[band-1][gain_rf-3]>0) ? 0 : 1;
      }
      case 2: /* phseli */
      {
         if( l1d_rf2.tx_phase_error[band-1][gain_rf-3]>0 )
         {
            phseli = ( ((l1d_rf2.tx_phase_error[band-1][gain_rf-3])*RAD_2_DEG)>>15 );
            phseli = ( (phseli*DEG_2_BFEDAC)>>22 );
         }
         else
         {
            phseli = ( ((-l1d_rf2.tx_phase_error[band-1][gain_rf-3])*RAD_2_DEG)>>15 );
            phseli = -( (phseli*DEG_2_BFEDAC)>>22 );
         }

         if( phseli> TX_PHASE_COMP_THRESHOLD ) phseli =  TX_PHASE_COMP_THRESHOLD;
         if( phseli<-TX_PHASE_COMP_THRESHOLD ) phseli = -TX_PHASE_COMP_THRESHOLD;

         return (signed short)phseli;
      }
      default:
      {  return 0;   }
   }
   #else
   return 0;
   #endif /* IS_RF_TX_CALIBRATION_SUPPORT */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Set_BULON( void )
{
   #if IS_RF_TX_CALIBRATION_SUPPORT
   unsigned short d16;

      #if IS_TDMA_AD_DA_WINDOW_SUPPORT
   /* set BTXEN to BTXFS setup up time in quarter bit unit QB_TX_FENA_2_FSYNC (152) */
   /* add ONE more than the #else setting is because QB_TX_DAEN_2_FENA(25) should be considered */
   d16 = HW_READ(TDMA_BULCON1);
   d16 &= ~0xFF00;
   d16 |=  0xB200;
   HW_WRITE(TDMA_BULCON1, d16);

         #if IS_BBTXRX_CHIP_DESIGN_VER_3
   /* set when the TX compensation action starts after TX_EN */
   /* set the same value as the #else setting except that the register is changed to TX_CON1 */
   d16 = HW_READ(TX_CON1);
   d16 &= ~0x00FF;
   d16 |=  0x0096;
   HW_WRITE(TX_CON1, d16);
         #else
   /* set when the TX compensation action starts after TX_EN */
   /* set 96h to BFE_TXCOMP_HYS[15:8] in TDMA_BULCON2 (150Qbits) QB_TX_FENA_2_FSYNC (152) */
   d16 = HW_READ(TDMA_BULCON2);
   d16 &= ~0xFF00;
   d16 |=  0x9600;
   HW_WRITE(TDMA_BULCON2, d16);
         #endif
      #else
   /* set BTXEN to BTXFS setup up time in quarter bit unit */
   /* set 97h to DAC_ON[15:8] in TDMA_BULCON1 (151Qbits) QB_TX_FENA_2_FSYNC (152) */
   d16 = HW_READ(TDMA_BULCON1);
   d16 &= ~0xFF00;
   d16 |=  0x9800;
   HW_WRITE(TDMA_BULCON1, d16);

   /* set when the TX compensation action starts after TX_EN */
   /* set 96h to BFE_TXCOMP_HYS[15:8] in TDMA_BULCON2 (150Qbits) QB_TX_FENA_2_FSYNC (152) */
   d16 = HW_READ(TDMA_BULCON2);
   d16 &= ~0xFF00;
   d16 |=  0x9600;
   HW_WRITE(TDMA_BULCON2, d16);
      #endif
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Recover_BULON( void )
{
   #if IS_RF_TX_CALIBRATION_SUPPORT
   L1D_RF_Init_DLUL();
      #if IS_BBTXRX_CHIP_DESIGN_VER_3
   HW_WRITE(TX_CON1, TX_CNT_TGT_DEFAULT);
      #endif
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #if IS_BBTXRX_CHIP_DESIGN_VER_3
void  L1D_RF_TXIQMM_PowerIndex( unsigned char pwr_idx )
{
      #if IS_RF_TX_CALIBRATION_SUPPORT
   l1d_rf2.tx_cal_power_index = LOWEST_TX_POWER[l1d_rf.cal_band] + pwr_idx*2; //(l1d_rf.cal_band<=FrequencyBand900) ? (5+pwr_idx*2) : (0+pwr_idx*2);
      #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif
#endif /* IS_BBTXRX_CHIP_DESIGN_VER_2 || IS_BBTXRX_CHIP_DESIGN_VER_3 */

#if IS_DLIF_CHIP || IS_DCR_IN_DLIF_CHIP
unsigned short L1D_Set_TXCON0( unsigned short tx_con0 )
{
   unsigned short return_tx_con0 = tx_con0;
   #if IS_BBTXRX_CHIP_DESIGN_VER_3
      #if IS_RF_TX_CALIBRATION_SUPPORT
   /* set all_10_gen to 1 during TXIQMM */
   if( L1D_RF_TXIQMM_Check() )
   {  return_tx_con0 |= (0x1<<8);  }
      #endif

   if( L1D_Check_SW_SecVersion() )
   {  /* no need to set MD_SEL[5:0] on the MT6589 modem 2 E1 version */
      return_tx_con0 &= ~0x003F;
   }
   else
   {  /* keep setting MD_SEL[5:0] on the MT6589 modem 2 E2 and later versions */
   }
   #endif
   return return_tx_con0;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_BBTXRX_CHIP_DESIGN_VER_2 */

#if IS_RF_MT6162 || IS_RF_MT6163
char L1D_RF_Get6162Version( void )
{
   char return_version = 0;
   if( (l1d_rf2.mt6162_rfid==RF_MT6162_ID_REV0_0A)||(l1d_rf2.mt6162_rfid==RF_MT6162_ID_REV0_0B)||(l1d_rf2.mt6162_rfid==RF_MT6162_ID_REV0_1A)||(l1d_rf2.mt6162_rfid==RF_MT6162_ID_REV0_1B) )
   {  return_version = 1;  } /* E1 version */
   else
   {  return_version = 2;  } /* E2 version */
   return return_version;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

char L1D_RF_CheckDMPower( void )
{
   return (l1d_rf2.is_2g_on&0x1); /* use bit[0] to indicate the 2G state */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_GetClockControl( void )
{
   unsigned long return_clock = 0;

   #if IS_RF_MT6162
   return_clock = 0xE20020F|(CLK_EN_TABLE[2]<<12)|(CLK_EN_TABLE[1]<<11)|(CLK_EN_TABLE[0]<<10);
   #elif IS_RF_MT6163
   return_clock = 0xE200007|(CLK_EN_TABLE[3]<<13)|(CLK_EN_TABLE[2]<<12)|
                            (CLK_EN_TABLE[1]<<11)|(CLK_EN_TABLE[0]<<10);
   #endif

   return return_clock;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_SetTxGainWrite( unsigned short mod_type, char slot_idx, signed short tx_power, FrequencyBand rf_band )
{
   signed short     gain_det;
   signed short     gain_rf = 0;
   signed short     gain_bb = 0;
   signed short     gain_cpl;
   signed short     power_dbm = tx_power;
   signed short     power_dbm_oh = tx_power;
   signed short     lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
   unsigned long    tx_gain_write;
   #if IS_EPSK_TX_SUPPORT
   signed short     power_idx, rollback_gain;
   unsigned short   lb_or_hb = (rf_band<=FrequencyBand900) ? 0 : 1;
   unsigned short   weighted_PA_gain;
   unsigned short   n = WEIGHT(1.0);
   const sRAMPDATA *band;
   static   const   sARFCN_SECTION*  weight;    // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
   #endif

   if( power_dbm > (lowest_dbm+2*15) )
   {  power_dbm = lowest_dbm+2*15;  }
   else if( power_dbm < lowest_dbm )
   {  power_dbm = lowest_dbm;  }

   #if IS_EPSK_TX_SUPPORT
   if( (mod_type>>slot_idx)&0x1 )
   {  /* 8psk */
      band = RampData_EPSK[(int)rf_band];
      if( lb_or_hb )
         power_dbm_oh = ( power_dbm > 26 ) ? 26 : power_dbm; //High band
      else
         power_dbm_oh = ( power_dbm > 27 ) ? 27 : power_dbm; //Low band

      #if IS_TX_POWER_CONTROL_SUPPORT
      if( l1d_rf.txpc_type==TXPC_BSI_CLOSED_TYPE )
      {  /* detector sub-band compensation */
         power_idx = (power_dbm-lowest_dbm)/2;
         weighted_PA_gain = (unsigned short)(band->power[power_idx]);
      }
      else
      #endif
      {  /* TX power sub-band compensation */
         weight = WeightARFCN_BinarySearch((l1d_rf2.arfcn&0x3FF), l1d_rf.band , band->arfcn_weight, 1);
         if( weight )
         {  n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;  }
         else // no entry, not found
         {  n = WEIGHT(1.0);  }
         power_idx = (power_dbm-lowest_dbm)/2;
         weighted_PA_gain = (unsigned short)( ( band->power[power_idx]*n )>>14 );
      }

      /*TX power rollback start*/
      rollback_gain = L1D_RF_PowerRollback( power_dbm_oh, l1d_rf.band, n, 1); /* input power_dbm_oh instead of power_dbm to avoid wrong rollback output on high-power PCL in META mode */
      weighted_PA_gain -= rollback_gain;
      /*TX power rollback end*/

      #if IS_TX_POWER_CONTROL_SUPPORT
      {  short arfcn = (short)((rf_band==FrequencyBand1900)? (l1d_rf2.arfcn|0x400) : l1d_rf2.arfcn);
         if( rollback_gain == 0 )
         {  L1D_RF_TXPC_RECORD_PARAM( 3, band, (unsigned short)n, power_idx, 0, 0 );   }
         weighted_PA_gain = (unsigned short)L1D_RF_TXPC_RecUpdateGain( weighted_PA_gain, rf_band, arfcn, (short)slot_idx );
      }
      #endif

      #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
      /* TX power battery compensation : Voltage & Temperature */
      L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();
      L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,16,weighted_PA_gain);
      if( (!L1D_CheckIfMetaMode()) || (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
      {  n = band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp];  } //battery volt.& Temp. compensate
      else
      {  n = WEIGHT(1.0);  }
      weighted_PA_gain = (unsigned short)( ( weighted_PA_gain*n )>>14 );
      L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,16,weighted_PA_gain);
      #endif

      gain_cpl = (rf_band<=FrequencyBand900) ? GAIN_CPL_LB : GAIN_CPL_HB;
      gain_rf = (signed short) (RFSpecialCoef.rx.mt6162_gain_rf.gain_rf_table[rf_band-1].map[power_idx]);
      gain_bb = (signed short)( 1023-weighted_PA_gain );
      /* the range of gain_bb is 0~1023 (10bits) */
      if( gain_bb < 0 ) gain_bb = 0;
      else if( gain_bb > 1023 ) gain_bb = 1023;

      gain_det = ( (GAIN_PBBOFS)-(gain_cpl)-((power_dbm_oh<<8)-POWER_BB) )>>8;
   }
   else
   #endif
   {  /* GMSK: Only for calculate gain_det */
      power_dbm_oh = power_dbm;
      gain_cpl = (rf_band<=FrequencyBand900) ? GAIN_CPL_LB : GAIN_CPL_HB;
      gain_rf  = 0xF; /* Although we do not use gain_rf and gain_bb in the GMSK mode, we set them to the minimum value */
      gain_bb  = 0x3FF;
      gain_det = ( (GAIN_PBBOFS)+(POWER_BB)-(power_dbm_oh<<8)+(-gain_cpl) )>>8; //{  g_det = (-9)+(2.97)-(power_dbm)+(-1)-(-38);  }  /* (G_pbbofs)+(P_bb)-(P_ant)+(G_pref_attn)-(G_attn_gsm) */
   }

   gain_det = ( gain_det < 3 ) ? (0) : (gain_det/3-1);
   gain_det = ( gain_det >= 10 ) ? (10) : (gain_det);

   tx_gain_write = ( (gain_det&0xF)<<16 ) | ( (gain_rf&0xF)<<12 ) | ( (gain_bb&0x3FF)<<2 );
   #if IS_TX_POWER_CONTROL_SUPPORT
   l1d_rf2.tx_gain_setting[(unsigned char)slot_idx] = ( ((gain_rf&0xF)<<10) | (gain_bb&0x3FF) );
   #endif

   return tx_gain_write;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #if IS_RF_RX_DCOC_SUPPORT
void L1D_RF_RXDCOffset_Init( void )
{
   signed int band, gain;

   for( band=0; band<4; band++ )
   {  for( gain=0; gain<4; gain++ )
      {  l1d_rf2.rx_dc_offset_i[band][gain] = 0;
         l1d_rf2.rx_dc_offset_q[band][gain] = 0;
      }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif

   #if IS_RF_TX_CALIBRATION_SUPPORT
void L1D_RF_TXIQMM_Init( void )
{
   signed int band, gain;

   for( band=0; band<4; band++ )
   {
      l1d_rf2.tx_dc_bb_i[band] = 0;
      l1d_rf2.tx_dc_bb_q[band] = 0;
      for( gain=0; gain<4; gain++ )
      {
         l1d_rf2.tx_gain_error[band][gain] = 0;
         l1d_rf2.tx_phase_error[band][gain] = 0;
         l1d_rf2.tx_dc_rf_i[band][gain] = 0;
         l1d_rf2.tx_dc_rf_q[band][gain] = 0;
      }
   }

      #if IS_BBTXRX_CHIP_DESIGN_VER_3
   for( band=0; band<4; band++ )
   {
      for( gain=0; gain<16; gain++ )
      {
         l1d_rf2.tx_dc_comp_i[band][gain] = 0;
         l1d_rf2.tx_dc_comp_q[band][gain] = 0;
      }

      for( gain=0; gain<3; gain++ )
      {
         l1d_rf2.tx_dc_meas_i[band][gain] = 0;
         l1d_rf2.tx_dc_meas_q[band][gain] = 0;
      }
   }
      #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetEPSKTxIQ( signed short slot_idx, unsigned long tx_gain_write )
{
   signed short   band = (signed short)l1d_rf.band;
   signed short   dc_corr_i, dc_corr_q;
   signed short   gain_rf;
   signed long    gain, iqgain_sel, phseli, phselq;
   BFETXCON       bfetxcon;
      #if IS_BBTXRX_CHIP_DESIGN_VER_3
   signed short   power_idx = (l1d_rf2.tx_power[slot_idx]-LOWEST_TX_POWER[band])/2;  /* 0: the smallest power; 15: the biggest power */
      #else
   signed short   gain_bb;
   unsigned short gain_bb_inverse;
      #endif

   gain_rf = (tx_gain_write>>12)&0xF;
      #if IS_BBTXRX_CHIP_DESIGN_VER_3
      #else
   gain_bb = (tx_gain_write>> 2)&0x3FF;
   gain_bb_inverse = TX_GAIN_BB_TABLE[(gain_bb>>6)].gain_bb_inverse + (((TX_GAIN_BB_TABLE[(gain_bb>>6)+1].gain_bb_inverse-TX_GAIN_BB_TABLE[(gain_bb>>6)].gain_bb_inverse)*(gain_bb-TX_GAIN_BB_TABLE[(gain_bb>>6)].gain_bb_dac))>>6); /* >>6 */
      #endif

   if( gain_rf<3 )
   {  gain_rf = 3;  }   /* gain_rf may be 2 when IS_OT_2G_HB_HIGH_TX_GAIN_ON is 1 */
   else if( gain_rf>6 )
   {  gain_rf = 6;  }

      #if IS_BBTXRX_CHIP_DESIGN_VER_3
   dc_corr_i = -( (VOLT_2_DCDAC*l1d_rf2.tx_dc_comp_i[(band-1)][power_idx])>>15 );
   dc_corr_q = -( (VOLT_2_DCDAC*l1d_rf2.tx_dc_comp_q[(band-1)][power_idx])>>15 );
      #else
   dc_corr_i = -( (VOLT_2_DCDAC*(l1d_rf2.tx_dc_bb_i[band-1]+((l1d_rf2.tx_dc_rf_i[band-1][gain_rf-3]*gain_bb_inverse)>>11)))>>15 );
   dc_corr_q = -( (VOLT_2_DCDAC*(l1d_rf2.tx_dc_bb_q[band-1]+((l1d_rf2.tx_dc_rf_q[band-1][gain_rf-3]*gain_bb_inverse)>>11)))>>15 );
      #endif

   if( l1d_rf2.tx_gain_error[band-1][gain_rf-3]>0 ) /* I is greater than Q */
   {  iqgain_sel = 0; /* choose I to compensate */
      gain = UNITY_ONE+(-2)*l1d_rf2.tx_gain_error[band-1][gain_rf-3];
      gain = ( ((gain-UNITY_ONE)>>6)+1 );
   }
   else if( l1d_rf2.tx_gain_error[band-1][gain_rf-3]<0 ) /* Q is greater than I */
   {  iqgain_sel = 1; /* choose Q to compensate */
      gain = UNITY_ONE+2*l1d_rf2.tx_gain_error[band-1][gain_rf-3];
      gain = ( ((gain-UNITY_ONE)>>6)+1 );
   }
   else
   {  iqgain_sel = 0;
      gain = 0;
   }

   if( l1d_rf2.tx_phase_error[band-1][gain_rf-3]>0 )
   {
      phselq = ( ((l1d_rf2.tx_phase_error[band-1][gain_rf-3])*RAD_2_DEG)>>15 );
      phselq = ( (phselq*DEG_2_BFEDAC)>>22 );
      phseli = phselq;
   }
   else
   {
      phseli = ( ((-l1d_rf2.tx_phase_error[band-1][gain_rf-3])*RAD_2_DEG)>>15 );
      phseli = -( (phseli*DEG_2_BFEDAC)>>22 );
      phselq = phseli;
   }

   if( gain<-TX_GAIN_COMP_THRESHOLD    ) gain   = -TX_GAIN_COMP_THRESHOLD;
   if( phseli> TX_PHASE_COMP_THRESHOLD ) phseli =  TX_PHASE_COMP_THRESHOLD;
   if( phseli<-TX_PHASE_COMP_THRESHOLD ) phseli = -TX_PHASE_COMP_THRESHOLD;
   if( phselq> TX_PHASE_COMP_THRESHOLD ) phselq =  TX_PHASE_COMP_THRESHOLD;
   if( phselq<-TX_PHASE_COMP_THRESHOLD ) phselq = -TX_PHASE_COMP_THRESHOLD;
   if( dc_corr_i> TX_DC_COMP_THRESHOLD ) dc_corr_i =  TX_DC_COMP_THRESHOLD;
   if( dc_corr_i<-TX_DC_COMP_THRESHOLD ) dc_corr_i = -TX_DC_COMP_THRESHOLD;
   if( dc_corr_q> TX_DC_COMP_THRESHOLD ) dc_corr_q =  TX_DC_COMP_THRESHOLD;
   if( dc_corr_q<-TX_DC_COMP_THRESHOLD ) dc_corr_q = -TX_DC_COMP_THRESHOLD;

   /* set l1d_rf2.tx_gain_error[gain_rf-3], l1d_rf2.tx_phase_error[gain_rf-3], dc_corr_i, and dc_corr_q to different slot_idx */
   bfetxcon.field1.gain_comp  = (signed short)(gain);
   bfetxcon.field1.iqgain_sel = (signed short)(iqgain_sel);
   bfetxcon.field1.phseli     = (signed short)(phseli);
   bfetxcon.field1.phselq     = (signed short)(phselq);
   bfetxcon.field1.offi       = dc_corr_i;
   bfetxcon.field1.offq       = dc_corr_q;
   L1D_BFE_SET_TX_CON( slot_idx, &bfetxcon );
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif /* end IS_RF_TX_CALIBRATION_SUPPORT */
#endif /* IS_RF_MT6162 || IS_RF_MT6163 */


#if IS_RF_MT6280RF || IS_RF_MT6166|| IS_RF_MT6165
char L1D_RF_CheckDMPower( void )
{
   return (l1d_rf2.is_2g_on&0x1); /* use bit[0] to indicate the 2G state */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #if IS_RF_MT6280RF
void L1D_RF_RxDCOC_Init( void )
{  /* Only MT6280RF do RxDCOC, and need RxDCOC Initialization */
   signed int band, gain;

   for( band=0; band<4; band++ )
   {  for( gain=0; gain<10; gain++ )
      {  l1d_rf2.rxif_dcoc_daci_m[band][gain] = 0;
         l1d_rf2.rxif_dcoc_dacq_m[band][gain] = 0;
      }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif
   #if IS_RF_MT6166 || IS_RF_MT6165
void L1D_RF_SetClockControl( void )
{
   /*******************************************************************/
   /* Set Co-Clock on/off setting, and BB Clock must be always on.    */
   /* CW247 includes AFC DAC & BB Clock On/Off, any CW247 update must */
   /* take current AFC DAC into condideration.                        */
   /*******************************************************************/
   unsigned long co_clock_setting,cw252,cw253;
   co_clock_setting = (CLK_EN_TABLE[3]<<2)|(CLK_EN_TABLE[2]<<1)|(CLK_EN_TABLE[1]);
   cw252            = (POR_CW252&(~0x00000070))|((co_clock_setting&CO_CLOCK_MASK)<<4); //CW252: SW_EN
   cw253            = (POR_CW253&(~0x00000007))|((~co_clock_setting)&CO_CLOCK_MASK);   //CW253: HW/SW Control(0:HW 1:SW)
   IMM_SEND_BSI(SCTRL_IMOD(0,30),cw252);
   IMM_SEND_BSI(SCTRL_IMOD(0,30),cw253);
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif
   #if IS_RF_MT6166
unsigned long L1D_RF_GetRXRCKResult( void )
{
   unsigned long cw144;
   if( (l1d_rf2.is_power_on_cal)&(RXRC_CAL_DONE) )
      cw144 = ( POR_CW144 &(~(RXIF_RCK_MASK)) ) | ( (l1d_rf2.rxif_rck_m&RXIF_RCK_MASK) );  /* CW144  : RXIF_RCK_CAL[5:0] = RXIF_RCK */
   else
      cw144 = ( POR_CW144 );
   return cw144;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #endif
void L1D_RF_Gainrf_Init( void )
{
   signed int  band, gain;
   #if IS_CHIP_MT6280
   signed char i;

   const signed int Sim_Gvga_rf_LB[][14] =  {
   #if IS_CHIP_MT6280_S00
                                             { -388, -422, -462, -511, -572, -615, -650, -761,  -984, -1176, -1374, -1564, -1760, -1945 },
   #else
                                             { -330, -443, -483, -532, -592, -636, -671, -782, -1005, -1197, -1395, -1585, -1780, -1966 },
                                             { -330, -441, -478, -526, -583, -623, -657, -768,  -973, -1174, -1363, -1544, -1722, -1936 }
   #endif
                                           };
   const signed int Sim_Gvga_rf_HB[][14] = {
   #if IS_CHIP_MT6280_S00
                                             { -202, -235, -273, -320, -379, -406, -447, -556,  -693,  -884, -1053, -1243, -1429, -1616 },
   #else
                                             { -220, -253, -291, -338, -397, -424, -465, -574,  -711,  -902, -1071, -1261, -1447, -1634 },
                                             { -260, -362, -398, -442, -498, -520, -556, -660,  -804,  -995, -1181, -1373, -1549, -1727 }
   #endif
                                           };
   i = ( chip_ver == 0x11 || chip_ver == 0x21) ? 0 : 1;
   #elif IS_RF_MT6166
   const signed int Sim_Gvga_rf_LB[14] = { -348, -442, -480, -527, -586, -621, -664, -774, -914, -1103, -1285, -1478, -1653, -1855 };
   const signed int Sim_Gvga_rf_HB[14] = { -306, -503, -542, -590, -650, -693, -735, -846,-1042, -1233, -1490, -1682, -1866, -2070 };
   #endif

   for( band=0; band<4; band++ )
   {  for( gain=0; gain<14; gain++ )
      {
   #if IS_RF_MT6166
         l1d_rf2.Gvga_rf[band][gain] = (band<2) ? Sim_Gvga_rf_LB[gain] : Sim_Gvga_rf_HB[gain];
   #elif IS_CHIP_MT6280
         l1d_rf2.Gvga_rf[band][gain] = (band<2) ? Sim_Gvga_rf_LB[i][gain] : Sim_Gvga_rf_HB[i][gain];
   #endif
      }
   }
   #if IS_RF_MT6165
   const signed int Sim_Gvga_rf_LB[TX_GAIN_STEP_NUM] = { -228, -330, -364, -404, -452, -512, -542, -577, -618,  -668, -804,   -993, -1165 };
   const signed int Sim_Gvga_rf_HB[TX_GAIN_STEP_NUM] = { -434, -469, -511, -560, -619, -660, -707, -763, -830, -1045, -1236, -1449, -1635 };

   for( band=0; band<4; band++ )
   {  for( gain=0; gain<TX_GAIN_STEP_NUM; gain++ )
      {
         l1d_rf2.Gvga_rf[band][gain] = (band<2) ? Sim_Gvga_rf_LB[gain] : Sim_Gvga_rf_HB[gain];
      }
   }   
   #endif
   
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void SPECIAL_IMM_RECEIVE_BSI( uintBSI ADD_Ctrl, unsigned long ADD, uintBSI DATA_Ctrl, unsigned long *DATA )
{
   #ifndef L1_SIM
   /* do nothing; just to avoid build-warning */
   (void)ADD_Ctrl; (void)DATA_Ctrl; (void)*DATA;

   HW_WRITE( BSI_RDCON, BSI_RDCON_START_SETTING  );
   HW_WRITE( BSI_RDADDR_CON, BSI_RDADDR_CON_MAIN );
   HW_WRITE( BSI_RDADDR, SPECIAL_BSI_RDADDRn(ADD));
      #if IS_BSISPI_SEPARATE_SUPPORT
      #else
   HW_WRITE( BSI_RDCS_CON, BSI_RDCS_CON_MAIN     );
      #endif
   HW_WRITE( BSI_RDDAT_H, 0x0                    ); /* Clear Ready bit before triggering immediate read back event */
   HW_WRITE( BSI_RDCON, BSI_RDCON_IMMRD_SETTING  );
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_GetGainBB0CW( signed long gainbb0 )
{  /* dB->linear(code): polynomial fitting */
   signed long G_fxp;
   signed long r, z, y;
   signed int  q=0;

   G_fxp = gainbb0<<5;

   while( G_fxp<0 )
   {  G_fxp += 6165;
     q++;
   }

   r = G_fxp<<2;
   z = ( (9743*r)+(1<<14) )>>15;
   z = ( (z+14323)*r+(1<<14) )>>15;
   z += 16412;
   y = (1<<GAINBB0_CODE_LENGTH)-(((z>>q)+(1<<(14-GAINBB0_CODE_LENGTH-1)))>>(14-GAINBB0_CODE_LENGTH));
   if( y<0 ) y=0;

   return (unsigned long)y;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #if IS_RF_MT6280RF
void  L1D_RF_TxGainSetting( unsigned short mod_type, char slot_idx, signed short tx_power, FrequencyBand rf_band, unsigned long *cw41, unsigned long *cw42 )
{
   signed short     gain_bb0   = 0;
   signed short     power_dbm  = tx_power;
   signed short     lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
   #if IS_EPSK_TX_SUPPORT
   signed short     gain_det = 0; //for close loop
   signed short     gain_cpl = 0; //for close loop
   signed short     power_dbm_rollback = tx_power;
   signed short     subband_dB;
   signed short     rollback_gain;
   signed short     remaining_gain;
   signed short     pcl_max      = (rf_band<=FrequencyBand900) ? 19 : 15;
   signed short     backoff_gain = (rf_band<=FrequencyBand900) ? GAIN_BACKOFF_LB : GAIN_BACKOFF_HB;
   unsigned short   lb_or_hb     = (rf_band<=FrequencyBand900) ? 0 : 1;
   unsigned short   n = ((0.0)*(1<<3)) + 4096;
   static   const   sARFCN_SECTION*  weight;    // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
   const sRAMPDATA *band;
   pa_vbias *ofs_ptr;
   signed short     power_idx   = 0;
   signed short     pa_gain_idx = 0;
   signed short     gainrf_idx  = 0;
   signed short     gaindet_idx = 0;
   signed char      TX_GBB1     = 0;
   signed char      TX_PGA      = 0;
   signed char      TX_RFPGA_SLICE = 0;
   signed char      i;
   /* CW41 conpoment : TX_RFPGA_SLICE_LSB,TX_GBB1[3:0],TX_PGA[3:0],TX_RFPGA_SLICE[3:0],TX_RFPGA_VCS[3:0],TX_CAPDIV_ATTNSEL[2:0] */
   /*                Gain Index[14]          = {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13 }; */
   const signed char TX_RFPGA_SLICE_LSB[14]  = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 };
      #if IS_CHIP_MT6280_S00
   const signed char TX_GBB1_LB[14]          = {  3,  3,  3,  3,  3,  4,  3,  3,  8,  8,  9,  9,  9,  9 };
      #else
   const signed char TX_GBB1_LB[14]          = {  0,  4,  4,  4,  4,  5,  4,  4,  9,  9, 10, 10, 10, 10 };
      #endif
   const signed char TX_GBB1_HB[][14]        = {
      #if IS_CHIP_MT6280_S00
                                                { 0,  0,  0,  0,  0,  5,  5,  5,  6,  6,  7,  7,  7,  7 },
      #else
                                                { 1,  1,  1,  1,  1,  6,  6,  6,  7,  7,  8,  8,  8,  8 },
                                                { 3,  6,  6,  6,  6,  9,  9,  9, 10, 10, 11, 11, 11, 11 }
      #endif
                                               };
   const signed char TX_PGA_LB[][14]         = {{ 8,  7,  6,  5,  4,  4,  3,  2,  4,  2,  2,  1,  1,  1 },
                                                { 8,  7,  6,  5,  4,  4,  3,  2,  4,  2,  2,  1,  0,  0 }};
   const signed char TX_PGA_HB[][14]         = {{ 8,  7,  6,  5,  4,  7,  6,  4,  4,  2,  2,  1,  1,  1 },
                                                { 8,  7,  6,  5,  4,  7,  6,  4,  4,  2,  2,  1,  0,  0 }};
   const signed char TX_RFPGA_SLICE_LB[14]   = { 15, 15, 15, 15, 15, 14, 15, 15,  3,  3,  1,  1,  0,  0 };
   const signed char TX_RFPGA_SLICE_HB[14]   = { 15, 15, 15, 15, 15,  7,  7,  7,  3,  3,  1,  1,  0,  0 };
   const signed char TX_RFPGA_VCS[14]        = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8 };
   const signed char TX_CAPDIV_ATTNSEL[14]   = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  4 };
   /* CW42 compoment : TXDET_TZ_96K_EN,TXDET_TZ_12K_EN,TXDET_GAIN[5:0],MEAS_SEL[1:0],TXDET_PGAG[3:0],TXDET_EN_TZ_LOWGAIN,hsupa_en,TX_RFPGA_VAC[3:0] */
   /*                Gain Index[14]          = {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13 }; */
   const signed char TXDET_TZ_96K_EN[14]     = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 };
   const signed char TXDET_TZ_12K_EN[14]     = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 };
   const signed char TXDET_GAIN[14]          = { 27, 24, 21, 18, 15, 12,  9,  6,  3,  0, -3, -6, -9,-12 };
   const signed char MEAS_SEL                = 0;
   const signed char TXDET_PGAG[14]          = {  8,  7,  6,  5,  4,  3,  2,  1,  0,  5,  4,  3,  2,  1 };
   const signed char TXDET_EN_TX_LOWGAIN[14] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1 };
   const signed char hsupa_en                = 0;
   const signed char TX_RFPGA_VAC[14]        = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  8 };
   #endif

   if( power_dbm > (lowest_dbm+2*15) )
      power_dbm = lowest_dbm+2*15;
   else if( power_dbm < lowest_dbm )
      power_dbm = lowest_dbm;

   #if IS_EPSK_TX_SUPPORT
   if( (mod_type>>slot_idx)&0x1 )
   {  /* 8psk */
      band = RampData_EPSK[(int)rf_band];
      /* Prevent META pass invalid power value in EPSK ( tx_power > EPSK_LB/HB_MAX_POWER ) */
      /* which will cause the rollback function fail. In normal mode, it doesn't matter    */
      if( lb_or_hb )
         power_dbm_rollback = ( power_dbm > EPSK_HB_MAX_POWER ) ? EPSK_HB_MAX_POWER : power_dbm; //High band
      else
         power_dbm_rollback = ( power_dbm > EPSK_LB_MAX_POWER ) ? EPSK_LB_MAX_POWER : power_dbm; //Low band

      switch( l1d_rf.band )
      {
         case FrequencyBand850:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias;
            break;
         case FrequencyBand900:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias;
            break;
         case FrequencyBand1800:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias;
            break;
         case FrequencyBand1900:
         default:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias;
      }

      power_idx = (power_dbm-lowest_dbm)/2;
      remaining_gain   = (signed short)(band->power[power_idx]); //S12.3

      remaining_gain   = (remaining_gain<<5) - POWER_BB0; //S7.8

      /* TX power sub-band compensation */
      weight = WeightARFCN_BinarySearch((l1d_rf2.arfcn&0x3FF), l1d_rf.band , band->arfcn_weight, 1);
      if( weight )
         n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
      else // no entry, not found
         n = ((0.0)*(1<<3)) + 4096;
      subband_dB = (signed short)(n) - 4096; //S12.3
      remaining_gain  += (subband_dB<<5); //S7.8

      /* TX power rollback */
      rollback_gain    = L1D_RF_PowerRollback( power_dbm_rollback, l1d_rf.band, n, 1); /* input power_dbm_rollback instead of power_dbm to avoid wrong rollback output on high-power PCL in META mode */
      remaining_gain  -= (rollback_gain<<5); //S7.8

      #if IS_TX_POWER_CONTROL_SUPPORT
      {  short arfcn = (short)((rf_band==FrequencyBand1900)? (l1d_rf2.arfcn|0x400) : l1d_rf2.arfcn);
         if( rollback_gain == 0 )
         {  L1D_RF_TXPC_RECORD_PARAM( 3, band, (unsigned short)n, power_idx, 0, 0 );   }
         remaining_gain = (signed short)L1D_RF_TXPC_RecUpdateGain( remaining_gain, rf_band, arfcn, (short)slot_idx );
      }
      #endif

      #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
      {  /* TX power battery compensation - Voltage & Temperature */
         signed short     batcomp_dB;
         L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();
         L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,17,remaining_gain);
         if( (!L1D_CheckIfMetaMode()) || (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
         {  n = band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp];  } //battery volt.& Temp. compensate
         else
         {  n = ((0.0)*(1<<3)) + 4096; }
         batcomp_dB = (signed short)(n) - 4096; //S12.3
         remaining_gain += (batcomp_dB<<5);     //S7.8
         L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,17,remaining_gain);
      }
      #endif

      remaining_gain >>= 3;                  //S10.5

      /* TX PA Gain */
      while( (pcl_max-power_idx) > ofs_ptr[pa_gain_idx].pcl_index )
      {
         if( ofs_ptr[pa_gain_idx].pcl_index == -1 )
         {  /* avoid using the unwanted PA Gain */
            if( pa_gain_idx > 0 )
               pa_gain_idx--;
            break;
         }
         pa_gain_idx++;
         if( pa_gain_idx>=15 ) /* pcl > ofs_ptr[14].pcl_index, all use ofs_ptr[15] */
            break;
      }
      remaining_gain  -= ofs_ptr[pa_gain_idx].pa_gain; //S10.5

      /* Tx search gain rf index */
      if( chip_ver == 0x11 || chip_ver == 0x21 )
      {}
      else
      { backoff_gain = 0; }

      while( (remaining_gain+backoff_gain) < l1d_rf2.Gvga_rf[(rf_band-FrequencyBand850)][gainrf_idx] )
      {  gainrf_idx++;
         if( gainrf_idx>13 ) /* avoid to exceed the l1d_rf2.Gvga_rf array */
            break;
      }
      if( gainrf_idx>0 )
         gainrf_idx--;  /* the remaining gain is compensated by Gbb0, and Gbb0 must < 0 */

      /* Get Gbb0 codeword */
      remaining_gain  -= l1d_rf2.Gvga_rf[(rf_band-FrequencyBand850)][gainrf_idx];
      if( remaining_gain > 0 )
         remaining_gain = 0;
      gain_bb0 = L1D_RF_GetGainBB0CW( remaining_gain );

      /* Calculate expected gain det */
      gain_cpl = GAIN_CPL;   /* Need to check */
      gain_det = ( (POWER_ADC_SETPOINT)-(gain_cpl)-((power_dbm_rollback<<8)-POWER_BB0-(remaining_gain<<3)) )>>8;  //S15.0

      /* Tx search gain det index */
      while( gain_det < TXDET_GAIN[gaindet_idx] )
      {  gaindet_idx++;
         if( gaindet_idx>13 ) /* avoid to exceed the TXDET_GAIN array */
            break;
      }
      if( gaindet_idx>0 )
         gaindet_idx--; /* Find the lowest gain det that larger than TXDET_GAIN[gaindet_idx] */

      i = ( chip_ver == 0x11 || chip_ver == 0x21) ? 0 : 1;
      TX_GBB1        = (rf_band<=FrequencyBand900) ? TX_GBB1_LB[gainrf_idx]        : TX_GBB1_HB[i][gainrf_idx];
      TX_PGA         = (rf_band<=FrequencyBand900) ? TX_PGA_LB[i][gainrf_idx]      : TX_PGA_HB[i][gainrf_idx];
      TX_RFPGA_SLICE = (rf_band<=FrequencyBand900) ? TX_RFPGA_SLICE_LB[gainrf_idx] : TX_RFPGA_SLICE_HB[gainrf_idx];

      *cw41 = ((TX_RFPGA_SLICE_LSB[gainrf_idx]&0x1)<<19)|((TX_GBB1&0xF)<<15)|((TX_PGA&0xF)<<11)|((TX_RFPGA_SLICE&0xF)<<7)|((TX_RFPGA_VCS[gainrf_idx]&0xF)<<3)|(TX_CAPDIV_ATTNSEL[gainrf_idx]&0x7);
      *cw42 = ((TXDET_TZ_96K_EN[gaindet_idx]&0x1)<<19)|((TXDET_TZ_12K_EN[gaindet_idx]&0x1)<<18)|((TXDET_GAIN[gaindet_idx]&0x3F)<<12)|((MEAS_SEL&0x3)<<10)|((TXDET_PGAG[gaindet_idx]&0xF)<<6)|((TXDET_EN_TX_LOWGAIN[gaindet_idx]&0x1)<<5)|((hsupa_en&0x1)<<4)|(TX_RFPGA_VAC[gainrf_idx]&0xF);

      #if IS_TX_POWER_CONTROL_SUPPORT
      l1d_rf2.tx_gain_setting[(unsigned char)slot_idx] = ( ((gainrf_idx&0xF)<<9) | (gain_bb0&0x1FF) );
      #endif

   }
   else
   #endif
   {  /* GMSK: Only for calculate gain_det */
      *cw41 = POR_CW41; /* POR default value */
      *cw42 = POR_CW42; /* POR default value */
   }

   switch( slot_idx )
   {  case 0 : HW_WRITE( TX_PWR0, gain_bb0 ); break;
      case 1 : HW_WRITE( TX_PWR1, gain_bb0 ); break;
      case 2 : HW_WRITE( TX_PWR2, gain_bb0 ); break;
      case 3 : HW_WRITE( TX_PWR3, gain_bb0 ); break;
      case 4 : HW_WRITE( TX_PWR4, gain_bb0 ); break;
      case 5 : HW_WRITE( TX_PWR5, gain_bb0 ); break;
      default: HW_WRITE( TX_PWR0, gain_bb0 ); break;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
   #elif IS_RF_MT6166
void  L1D_RF_TxGainSetting( unsigned short mod_type, char slot_idx, signed short tx_power, FrequencyBand rf_band, unsigned long *cw41, unsigned long *cw42 )
{
   signed short     gain_bb0   = 0;
   signed short     power_dbm  = tx_power;
   signed short     lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
      #if IS_EPSK_TX_SUPPORT
   signed short     gain_det = 0; //for close loop
   signed short     gain_cpl = 0; //for close loop
   signed short     power_dbm_rollback = tx_power;
   signed short     subband_dB;
   signed short     rollback_gain;
   signed short     remaining_gain;
   signed short     pcl_max      = (rf_band<=FrequencyBand900) ? 19 : 15;
   signed short     backoff_gain = (rf_band<=FrequencyBand900) ? GAIN_BACKOFF_LB : GAIN_BACKOFF_HB;
   unsigned short   lb_or_hb     = (rf_band<=FrequencyBand900) ? 0 : 1;
   unsigned short   n = ((0.0)*(1<<3)) + 4096;
   static   const   sARFCN_SECTION*  weight;    // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
   const sRAMPDATA *band;
   pa_vbias *ofs_ptr;
   signed short     power_idx   = 0;
   signed short     pa_gain_idx = 0;
   signed short     gainrf_idx  = 0;
   signed short     gaindet_idx = 0;
   signed char      TX_GBB1     = 0;
   signed char      TX_PGA      = 0;
   signed char      TX_RFPGA_SLICE = 0;
   /* CW41 conpoment : TX_RFPGA_SLICE_LSB,TX_GBB1[3:0],TX_PGA[3:0],TX_RFPGA_SLICE[3:0],TX_RFPGA_VCS[3:0],TX_CAPDIV_ATTNSEL[2:0] */
   /*                Gain Index[14]          = {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13 }; */
   const signed char TX_RFPGA_SLICE_LSB[14]  = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 };
   const signed char TX_GBB1_LB[14]          = {  1,  4,  4,  4,  4,  5,  4,  4,  9,  9, 10, 10, 10, 10 };
   const signed char TX_GBB1_HB[14]          = {  5, 10, 10, 10, 10, 12, 12, 12, 13, 13, 14, 14, 14, 14 };
   const signed char TX_PGA_LB[14]           = {  8,  7,  6,  5,  4,  4,  3,  2,  4,  2,  2,  1,  0,  0 };
   const signed char TX_PGA_HB[14]           = {  8,  7,  6,  5,  4,  7,  6,  4,  4,  2,  2,  1,  0,  0 };
   const signed char TX_RFPGA_SLICE_LB[14]   = { 15, 15, 15, 15, 15, 14, 15, 15,  3,  3,  1,  1,  0,  0 };
   const signed char TX_RFPGA_SLICE_HB[14]   = { 15, 15, 15, 15, 15,  7,  7,  7,  3,  3,  1,  1,  0,  0 };
   const signed char TX_RFPGA_VCS[14]        = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8 };
   const signed char TX_CAPDIV_ATTNSEL[14]   = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  4 };
   /* CW42 compoment : TXDET_TZ_96K_EN,TXDET_TZ_12K_EN,TXDET_GAIN[5:0],MEAS_SEL[1:0],TXDET_PGAG[3:0],TXDET_EN_TZ_LOWGAIN,hsupa_en,TX_RFPGA_VAC[3:0] */
   /*                Gain Index[14]          = {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13 }; */
   const signed char TXDET_TZ_96K_EN[14]     = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 };
   const signed char TXDET_TZ_12K_EN[14]     = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 };
   const signed char TXDET_GAIN[14]          = { 27, 24, 21, 18, 15, 12,  9,  6,  3,  0, -3, -6, -9,-12 };
   const signed char MEAS_SEL                = 0;
   const signed char TXDET_PGAG[14]          = {  8,  7,  6,  5,  4,  3,  2,  1,  0,  5,  4,  3,  2,  1 };
   const signed char TXDET_EN_TX_LOWGAIN[14] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1 };
   const signed char hsupa_en                = 0;
   const signed char TX_RFPGA_VAC[14]        = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15,  8 };
      #endif

   if( power_dbm > (lowest_dbm+2*15) )
      power_dbm = lowest_dbm+2*15;
   else if( power_dbm < lowest_dbm )
      power_dbm = lowest_dbm;

      #if IS_EPSK_TX_SUPPORT
   if( (mod_type>>slot_idx)&0x1 )
   {  /* 8psk */
      band = RampData_EPSK[(int)rf_band];
      /* Prevent META pass invalid power value in EPSK ( tx_power > EPSK_LB/HB_MAX_POWER ) */
      /* which will cause the rollback function fail. In normal mode, it doesn't matter    */
      if( lb_or_hb )
         power_dbm_rollback = ( power_dbm > EPSK_HB_MAX_POWER ) ? EPSK_HB_MAX_POWER : power_dbm; //High band
      else
         power_dbm_rollback = ( power_dbm > EPSK_LB_MAX_POWER ) ? EPSK_LB_MAX_POWER : power_dbm; //Low band

      switch( l1d_rf.band )
      {
        case FrequencyBand850:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias;
            break;
         case FrequencyBand900:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias;
            break;
         case FrequencyBand1800:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias;
            break;
         case FrequencyBand1900:
         default:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias;
      }

      power_idx = (power_dbm-lowest_dbm)/2;
      remaining_gain   = (signed short)(band->power[power_idx]); //S12.3

      remaining_gain   = (remaining_gain<<5) - POWER_BB0; //S7.8

      /* TX power sub-band compensation */
      weight = WeightARFCN_BinarySearch((l1d_rf2.arfcn&0x3FF), l1d_rf.band , band->arfcn_weight, 1);
      if( weight )
         n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
      else // no entry, not found
         n = ((0.0)*(1<<3)) + 4096;
      subband_dB = (signed short)(n) - 4096; //S12.3
      remaining_gain  += (subband_dB<<5); //S7.8

      /* TX power rollback */
      rollback_gain    = L1D_RF_PowerRollback( power_dbm_rollback, l1d_rf.band, n, 1); /* input power_dbm_rollback instead of power_dbm to avoid wrong rollback output on high-power PCL in META mode */
      remaining_gain  -= (rollback_gain<<5); //S7.8

         #if IS_TX_POWER_CONTROL_SUPPORT
      {  short arfcn = (short)((rf_band==FrequencyBand1900)? (l1d_rf2.arfcn|0x400) : l1d_rf2.arfcn);
         if( rollback_gain == 0 )
         {  L1D_RF_TXPC_RECORD_PARAM( 3, band, (unsigned short)n, power_idx, 0, 0 );   }
         remaining_gain = (signed short)L1D_RF_TXPC_RecUpdateGain( remaining_gain, rf_band, arfcn, (short)slot_idx );
      }
         #endif

      #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
      {  /* TX power battery compensation - Voltage & Temperature */
         signed short     batcomp_dB;
         L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();
         L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,17,remaining_gain);
         if( (!L1D_CheckIfMetaMode()) || (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
         {  n = band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp];  } //battery volt.& Temp. compensate
         else
         {  n = ((0.0)*(1<<3)) + 4096; }
         batcomp_dB = (signed short)(n) - 4096; //S12.3
         remaining_gain += (batcomp_dB<<5);     //S7.8
         L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,17,remaining_gain);
      }
      #endif

      remaining_gain >>= 3;                  //S10.5

      /* TX PA Gain */
      while( (pcl_max-power_idx) > ofs_ptr[pa_gain_idx].pcl_index )
      {
         if( ofs_ptr[pa_gain_idx].pcl_index == -1 )
         {  /* avoid using the unwanted PA Gain */
            if( pa_gain_idx > 0 )
               pa_gain_idx--;
            break;
         }
         pa_gain_idx++;
         if( pa_gain_idx>=15 ) /* pcl > ofs_ptr[14].pcl_index, all use ofs_ptr[15] */
            break;
      }
      remaining_gain  -= ofs_ptr[pa_gain_idx].pa_gain; //S10.5

      /* Tx search gain rf index */
      while( (remaining_gain+backoff_gain) < l1d_rf2.Gvga_rf[(rf_band-FrequencyBand850)][gainrf_idx] )
      {  gainrf_idx++;
         if( gainrf_idx>13 ) /* avoid to exceed the l1d_rf2.Gvga_rf array */
            break;
      }
      if( gainrf_idx>0 )
         gainrf_idx--;  /* the remaining gain is compensated by Gbb0, and Gbb0 must < 0 */

      /* Get Gbb0 codeword */
      remaining_gain  -= l1d_rf2.Gvga_rf[(rf_band-FrequencyBand850)][gainrf_idx];
      if( remaining_gain > 0 )
         remaining_gain = 0;
      gain_bb0 = L1D_RF_GetGainBB0CW( remaining_gain );

      /* Calculate expected gain det */
      gain_cpl = GAIN_CPL;   /* Need to check */
      gain_det = ( (POWER_ADC_SETPOINT)-(gain_cpl)-((power_dbm_rollback<<8)-POWER_BB0-(remaining_gain<<3)) )>>8;  //S15.0

      /* Tx search gain det index */
      while( gain_det < TXDET_GAIN[gaindet_idx] )
      {  gaindet_idx++;
         if( gaindet_idx>13 ) /* avoid to exceed the TXDET_GAIN array */
            break;
      }
      if( gaindet_idx>0 )
         gaindet_idx--; /* Find the lowest gain det that larger than TXDET_GAIN[gaindet_idx] */

      TX_GBB1        = (rf_band<=FrequencyBand900) ? TX_GBB1_LB[gainrf_idx]        : TX_GBB1_HB[gainrf_idx];
      TX_PGA         = (rf_band<=FrequencyBand900) ? TX_PGA_LB[gainrf_idx]         : TX_PGA_HB[gainrf_idx];
      TX_RFPGA_SLICE = (rf_band<=FrequencyBand900) ? TX_RFPGA_SLICE_LB[gainrf_idx] : TX_RFPGA_SLICE_HB[gainrf_idx];

      *cw41 = ((TX_RFPGA_SLICE_LSB[gainrf_idx]&0x1)<<19)|((TX_GBB1&0xF)<<15)|((TX_PGA&0xF)<<11)|((TX_RFPGA_SLICE&0xF)<<7)|((TX_RFPGA_VCS[gainrf_idx]&0xF)<<3)|(TX_CAPDIV_ATTNSEL[gainrf_idx]&0x7);
      *cw42 = ((TXDET_TZ_96K_EN[gaindet_idx]&0x1)<<19)|((TXDET_TZ_12K_EN[gaindet_idx]&0x1)<<18)|((TXDET_GAIN[gaindet_idx]&0x3F)<<12)|((MEAS_SEL&0x3)<<10)|((TXDET_PGAG[gaindet_idx]&0xF)<<6)|((TXDET_EN_TX_LOWGAIN[gaindet_idx]&0x1)<<5)|((hsupa_en&0x1)<<4)|(TX_RFPGA_VAC[gainrf_idx]&0xF);

         #if IS_TX_POWER_CONTROL_SUPPORT
      l1d_rf2.tx_gain_setting[(unsigned char)slot_idx] = ( ((gainrf_idx&0xF)<<9) | (gain_bb0&0x1FF) );
         #endif

   }
   else
      #endif
   {  /* GMSK: Only for calculate gain_det */
      *cw41 = POR_CW41; /* POR default value */
      *cw42 = POR_CW42; /* POR default value */
   }

   switch( slot_idx )
   {  case 0 : HW_WRITE( TX_PWR0, gain_bb0 ); break;
      case 1 : HW_WRITE( TX_PWR1, gain_bb0 ); break;
      case 2 : HW_WRITE( TX_PWR2, gain_bb0 ); break;
      case 3 : HW_WRITE( TX_PWR3, gain_bb0 ); break;
      case 4 : HW_WRITE( TX_PWR4, gain_bb0 ); break;
      case 5 : HW_WRITE( TX_PWR5, gain_bb0 ); break;
      default: HW_WRITE( TX_PWR0, gain_bb0 ); break;
   }
}
   #elif IS_RF_MT6165
void  L1D_RF_Gainrfcal_Info_init(void)
{
   unsigned short i = 0; 

   TX_GAIN_RF_CAL_INFO.pa_Gain           = 0;
   TX_GAIN_RF_CAL_INFO.pa_Vbias          = 0;
   TX_GAIN_RF_CAL_INFO.gain_rf_cal_state = 0;
   TX_GAIN_RF_CAL_INFO.gain_rf_index     = 0;
   for( i=0; i<TX_GAIN_STEP_NUM; i++ )
      TX_GAIN_RF_CAL_INFO.baseband_power[i] = POWER_BB0;
}

void  L1D_RF_TxGainSetting( unsigned short mod_type, char slot_idx, signed short tx_power, FrequencyBand rf_band, unsigned long *cw130, unsigned long *cw131 )
{
   signed short     gain_bb0   = 0;
   signed short     power_dbm  = tx_power;
   signed short     lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
      #if IS_EPSK_TX_SUPPORT
   signed short     power_dbm_rollback = tx_power;
   signed short     subband_dB;
   signed short     rollback_gain;
   signed short     remaining_gain;
   signed short     pcl_max      = (rf_band<=FrequencyBand900) ? 19 : 15;
   signed short     backoff_gain = (rf_band<=FrequencyBand900) ? GAIN_BACKOFF_LB : GAIN_BACKOFF_HB;
   unsigned short   lb_or_hb     = (rf_band<=FrequencyBand900) ? 0 : 1;
   unsigned short   n = ((0.0)*(1<<3)) + 4096;
   static   const   sARFCN_SECTION*  weight;    // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
   const sRAMPDATA *band;
   pa_vbias *ofs_ptr;
   signed short     power_idx   = 0;
   signed short     pa_gain_idx = 0;
   signed short     gainrf_idx  = 0;
   signed char      TX_GBB1     = 0;
   signed char      TX_PGA      = 0;
   signed char      TX_RFPGA_SLICE = 0;
   signed char      TX_LPF_NBW_EN  = 0;
   /* CW131 compoment:  : TX_RFPGA_SLICE_LSB,TX_GBB1[3:0],TX_PGA[3:0],TX_RFPGA_SLICE[3:0],TX_CAPDIV_ATTNSEL[2:0],TX_RFPGA_VAC[3:0] */
   /*          Gain Index[TX_GAIN_STEP_NUM]  = {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12 }; */
   const signed char TX_RFPGA_SLICE_LSB[TX_GAIN_STEP_NUM]  = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 };
   const signed char TX_GBB1_LB        [TX_GAIN_STEP_NUM]  = {  0,  0,  0,  0,  0,  0,  1,  2,  3,  4,  5,  5,  6 };
   const signed char TX_GBB1_HB        [TX_GAIN_STEP_NUM]  = {  5,  5,  5,  5,  5,  6,  7,  8,  9, 11, 11, 12, 12 };
   const signed char TX_PGA_LB         [TX_GAIN_STEP_NUM]  = {  8,  8,  7,  6,  5,  4,  4,  4,  4,  4,  4,  2,  2 };
   const signed char TX_PGA_HB         [TX_GAIN_STEP_NUM]  = {  8,  7,  6,  5,  4,  4,  4,  4,  4,  4,  2,  2,  1 };
   const signed char TX_RFPGA_SLICE_LB [TX_GAIN_STEP_NUM]  = { 15, 15, 15, 15, 15, 15, 14, 12, 10,  7,  3,  3,  1 };
   const signed char TX_RFPGA_SLICE_HB [TX_GAIN_STEP_NUM]  = { 15, 15, 15, 15, 15, 14, 12, 10,  7,  3,  3,  1,  1 };
   const signed char TX_RFPGA_VAC      [TX_GAIN_STEP_NUM]  = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 };
   const signed char TX_CAPDIV_ATTNSEL [TX_GAIN_STEP_NUM]  = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 };
   /* CW130 compoment:  : TX_LPF_NBW_EN,TX_MOD_SLICE_LSB,TX_RFPGA_VCS[3:0] */                       
   const signed char TX_LPF_NBW_EN_LB  [TX_GAIN_STEP_NUM]  = {  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 };   
   const signed char TX_LPF_NBW_EN_HB  [TX_GAIN_STEP_NUM]  = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 };
   const signed char TX_MOD_SLICE_LSB  [TX_GAIN_STEP_NUM]  = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 };
   const signed char TX_RFPGA_VCS      [TX_GAIN_STEP_NUM]  = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 };
      #endif
#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT || (IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT && IS_EPSK_ADJUST_TPO_SUPPORT)
   signed short offset_gain;
#endif   // IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT

      #if IS_EPSK_TX_SUPPORT
   if( (mod_type>>slot_idx)&0x1 )
   { /* 8psk */
         #if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
            #if IS_FHC_SUPPORT
      if( l1d_rf.fhc_proc==FHC_PROC_UTS_GAIN_RF_IDX )                                     /* meta TX gain FHC flow */
      {
         gainrf_idx     = power_dbm;
         remaining_gain = (TX_GAIN_RF_CAL_INFO.baseband_power[gainrf_idx]- POWER_BB0)>>3; //S7.8 -> S10.5    
      }
            #endif   
      else if( TX_GAIN_RF_CAL_INFO.gain_rf_cal_state == EPSKTxGainCalibrationState )      /* meta TX gain normal calibration flow */
      {
         gainrf_idx     = TX_GAIN_RF_CAL_INFO.gain_rf_index;
         remaining_gain = (TX_GAIN_RF_CAL_INFO.baseband_power[gainrf_idx]- POWER_BB0)>>3; //S7.8 -> S10.5
      }
      else  /* TX_GAIN_RF_CAL_INFO.gain_rf_cal_state == EPSKTxGainNormalState, */
         #endif
      {
            #if IS_DSDA_DCS_TX_NOTCH_SWITCH_SUPPORT
         if( L1D_RF_IS_DCS_Change_to_TX_Notch() )
            power_dbm = power_dbm+NOTCH_CPL;
            #endif

         if( power_dbm > (lowest_dbm+2*15) )
            power_dbm = lowest_dbm+2*15;
         else if( power_dbm < lowest_dbm )
            power_dbm = lowest_dbm;

         band = RampData_EPSK[(int)rf_band];
         /* Prevent META pass invalid power value in EPSK ( tx_power > EPSK_LB/HB_MAX_POWER ) */
         /* which will cause the rollback function fail. In normal mode, it doesn't matter    */
         if( lb_or_hb )
            power_dbm_rollback = ( power_dbm > EPSK_HB_MAX_POWER ) ? EPSK_HB_MAX_POWER : power_dbm; //High band
         else
            power_dbm_rollback = ( power_dbm > EPSK_LB_MAX_POWER ) ? EPSK_LB_MAX_POWER : power_dbm; //Low band

         switch( l1d_rf.band )
         {
         case FrequencyBand850:
               ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias;
               break;
            case FrequencyBand900:
               ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias;
               break;
            case FrequencyBand1800:
               ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias;
               break;
            case FrequencyBand1900:
            default:
               ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias;
         }

         power_idx = (power_dbm-lowest_dbm)/2;
         remaining_gain   = (signed short)(band->power[power_idx]); //S12.3

         remaining_gain   = (remaining_gain<<5) - POWER_BB0; //S7.8

         /* TX power sub-band compensation */
         weight = WeightARFCN_BinarySearch((l1d_rf2.arfcn&0x3FF), l1d_rf.band , band->arfcn_weight, 1);
         if( weight )
            n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
         else // no entry, not found
            n = ((0.0)*(1<<3)) + 4096;
         subband_dB = (signed short)(n) - 4096; //S12.3
         remaining_gain  += (subband_dB<<5); //S7.8
         
#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         offset_gain = L1D_RF_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm, ((mod_type>>slot_idx)&0x1),0xFFFF);
         remaining_gain += offset_gain;
         L1D_RF_Info_Trace( 26166, offset_gain, remaining_gain );
#endif

#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
    #if IS_EPSK_ADJUST_TPO_SUPPORT
         /* TX power offset */
         offset_gain = L1D_NSFT_Adjust_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm,((mod_type>>slot_idx)&0x1));
         remaining_gain += offset_gain;
         L1D_RF_Info_Trace( 26167, offset_gain, remaining_gain );
    #endif//IS_EPSK_ADJUST_TPO_SUPPORT
#endif//IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT

         /* TX power rollback */
         rollback_gain    = L1D_RF_PowerRollback( power_dbm_rollback, l1d_rf.band, n, 1); /* input power_dbm_rollback instead of power_dbm to avoid wrong rollback output on high-power PCL in META mode */
         remaining_gain  -= (rollback_gain<<5); //S7.8

         #if IS_TX_POWER_CONTROL_SUPPORT
            {  short arfcn = (short)((rf_band==FrequencyBand1900)? (l1d_rf2.arfcn|0x400) : l1d_rf2.arfcn);
            if( rollback_gain == 0 )
            {  L1D_RF_TXPC_RECORD_PARAM( 3, band, (unsigned short)n, power_idx, 0, 0 );   }
              remaining_gain = (signed short)L1D_RF_TXPC_RecUpdateGain( remaining_gain, rf_band, arfcn, (short)slot_idx );
         }
         #endif

         #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
         {  /* TX power battery compensation - Voltage & Temperature */
            signed short     batcomp_dB;
            L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();
            L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,17,remaining_gain);
            if( (!L1D_CheckIfMetaMode()) || (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
            {  n = band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp];  } //battery volt.& Temp. compensate
            else
            {  n = ((0.0)*(1<<3)) + 4096; }
            batcomp_dB = (signed short)(n) - 4096; //S12.3
            remaining_gain += (batcomp_dB<<5);     //S7.8
            L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,17,remaining_gain);
         }
         #endif

         remaining_gain >>= 3;                  //S10.5

         /* TX PA Gain */
         while( (pcl_max-power_idx) > ofs_ptr[pa_gain_idx].pcl_index )
         {
            if( ofs_ptr[pa_gain_idx].pcl_index == -1 )
            {  /* avoid using the unwanted PA Gain */
               if( pa_gain_idx > 0 )
                  pa_gain_idx--;
               break;
            }
            pa_gain_idx++;
            if( pa_gain_idx>=15 ) /* pcl > ofs_ptr[14].pcl_index, all use ofs_ptr[15] */
               break;
         }
         remaining_gain  -= ofs_ptr[pa_gain_idx].pa_gain; //S10.5

         /* Tx search gain rf index */
         while( (remaining_gain+backoff_gain) < l1d_rf2.Gvga_rf[(rf_band-FrequencyBand850)][gainrf_idx] )
         {  gainrf_idx++;
         if( gainrf_idx>=TX_GAIN_STEP_NUM ) /* avoid to exceed the l1d_rf2.Gvga_rf array */
               break;
         }
         if( gainrf_idx>0 )
            gainrf_idx--;  /* the remaining gain is compensated by Gbb0, and Gbb0 must < 0 */

         /* Get Gbb0 codeword */
         remaining_gain  -= l1d_rf2.Gvga_rf[(rf_band-FrequencyBand850)][gainrf_idx];
         if( remaining_gain > 0 )
            remaining_gain = 0;
      }
       
         gain_bb0 = L1D_RF_GetGainBB0CW( remaining_gain );

         TX_GBB1        = (rf_band<=FrequencyBand900) ? TX_GBB1_LB[gainrf_idx]        : TX_GBB1_HB[gainrf_idx];
         TX_PGA         = (rf_band<=FrequencyBand900) ? TX_PGA_LB[gainrf_idx]         : TX_PGA_HB[gainrf_idx];
         TX_RFPGA_SLICE = (rf_band<=FrequencyBand900) ? TX_RFPGA_SLICE_LB[gainrf_idx] : TX_RFPGA_SLICE_HB[gainrf_idx];
         TX_LPF_NBW_EN  = (rf_band<=FrequencyBand900) ? TX_LPF_NBW_EN_LB[gainrf_idx]  : TX_LPF_NBW_EN_HB[gainrf_idx];

         *cw131 = ((TX_RFPGA_SLICE_LSB[gainrf_idx]&0x1)<<19)|((TX_GBB1&0xF)<<15)|((TX_PGA&0xF)<<11)|((TX_RFPGA_SLICE&0xF)<<7)|((TX_CAPDIV_ATTNSEL[gainrf_idx]&0x7)<<3)|(TX_RFPGA_VAC[gainrf_idx]&0xF);
         *cw130 = (TX_LPF_NBW_EN<<9)|(TX_MOD_SLICE_LSB[gainrf_idx]<<8)|(TX_RFPGA_VCS[gainrf_idx]&0xF);

         #if IS_TX_POWER_CONTROL_SUPPORT
         l1d_rf2.tx_gain_setting[(unsigned char)slot_idx] = ( ((gainrf_idx&0xF)<<9) | (gain_bb0&0x1FF) );
         #endif

   }
   else
      #endif
   {  /* GMSK: Only for calculate gain_det */
      *cw130 = POR_CW130; /* POR default value */
      *cw131 = POR_CW131; /* POR default value */
   }

   switch( slot_idx )
   {  case 0 : HW_WRITE( TX_PWR0, gain_bb0 ); break;
      case 1 : HW_WRITE( TX_PWR1, gain_bb0 ); break;
      case 2 : HW_WRITE( TX_PWR2, gain_bb0 ); break;
      case 3 : HW_WRITE( TX_PWR3, gain_bb0 ); break;
      case 4 : HW_WRITE( TX_PWR4, gain_bb0 ); break;
      case 5 : HW_WRITE( TX_PWR5, gain_bb0 ); break;
      default: HW_WRITE( TX_PWR0, gain_bb0 ); break;
   }
}   
   #endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_RF_MT6280RF || IS_RF_MT6166 || IS_RF_MT6165 */

#if IS_RF_MT6169
char L1D_RF_CheckDMPower( void )
{
   return (l1d_rf2.is_2g_on&0x1); /* use bit[0] to indicate the 2G state */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Gainrf_Init( void )
{
   signed int band, gain;
   const signed int Sim_Gvga_rf_LB[28] = { 0, -18, -38, -58, -80, -104, -131, -160, -193, -230, -273, -324, -386, -466, -578, -616, -658, -709, -771, -851, -964, -1156, -1348, -1540, -1732, -1924, -2116, -2308 };
   const signed int Sim_Gvga_rf_HB[28] = { 0, -18, -38, -58, -80, -104, -131, -160, -193, -230, -273, -324, -386, -466, -578, -616, -658, -709, -771, -851, -964, -1156, -1348, -1540, -1732, -1924, -2116, -2308 };

   for( band=0; band<4; band++ )
   {  for( gain=0; gain<28; gain++ )
      {
         l1d_rf2.Gvga_rf[band][gain] = (band<2) ? Sim_Gvga_rf_LB[gain] : Sim_Gvga_rf_HB[gain];
      }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void SPECIAL_IMM_RECEIVE_BSI( unsigned short ADD_Ctrl, unsigned long ADD, unsigned short DATA_Ctrl, unsigned long *DATA )
{
   #ifndef L1_SIM
   /* do nothing; just to avoid build-warning */
   (void)ADD_Ctrl; (void)DATA_Ctrl; (void)*DATA;

   HW_WRITE( BSI_RDCON, BSI_RDCON_START_SETTING  );
   HW_WRITE( BSI_RDADDR_CON, BSI_RDADDR_CON_MAIN );
   HW_WRITE( BSI_RDADDR, SPECIAL_BSI_RDADDRn(ADD));
      #if IS_BSISPI_SEPARATE_SUPPORT
      #else
   HW_WRITE( BSI_RDCS_CON, BSI_RDCS_CON_MAIN     );
      #endif
   HW_WRITE( BSI_RDDAT_H, 0x0                    ); /* Clear Ready bit before triggering immediate read back event */
   HW_WRITE( BSI_RDCON, BSI_RDCON_IMMRD_SETTING  );
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetClockControl( void )
{
   /*******************************************************************/
   /* Set Co-Clock on/off setting, and BB Clock must be always on.    */
   /* CW247 includes AFC DAC & BB Clock On/Off, any CW247 update must */
   /* take current AFC DAC into condideration.                        */
   /*******************************************************************/
   unsigned long co_clock_setting,cw252,cw253;
   co_clock_setting = (CLK_EN_TABLE[3]<<2)|(CLK_EN_TABLE[2]<<1)|(CLK_EN_TABLE[1]);
   cw252            = (POR_CW252&(~0x00000070))|((co_clock_setting&CO_CLOCK_MASK)<<4); //CW252: SW_EN
   cw253            = (POR_CW253&(~0x00000007))|((~co_clock_setting)&CO_CLOCK_MASK);   //CW253: HW/SW Control(0:HW 1:SW)
   IMM_SEND_BSI(SCTRL_IMOD(0,30),cw252);
   IMM_SEND_BSI(SCTRL_IMOD(0,30),cw253);
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_GetGainBB0CW( signed long gainbb0 )
{  /* dB->linear(code): polynomial fitting */
   signed long G_fxp;
   signed long r, z, y;
   signed int  q=0;

   G_fxp = gainbb0<<5;

   while( G_fxp<0 )
   {  G_fxp += 6165;
     q++;
   }

   r = G_fxp<<2;
   z = ( (9743*r)+(1<<14) )>>15;
   z = ( (z+14323)*r+(1<<14) )>>15;
   z += 16412;
   y = (1<<GAINBB0_CODE_LENGTH)-(((z>>q)+(1<<(14-GAINBB0_CODE_LENGTH-1)))>>(14-GAINBB0_CODE_LENGTH));
   if( y<0 ) y=0;

   return (unsigned long)y;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void  L1D_RF_TxGainSetting( unsigned short mod_type, char slot_idx, signed short tx_power, FrequencyBand rf_band, unsigned long *cw74, unsigned long *cw75 )
{
   signed short     gain_bb0   = 0;
   signed short     power_dbm  = tx_power;
   signed short     lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
   #if IS_EPSK_TX_SUPPORT
   signed short     gain_det = 0; //for close loop
   signed short     gain_cpl = 0; //for close loop
   signed short     power_dbm_rollback = tx_power;
   signed short     subband_dB;
   signed short     rollback_gain;
   signed short     remaining_gain;
   signed short     pcl_max      = (rf_band<=FrequencyBand900) ? 19 : 15;
   signed short     backoff_gain = (rf_band<=FrequencyBand900) ? GAIN_BACKOFF_LB : GAIN_BACKOFF_HB;
   unsigned short   lb_or_hb     = (rf_band<=FrequencyBand900) ? 0 : 1;
   unsigned short   n = ((0.0)*(1<<3)) + 4096;
   static   const   sARFCN_SECTION*  weight;    // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
   const sRAMPDATA *band;
   pa_vbias *ofs_ptr;
   signed short     power_idx   = 0;
   signed short     pa_gain_idx = 0;
   signed short     gainrf_idx  = 0;
   signed short     gaindet_idx = 0;
   signed short     gbb1_idx    = 0;
   /* CW74 compoment RG_TX_RFPGA_SLICE_LSB, RG_TX_RFPGA_VCS[3:0], RG_TX_CAPDIV_ATTNSEL[1:0], RG_TX_RFPGA_SLICE[3:0], RG_TX_RFPGA_UNIT[3:0]                        */
   /*                gainrf_idx[28]         = {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 }; */
   const signed char TX_RFPGA_SLICE_LSB[28] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1 };
   const signed char TX_RFPGA_VCS[28]       = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15, 15, 15, 15,  7,  3,  1 };
   const signed char TX_CAPDIV_ATTNSEL[28]  = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2,  3,  3,  3,  3 };
   const signed char TX_RFPGA_SLICE[28]     = { 15, 15, 15, 15, 15, 15, 15, 15,  7,  7,  7,  7,  3,  3,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0 };
   const signed char TX_RFPGA_UNIT[28]      = { 15, 14, 13, 12, 11, 10,  9,  8, 15, 13, 11,  9, 15, 11, 15, 13, 11,  9,  7,  5,  3,  0,  0,  0,  0,  1,  1,  1 };
   const signed char RG_TX_GBB1[28]         = {  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3 };
   /* CW75 compoment TXDET_MEAS_SEL[1:0], RG_TXDET_PGAG[3:0], RG_TXDET_TZ_96K_EN, RG_TXDET_TZ_12K_EN, RG_TXDET_EN_TZ_LOWGAIN */
   /*                gaindet_idx[28]        = {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13 };                    */
   const signed char TXDET_PGAG[14]         = { 15,  7,  6,  5,  4,  3,  2,  7,  6,  5,  4,  3,  2,  1 };
   const signed char TXDET_TZ[14]           = {  2,  2,  2,  2,  2,  2,  2,  1,  1,  1,  1,  1,  1,  1 };
   const signed char TXDET_GAIN[14]         = { 29, 26, 23, 20, 17, 14, 11,  9,  6,  3,  0, -3, -6, -9 };
   #endif
#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT || (IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT && IS_EPSK_ADJUST_TPO_SUPPORT)
   signed short offset_gain;
#endif   // IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT

   if( power_dbm > (lowest_dbm+2*15) )
      power_dbm = lowest_dbm+2*15;
   else if( power_dbm < lowest_dbm )
      power_dbm = lowest_dbm;

   #if IS_EPSK_TX_SUPPORT
   if( (mod_type>>slot_idx)&0x1 )
   {  /* 8psk */
      band = RampData_EPSK[(int)rf_band];
      /* Prevent META pass invalid power value in EPSK ( tx_power > EPSK_LB/HB_MAX_POWER ) */
      /* which will cause the rollback function fail. In normal mode, it doesn't matter    */
      if( lb_or_hb )
         power_dbm_rollback = ( power_dbm > EPSK_HB_MAX_POWER ) ? EPSK_HB_MAX_POWER : power_dbm; //High band
      else
         power_dbm_rollback = ( power_dbm > EPSK_LB_MAX_POWER ) ? EPSK_LB_MAX_POWER : power_dbm; //Low band

      switch( l1d_rf.band )
      {
         case FrequencyBand850:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias;
            break;
         case FrequencyBand900:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias;
            break;
         case FrequencyBand1800:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias;
            break;
         case FrequencyBand1900:
         default:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias;
      }

      power_idx = (power_dbm-lowest_dbm)/2;
      remaining_gain   = (signed short)(band->power[power_idx]); //S12.3

      remaining_gain   = (remaining_gain<<5) - POWER_BB0; //S7.8

      /* TX power sub-band compensation */
      weight = WeightARFCN_BinarySearch((l1d_rf2.arfcn&0x3FF), l1d_rf.band , band->arfcn_weight, 1);
      if( weight )
         n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
      else // no entry, not found
         n = ((0.0)*(1<<3)) + 4096;
      subband_dB = (signed short)(n) - 4096; //S12.3
      remaining_gain  += (subband_dB<<5); //S7.8
      
#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      offset_gain = L1D_RF_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm, ((mod_type>>slot_idx)&0x1),0xFFFF);
      remaining_gain += offset_gain;
      L1D_RF_Info_Trace( 26166, offset_gain, remaining_gain );
#endif
#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
    #if IS_EPSK_ADJUST_TPO_SUPPORT
      /* TX power offset */
      offset_gain = L1D_NSFT_Adjust_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm,((mod_type>>slot_idx)&0x1));
      remaining_gain += offset_gain;
      L1D_RF_Info_Trace( 26167, offset_gain, remaining_gain );
    #endif//IS_EPSK_ADJUST_TPO_SUPPORT
#endif//IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT


      /* TX power rollback */
      rollback_gain    = L1D_RF_PowerRollback( power_dbm_rollback, l1d_rf.band, n, 1); /* input power_dbm_rollback instead of power_dbm to avoid wrong rollback output on high-power PCL in META mode */
      remaining_gain  -= (rollback_gain<<5); //S7.8

      #if IS_TX_POWER_CONTROL_SUPPORT
      {  short arfcn = (short)((rf_band==FrequencyBand1900)? (l1d_rf2.arfcn|0x400) : l1d_rf2.arfcn);
         if( rollback_gain == 0 )
         {  L1D_RF_TXPC_RECORD_PARAM( 3, band, (unsigned short)n, power_idx, 0, 0 );   }
         remaining_gain = (signed short)L1D_RF_TXPC_RecUpdateGain( remaining_gain, rf_band, arfcn, (short)slot_idx );
      }
      #endif

      #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
      {  /* TX power battery compensation - Voltage & Temperature */
         signed short     batcomp_dB;
         L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();
         L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,17,remaining_gain);
         if( (!L1D_CheckIfMetaMode())|| (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
         {  n = band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp];  } //battery volt.& Temp. compensate
         else
         {  n = ((0.0)*(1<<3)) + 4096; }
         batcomp_dB = (signed short)(n) - 4096; //S12.3
         remaining_gain += (batcomp_dB<<5);     //S7.8
         L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,17,remaining_gain);
      }
      #endif

      remaining_gain >>= 3;                  //S10.5

      /* TX PA Gain */
      while( (pcl_max-power_idx) > ofs_ptr[pa_gain_idx].pcl_index )
      {
         if( ofs_ptr[pa_gain_idx].pcl_index == -1 )
         {  /* avoid using the unwanted PA Gain */
            if( pa_gain_idx > 0 )
               pa_gain_idx--;
            break;
         }
         pa_gain_idx++;
         if( pa_gain_idx>=15 ) /* pcl > ofs_ptr[14].pcl_index, all use ofs_ptr[15] */
            break;
      }
      remaining_gain  -= ofs_ptr[pa_gain_idx].pa_gain; //S10.5

      /* Tx search gain rf index */
      while( (remaining_gain+backoff_gain) < l1d_rf2.Gvga_rf[(rf_band-FrequencyBand850)][gainrf_idx] )
      {  gainrf_idx++;
         if( gainrf_idx>27 ) /* avoid to exceed the l1d_rf2.Gvga_rf array */
            break;
      }
      if( gainrf_idx>0 )
         gainrf_idx--;  /* the remaining gain is compensated by Gbb0, and Gbb0 must < 0 */

      /* Get Gbb0 codeword */
      remaining_gain  -= l1d_rf2.Gvga_rf[(rf_band-FrequencyBand850)][gainrf_idx];

      if( ( MT6169_2G_CHIP_VER == MT6169_E3 ) )
      {  /* the Gainbb0 limit on E3 is 0 */
         if( remaining_gain > (0*32) )
            remaining_gain = (0*32);
      }
      else
      {  /* the Gainbb0 limit on E1 is -1.8. E3 set GBB1 ATT to 1.8dB, so we try to equal E1 and E3 before Gain RF*/
         if( remaining_gain > (-1.8*32) )
            remaining_gain = (-1.8*32);
      }
      gain_bb0 = L1D_RF_GetGainBB0CW( remaining_gain );

      /* Calculate expected gain det */
      gain_cpl = GAIN_CPL;   /* Need to check */
      gain_det = ( (POWER_ADC_SETPOINT)-(gain_cpl)-((power_dbm_rollback<<8)-POWER_BB0-(remaining_gain<<3)) )>>8;  //S15.0

      /* Tx search gain det index */
      while( gain_det < TXDET_GAIN[gaindet_idx] )
      {  gaindet_idx++;
         if( gaindet_idx>13 ) /* avoid to exceed the TXDET_GAIN array */
            break;
      }
      if( gaindet_idx>0 )
         gaindet_idx--; /* Find the lowest gain det that larger than TXDET_GAIN[gaindet_idx] */

      if( ( MT6169_2G_CHIP_VER == MT6169_E3 ) )
      {
         *cw74 = ( (RG_TX_GBB1[gbb1_idx]<<15) |((TX_RFPGA_UNIT[gainrf_idx]&0xF)<<11)|((TX_RFPGA_SLICE[gainrf_idx]&0xF)<<7)|((TX_RFPGA_VCS[gainrf_idx]&0xF)<<3)|(TX_RFPGA_SLICE_LSB[gainrf_idx]&0x1)<<2)|(TX_CAPDIV_ATTNSEL[gainrf_idx]&0x3);
         *cw75 = ((TXDET_PGAG[gaindet_idx]&0xF)<<6)|((TXDET_TZ[gaindet_idx]&0x7)<<5);
      }
      else
      {
         *cw74 = ((TX_RFPGA_SLICE_LSB[gainrf_idx]&0x1)<<17)|((TX_RFPGA_VCS[gainrf_idx]&0xF)<<10)|((TX_CAPDIV_ATTNSEL[gainrf_idx]&0x3)<<8)|((TX_RFPGA_SLICE[gainrf_idx]&0xF)<<4)|(TX_RFPGA_UNIT[gainrf_idx]&0xF);
         *cw75 = ((TXDET_PGAG[gaindet_idx]&0xF)<<4)|((TXDET_TZ[gaindet_idx]&0x7)<<1);
      }

      #if IS_TX_POWER_CONTROL_SUPPORT
      l1d_rf2.tx_gain_setting[(unsigned char)slot_idx] = ( ((gainrf_idx&0xF)<<9) | (gain_bb0&0x1FF) );
      #endif

   }
   else
   #endif
   {  /* GMSK: Only for calculate gain_det */
      *cw74 = POR_CW74; /* POR default value */
      *cw75 = POR_CW75; /* POR default value */
   }

   switch( slot_idx )
   {  case 0 : HW_WRITE( TX_PWR0, gain_bb0 ); break;
      case 1 : HW_WRITE( TX_PWR1, gain_bb0 ); break;
      case 2 : HW_WRITE( TX_PWR2, gain_bb0 ); break;
      case 3 : HW_WRITE( TX_PWR3, gain_bb0 ); break;
      case 4 : HW_WRITE( TX_PWR4, gain_bb0 ); break;
      case 5 : HW_WRITE( TX_PWR5, gain_bb0 ); break;
      default: HW_WRITE( TX_PWR0, gain_bb0 ); break;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_RF_MT6169 */

#if IS_RF_MT6176
char L1D_RF_CheckDMPower( void )
{
   return (l1d_rf2.is_2g_on&0x1); /* use bit[0] to indicate the 2G state */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int L1D_RF_Get_POC_MidArfcn( int rf_band )
{
   int midband_arfcn[4]={ 189, 37, 698, 661 };
   return midband_arfcn[rf_band];
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetBPI_PAOnOff( int bandidx, unsigned long* POC_PAOn, unsigned long* POC_PAOff)
{
   int i;
   uintBPI *PDATA;
   uintBPI PDATA_64;
   unsigned long* BPIOn  = POC_PAOn;
   unsigned long* BPIOff = POC_PAOff;

   PDATA = PDATA_TABLE[ bandidx ][ RF_TX ];

   for (i = 0; i < 4; i++)
   {
      PDATA_64 = *PDATA;

      if (i != 3)
      {
         *BPIOn = (PDATA_64 & 0xFFFFFFFF);          BPIOn++;    //< bpi[31:0]
         *BPIOn = ((PDATA_64>>32) & 0xFFFFFFFF);    BPIOn++;    //< bpi[47:32]
      }
      else // i ==3 for PA off 
      {
         *BPIOff = (PDATA_64 & 0xFFFFFFFF);         BPIOff++;   //< bpi[31:0]
         *BPIOff = ((PDATA_64>>32) & 0xFFFFFFFF);               //< bpi[47:32]
      }

      PDATA++;
   }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_Get_TXLO_Data( int rf_band, int arfcn, unsigned long tx_lo)
{
   int tx_lo_cap_array_adj[4]={ 125, 140, 150, 160}; //LUT for LO(25kHz/code)
   int freq_diff_25khz, tx_lo_cap_array, tx_lo_cap_array_result;

   if( (rf_band==1) && (arfcn>124) )
   {  arfcn-=1024;  }
         
   // Calulate tx_lo_cap_array_result according to subband
   tx_lo_cap_array = ((tx_lo>>11)&0x7F);
   freq_diff_25khz = (L1D_RF_Get_POC_MidArfcn(rf_band)-arfcn)*8; /* 1 channel = 8*25khz for 2G */
   tx_lo_cap_array_result = tx_lo_cap_array + (freq_diff_25khz/tx_lo_cap_array_adj[rf_band])/* 25 khz/code*/;

   // Clipping tx_lo_cap_array_result if overflow
   if (tx_lo_cap_array_result >= 0x7F) 
   {  tx_lo_cap_array_result = 0x7F;
   }
   else if (tx_lo_cap_array_result <= 0)
   {  tx_lo_cap_array_result = 0;
   }
   
   // Combine CW714
   return ((tx_lo&(~(0x7F<<11)))|((tx_lo_cap_array_result&0x7F)<<11));
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Gainrf_Init( void )
{  // If the PGA Switch point is modified, please remember to check L1D_RF_TxGainSetting, too.
   signed int band, i;
   signed int pga_switch_pwr_idx;

   for( band=0; band<4; band++ )
   {
      pga_switch_pwr_idx = (band < 2) ? (PGA_SWITCH_DBM_LB-5/*lowest_dbm*/)/2 : (PGA_SWITCH_DBM_HB-0/*lowest_dbm*/)/2;

      l1d_rf2.pga_a_inl[band][0] = 0;
      l1d_rf2.pga_b_inl[band][0] = -386;

      for( i=1; i<=MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM; i++ )
      {  l1d_rf2.pga_a_inl[band][i] = l1d_rf2.pga_a_inl[band][i-1]+l1d_rf2.rfc_data.g_result[band].tx_dnl_lin_pga_a[i-1];  }

      for( i=1; i<=MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM; i++ )
      {  l1d_rf2.pga_b_inl[band][i] = l1d_rf2.pga_b_inl[band][i-1]+l1d_rf2.rfc_data.g_result[band].tx_dnl_lin_pga_b[i-1];  }
      
      l1d_rf2.pga_ab_switch_pwr_idx[band] = pga_switch_pwr_idx;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_GetGainBB0CW( signed long gainbb0 )
{  /* dB->linear(code): polynomial fitting */
   signed long G_fxp;
   signed long r, z, y;
   signed int  q=0;

   G_fxp = gainbb0<<5;

   while( G_fxp<0 )
   {  G_fxp += 6165;
     q++;
   }

   r = G_fxp<<2;
   z = ( (9743*r)+(1<<14) )>>15;
   z = ( (z+14323)*r+(1<<14) )>>15;
   z += 16412;
   y = (1<<GAINBB0_CODE_LENGTH)-(((z>>q)+(1<<(14-GAINBB0_CODE_LENGTH-1)))>>(14-GAINBB0_CODE_LENGTH));
   if( y<0 ) y=0;

   return (unsigned long)y;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void  L1D_RF_TxGainSetting( unsigned short mod_type, char slot_idx, signed short tx_power, FrequencyBand rf_band, unsigned long *cw705, unsigned long *cw706 )
{
   signed short     gain_bb0   = 0;
   signed short     power_dbm  = tx_power;
   signed short     lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
   unsigned short   gain_comp = 0, phase_comp = 0, dc_comp_i = 0, dc_comp_q = 0, d16 = 0;
   #if IS_EPSK_TX_SUPPORT
   signed short     tx_dbg_info[8]={ 0 }; //0:want_power ; 1:subband ; 2:rollback ; 3:temperature ; 4:voltage ; 5:pa_gain ; 6:gain_rf ; 7:gbb0, all in S10.5
   signed short     power_dbm_rollback = tx_power;
   signed short     subband_dB;
   signed short     rollback_gain;
   signed short     remaining_gain;
   signed short     pcl_max      = (rf_band<=FrequencyBand900) ? 19 : 15;
   signed short     backoff_gain = (rf_band<=FrequencyBand900) ? GAIN_BACKOFF_LB : GAIN_BACKOFF_HB;
   unsigned short   lb_or_hb     = (rf_band<=FrequencyBand900) ? 0 : 1;
   unsigned short   n = ((0.0)*(1<<3)) + 4096;
   static   const   sARFCN_SECTION*  weight;    // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
   const sRAMPDATA *band;
   pa_vbias *ofs_ptr;
   signed short     power_idx   = 0;
   signed short     pa_gain_idx = 0;
   signed short     gainrf_idx  = 0;
   signed short    *pga_inl_ptr;
   signed char      TX_SLICE_GROUP, pga_inl_num;
   const unsigned long   *pga_gain_cw;
   const unsigned long TX_PGA_A_GAIN_CW_LB[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { 0x7BFC0, 0x7BF80, 0x7BF40, 0x7BF00, 0x7BEC0, 0x7BE80, 0x7BE40,
                                                                                 0x7BE00, 0x7BDC0, 0x7B5C0, 0x79EC0, 0x79E40, 0x78FC0, 0x78EC0,
                                                                                 0x787C0, 0x78740, 0x786C0, 0x78640, 0x785C0, 0x78540, 0x784C0 };
   const unsigned long TX_PGA_A_GAIN_CW_HB[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { 0x7BFC0, 0x7BF80, 0x7BF40, 0x7BF00, 0x7BEC0, 0x7BE80, 0x7BE40,
                                                                                 0x7BE00, 0x7BDC0, 0x7B5C0, 0x79EC0, 0x79E40, 0x78FC0, 0x78EC0,
                                                                                 0x787C0, 0x78740, 0x786C0, 0x78640, 0x785C0, 0x78540, 0x784C0 };
   const unsigned long TX_PGA_B_GAIN_CW_LB[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM+1] = { 0x7DBC0, 0x7DAC0, 0x7CBC0, 0x7CB40, 0x7CAC0, 0x7CA40, 0x7C9C0,
                                                                                 0x7C940, 0x7C8C0, 0x7C840, 0x7C448, 0x7C457, 0x7C467, 0x7C477,
                                                                                 0x7C473, 0x7C471, 0x7C470                                     };
   const unsigned long TX_PGA_B_GAIN_CW_HB[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM|1] = { 0x7DBC0, 0x7DAC0, 0x7CBC0, 0x7CB40, 0x7CAC0, 0x7CA40, 0x7C9C0,
                                                                                 0x7C940, 0x7C8C0, 0x7C840, 0x7C44A, 0x7C458, 0x7C468, 0x7C477,
                                                                                 0x7C473, 0x7C471, 0x7C470                                     };
   #endif
   
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT || (IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT && IS_EPSK_ADJUST_TPO_SUPPORT)
   signed short offset_gain;
   #endif   // IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT

   if( power_dbm > (lowest_dbm+2*15) )
      power_dbm = lowest_dbm+2*15;
   else if( power_dbm < lowest_dbm )
      power_dbm = lowest_dbm;

   #if IS_EPSK_TX_SUPPORT
   if( (mod_type>>slot_idx)&0x1 )
   {  /* 8psk */
      band = RampData_EPSK[(int)rf_band];
      /* Prevent META pass invalid power value in EPSK ( tx_power > EPSK_LB/HB_MAX_POWER ) */
      /* which will cause the rollback function fail. In normal mode, it doesn't matter    */
      if( lb_or_hb )
         power_dbm_rollback = ( power_dbm > EPSK_HB_MAX_POWER ) ? EPSK_HB_MAX_POWER : power_dbm; //High band
      else
         power_dbm_rollback = ( power_dbm > EPSK_LB_MAX_POWER ) ? EPSK_LB_MAX_POWER : power_dbm; //Low band

      switch( l1d_rf.band )
      {
         case FrequencyBand850:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias;
            break;
         case FrequencyBand900:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias;
            break;
         case FrequencyBand1800:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias;
            break;
         case FrequencyBand1900:
         default:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias;
      }

      power_idx = (power_dbm-lowest_dbm)/2;
      remaining_gain   = (signed short)(band->power[power_idx]); //S12.3

      /* Choose PGA-A or PGA-B setting */
      pga_inl_ptr = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850]) ? l1d_rf2.pga_a_inl[rf_band-FrequencyBand850] : l1d_rf2.pga_b_inl[rf_band-FrequencyBand850];
      pga_inl_num = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850]) ? (MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM):(MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM);
      if( rf_band<=FrequencyBand900 )
      {  pga_gain_cw = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850])?TX_PGA_A_GAIN_CW_LB:TX_PGA_B_GAIN_CW_LB;  }
      else
      {  pga_gain_cw = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850])?TX_PGA_A_GAIN_CW_HB:TX_PGA_B_GAIN_CW_HB;  }
      
      tx_dbg_info[0]=remaining_gain<<2;

      remaining_gain   = (remaining_gain<<5) - POWER_BB0; //S7.8

      /* TX power sub-band compensation */
      weight = WeightARFCN_BinarySearch((l1d_rf2.arfcn&0x3FF), l1d_rf.band , band->arfcn_weight, 1);
      if( weight )
         n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
      else // no entry, not found
         n = ((0.0)*(1<<3)) + 4096;
      subband_dB = (signed short)(n) - 4096; //S12.3
      remaining_gain  += (subband_dB<<5); //S7.8

      tx_dbg_info[1]=subband_dB<<2;

      #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      offset_gain = L1D_RF_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm, ((mod_type>>slot_idx)&0x1),0xFFFF);
      remaining_gain += offset_gain;
      L1D_RF_Info_Trace( 26166, offset_gain, remaining_gain );
      #endif

#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
    #if IS_EPSK_ADJUST_TPO_SUPPORT
      /* TX power offset */
      offset_gain = L1D_NSFT_Adjust_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm,((mod_type>>slot_idx)&0x1));
      remaining_gain += offset_gain;
      L1D_RF_Info_Trace( 26167, offset_gain, remaining_gain );
    #endif//IS_EPSK_ADJUST_TPO_SUPPORT
#endif//IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT


      /* TX power rollback */
      rollback_gain    = L1D_RF_PowerRollback( power_dbm_rollback, l1d_rf.band, n, 1); /* input power_dbm_rollback instead of power_dbm to avoid wrong rollback output on high-power PCL in META mode */
      remaining_gain  -= (rollback_gain<<5); //S7.8

     tx_dbg_info[2]=rollback_gain<<2;
     tx_dbg_info[3]=-remaining_gain;

      #if IS_TX_POWER_CONTROL_SUPPORT
      {  short arfcn = (short)((rf_band==FrequencyBand1900)? (l1d_rf2.arfcn|0x400) : l1d_rf2.arfcn);
         if( rollback_gain == 0 )
         {  L1D_RF_TXPC_RECORD_PARAM( 3, band, (unsigned short)n, power_idx, 0, 0 );   }
         remaining_gain = (signed short)L1D_RF_TXPC_RecUpdateGain( remaining_gain, rf_band, arfcn, (short)slot_idx );
      }
      #endif

      tx_dbg_info[3]+=remaining_gain;
      tx_dbg_info[4]=-remaining_gain;

      #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
      {  /* TX power battery compensation - Voltage & Temperature */
         signed short     batcomp_dB;
         L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();
         L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,17,remaining_gain);
         if( (!L1D_CheckIfMetaMode())|| (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
         {  n = band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp];  } //battery volt.& Temp. compensate
         else
         {  n = ((0.0)*(1<<3)) + 4096; }
         batcomp_dB = (signed short)(n) - 4096; //S12.3
         remaining_gain += (batcomp_dB<<5);     //S7.8
         L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,17,remaining_gain);
      }
      #endif
      tx_dbg_info[4]+=remaining_gain;

      remaining_gain >>= 3;                  //S10.5

      /* TX PA Gain */
      while( (pcl_max-power_idx) > ofs_ptr[pa_gain_idx].pcl_index )
      {
         if( ofs_ptr[pa_gain_idx].pcl_index == -1 )
         {  /* avoid using the unwanted PA Gain */
            if( pa_gain_idx > 0 )
               pa_gain_idx--;
            break;
         }
         pa_gain_idx++;
         if( pa_gain_idx>=15 ) /* pcl > ofs_ptr[14].pcl_index, all use ofs_ptr[15] */
            break;
      }
      remaining_gain  -= ofs_ptr[pa_gain_idx].pa_gain; //S10.5
      tx_dbg_info[5]=ofs_ptr[pa_gain_idx].pa_gain;
  
      
      /* Tx search gain rf index */
      while( (remaining_gain+backoff_gain) < (pga_inl_ptr[gainrf_idx]) )
      {  gainrf_idx++;

         if( gainrf_idx>pga_inl_num ) /* avoid to exceed the pga_a/b_inl array */
            break;
      }
      if( gainrf_idx>0 )
         gainrf_idx--;  /* the remaining gain is compensated by Gbb0, and Gbb0 must < 0 */

      /* Get Gbb0 codeword */
      remaining_gain  -= pga_inl_ptr[gainrf_idx];
      tx_dbg_info[6]=pga_inl_ptr[gainrf_idx];
      
      gain_bb0 = L1D_RF_GetGainBB0CW( remaining_gain );
      tx_dbg_info[7]=remaining_gain;

      switch( ((pga_gain_cw[gainrf_idx]>>10)&0x1F) )
      {  
         case 0xF:
            TX_SLICE_GROUP = 0;
            break;
         case 0xD:
            TX_SLICE_GROUP = 1;
            break;            
         case 0x7:
            TX_SLICE_GROUP = 2;
            break;            
         case 0x3:
            TX_SLICE_GROUP = 3;
            break;            
         case 0x1:
            TX_SLICE_GROUP = 4;
            break;            
         case 0x16:
            TX_SLICE_GROUP = 5;
            break;            
         case 0x12:
            TX_SLICE_GROUP = 6;
            break;            
         case 0x11:
            TX_SLICE_GROUP = 7;
            break;            
         default:
            TX_SLICE_GROUP = 0;
            break;    
      }
      
      // Bypass 2G Phase/Gain Compensation since POC result of phase/gain is abnormal which need clarify.
      phase_comp       = (l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].phase_est)&0x7F;
      gain_comp        = (l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].gain_est)&0x7F;
      dc_comp_i        = -((l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].dc_est_i)>>1)&0x3FFF;
      dc_comp_q        = -((l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].dc_est_q)>>1)&0x3FFF;      

      *cw706 = pga_gain_cw[gainrf_idx];


      L1D_RF_EdgeTx_Trace(tx_dbg_info[0],tx_dbg_info[1],tx_dbg_info[2],tx_dbg_info[3]>>3,tx_dbg_info[4]>>3,tx_dbg_info[5],tx_dbg_info[6],tx_dbg_info[7]);

      #if IS_TX_POWER_CONTROL_SUPPORT
      l1d_rf2.tx_gain_setting[(unsigned char)slot_idx] = ( ((gainrf_idx&0xF)<<9) | (gain_bb0&0x1FF) );
      #endif

   }
   else
   #endif
   {  /* GMSK: Only for calculate gain_det */
      *cw706 = 0x00000; /* POR default value */
   }

   switch( slot_idx )
   {  case 0 : 
         HW_WRITE( TX_PWR0, gain_bb0 );
         HW_WRITE( TX_DC_COMP_I_0, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_0, dc_comp_q );      
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(0), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(0), (d16|gain_comp));
         break;
      case 1 : 
         HW_WRITE( TX_PWR1, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_1, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_1, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(0), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(0), ((gain_comp<<8)|d16));
         break;
      case 2 : 
         HW_WRITE( TX_PWR2, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_2, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_2, dc_comp_q );
         d16 = (HW_READ(TX_PHASE_COMP_CON(1)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(1), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(1)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(1), (d16|gain_comp));
         break;
      case 3 : 
         HW_WRITE( TX_PWR3, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_3, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_3, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(1)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(1), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(1)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(1), ((gain_comp<<8)|d16));
         break;
      case 4 : 
         HW_WRITE( TX_PWR4, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_4, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_4, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(2)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(2), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(2)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(2), (d16|gain_comp));
         break;
      case 5 : 
         HW_WRITE( TX_PWR5, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_5, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_5, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(2)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(2), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(2)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(2), ((gain_comp<<8)|d16));
         break;
      default: 
         HW_WRITE( TX_PWR0, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_0, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_0, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(0), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(0), (d16|gain_comp));
         break;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_RF_MT6176 */

#if IS_RF_MT6179
char L1D_RF_CheckDMPower( void )
{
   return (l1d_rf2.is_2g_on&0x1); /* use bit[0] to indicate the 2G state */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int L1D_RF_Get_POC_MidArfcn( int rf_band )
{
   int midband_arfcn[4]={ 189, 37, 698, 661 };
   return midband_arfcn[rf_band];
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetBPI_PAOnOff( int bandidx, unsigned long* POC_PAOn, unsigned long* POC_PAOff)
{
   int i;
   uintBPI *PDATA;
   uintBPI PDATA_64;
   unsigned long* BPIOn  = POC_PAOn;
   unsigned long* BPIOff = POC_PAOff;

   PDATA = PDATA_TABLE[ bandidx ][ RF_TX ];

   for (i = 0; i < 4; i++)
   {
      PDATA_64 = *PDATA;

      if (i != 3)
      {
         *BPIOn = (PDATA_64 & 0xFFFFFFFF);          BPIOn++;    //< bpi[31:0]
         *BPIOn = ((PDATA_64>>32) & 0xFFFFFFFF);    BPIOn++;    //< bpi[47:32]
      }
      else // i ==3 for PA off 
      {
         *BPIOff = (PDATA_64 & 0xFFFFFFFF);         BPIOff++;   //< bpi[31:0]
         *BPIOff = ((PDATA_64>>32) & 0xFFFFFFFF);               //< bpi[47:32]
      }

      PDATA++;
   }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_Get_TXLO_Data( int rf_band, int arfcn, unsigned long tx_lo)
{
   int tx_lo_cap_array_adj[4]={ 125, 140, 150, 160}; //LUT for LO(25kHz/code)
   int freq_diff_25khz, tx_lo_cap_array, tx_lo_cap_array_result;

   if( (rf_band==1) && (arfcn>124) )
   {  arfcn-=1024;  }
         
   // Calulate tx_lo_cap_array_result according to subband
   tx_lo_cap_array = ((tx_lo>>13)&0x7F);
   freq_diff_25khz = (L1D_RF_Get_POC_MidArfcn(rf_band)-arfcn)*8; /* 1 channel = 8*25khz for 2G */
   tx_lo_cap_array_result = tx_lo_cap_array + (freq_diff_25khz/tx_lo_cap_array_adj[rf_band])/* 25 khz/code*/;

   // Clipping tx_lo_cap_array_result if overflow
   if (tx_lo_cap_array_result >= 0x7F) 
   {  tx_lo_cap_array_result = 0x7F;
   }
   else if (tx_lo_cap_array_result <= 0)
   {  tx_lo_cap_array_result = 0;
   }
   
   // Combine CW714
   return ((tx_lo&(~(0x7F<<13)))|((tx_lo_cap_array_result&0x7F)<<13));
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Gainrf_Init( void )
{  // If the PGA Switch point is modified, please remember to check L1D_RF_TxGainSetting, too.
   signed int band, i;
   signed int pga_switch_pwr_idx;

   for( band=0; band<4; band++ )
   {
      pga_switch_pwr_idx = (band < 2) ? (PGA_SWITCH_DBM_LB-5/*lowest_dbm*/)/2 : (PGA_SWITCH_DBM_HB-0/*lowest_dbm*/)/2;

      l1d_rf2.pga_a_inl[band][0] = 0;
      l1d_rf2.pga_b_inl[band][0] = -386;

      for( i=1; i<=MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM; i++ )
      {  l1d_rf2.pga_a_inl[band][i] = l1d_rf2.pga_a_inl[band][i-1]+l1d_rf2.rfc_data.g_result[band].tx_dnl_lin_pga_a[i-1];  }

      for( i=1; i<=MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM; i++ )
      {  l1d_rf2.pga_b_inl[band][i] = l1d_rf2.pga_b_inl[band][i-1]+l1d_rf2.rfc_data.g_result[band].tx_dnl_lin_pga_b[i-1];  }
    
      l1d_rf2.pga_ab_switch_pwr_idx[band] = pga_switch_pwr_idx;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_GetGainBB0CW( signed long gainbb0 )
{  /* dB->linear(code): polynomial fitting */
   signed long G_fxp;
   signed long r, z, y;
   signed int  q=0;

   G_fxp = gainbb0<<5;

   while( G_fxp<0 )
   {  G_fxp += 6165;
      q++;
   }

   r = G_fxp<<2;
   z = ( (9743*r)+(1<<14) )>>15;
   z = ( (z+14323)*r+(1<<14) )>>15;
   z += 16412;
   y = (1<<GAINBB0_CODE_LENGTH)-(((z>>q)+(1<<(14-GAINBB0_CODE_LENGTH-1)))>>(14-GAINBB0_CODE_LENGTH));
   if( y<0 ) y=0;

   return (unsigned long)y;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void  L1D_RF_TxGainSetting( unsigned short mod_type, char slot_idx, signed short tx_power, FrequencyBand rf_band, unsigned long *cw705, unsigned long *cw706 )
{
   signed short     gain_bb0   = 0;
   signed short     power_dbm  = tx_power;
   signed short     lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
   unsigned short   gain_comp = 0, phase_comp = 0, dc_comp_i = 0, dc_comp_q = 0, d16 = 0;
   #if IS_EPSK_TX_SUPPORT
   signed short     tx_dbg_info[8]={ 0 }; //0:want_power ; 1:subband ; 2:rollback ; 3:temperature ; 4:voltage ; 5:pa_gain ; 6:gain_rf ; 7:gbb0, all in S10.5
   signed short     power_dbm_rollback = tx_power;
   signed short     subband_dB;
   signed short     rollback_gain;
   signed short     remaining_gain;
   signed short     pcl_max      = (rf_band<=FrequencyBand900) ? 19 : 15;
   signed short     backoff_gain = (rf_band<=FrequencyBand900) ? GAIN_BACKOFF_LB : GAIN_BACKOFF_HB;
   unsigned short   lb_or_hb     = (rf_band<=FrequencyBand900) ? 0 : 1;
   unsigned short   n = ((0.0)*(1<<3)) + 4096;
   static   const   sARFCN_SECTION*  weight;    // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
   const sRAMPDATA *band;
   pa_vbias *ofs_ptr;
   signed short     power_idx   = 0;
   signed short     pa_gain_idx = 0;
   signed short     gainrf_idx  = 0;
   signed short    *pga_inl_ptr;
   signed char      TX_SLICE_GROUP, pga_inl_num;
   const unsigned long   *pga_gain_cw;
   const unsigned long TX_PGA_A_GAIN_CW_LB[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { 0x7BFC0, 0x7BF80, 0x7BF40, 0x7BF00, 0x7BEC0, 0x7BE80, 0x7BE40,
                                                                                 0x7BE00, 0x7BDC0, 0x7B5C0, 0x79EC0, 0x79E40, 0x78FC0, 0x78EC0,
                                                                                 0x787C0, 0x78740, 0x786C0, 0x78640, 0x785C0, 0x78540, 0x784C0 };
   const unsigned long TX_PGA_A_GAIN_CW_HB[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { 0x7BFC0, 0x7BF80, 0x7BF40, 0x7BF00, 0x7BEC0, 0x7BE80, 0x7BE40,
                                                                                 0x7BE00, 0x7BDC0, 0x7B5C0, 0x79EC0, 0x79E40, 0x78FC0, 0x78EC0,
                                                                                 0x787C0, 0x78740, 0x786C0, 0x78640, 0x785C0, 0x78540, 0x784C0 };
   const unsigned long TX_PGA_B_GAIN_CW_LB[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM+1] = { 0x7DBC0, 0x7DAC0, 0x7CBC0, 0x7CB40, 0x7CAC0, 
                                                                                 0x7CA40, 0x7C9C0, 0x7C940, 0x7C8C0, 0x7C840, 
                                                                                 0x7C447, 0x7C443, 0x7C441, 0x7C440, 0x7C450, 0x7C460, 0x7C470 };
   const unsigned long TX_PGA_B_GAIN_CW_HB[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM|1] = { 0x7DBC0, 0x7DAC0, 0x7CBC0, 0x7CB40, 0x7CAC0, 
                                                                                 0x7CA40, 0x7C9C0, 0x7C940, 0x7C8C0, 0x7C840, 
                                                                                 0x7C45F, 0x7C457, 0x7C453, 0x7C451, 0x7C450, 0x7C460, 0x7C470 };
   #endif
   
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT || (IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT && IS_EPSK_ADJUST_TPO_SUPPORT)
   signed short offset_gain;
   #endif   // IS_TX_POWER_OFFSET_SUPPORT

   if( power_dbm > (lowest_dbm+2*15) )
      power_dbm = lowest_dbm+2*15;
   else if( power_dbm < lowest_dbm )
      power_dbm = lowest_dbm;

   #if IS_EPSK_TX_SUPPORT
   if( (mod_type>>slot_idx)&0x1 )
   {  /* 8psk */
      band = RampData_EPSK[(int)rf_band];
      /* Prevent META pass invalid power value in EPSK ( tx_power > EPSK_LB/HB_MAX_POWER ) */
      /* which will cause the rollback function fail. In normal mode, it doesn't matter    */
      if( lb_or_hb )
         power_dbm_rollback = ( power_dbm > EPSK_HB_MAX_POWER ) ? EPSK_HB_MAX_POWER : power_dbm; //High band
      else
         power_dbm_rollback = ( power_dbm > EPSK_LB_MAX_POWER ) ? EPSK_LB_MAX_POWER : power_dbm; //Low band

      switch( l1d_rf.band )
      {
         case FrequencyBand850:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias;
            break;
         case FrequencyBand900:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias;
            break;
         case FrequencyBand1800:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias;
            break;
         case FrequencyBand1900:
         default:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias;
      }

      power_idx = (power_dbm-lowest_dbm)/2;
      remaining_gain   = (signed short)(band->power[power_idx]); //S12.3

      /* Choose PGA-A or PGA-B setting */
      pga_inl_ptr = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850]) ? l1d_rf2.pga_a_inl[rf_band-FrequencyBand850] : l1d_rf2.pga_b_inl[rf_band-FrequencyBand850];
      pga_inl_num = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850]) ? (MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM):(MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM);
      if( rf_band<=FrequencyBand900 )
      {  pga_gain_cw = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850])?TX_PGA_A_GAIN_CW_LB:TX_PGA_B_GAIN_CW_LB;  }
      else
      {  pga_gain_cw = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850])?TX_PGA_A_GAIN_CW_HB:TX_PGA_B_GAIN_CW_HB;  }
      
      tx_dbg_info[0]=remaining_gain<<2;

      remaining_gain   = (remaining_gain<<5) - POWER_BB0; //S7.8

      /* TX power sub-band compensation */
      weight = WeightARFCN_BinarySearch((l1d_rf2.arfcn&0x3FF), l1d_rf.band , band->arfcn_weight, 1);
      if( weight )
         n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
      else // no entry, not found
         n = ((0.0)*(1<<3)) + 4096;
      subband_dB = (signed short)(n) - 4096; //S12.3
      remaining_gain  += (subband_dB<<5); //S7.8

      tx_dbg_info[1]=subband_dB<<2;

      #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /* TX power offset */
      offset_gain = L1D_RF_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm, ((mod_type>>slot_idx)&0x1),0xFFFF);
      remaining_gain += offset_gain;
      L1D_RF_Info_Trace( 26166, offset_gain, remaining_gain );
      #endif
#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
    #if IS_EPSK_ADJUST_TPO_SUPPORT
      /* TX power offset */
      offset_gain = L1D_NSFT_Adjust_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm,((mod_type>>slot_idx)&0x1));
      remaining_gain += offset_gain;
      L1D_RF_Info_Trace( 26167, offset_gain, remaining_gain );
    #endif//IS_EPSK_ADJUST_TPO_SUPPORT
#endif//IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT


      /* TX power rollback */
      rollback_gain    = L1D_RF_PowerRollback( power_dbm_rollback, l1d_rf.band, n, 1); /* input power_dbm_rollback instead of power_dbm to avoid wrong rollback output on high-power PCL in META mode */
      remaining_gain  -= (rollback_gain<<5); //S7.8

     tx_dbg_info[2]=rollback_gain<<2;
     tx_dbg_info[3]=-remaining_gain;

      #if IS_TX_POWER_CONTROL_SUPPORT
      {  short arfcn = (short)((rf_band==FrequencyBand1900)? (l1d_rf2.arfcn|0x400) : l1d_rf2.arfcn);
         if( rollback_gain == 0 )
         {  L1D_RF_TXPC_RECORD_PARAM( 3, band, (unsigned short)n, power_idx, 0, 0 );   }
         remaining_gain = (signed short)L1D_RF_TXPC_RecUpdateGain( remaining_gain, rf_band, arfcn, (short)slot_idx );
      }
      #endif

      tx_dbg_info[3]+=remaining_gain;
      tx_dbg_info[4]=-remaining_gain;

      #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
      {  /* TX power battery compensation - Voltage & Temperature */
         signed short     batcomp_dB;
         L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();
         L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,17,remaining_gain);
         if( (!L1D_CheckIfMetaMode())|| (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
         {  n = band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp];  } //battery volt.& Temp. compensate
         else
         {  n = ((0.0)*(1<<3)) + 4096; }
         batcomp_dB = (signed short)(n) - 4096; //S12.3
         remaining_gain += (batcomp_dB<<5);     //S7.8
         L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,17,remaining_gain);
      }
      #endif
      tx_dbg_info[4]+=remaining_gain;

      remaining_gain >>= 3;                  //S10.5

      /* TX PA Gain */
      while( (pcl_max-power_idx) > ofs_ptr[pa_gain_idx].pcl_index )
      {
         if( ofs_ptr[pa_gain_idx].pcl_index == -1 )
         {  /* avoid using the unwanted PA Gain */
            if( pa_gain_idx > 0 )
               pa_gain_idx--;
            break;
         }
         pa_gain_idx++;
         if( pa_gain_idx>=15 ) /* pcl > ofs_ptr[14].pcl_index, all use ofs_ptr[15] */
            break;
      }
      remaining_gain  -= ofs_ptr[pa_gain_idx].pa_gain; //S10.5
      tx_dbg_info[5]=ofs_ptr[pa_gain_idx].pa_gain;
  
      
      /* Tx search gain rf index */
      while( (remaining_gain+backoff_gain) < (pga_inl_ptr[gainrf_idx]) )
      {  gainrf_idx++;

         if( gainrf_idx>pga_inl_num ) /* avoid to exceed the pga_a/b_inl array */
            break;
      }
      if( gainrf_idx>0 )
         gainrf_idx--;  /* the remaining gain is compensated by Gbb0, and Gbb0 must < 0 */

      /* Get Gbb0 codeword */
      remaining_gain  -= pga_inl_ptr[gainrf_idx];
      tx_dbg_info[6]=pga_inl_ptr[gainrf_idx];
      
      gain_bb0 = L1D_RF_GetGainBB0CW( remaining_gain );
      tx_dbg_info[7]=remaining_gain;

      switch( ((pga_gain_cw[gainrf_idx]>>10)&0x1F) )
      {  
         case 0xF:
            TX_SLICE_GROUP = 0;
            break;
         case 0xD:
            TX_SLICE_GROUP = 1;
            break;            
         case 0x7:
            TX_SLICE_GROUP = 2;
            break;            
         case 0x3:
            TX_SLICE_GROUP = 3;
            break;            
         case 0x1:
            TX_SLICE_GROUP = 4;
            break;            
         case 0x16:
            TX_SLICE_GROUP = 5;
            break;            
         case 0x12:
            TX_SLICE_GROUP = 6;
            break;            
         case 0x11:
            TX_SLICE_GROUP = 7;
            break;            
         default:
            TX_SLICE_GROUP = 0;
            break;    
      }
      
      // Bypass 2G Phase/Gain Compensation since POC result of phase/gain is abnormal which need clarify.
      phase_comp       = (l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].phase_est)&0x7F;
      gain_comp        = (l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].gain_est)&0x7F;
      dc_comp_i        = -((l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].dc_est_i)>>1)&0x3FFF;
      dc_comp_q        = -((l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].dc_est_q)>>1)&0x3FFF;      

      *cw706 = pga_gain_cw[gainrf_idx];


      L1D_RF_EdgeTx_Trace(tx_dbg_info[0],tx_dbg_info[1],tx_dbg_info[2],tx_dbg_info[3]>>3,tx_dbg_info[4]>>3,tx_dbg_info[5],tx_dbg_info[6],tx_dbg_info[7]);

      #if IS_TX_POWER_CONTROL_SUPPORT
      l1d_rf2.tx_gain_setting[(unsigned char)slot_idx] = ( ((gainrf_idx&0xF)<<9) | (gain_bb0&0x1FF) );
      #endif

   }
   else
   #endif
   {  /* GMSK: Only for calculate gain_det */
      *cw706 = 0x00000; /* POR default value */
   }

   switch( slot_idx )
   {  case 0 : 
         HW_WRITE( TX_PWR0, gain_bb0 );
         HW_WRITE( TX_DC_COMP_I_0, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_0, dc_comp_q );      
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(0), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(0), (d16|gain_comp));
         break;
      case 1 : 
         HW_WRITE( TX_PWR1, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_1, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_1, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(0), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(0), ((gain_comp<<8)|d16));
         break;
      case 2 : 
         HW_WRITE( TX_PWR2, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_2, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_2, dc_comp_q );
         d16 = (HW_READ(TX_PHASE_COMP_CON(1)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(1), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(1)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(1), (d16|gain_comp));
         break;
      case 3 : 
         HW_WRITE( TX_PWR3, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_3, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_3, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(1)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(1), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(1)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(1), ((gain_comp<<8)|d16));
         break;
      case 4 : 
         HW_WRITE( TX_PWR4, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_4, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_4, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(2)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(2), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(2)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(2), (d16|gain_comp));
         break;
      case 5 : 
         HW_WRITE( TX_PWR5, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_5, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_5, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(2)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(2), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(2)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(2), ((gain_comp<<8)|d16));
         break;
      default: 
         HW_WRITE( TX_PWR0, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_0, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_0, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(0), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(0), (d16|gain_comp));
         break;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_RF_MT6179 */

#if IS_RF_MT6177L
char L1D_RF_CheckDMPower( void )
{
   return (l1d_rf2.is_2g_on&0x1); /* use bit[0] to indicate the 2G state */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int L1D_RF_Get_POC_MidArfcn( int rf_band )
{
   int midband_arfcn[4]={ 189, 37, 698, 661 };
   return midband_arfcn[rf_band];
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetBPI_PAOnOff( int bandidx, unsigned long* POC_PAOn, unsigned long* POC_PAOff)
{
   int i;
   sint_P *PDATA;
   sint_P PDATA_32;
   unsigned long* BPIOn  = POC_PAOn;
   unsigned long* BPIOff = POC_PAOff;

   PDATA = PDATA_TABLE[ bandidx ][ RF_TX ];

   for (i = 0; i < 4; i++)
   {
      PDATA_32 = *PDATA;

      if (i != 3)
      {
         *BPIOn = PDATA_32;
      }
      else // i ==3 for PA off 
      {
         *BPIOff = PDATA_32;
      }

      PDATA++;
   }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_Get_TXLO_Data( int rf_band, int arfcn, unsigned long tx_lo)
{
   int tx_lo_cap_array_adj[4]={ 125, 140, 150, 160}; //LUT for LO(25kHz/code)
   int freq_diff_25khz, tx_lo_cap_array, tx_lo_cap_array_result;

   if( (rf_band==1) && (arfcn>124) )
   {  arfcn-=1024;  }
         
   // Calulate tx_lo_cap_array_result according to subband
   tx_lo_cap_array = ((tx_lo>>13)&0x7F);
   freq_diff_25khz = (L1D_RF_Get_POC_MidArfcn(rf_band)-arfcn)*8; /* 1 channel = 8*25khz for 2G */
   tx_lo_cap_array_result = tx_lo_cap_array + (freq_diff_25khz/tx_lo_cap_array_adj[rf_band])/* 25 khz/code*/;

   // Clipping tx_lo_cap_array_result if overflow
   if (tx_lo_cap_array_result >= 0x7F) 
   {  tx_lo_cap_array_result = 0x7F;
   }
   else if (tx_lo_cap_array_result <= 0)
   {  tx_lo_cap_array_result = 0;
   }
   
   // Combine CW714
   return ((tx_lo&(~(0x7F<<13)))|((tx_lo_cap_array_result&0x7F)<<13));
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Gainrf_Init( void )
{  // If the PGA Switch point is modified, please remember to check L1D_RF_TxGainSetting, too.
   signed int band, i;
   signed int pga_switch_pwr_idx;

   for( band=0; band<4; band++ )
   {
      pga_switch_pwr_idx = (band < 2) ? (PGA_SWITCH_DBM_LB-5/*lowest_dbm*/)/2 : (PGA_SWITCH_DBM_HB-0/*lowest_dbm*/)/2;

      l1d_rf2.pga_a_inl[band][0] = 0;
      l1d_rf2.pga_b_inl[band][0] = -386;

      for( i=1; i<=MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM; i++ )
      {  l1d_rf2.pga_a_inl[band][i] = l1d_rf2.pga_a_inl[band][i-1]+l1d_rf2.rfc_data.g_result[band].tx_dnl_lin_pga_a[i-1];  }

      for( i=1; i<=MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM; i++ )
      {  l1d_rf2.pga_b_inl[band][i] = l1d_rf2.pga_b_inl[band][i-1]+l1d_rf2.rfc_data.g_result[band].tx_dnl_lin_pga_b[i-1];  }
    
      l1d_rf2.pga_ab_switch_pwr_idx[band] = (band < 2) ? (-1) : pga_switch_pwr_idx; /*Special patch for low band because cannot use PGA-B */
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_GetGainBB0CW( signed long gainbb0 )
{  /* dB->linear(code): polynomial fitting */
   signed long G_fxp;
   signed long r, z, y;
   signed int  q=0;

   G_fxp = gainbb0<<5;

   while( G_fxp<0 )
   {  G_fxp += 6165;
      q++;
   }

   r = G_fxp<<2;
   z = ( (9743*r)+(1<<14) )>>15;
   z = ( (z+14323)*r+(1<<14) )>>15;
   z += 16412;
   y = (1<<GAINBB0_CODE_LENGTH)-(((z>>q)+(1<<(14-GAINBB0_CODE_LENGTH-1)))>>(14-GAINBB0_CODE_LENGTH));
   if( y<0 ) y=0;

   return (unsigned long)y;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void  L1D_RF_TxGainSetting( unsigned short mod_type, char slot_idx, signed short tx_power, FrequencyBand rf_band, unsigned long *cw705, unsigned long *cw706 )
{
   signed short     gain_bb0   = 0;
   signed short     power_dbm  = tx_power;
   signed short     lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
   unsigned short   gain_comp = 0, phase_comp = 0, dc_comp_i = 0, dc_comp_q = 0, d16 = 0;
   #if IS_EPSK_TX_SUPPORT
   signed short     tx_dbg_info[8]={ 0 }; //0:want_power ; 1:subband ; 2:rollback ; 3:temperature ; 4:voltage ; 5:pa_gain ; 6:gain_rf ; 7:gbb0, all in S10.5
   signed short     power_dbm_rollback = tx_power;
   signed short     subband_dB;
   signed short     rollback_gain = 0;
   signed short     remaining_gain;
   signed short     pcl_max      = (rf_band<=FrequencyBand900) ? 19 : 15;
   signed short     backoff_gain = (rf_band<=FrequencyBand900) ? GAIN_BACKOFF_LB : GAIN_BACKOFF_HB;
   unsigned short   lb_or_hb     = (rf_band<=FrequencyBand900) ? 0 : 1;
   unsigned short   n = ((0.0)*(1<<3)) + 4096;
   static   const   sARFCN_SECTION*  weight;    // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
   const sRAMPDATA *band;
   pa_vbias *ofs_ptr;
   signed short     power_idx   = 0;
   signed short     pa_gain_idx = 0;
   signed short     gainrf_idx  = 0;
   signed short    *pga_inl_ptr;
   signed char      TX_SLICE_GROUP, pga_inl_num;
   const unsigned long   *pga_gain_cw;
   /*Special patch for low band is also in L1D_RF_Gainrf_Init()*/
   /*Special patch for low band because cannot use PGA-B: add G21a */
   const unsigned long TX_PGA_A_GAIN_CW_LB[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { 0x7BFC0, 0x7BF80, 0x7BF40, 0x7BF00, 0x7BEC0, 0x7BE80, 0x7BE40,
                                                                                 0x7BE00, 0x7BDC0, 0x7B5C0, 0x79EC0, 0x79E40, 0x78FC0, 0x78EC0,
                                                                                 0x787C0, 0x78740, 0x786C0, 0x78640, 0x785C0, 0x78540, 0x784C0, 0x78440 /*add G21a*/};
   const unsigned long TX_PGA_A_GAIN_CW_HB[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { 0x7BFC0, 0x7BF80, 0x7BF40, 0x7BF00, 0x7BEC0, 0x7BE80, 0x7BE40,
                                                                                 0x7BE00, 0x7BDC0, 0x7B5C0, 0x79EC0, 0x79E40, 0x78FC0, 0x78EC0,
                                                                                 0x787C0, 0x78740, 0x786C0, 0x78640, 0x785C0, 0x78540, 0x784C0, 0xCCCCC /*align LB*/};
   /*Special patch for low band because cannot use PGA-B */
   const unsigned long TX_PGA_B_GAIN_CW_LB[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM+1] = { 0xCCCCC, 0xCCCCC, 0xCCCCC, 0xCCCCC, 0xCCCCC, 
                                                                                 0xCCCCC, 0xCCCCC, 0xCCCCC, 0xCCCCC, 0xCCCCC, 
                                                                                 0xCCCCC, 0xCCCCC, 0xCCCCC, 0xCCCCC, 0xCCCCC, 0xCCCCC, 0xCCCCC };
   const unsigned long TX_PGA_B_GAIN_CW_HB[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM|1] = { 0x7DBC0, 0x7DAC0, 0x7CBC0, 0x7CB40, 0x7CAC0, 
                                                                                 0x7CA40, 0x7C9C0, 0x7C940, 0x7C8C0, 0x7C840, 
                                                                                 0x7C45F, 0x7C457, 0x7C453, 0x7C451, 0x7C450, 0x7C460, 0x7C470 };
   #endif
   
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT || (IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT && IS_EPSK_ADJUST_TPO_SUPPORT)
   signed short offset_gain;
   #endif   // IS_TX_POWER_OFFSET_SUPPORT
   #if IS_GSM_EM_TX_POWER_CONTROL_SUPPORT
   kal_bool  EM_flag = 0;   //TX power control via EM is on/off
   kal_int8  EM_mode = 0;   //-1: invalid value; 0: one PCL; 1: max TX power
   #endif

   if( power_dbm > (lowest_dbm+2*15) )
      power_dbm = lowest_dbm+2*15;
   else if( power_dbm < lowest_dbm )
      power_dbm = lowest_dbm;

   #if IS_EPSK_TX_SUPPORT
   if( (mod_type>>slot_idx)&0x1 )
   {  /* 8psk */
      band = RampData_EPSK[(int)rf_band];
      /* Prevent META pass invalid power value in EPSK ( tx_power > EPSK_LB/HB_MAX_POWER ) */
      /* which will cause the rollback function fail. In normal mode, it doesn't matter    */
      if( lb_or_hb )
         power_dbm_rollback = ( power_dbm > EPSK_HB_MAX_POWER ) ? EPSK_HB_MAX_POWER : power_dbm; //High band
      else
         power_dbm_rollback = ( power_dbm > EPSK_LB_MAX_POWER ) ? EPSK_LB_MAX_POWER : power_dbm; //Low band

      switch( l1d_rf.band )
      {
         case FrequencyBand850:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias;
            break;
         case FrequencyBand900:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias;
            break;
         case FrequencyBand1800:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias;
            break;
         case FrequencyBand1900:
         default:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias;
      }

      power_idx = (power_dbm-lowest_dbm)/2;
      remaining_gain   = (signed short)(band->power[power_idx]); //S12.3

      /* Choose PGA-A or PGA-B setting */
      pga_inl_ptr = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850]) ? l1d_rf2.pga_a_inl[rf_band-FrequencyBand850] : l1d_rf2.pga_b_inl[rf_band-FrequencyBand850];
      pga_inl_num = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850]) ? (MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM):(MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM);
      if( rf_band<=FrequencyBand900 )
      {  pga_gain_cw = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850])?TX_PGA_A_GAIN_CW_LB:TX_PGA_B_GAIN_CW_LB;  }
      else
      {  pga_gain_cw = (power_idx>l1d_rf2.pga_ab_switch_pwr_idx[rf_band-FrequencyBand850])?TX_PGA_A_GAIN_CW_HB:TX_PGA_B_GAIN_CW_HB;  }
      
      tx_dbg_info[0]=remaining_gain<<2;

      remaining_gain   = (remaining_gain<<5) - POWER_BB0; //S7.8

      /* TX power sub-band compensation */
      weight = WeightARFCN_BinarySearch((l1d_rf2.arfcn&0x3FF), l1d_rf.band , band->arfcn_weight, 1);
      if( weight )
         n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
      else // no entry, not found
         n = ((0.0)*(1<<3)) + 4096;
      subband_dB = (signed short)(n) - 4096; //S12.3
      remaining_gain  += (subband_dB<<5); //S7.8

      tx_dbg_info[1]=subband_dB<<2;

      #if IS_GSM_EM_TX_POWER_CONTROL_SUPPORT

      L1T_SetGsmTxPower(&EM_flag, &EM_mode);
      if(EM_flag == 0)   /* BYPASS TX POWER OFFSET & ROLLBACK */
      #endif
      {
         #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         /* TX power offset */
         offset_gain = L1D_RF_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm, ((mod_type>>slot_idx)&0x1),0xFFFF);
         remaining_gain += offset_gain;
         L1D_RF_Info_Trace( 26166, offset_gain, remaining_gain );
         #endif

         #if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
            #if IS_EPSK_ADJUST_TPO_SUPPORT
            /* TX power offset */
            offset_gain = L1D_NSFT_Adjust_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm,((mod_type>>slot_idx)&0x1));
            remaining_gain += offset_gain;
            L1D_RF_Info_Trace( 26167, offset_gain, remaining_gain );
            #endif//IS_EPSK_ADJUST_TPO_SUPPORT
         #endif//IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT


         /* TX power rollback */
         rollback_gain    = L1D_RF_PowerRollback( power_dbm_rollback, l1d_rf.band, n, 1); /* input power_dbm_rollback instead of power_dbm to avoid wrong rollback output on high-power PCL in META mode */
         remaining_gain  -= (rollback_gain<<5); //S7.8

         tx_dbg_info[2]=rollback_gain<<2;
      }

      tx_dbg_info[3]=-remaining_gain;

      #if IS_TX_POWER_CONTROL_SUPPORT
      {  short arfcn = (short)((rf_band==FrequencyBand1900)? (l1d_rf2.arfcn|0x400) : l1d_rf2.arfcn);
         if( rollback_gain == 0 )
         {  L1D_RF_TXPC_RECORD_PARAM( 3, band, (unsigned short)n, power_idx, 0, 0 );   }
         remaining_gain = (signed short)L1D_RF_TXPC_RecUpdateGain( remaining_gain, rf_band, arfcn, (short)slot_idx );
      }
      #endif

      tx_dbg_info[3]+=remaining_gain;
      tx_dbg_info[4]=-remaining_gain;

      #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
      {  /* TX power battery compensation - Voltage & Temperature */
         signed short     batcomp_dB;
         L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();
         L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,17,remaining_gain);
         if( (!L1D_CheckIfMetaMode())|| (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
         {  n = band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp];  } //battery volt.& Temp. compensate
         else
         {  n = ((0.0)*(1<<3)) + 4096; }
         batcomp_dB = (signed short)(n) - 4096; //S12.3
         remaining_gain += (batcomp_dB<<5);     //S7.8
         L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,17,remaining_gain);
      }
      #endif
      tx_dbg_info[4]+=remaining_gain;

      remaining_gain >>= 3;                  //S10.5

      /* TX PA Gain */
      while( (pcl_max-power_idx) > ofs_ptr[pa_gain_idx].pcl_index )
      {
         if( ofs_ptr[pa_gain_idx].pcl_index == -1 )
         {  /* avoid using the unwanted PA Gain */
            if( pa_gain_idx > 0 )
               pa_gain_idx--;
            break;
         }
         pa_gain_idx++;
         if( pa_gain_idx>=15 ) /* pcl > ofs_ptr[14].pcl_index, all use ofs_ptr[15] */
            break;
      }
      remaining_gain  -= ofs_ptr[pa_gain_idx].pa_gain; //S10.5
      tx_dbg_info[5]=ofs_ptr[pa_gain_idx].pa_gain;
  
      
      /* Tx search gain rf index */
      while( (remaining_gain+backoff_gain) < (pga_inl_ptr[gainrf_idx]) )
      {  gainrf_idx++;

         if( gainrf_idx>pga_inl_num ) /* avoid to exceed the pga_a/b_inl array */
            break;
      }
      if( gainrf_idx>0 )
         gainrf_idx--;  /* the remaining gain is compensated by Gbb0, and Gbb0 must < 0 */

      /* Get Gbb0 codeword */
      remaining_gain  -= pga_inl_ptr[gainrf_idx];
      tx_dbg_info[6]=pga_inl_ptr[gainrf_idx];
      
      gain_bb0 = L1D_RF_GetGainBB0CW( remaining_gain );
      tx_dbg_info[7]=remaining_gain;

      switch( ((pga_gain_cw[gainrf_idx]>>10)&0x1F) )
      {  
         case 0xF:
            TX_SLICE_GROUP = 0;
            break;
         case 0xD:
            TX_SLICE_GROUP = 1;
            break;            
         case 0x7:
            TX_SLICE_GROUP = 2;
            break;            
         case 0x3:
            TX_SLICE_GROUP = 3;
            break;            
         case 0x1:
            TX_SLICE_GROUP = 4;
            break;            
         case 0x16:
            TX_SLICE_GROUP = 5;
            break;            
         case 0x12:
            TX_SLICE_GROUP = 6;
            break;            
         case 0x11:
            TX_SLICE_GROUP = 7;
            break;            
         default:
            TX_SLICE_GROUP = 0;
            break;    
      }
      
      // Bypass 2G Phase/Gain Compensation since POC result of phase/gain is abnormal which need clarify.
      phase_comp       = (l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].phase_est)&0x7F;
      gain_comp        = (l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].gain_est)&0x7F;
      dc_comp_i        = -((l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].dc_est_i)<<1)&0x3FFF;
      dc_comp_q        = -((l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].dc_est_q)<<1)&0x3FFF;      

      if (pga_gain_cw[gainrf_idx]==0xCCCCC)
      {
         L1D_RF_Info_Trace( 12190, 6177, 706 );
         *cw706 = 0x00000;      
      }
      else
      {
         *cw706 = pga_gain_cw[gainrf_idx];
      }

      L1D_RF_EdgeTx_Trace(tx_dbg_info[0],tx_dbg_info[1],tx_dbg_info[2],tx_dbg_info[3]>>3,tx_dbg_info[4]>>3,tx_dbg_info[5],tx_dbg_info[6],tx_dbg_info[7]);

      #if IS_TX_POWER_CONTROL_SUPPORT
      l1d_rf2.tx_gain_setting[(unsigned char)slot_idx] = ( ((gainrf_idx&0xF)<<9) | (gain_bb0&0x1FF) );
      #endif

   }
   else
   #endif
   {  /* GMSK: Only for calculate gain_det */
      *cw706 = 0x00000; /* POR default value */
   }

   switch( slot_idx )
   {  case 0 : 
         HW_WRITE( TX_PWR0, gain_bb0 );
         HW_WRITE( TX_DC_COMP_I_0, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_0, dc_comp_q );      
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(0), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(0), (d16|gain_comp));
         break;
      case 1 : 
         HW_WRITE( TX_PWR1, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_1, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_1, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(0), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(0), ((gain_comp<<8)|d16));
         break;
      case 2 : 
         HW_WRITE( TX_PWR2, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_2, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_2, dc_comp_q );
         d16 = (HW_READ(TX_PHASE_COMP_CON(1)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(1), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(1)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(1), (d16|gain_comp));
         break;
      case 3 : 
         HW_WRITE( TX_PWR3, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_3, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_3, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(1)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(1), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(1)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(1), ((gain_comp<<8)|d16));
         break;
      case 4 : 
         HW_WRITE( TX_PWR4, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_4, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_4, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(2)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(2), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(2)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(2), (d16|gain_comp));
         break;
      case 5 : 
         HW_WRITE( TX_PWR5, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_5, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_5, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(2)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(2), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(2)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(2), ((gain_comp<<8)|d16));
         break;
      default: 
         HW_WRITE( TX_PWR0, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_0, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_0, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(0), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(0), (d16|gain_comp));
         break;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_RF_MT6177L */

#if IS_RF_MT6177M
char L1D_RF_CheckDMPower( void )
{
   return (l1d_rf2.is_2g_on&0x1); /* use bit[0] to indicate the 2G state */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

int L1D_RF_Get_POC_MidArfcn( int rf_band )
{
   int midband_arfcn[4]={ 189, 37, 698, 661 };
   return midband_arfcn[rf_band];
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetBPI_PAOnOff( int bandidx, unsigned long* POC_PAOn, unsigned long* POC_PAOff)
{
   int i;
   sint_P *PDATA;
   sint_P PDATA_32;
   unsigned long* BPIOn  = POC_PAOn;
   unsigned long* BPIOff = POC_PAOff;

   PDATA = PDATA_TABLE[ bandidx ][ RF_TX ];

   for (i = 0; i < 4; i++)
   {
      PDATA_32 = *PDATA;

      if (i != 3)
      {
         *BPIOn = PDATA_32;
      }
      else // i ==3 for PA off 
      {
         *BPIOff = PDATA_32;
      }

      PDATA++;
   }
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_Get_TXLO_Data( int rf_band, int arfcn, unsigned long tx_lo)
{
   int tx_lo_cap_array_adj[4]={ 125, 140, 150, 160}; //LUT for LO(25kHz/code)
   int freq_diff_25khz, tx_lo_cap_array, tx_lo_cap_array_result;

   if( (rf_band==1) && (arfcn>124) )
   {  arfcn-=1024;  }
         
   // Calulate tx_lo_cap_array_result according to subband
   tx_lo_cap_array = ((tx_lo>>11)&0x7F);
   freq_diff_25khz = (L1D_RF_Get_POC_MidArfcn(rf_band)-arfcn)*8; /* 1 channel = 8*25khz for 2G */
   tx_lo_cap_array_result = tx_lo_cap_array + (freq_diff_25khz/tx_lo_cap_array_adj[rf_band])/* 25 khz/code*/;

   // Clipping tx_lo_cap_array_result if overflow
   if (tx_lo_cap_array_result >= 0x7F) 
   {  tx_lo_cap_array_result = 0x7F;
   }
   else if (tx_lo_cap_array_result <= 0)
   {  tx_lo_cap_array_result = 0;
   }
   
   // Combine CW714
   return ((tx_lo&(~(0x7F<<11)))|((tx_lo_cap_array_result&0x7F)<<11));
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Gainrf_Init( void )
{  // If the PGA Switch point is modified, please remember to check L1D_RF_TxGainSetting, too.
   signed int band, i;
   signed int pga_switch_pwr_idx;

   for( band=0; band<4; band++ )
   {
      pga_switch_pwr_idx = (band < 2) ? (PGA_SWITCH_DBM_LB-5/*lowest_dbm*/)/2 : (PGA_SWITCH_DBM_HB-0/*lowest_dbm*/)/2;

      l1d_rf2.pga_a_inl[band][0] = 0;

      for( i=1; i<=MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM; i++ )
      {  l1d_rf2.pga_a_inl[band][i] = l1d_rf2.pga_a_inl[band][i-1]+l1d_rf2.rfc_data.g_result[band].tx_dnl_lin_pga_a[i-1];  }

    
      l1d_rf2.pga_ab_switch_pwr_idx[band] = pga_switch_pwr_idx;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned long L1D_RF_GetGainBB0CW( signed long gainbb0 )
{  /* dB->linear(code): polynomial fitting */
   signed long G_fxp;
   signed long r, z, y;
   signed int  q=0;

   G_fxp = gainbb0<<5;

   while( G_fxp<0 )
   {  G_fxp += 6165;
      q++;
   }

   r = G_fxp<<2;
   z = ( (9743*r)+(1<<14) )>>15;
   z = ( (z+14323)*r+(1<<14) )>>15;
   z += 16412;
   y = (1<<GAINBB0_CODE_LENGTH)-(((z>>q)+(1<<(14-GAINBB0_CODE_LENGTH-1)))>>(14-GAINBB0_CODE_LENGTH));
   if( y<0 ) y=0;

   return (unsigned long)y;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void  L1D_RF_TxGainSetting( unsigned short mod_type, char slot_idx, signed short tx_power, FrequencyBand rf_band, unsigned long *cw705, unsigned long *cw706 )
{
   signed short     gain_bb0   = 0;
   signed short     power_dbm  = tx_power;
   signed short     lowest_dbm = LOWEST_TX_POWER[(int)rf_band];
   unsigned short   gain_comp = 0, phase_comp = 0, dc_comp_i = 0, dc_comp_q = 0, d16 = 0;
   #if IS_EPSK_TX_SUPPORT
   signed short     tx_dbg_info[8]={ 0 }; //0:want_power ; 1:subband ; 2:rollback ; 3:temperature ; 4:voltage ; 5:pa_gain ; 6:gain_rf ; 7:gbb0, all in S10.5
   signed short     power_dbm_rollback = tx_power;
   signed short     subband_dB;
   signed short     rollback_gain = 0;
   signed short     remaining_gain;
   signed short     pcl_max      = (rf_band<=FrequencyBand900) ? 19 : 15;
   signed short     backoff_gain = (rf_band<=FrequencyBand900) ? GAIN_BACKOFF_LB : GAIN_BACKOFF_HB;
   unsigned short   lb_or_hb     = (rf_band<=FrequencyBand900) ? 0 : 1;
   unsigned short   n = ((0.0)*(1<<3)) + 4096;
   static   const   sARFCN_SECTION*  weight;    // Must be static since chips before M6229 will only query if IS_1ST_TX_SLOT
   const sRAMPDATA *band;
   pa_vbias *ofs_ptr;
   signed short     power_idx   = 0;
   signed short     pa_gain_idx = 0;
   signed short     gainrf_idx  = 0;
   signed short    *pga_inl_ptr;
   signed char      TX_SLICE_GROUP, pga_inl_num;
   const unsigned long   *pga_gain_cw;
   const unsigned long TX_PGA_A_GAIN_CW_LB[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { 0x7BFC0, 0x7BF80, 0x7BF40, 0x7BF00, 0x7BEC0, 0x7BE80, 0x7BE40,
                                                                                 0x7BE00, 0x7BDC0, 0x7BD80, 0x7BD40, 0x79E40, 0x78FC0, 0x78EC0,
                                                                                 0x787C0, 0x78740, 0x786C0, 0x78640, 0x785C0, 0x78540, 0x784C0, 
                                                                                 0x78440, 0x7C44E, 0x7C447, 0x7C443, 0x7C441, 0x7C440, 0x7C450,
                                                                                 0x7C460, 0x7C470  };
   const unsigned long TX_PGA_A_GAIN_CW_HB[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { 0x7BFC0, 0x7BF80, 0x7BF40, 0x7BF00, 0x7BEC0, 0x7BE80, 0x7BE40,
                                                                                 0x7BE00, 0x7BDC0, 0x7BD80, 0x7BD40, 0x79E40, 0x78FC0, 0x78EC0,
                                                                                 0x787C0, 0x78740, 0x786C0, 0x78640, 0x785C0, 0x78540, 0x784C0, 
                                                                                 0x78440, 0x7C44F, 0x7C447, 0x7C443, 0x7C441, 0x7C440, 0x7C450,
                                                                                 0x7C460, 0x7C470 };
   /* 6173 don't use PGA B
   const unsigned long TX_PGA_B_GAIN_CW_LB[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM+1] = { 0x7C44E, 0x7C447, 0x7C443, 0x7C441, 0x7C440, 0x7C450,
                                                                                 0x7C460, 0x7C470 };
   const unsigned long TX_PGA_B_GAIN_CW_HB[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM|1] = { 0x7C44F, 0x7C447, 0x7C443, 0x7C441, 0x7C440, 0x7C450,
                                                                                 0x7C460, 0x7C470 };
   */
   #endif
   
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
   signed short offset_gain;
   #endif   // IS_TX_POWER_OFFSET_SUPPORT

   #if IS_GSM_EM_TX_POWER_CONTROL_SUPPORT
   kal_bool  EM_flag = 0;   //TX power control via EM is on/off
   kal_int8  EM_mode = 0;   //-1: invalid value; 0: one PCL; 1: max TX power
   #endif

   if( power_dbm > (lowest_dbm+2*15) )
      power_dbm = lowest_dbm+2*15;
   else if( power_dbm < lowest_dbm )
      power_dbm = lowest_dbm;

   #if IS_EPSK_TX_SUPPORT
   if( (mod_type>>slot_idx)&0x1 )
   {  /* 8psk */
      band = RampData_EPSK[(int)rf_band];
      /* Prevent META pass invalid power value in EPSK ( tx_power > EPSK_LB/HB_MAX_POWER ) */
      /* which will cause the rollback function fail. In normal mode, it doesn't matter    */
      if( lb_or_hb )
         power_dbm_rollback = ( power_dbm > EPSK_HB_MAX_POWER ) ? EPSK_HB_MAX_POWER : power_dbm; //High band
      else
         power_dbm_rollback = ( power_dbm > EPSK_LB_MAX_POWER ) ? EPSK_LB_MAX_POWER : power_dbm; //Low band

      switch( l1d_rf.band )
      {
         case FrequencyBand850:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM850_pa_vbias;
            break;
         case FrequencyBand900:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.GSM900_pa_vbias;
            break;
         case FrequencyBand1800:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.DCS1800_pa_vbias;
            break;
         case FrequencyBand1900:
         default:
            ofs_ptr = RFSpecialCoef.tx.orionRFtx.data.PCS1900_pa_vbias;
      }

      power_idx = (power_dbm-lowest_dbm)/2;
      remaining_gain = (signed short)(band->power[power_idx]); //S12.3

      /* Choose PGA-A or PGA-B setting */
      pga_inl_ptr = l1d_rf2.pga_a_inl[rf_band-FrequencyBand850];
      pga_inl_num = MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM ;
      if( rf_band<=FrequencyBand900 )
      {  pga_gain_cw = TX_PGA_A_GAIN_CW_LB;  }
      else
      {  pga_gain_cw = TX_PGA_A_GAIN_CW_HB;  }
      
      tx_dbg_info[0]=remaining_gain<<2;

      remaining_gain = (remaining_gain<<5) - POWER_BB0; //S7.8

      /* TX power sub-band compensation */
      weight = WeightARFCN_BinarySearch((l1d_rf2.arfcn&0x3FF), l1d_rf.band , band->arfcn_weight, 1);
      if( weight )
         n = (power_dbm > weight->mid_level) ? weight->hi_weight : weight->low_weight;
      else // no entry, not found
         n = ((0.0)*(1<<3)) + 4096;
      subband_dB = (signed short)(n) - 4096; //S12.3
      remaining_gain  += (subband_dB<<5); //S7.8

      tx_dbg_info[1]=subband_dB<<2;

      #if IS_GSM_EM_TX_POWER_CONTROL_SUPPORT

      L1T_SetGsmTxPower(&EM_flag, &EM_mode);
      if(EM_flag == 0)   /* BYPASS TX POWER OFFSET & ROLLBACK */
      #endif
      {
         #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         /* TX power offset */
         offset_gain = L1D_RF_Tx_Power_Offset(rf_band, l1d_rf2.arfcn, power_dbm, ((mod_type>>slot_idx)&0x1),0xFFFF);
         remaining_gain += offset_gain;
         L1D_RF_Info_Trace( 26166, offset_gain, remaining_gain );
         #endif

         /* TX power rollback */
         rollback_gain    = L1D_RF_PowerRollback( power_dbm_rollback, l1d_rf.band, n, 1); /* input power_dbm_rollback instead of power_dbm to avoid wrong rollback output on high-power PCL in META mode */
         remaining_gain  -= (rollback_gain<<5); //S7.8

         tx_dbg_info[2]=rollback_gain<<2;
      }
      tx_dbg_info[3]=-remaining_gain;

      #if IS_TX_POWER_CONTROL_SUPPORT
      {  short arfcn = (short)((rf_band==FrequencyBand1900)? (l1d_rf2.arfcn|0x400) : l1d_rf2.arfcn);
         if( rollback_gain == 0 )
         {  L1D_RF_TXPC_RECORD_PARAM( 3, band, (unsigned short)n, power_idx, 0, 0 );   }
         remaining_gain = (signed short)L1D_RF_TXPC_RecUpdateGain( remaining_gain, rf_band, arfcn, (short)slot_idx );
      }
      #endif

      tx_dbg_info[3]+=remaining_gain;
      tx_dbg_info[4]=-remaining_gain;

      #if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
      {  /* TX power battery compensation - Voltage & Temperature */
         signed short     batcomp_dB;
         L1D_RF_TXPC_UPDATE_TEMPERATUREINFO();
         L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,17,remaining_gain);
         if( (!L1D_CheckIfMetaMode())|| (l1d_rf.voltcom_mode == VOLTCOM_NSFT_MODE) )
         {  n = band->battery_compensate[l1d_rf.bat_volt][l1d_rf.bat_temp];  } //battery volt.& Temp. compensate
         else
         {  n = ((0.0)*(1<<3)) + 4096; }
         batcomp_dB = (signed short)(n) - 4096; //S12.3
         remaining_gain += (batcomp_dB<<5);     //S7.8
         L1D_RF_VoltComp_Trace(l1d_rf.bat_temp,17,remaining_gain);
      }
      #endif
      tx_dbg_info[4]+=remaining_gain;

      remaining_gain >>= 3;                  //S10.5

      /* TX PA Gain */
      while( (pcl_max-power_idx) > ofs_ptr[pa_gain_idx].pcl_index )
      {
         if( ofs_ptr[pa_gain_idx].pcl_index == -1 )
         {  /* avoid using the unwanted PA Gain */
            if( pa_gain_idx > 0 )
               pa_gain_idx--;
            break;
         }
         pa_gain_idx++;
         if( pa_gain_idx>=15 ) /* pcl > ofs_ptr[14].pcl_index, all use ofs_ptr[15] */
            break;
      }
      remaining_gain  -= ofs_ptr[pa_gain_idx].pa_gain; //S10.5
      tx_dbg_info[5]=ofs_ptr[pa_gain_idx].pa_gain;
  
      
      /* Tx search gain rf index */
      while( (remaining_gain+backoff_gain) < (pga_inl_ptr[gainrf_idx]) )
      {  gainrf_idx++;

         if( gainrf_idx>pga_inl_num ) /* avoid to exceed the pga_a/b_inl array */
            break;
      }
      if( gainrf_idx>0 )
         gainrf_idx--;  /* the remaining gain is compensated by Gbb0, and Gbb0 must < 0 */

      /* Get Gbb0 codeword */
      remaining_gain  -= pga_inl_ptr[gainrf_idx];
      tx_dbg_info[6]=pga_inl_ptr[gainrf_idx];
      
      gain_bb0 = L1D_RF_GetGainBB0CW( remaining_gain );
      tx_dbg_info[7]=remaining_gain;
      /*As per MT6177M TX Gain table TX_MODDRV_SLICES[3:0] can have values 
        0xF,0x7,0x3,0x1 and 0x11 correspoding to RF gain index in NVRAM 0,1,2,3,4 correspondigly*/
      switch( ((pga_gain_cw[gainrf_idx]>>10)&0x1F) )
      {  
         case 0xF:
            TX_SLICE_GROUP = 0;
            break;
         case 0x7:
            TX_SLICE_GROUP = 1;
            break;            
         case 0x3:
            TX_SLICE_GROUP = 2;
            break;            
         case 0x1:
            TX_SLICE_GROUP = 3;
            break;            
         case 0x11:
            TX_SLICE_GROUP = 4;
            break;            
         default:
            TX_SLICE_GROUP = 0;
            break;    
      }
      
      // Bypass 2G Phase/Gain Compensation since POC result of phase/gain is abnormal which need clarify.
      phase_comp       = (l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].phase_est)&0x7F;
      gain_comp        = (l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].gain_est)&0x7F;
      dc_comp_i        = -((l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].dc_est_i)<<1)&0x3FFF;
      dc_comp_q        = -((l1d_rf2.rfc_data.g_result[rf_band-FrequencyBand850].tx_iqdc_lin[TX_SLICE_GROUP].dc_est_q)<<1)&0x3FFF;      

      *cw706 = pga_gain_cw[gainrf_idx];


      L1D_RF_EdgeTx_Trace(tx_dbg_info[0],tx_dbg_info[1],tx_dbg_info[2],tx_dbg_info[3]>>3,tx_dbg_info[4]>>3,tx_dbg_info[5],tx_dbg_info[6],tx_dbg_info[7]);

      #if IS_TX_POWER_CONTROL_SUPPORT
      l1d_rf2.tx_gain_setting[(unsigned char)slot_idx] = ( ((gainrf_idx&0xF)<<9) | (gain_bb0&0x1FF) );
      #endif

   }
   else
   #endif
   {  /* GMSK: Only for calculate gain_det */
      *cw706 = 0x00000; /* POR default value */
   }

   switch( slot_idx )
   {  case 0 : 
         HW_WRITE( TX_PWR0, gain_bb0 );
         HW_WRITE( TX_DC_COMP_I_0, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_0, dc_comp_q );      
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(0), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(0), (d16|gain_comp));
         break;
      case 1 : 
         HW_WRITE( TX_PWR1, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_1, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_1, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(0), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(0), ((gain_comp<<8)|d16));
         break;
      case 2 : 
         HW_WRITE( TX_PWR2, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_2, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_2, dc_comp_q );
         d16 = (HW_READ(TX_PHASE_COMP_CON(1)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(1), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(1)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(1), (d16|gain_comp));
         break;
      case 3 : 
         HW_WRITE( TX_PWR3, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_3, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_3, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(1)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(1), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(1)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(1), ((gain_comp<<8)|d16));
         break;
      case 4 : 
         HW_WRITE( TX_PWR4, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_4, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_4, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(2)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(2), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(2)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(2), (d16|gain_comp));
         break;
      case 5 : 
         HW_WRITE( TX_PWR5, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_5, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_5, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(2)))&0x007F;
         HW_WRITE( TX_PHASE_COMP_CON(2), ((phase_comp<<8)|d16));
         d16 = (HW_READ(TX_GAIN_COMP_CON(2)))&0x007F;
         HW_WRITE( TX_GAIN_COMP_CON(2), ((gain_comp<<8)|d16));
         break;
      default: 
         HW_WRITE( TX_PWR0, gain_bb0 ); 
         HW_WRITE( TX_DC_COMP_I_0, dc_comp_i );
         HW_WRITE( TX_DC_COMP_Q_0, dc_comp_q );         
         d16 = (HW_READ(TX_PHASE_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_PHASE_COMP_CON(0), (d16|phase_comp));
         d16 = (HW_READ(TX_GAIN_COMP_CON(0)))&0x7F00;
         HW_WRITE( TX_GAIN_COMP_CON(0), (d16|gain_comp));
         break;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_RF_MT6177M */


/*TDD*/#if IS_TDD_DUAL_MODE_SUPPORT
/*TDD*/    #if IS_CHIP_MT6575
/*TDD*/ void L1D_TD_AFC_Mode_GPIO_Set( void )
/*TDD*/ {
/*TDD*/    HW_WRITE(GPO_SET(TD_AFC_switch_GPIO_pin>>4),0x1<<(TD_AFC_switch_GPIO_pin & 0x000F));
/*TDD*/ }
/*TDD*/ /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*TDD*/
/*TDD*/ void L1D_TD_AFC_Mode_GPIO_Reset( void )
/*TDD*/ {
/*TDD*/    HW_WRITE(GPO_RESET(TD_AFC_switch_GPIO_pin>>4),0x1<<(TD_AFC_switch_GPIO_pin&0x000F));
/*TDD*/ }
/*TDD*/ /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*TDD*/    #elif IS_CHIP_MT6280
/*TDD*/ void L1D_TD_AFC_Mode_GPIO_Set( void )
/*TDD*/ {
/*TDD*/ }
/*TDD*/ /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*TDD*/
/*TDD*/ void L1D_TD_AFC_Mode_GPIO_Reset( void )
/*TDD*/ {
/*TDD*/ }
/*TDD*/ /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*TDD*/    #endif
/*TDD*/#endif

unsigned char L1D_PMU_IS_FIX_VRF1828SETTING( void )
{
#if IS_RF_MT6162
   return l1d_rf2.is_fix_rf1828;
#else
   return 0;
#endif
}

#if IS_TDD_DM_RF_POWER_CHECK_SUPPORT
void L1D_RF_Init_TDD_Power_Check_GPIO( void )
{
   #if IS_TDD_DM_RF_POWER_CHECK_V1_SUPPORT
      #if IS_CHIP_MT6575
   unsigned short d16;              /* MT6575 GPIO61 (out) -- AST3001 GPIO2 (in)  */
                                    /* MT6575 GPIO93 (in)  -- AST3001 GPIO1 (out) */

   d16  = HW_READ( GPIO_MODEC );    /* Set GPIO61 mode to GPIO (mode 0) */
   d16 &= ~(0x7<<3);
   HW_WRITE( GPIO_MODEC, d16 );

   d16  = HW_READ( GPIO_MODE12 );   /* Set GPIO93 mode to GPIO (mode 0) */
   d16 &= ~(0x7<<9);
   HW_WRITE( GPIO_MODE12, d16 );

   d16  = HW_READ( GPIO_DIR3 );     /* Set GPIO61 direction to be output (1) */
   d16 |= (0x1<<13);
   HW_WRITE( GPIO_DIR3, d16 );

   d16  = HW_READ( GPIO_DIR5 );     /* Set GPIO93 direction to be input (0) */
   d16 &= ~(0x1<<13);
   HW_WRITE( GPIO_DIR5, d16 );

   d16  = HW_READ( GPIO_DOUT3 );    /* Set GPIO61 output value to 0 by default */
   d16 &= ~(0x1<<13);
   HW_WRITE( GPIO_DOUT3, d16 );
      #endif
   #endif /* IS_TDD_DM_RF_POWER_CHECK_V1_SUPPORT */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Set_2G_Power_Status( unsigned short set_2g_status )
{
   #if IS_TDD_DM_RF_POWER_CHECK_V1_SUPPORT
      #if IS_CHIP_MT6575
   unsigned short d16;

   set_2g_status &= 0x1;

   d16  = HW_READ( GPIO_DOUT3 ); /* Set 2G status via GPIO61 */
   d16 &= ~(0x1<<13);
   d16 |= (set_2g_status<<13);
   HW_WRITE( GPIO_DOUT3, d16 );
      #endif
   #elif IS_TDD_DM_RF_POWER_CHECK_V2_SUPPORT
   unsigned long cw_2g = set_2g_status ? SDATA_MAILBOX_2GRF_STATUS_ON : SDATA_MAILBOX_2GRF_STATUS_OFF;

   /* Note: Assume BSI IMM mode is already on */
   if( IMM_OFFCHIP_BSI_SWITCH_QUERY() == BSI_SWITCH_NO_ACT )
   {  /* Called by init RF power-on.
         BSI switch owner has already been 2G. Keep 2G ownership. */
   }
   else
   {  /* Called by non-init RF power-on or power-off.
         BSI switch owner is TD. Avoid changing owner here since TD may be using BSI */
      IMM_OFFCHIP_BSI_CFG( BSI_SWITCH_NO_ACT_ONCE );
   }

   IMM_SEND_BSI( SCTRL_IMOD(0,30), cw_2g );  /* Write 2G RF status to virtual CW 0xF1 */
   #elif IS_TDD_DM_RF_POWER_CHECK_V3_SUPPORT
   if( set_2g_status )
      rf_ctrl_2g_put_status_to_3g( 0x5555 ); /* 2G sleep : 0x0000, 2G awake : 0x5555 */
   else
      rf_ctrl_2g_put_status_to_3g( 0x0000 ); /* 2G sleep : 0x0000, 2G awake : 0x5555 */
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static char L1D_RF_Get_TDD_Power_Status( void )
{
   #if IS_TDD_DM_RF_POWER_CHECK_V1_SUPPORT
      #if IS_CHIP_MT6575
   unsigned short d16;

   d16 = HW_READ( GPIO_DIN5 ); /* Get TDD status via GPIO93 */
   return (char)((d16>>13) & 0x1);
      #endif
   #elif IS_TDD_DM_RF_POWER_CHECK_V2_SUPPORT
   unsigned long td_status = 0;

   /* Note: Assume BSI IMM mode is already on */
   /* Called by wakeup RF power-on or power-off. Avoid changing BSI switch owner since TD may be using BSI */
   IMM_OFFCHIP_BSI_CFG( BSI_SWITCH_NO_ACT_ONCE );

   /* Read back TD RF status from virtual CW 0xF2 */
   IMM_RECEIVE_BSI( SCTRL_IMOD(0,10), CW_MAILBOX_TDRF_STATUS, SCTRL_IMOD(0,20), &td_status );

   return (td_status>>MAILBOX_TDRF_STATUS_BIT) & 0x1;
   #elif IS_TDD_DM_RF_POWER_CHECK_V3_SUPPORT
   return ( rf_ctrl_2g_get_3g_status()==0xaaaa ); /* TDD sleep: 0x0000, TDD awake: 0xaaaa */
   #else
   return 0;
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

char L1D_RF_Check_TDD_Power( char is_at_power_on )
{
   char tdd_status_1 = 9;
   char tdd_status_2 = 9;
   char return_value = 0;

   tdd_status_1 = L1D_RF_Get_TDD_Power_Status();

   if( is_at_power_on ) /* called by L1D_RF_PowerOn() */
   {
      /* return 0: TDD does not need RF. Run 2G RF power-on */
      /* return 1: TDD still uses RF. Skip 2G RF power-on */
      if( tdd_status_1 )
      {
         WAIT_TIME_QB( TDD_DM_RF_POWER_CHECK_WAIT );
         L1D_RF_SET_2G_POWER_STATUS( 1 );
         tdd_status_2 = L1D_RF_Get_TDD_Power_Status();

         if( tdd_status_2 )
         {  return_value = 1;  }
         else
         {
            WAIT_TIME_QB( TDD_DM_RF_POWER_CHECK_WAIT );
            return_value = 0;
         }
      }
      else
      {
         L1D_RF_SET_2G_POWER_STATUS( 1 );
         WAIT_TIME_QB( TDD_DM_RF_POWER_CHECK_WAIT );
         return_value = 0;
      }
   }
   else /* called by L1D_RF_PowerOff() */
   {
      /* return 0: TDD does not need RF. Run 2G RF power-off */
      /* return 1: TDD still uses RF. Skip 2G RF power-off */
      if( tdd_status_1 )
      {
         L1D_RF_SET_2G_POWER_STATUS( 0 );
         return_value = 1;
      }
      else
      {
         WAIT_TIME_QB( TDD_DM_RF_POWER_CHECK_WAIT );
         L1D_RF_SET_2G_POWER_STATUS( 0 );
         tdd_status_2 = L1D_RF_Get_TDD_Power_Status();

         if( tdd_status_2 )
         {  return_value = 1;  }
         else
         {  return_value = 0;  }
      }
   }

   {
      L1D_RF_Info_Trace( 6163, tdd_status_1, tdd_status_2 );
   }
   return return_value;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_TDD_DM_RF_POWER_CHECK_SUPPORT */

unsigned char L1D_Check_BPI_Data( void )
{
#if IS_RF_MT6162 || IS_RF_MT6163
   unsigned short bpi = 0;
   unsigned short i;

   for( i=1; i<FrequencyBandCount; i++ )
   {
      bpi |= PDATA_TABLE[i][RF_RX][3]; /* PR3  */
      bpi |= PDATA_TABLE[i][RF_RX][4]; /* PR3A */
      bpi |= PDATA_TABLE[i][RF_TX][3]; /* PT3  */
      bpi |= PDATA_TABLE[i][RF_TX][4]; /* PT3A */
   }

   if( bpi & (1<<gsm_err_det_id) )
      return 1; /* assert if BPI bit[9] is ONE on PR3/PR3A/PT3/PT3A */
   else
      return 0;
#else
   return 0;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned short L1D_Get_EPSK_TX_Support( void )
{
   unsigned short is_epsk_tx_support = 0;

   #if IS_EPSK_TX_SUPPORT && !IS_EPSK_TX_NOT_SUPPORT_RF
   is_epsk_tx_support = 1;
   #endif

   return is_epsk_tx_support;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned short L1D_GetPsEpskTxStatus( void )
{
   unsigned short is_ps_epsk_tx_disable = 0;

   #if IS_PS_EPSK_TX_DISABLE
   is_ps_epsk_tx_disable = 1;
   #endif

   return is_ps_epsk_tx_disable;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned short L1D_Get_TCVCXO_Support( void )
{
   unsigned short is_tcvcxo_support = 1;

   if( l1d_rf.is_crystal_vcxo )
      is_tcvcxo_support = 0;

   return is_tcvcxo_support;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_BSI_V2_SUPPORT
unsigned long L1D_RF_TX_BSI_ENA( unsigned short win )
{
                           /* ST1 */      /* ST2 */      /* ST3 */
   unsigned long bsi_ena = BSIEN(win,0) | BSIEN_X(win) | BSIEN(win,1);

   #if IS_BSI_SX0_SUPPORT
   bsi_ena |= BSIEN(win,-1);   /* ST0 */
   #endif

   return bsi_ena;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_BPI_V2_SUPPORT
unsigned long L1D_RF_TX_BPI_ENA( unsigned short win )
{
            /* PT1 */      /* PT2 */      /* PT2B */     /* PT3 */
   return ( BPIEN(win,0) | BPIEN(win,1) | BPIEN(win,2) | BPIEN(1,3) );
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

void L1D_RF_Report_Temperature_HISR( kal_uint32 ap_param )
{
   (void) (ap_param);

#if IS_REPORT_RF_TEMPERATURE_SUPPORT
   kal_uint32 rf_temperature = 0x7FFF;

   #if IS_TX_POWER_CONTROL_SUPPORT
   rf_temperature = (l1d_rf2.dedicated_flag) ? ( (kal_uint32)(L1D_RF_TXPC_GetTemperatureInfo(2)) ) : (0x7FFF);
   L1D_RF_Info_Trace( 16589, (long)(l1d_rf2.dedicated_flag), (long)(rf_temperature) );
   L1D_RF_Info_Trace( 26589, (long)(L1D_RF_TXPC_GetTemperatureInfo(1)), (long)(L1D_RF_TXPC_GetTemperatureInfo(0)) );
   L1D_RF_Info_Trace( 26589, (long)(L1D_RF_TXPC_GetTemperatureInfo(1)), (long)(L1D_RF_TXPC_GetTemperatureInfo(2)) );
      #if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__) && (!defined(__MULTI_RAT_AFC_TADC_SHARE_SUPPORT__))
   L1D_RF_Info_Trace( 36589, U_TEMP_DAC[0], U_TEMP_DAC[4]);
   L1D_RF_Info_Trace( 36589, U_TEMP_DAC[1], U_TEMP_DAC[5]);
   L1D_RF_Info_Trace( 36589, U_TEMP_DAC[2], U_TEMP_DAC[6]);
   L1D_RF_Info_Trace( 36589, U_TEMP_DAC[3], U_TEMP_DAC[7]);
      #else
   L1D_RF_Info_Trace( 36589, TXTEMP_Data[0]->data[0], TXTEMP_Data[0]->data[4]);
   L1D_RF_Info_Trace( 36589, TXTEMP_Data[0]->data[1], TXTEMP_Data[0]->data[5]);
   L1D_RF_Info_Trace( 36589, TXTEMP_Data[0]->data[2], TXTEMP_Data[0]->data[6]);
   L1D_RF_Info_Trace( 36589, TXTEMP_Data[0]->data[3], TXTEMP_Data[0]->data[7]);
      #endif
   #endif

   if( KAL_TRUE == ccci_send_message(CCMSG_ID_SYSMSGSVC_L1_QUERY_RF_TEMPERATURE, rf_temperature) )
   {  /* Success */  }
   else
   {  /* Fail    */  }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

kal_int16 L1D_RF_Report_Temperature( void )
{
   kal_int16 rf_temperature = 0x7FFF;

#if IS_REPORT_RF_TEMPERATURE_BYATCMD_SUPPORT
   #if IS_TX_POWER_CONTROL_SUPPORT
   rf_temperature = (l1d_rf2.dedicated_flag) ? ( (kal_int16)(L1D_RF_TXPC_GetTemperatureInfo(2)) ) : (0x7FFF);
   L1D_RF_Info_Trace( 16589, (long)(l1d_rf2.dedicated_flag), (long)(rf_temperature) );
   L1D_RF_Info_Trace( 26589, (long)(L1D_RF_TXPC_GetTemperatureInfo(1)), (long)(L1D_RF_TXPC_GetTemperatureInfo(0)) );
   L1D_RF_Info_Trace( 26589, (long)(L1D_RF_TXPC_GetTemperatureInfo(1)), (long)(L1D_RF_TXPC_GetTemperatureInfo(2)) );
      #if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)
   L1D_RF_Info_Trace( 36589, U_TEMP_DAC[0], U_TEMP_DAC[4]);
   L1D_RF_Info_Trace( 36589, U_TEMP_DAC[1], U_TEMP_DAC[5]);
   L1D_RF_Info_Trace( 36589, U_TEMP_DAC[2], U_TEMP_DAC[6]);
   L1D_RF_Info_Trace( 36589, U_TEMP_DAC[3], U_TEMP_DAC[7]);
      #else
   L1D_RF_Info_Trace( 36589, TXTEMP_Data[0]->data[0], TXTEMP_Data[0]->data[4]);
   L1D_RF_Info_Trace( 36589, TXTEMP_Data[0]->data[1], TXTEMP_Data[0]->data[5]);
   L1D_RF_Info_Trace( 36589, TXTEMP_Data[0]->data[2], TXTEMP_Data[0]->data[6]);
   L1D_RF_Info_Trace( 36589, TXTEMP_Data[0]->data[3], TXTEMP_Data[0]->data[7]);
      #endif
   #endif
#endif

   return rf_temperature;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Update_VoltageInfo_HISR( kal_uint32 ap_param )
{
#if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
   int volt;

   volt = (int)(ap_param*1000); /* convert mV to uV */
   if( volt <= BBTXParameters.apc_bat_low_voltage )
   {  l1d_rf.bat_volt = 0;
   }
   else if( volt >= BBTXParameters.apc_bat_high_voltage )
   {  l1d_rf.bat_volt = 2;
   }
   else
   {  l1d_rf.bat_volt = 1;
   }

   L1D_RF_VoltComp_Trace(l1d_rf.bat_volt,volt,666);
#else
   (void) (ap_param);
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


signed long L1D_RF_UpdateVoltInfoPeriod( void )
{
   signed long    period    = -1; /* -1 : do not trigger */

#if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
   signed short   rf_band;
   signed short   bat_volt_idx;
   unsigned short check_flag = 0;
   static const sRAMPDATA*  band;
   #if IS_EPSK_TX_SUPPORT
   static const sRAMPDATA*  band_epsk;
   #endif

   #if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
   if( l1d_rf.txpc_type==TXPC_BSI_CLOSED_TYPE || l1d_rf.txpc_type==TXPC_AUXADC_CLOSED_TYPE )
   {  /* do not update voltage info. when close loop TX power control */
      period = -1;
   }
   else
   #endif
   {
      for( rf_band=FrequencyBand850; rf_band<=FrequencyBand1900; rf_band++ )
      {
         band      = RampData[(int)rf_band];
   #if IS_EPSK_TX_SUPPORT
         band_epsk = RampData_EPSK[(int)rf_band];
         for( bat_volt_idx=0; bat_volt_idx<3; bat_volt_idx++ )
         {
      #if IS_ORION_RF_SERIES
            if( ( band->battery_compensate[bat_volt_idx][0] != (WEIGHT(1.000)) ) || ( band_epsk->battery_compensate[bat_volt_idx][0] != (4096) ) ||
                ( band->battery_compensate[bat_volt_idx][1] != (WEIGHT(1.000)) ) || ( band_epsk->battery_compensate[bat_volt_idx][1] != (4096) ) ||
                ( band->battery_compensate[bat_volt_idx][2] != (WEIGHT(1.000)) ) || ( band_epsk->battery_compensate[bat_volt_idx][2] != (4096) ) )
            {  check_flag = 1; break;  }
      #else
            if( ( band->battery_compensate[bat_volt_idx][0] != (WEIGHT(1.000)) ) || ( band_epsk->battery_compensate[bat_volt_idx][0] != (WEIGHT(1.000)) ) ||
                ( band->battery_compensate[bat_volt_idx][1] != (WEIGHT(1.000)) ) || ( band_epsk->battery_compensate[bat_volt_idx][1] != (WEIGHT(1.000)) ) ||
                ( band->battery_compensate[bat_volt_idx][2] != (WEIGHT(1.000)) ) || ( band_epsk->battery_compensate[bat_volt_idx][2] != (WEIGHT(1.000)) ) )
            {  check_flag = 1; break;  }
      #endif
         }
   #else
         for( bat_volt_idx=0; bat_volt_idx<3; bat_volt_idx++ )
         {
            if( ( band->battery_compensate[bat_volt_idx][0] != (WEIGHT(1.000)) ) ||
                ( band->battery_compensate[bat_volt_idx][1] != (WEIGHT(1.000)) ) ||
                ( band->battery_compensate[bat_volt_idx][2] != (WEIGHT(1.000)) ) )
            {  check_flag = 1; break;  }
         }
   #endif
         if( check_flag == 1 ) break;
      }

      if( check_flag == 1 )
      {  period = (signed long)( BBTXParameters.ap_update_volinfo_period ); }

      if( (((period>>31)&0x1) == 1) || (period == 0) ) /* if over flow to negitive value or zero, set period to -1 : do not trigger */
      {  period = -1;  }
   }
   L1D_RF_VoltComp_Trace(check_flag,10,period);
#endif

   return period;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

bool L1D_IfDynamicMIPIClockEnable( void )
{
#if IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
   return KAL_TRUE;
#else
   return KAL_FALSE;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned short L1D_Get_PSI_EE( void )
{
   return PSI_EE;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

unsigned short L1D_Get_C_PSI_STA( void )
{
   return C_PSI_STA;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/* Duo to NVRAM need to access the varable , it must exist whether DRDI enable or not */
sl1CustomDRDIStautaDebugInfo l1d_custom_drdi_status_debug_info;

#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2

//void L1D_CustomDynamicInit( void )
//{

//}
   
void L1D_CustomDynamicDebug( void )
{

}

#endif // end IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2

void L1D_CustomDynamicDebugStoreToNVRAMInfo(unsigned short lid, unsigned char error_no )
{

}  

unsigned char L1D_Get_BandCapability( void )
{
   unsigned char return_band = 0;
   // bit[0]: PGSM 900
   // bit[1]: EGSM 900
   // bit[2]: RGSM 900
   // bit[3]: DCS  1800
   // bit[4]: PCS  1900
   // bit[5]: GSM  450
   // bit[6]: GSM  480
   // bit[7]: GSM  850

   #ifdef __GSM450__
   return_band |= (0x1<<5);
   #endif

   #ifdef __GSM850__
   return_band |= (0x1<<7);
   #endif

   #if defined(__PGSM900__)
   return_band |= (0x1<<0);
   #endif

   #if defined(__EGSM900__)
   return_band |= (0x1<<1);
   #endif

   #if defined(__RGSM900__)
   return_band |= (0x1<<2);
   #endif

   #ifdef __DCS1800__
   return_band |= (0x1<<3);
   #endif

   #ifdef __PCS1900__
   return_band |= (0x1<<4);
   #endif

#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
#endif

   return return_band;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetBSISPI_Control()
{
#if IS_BSISPI_SEPARATE_SUPPORT
   #if IS_MMRF_CONTROL_BSI_TOP_SUPPORT
   /* If IS_MMRF_CONTROL_BSI_TOP_SUPPORT is supported, it means that BSISPI and BPI_TOP control are moved to MMRF driver. */    
   #else
      #if IS_RF_CENTRAL_CONTROL_ENABLE
      #elif IS_DUAL_TALK_SUPPORT
         #if IS_RF_MT6166 || IS_RF_MT6165
   unsigned long d32;
  
   /* BSISPI Init for RFIC2 */
   d32  = (unsigned long)(SCTRL_MAIN_A_SPI|BSISPI_IC0_PARAM1_MAIN);
   HW_WRITE( BSISPI_IC0_PARAM1_RFIC2, d32 );
   HW_WRITE( BSISPI_IC0_PARAM2_RFIC2, BSISPI_IC0_PARAM2_MAIN );
   /* set BSI mode */
   d32  = HW_READ( BSISPI_PORT_PARAM_RFIC2 );
   d32 &= ~0x00000006;
   d32 |= 0x00000004;
   HW_WRITE( BSISPI_PORT_PARAM_RFIC2, d32 );
         #endif
      #else
         #if IS_RF_MT6169 || IS_RF_MT6165 || IS_COSIM_ON_L1SIM_SUPPORT
   unsigned long d32;
   d32  = (unsigned long)(SCTRL_MAIN_A_SPI|BSISPI_IC0_PARAM1_MAIN);
   HW_WRITE( BSISPI_IC0_PARAM1_RFIC1, d32 );
   HW_WRITE( BSISPI_IC0_PARAM2_RFIC1, BSISPI_IC0_PARAM2_MAIN );
   /* set BSI mode */
   d32  = HW_READ( BSISPI_PORT_PARAM_RFIC1 );
   d32 &= ~0x00000006;
   d32 |= 0x00000004;
   HW_WRITE( BSISPI_PORT_PARAM_RFIC1, d32 );
         #endif
      #endif
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_DCS_NB_WB_SWITCH_SUPPORT
void L1D_RF_Init_DCS_NB_WB_Switch( void )
{
   #if IS_DCS_NB_WB_SWITCH_ON
   l1d_rf2.is_dcs_nb_wb_switch_on = 1;
   #else
   l1d_rf2.is_dcs_nb_wb_switch_on = 0;
   #endif
}

char L1D_RF_IS_DCS_NB_WB_Switch( void )
{
   return l1d_rf2.is_dcs_nb_wb_switch_on;
}

char L1D_RF_IS_DCS_Change_to_NB( void )
{
   char is_change = 0;

   #if IS_RF_MT6166 || IS_RF_MT6169 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   is_change = ( (l1d_rf2.is_dcs_nb_wb_switch_on) && (l1d_rf.band==FrequencyBand1800) && ((l1d_rf.arfcn&0x03FF)<=DCS_NB_ARFCN) ) ? 1 : 0;
   #endif

   if( is_change == 1 )
   {  L1D_RF_Info_Trace( 18039, l1d_rf.band, (l1d_rf.arfcn&0x03FF) );  }

   return is_change;
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_DSDA_PROVIDE_RX_STATUS_TO_LTE_SUPPORT
char L1D_RF_Provide_Rx_Statue_To_LTE_Enable( void )
{
   char is_enable = 0;

   #if IS_DSDA_PROVIDE_RX_STATUS_TO_LTE_ENABLE
   is_enable = 1;
   #endif

   return is_enable;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

#if IS_DSDA_DCS_TX_NOTCH_SWITCH_SUPPORT
char L1D_RF_IS_TDD_GSM_TX_Overlap( void )
{
   char is_overlap = 0;

   #if IS_CHIP_MT6290 || IS_CHIP_MT6752_MD2
   if( L1D_CheckIfMetaMode() )
      is_overlap = 0;
   else
      is_overlap = L1D_RF_Get_Flag();
   #else
#error "please check how to get the RX status from TDD"
   #endif

   return is_overlap;
}

void L1D_RF_Init_TX_Notch_Switch( void )
{
   l1d_rf2.is_tx_notch_switch_on = 0;
}

char L1D_RF_IS_DCS_Change_to_TX_Notch( void )
{
   char is_change = 0;
   char is_overlap = L1D_RF_IS_TDD_GSM_TX_Overlap();

   is_change = ( (l1d_rf.band==FrequencyBand1800) && ( is_overlap || l1d_rf2.is_tx_notch_switch_on ) ) ? 1 : 0;

   if( is_change == 1 )
   {  L1D_RF_Info_Trace( 18040, l1d_rf2.is_tx_notch_switch_on, L1D_RF_IS_TDD_GSM_TX_Overlap() );  }

   return is_change;
}

char L1D_RF_Get_Flag( void )
{
   char flag = 0;

   #if IS_DSDA_DCS_TX_NOTCH_SWITCH_ENABLE
      #if IS_CHIP_MT6752_MD2
   flag = L1D_Get_Shared_Memory();
      #elif IS_CHIP_MT6290
   flag = (el1_gsmTx_overlap() || tl1_m_l_is_freq_b34_b39());
      #endif
   #endif

   return flag;
}

char L1D_RF_Tx_Notch_Switch_Enable( void )
{
   char is_enable = 0;

   #if IS_DSDA_DCS_TX_NOTCH_SWITCH_ENABLE
   is_enable = 1;
   #endif

   return is_enable;
}
#endif

/* API for meta DCS 2nd path TX power check */ 
void L1D_RF_Set_TX_Notch_Path( kal_uint8 notch_en )
{
#if IS_DSDA_DCS_TX_NOTCH_SWITCH_SUPPORT
   #if IS_DSDA_DCS_TX_NOTCH_SWITCH_ENABLE
   l1d_rf2.is_tx_notch_switch_on = notch_en;
   #else
   l1d_rf2.is_tx_notch_switch_on = 0;
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_OUTPUT_RF_VERSION_SUPPORT
unsigned long L1D_RF_Get_Version( void )
{
   unsigned long return_version = 99;

   #if IS_RF_MT6169
   return_version = MT6169_2G_CHIP_VER;
   #endif

   return return_version;
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_RF_MT6166
   #if IS_DUAL_TALK_RX_GAIN_TABLE_CO_BAND_SUPPORT
/* for dual talk project,  RX LNA > LNA2  which is co-band with 3G need to change to another gain table */
unsigned short L1D_Rx_Gain_Table_CoBand_Enable(void)
{
   unsigned short GSM850_coband_en, GSM_coband_en, DCS_coband_en, PCS_coband_en;
   unsigned short coband_en_bitmap;

   if( GSM850_PATH_SEL > LNA_2 )
      GSM850_coband_en = 0x1;
   else
      GSM850_coband_en = 0;
   if( GSM_PATH_SEL > LNA_2 )
      GSM_coband_en = 0x2;
   else
      GSM_coband_en = 0;
   if( DCS_PATH_SEL > LNA_2 )
      DCS_coband_en = 0x4;
   else
      DCS_coband_en = 0;
   if( PCS_PATH_SEL > LNA_2 )
      PCS_coband_en = 0x8;
   else
      PCS_coband_en = 0;

   coband_en_bitmap = GSM850_coband_en|GSM_coband_en|DCS_coband_en|PCS_coband_en;
   return coband_en_bitmap;
}
   #endif
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetTemperatureInfo(L1D_TEMPINFO_T* tempinfo)
{
#if IS_TX_POWER_CONTROL_SUPPORT
   unsigned short temp_dac, temp_idx, temp_value, i;
   short idx_home, idx_away;
   unsigned short   TEMP_DAC[8];

   #if IS_RF_MT6163
   temp_dac = 2204;  // 20140408: for K2 pre-test use only
   #else
   temp_dac = L1D_RF_TXPC_GetTemperatureInfoFromBSI();
   #endif
   
   for( i=0; i<8; i++ )
   {  TEMP_DAC[i] = TXTEMP_Data[0]->data[i];  }

   if(temp_dac<=TEMP_DAC[3])
   {  if(temp_dac<=TEMP_DAC[1])
      {  if(temp_dac<=TEMP_DAC[0])
              temp_idx = 0;
       else
            temp_idx = 1;
      }
      else
      {  if(temp_dac<=TEMP_DAC[2])
            temp_idx = 2;
        else
            temp_idx = 3;
      }
   }
   else
   {  if(temp_dac<=TEMP_DAC[5])
      {  if(temp_dac<=TEMP_DAC[4])
            temp_idx = 4;
         else
            temp_idx = 5;
      }
      else
      {  if(temp_dac<=TEMP_DAC[6])
            temp_idx = 6;
         else
            temp_idx = 7;
      }
   }

   if( temp_idx==0 )
   {
      idx_away = 0;
      idx_home = 1;
   }
   else if( temp_idx==7 )
   {
      idx_away = 7;
      idx_home = 6;
   }
   else
   {
      idx_away = temp_idx-1;
      idx_home = temp_idx;
   }

   if( TEMP_DAC[idx_away]==TEMP_DAC[idx_home] )
   {
      /* TEMP_DAC[] from NVRAM abnormal. Don't do interpolation to avoid divide-by-zero! */
      if( TEMP_DAC[temp_idx]==TEMP_DAC[TEMP_IDX_DEFAULT] )
      {  temp_idx = TEMP_IDX_DEFAULT;   } /* Set temperature to default 20oC */

      temp_value = TEMP_IDX[temp_idx];
     tempinfo->status    = 1;
   }
   else
   {  temp_value = TEMP_IDX[temp_idx]+(TEMP_IDX[idx_away]-TEMP_IDX[idx_home])*(temp_dac-TEMP_DAC[temp_idx])/(TEMP_DAC[idx_away]-TEMP_DAC[idx_home]);  
        tempinfo->status    = 0;
   }

   /************************************************************************************
           temp_value - TEMP_IDX[temp_idx]            temp_dac - TEMP_DAC[temp_idx]
   ----------------------------------------- = -----------------------------------------
   TEMP_IDX[temp_idx-1] - TEMP_IDX[temp_idx]   TEMP_DAC[temp_idx-1] - TEMP_DAC[temp_idx]
   *************************************************************************************/

   tempinfo->tadc_dac    = temp_dac;
   tempinfo->temp_idx    = temp_idx;
   tempinfo->temperature = temp_value;
   L1D_RF_Info_Trace(2014,tempinfo->tadc_dac,tempinfo->temp_idx );
   L1D_RF_Info_Trace(2015,tempinfo->temperature,tempinfo->status);
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* define L1-core pointer to SHM   */

#if IS_TX_POWER_CONTROL_SUPPORT
l1cal_txpc_T *GMSK_TXPC_ptr;
   #if IS_EPSK_TX_SUPPORT
l1cal_txpc_T *EPSK_TXPC_ptr;
   #endif
l1cal_temperatureADC_T *TEMPERATURE_ADC_ptr;
#endif


#if IS_2G_MMPOC_SUPPORT
MMRFC_GSM_RESULT_T *rfc_data_ptr;
#endif

l1cal_afcData_T *l1cal_afcData_T_ptr;

long *XO_CapID_ptr;

sBBTXParameters *BBTXParameters_ptr;

sRFSpecialCoef *RFSpecialCoef_ptr;
#if IS_2G_RX_DIVERSITY_PATH_SUPPORT 
l1cal_wcoef_T *WCOEF_RXD_ptr;
L1D_CUSTOM_RAS_NVRAM_T* L1_RAS_Custom_NVRAM_ptr;
#endif

int *CLoad_FreqOffset_ptr;

#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
sL1D_RF_CUSTOM_INPUT_DATA *l1d_rf_custom_input_data_ptr;
#endif

#if (IS_2G_TAS_SUPPORT)
L1D_CUSTOM_TAS_NVRAM_T* L1_TAS_Custom_NVRAM_ptr;
L1D_CUSTOM_TAS_FE_NVRAM_T* L1_TAS_Custom_FE_NVRAM_ptr;
   #if IS_2G_TAS_INHERIT_4G_ANT
L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T* L1_TAS_Custom_InheritLteAntTable_ptr;
   #endif
L1D_CUSTOM_TAS_TST_T* L1_TAS_Custom_TST_ptr;
#endif

#if IS_2G_DAT_SUPPORT
L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T* L1_DAT_Custom_FE_ROUTE_NVRAM_ptr;
L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T* L1_DAT_Custom_FE_CAT_A_NVRAM_ptr;
L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T* L1_DAT_Custom_FE_CAT_B_NVRAM_ptr;
#endif

#if IS_ANT_RXPWR_OFFSET_SUPPORT
sL1D_ANT_RxPWR_Offset_v2_T* L1D_ANT_RxPWR_OFFSET_NVRAM_ptr;
#endif

//#if IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T* L1_Custom_MIPI_CLK_FROM_NVRAM_ptr;
//#endif
#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T* L1_Custom_SAR_TX_BACKOFF_FROM_NVRAM_ptr;
#endif

sl1CustomBandSupport  *l1d_custom_band_support_ptr;
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

extern void L1I_SetAFcData( int16 calibrated_dac_default, intx calibrated_int_slope );

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

//unsigned long L1D_GetBandSupport_L1Core( void )
static char l1d_band_support_shm_read_done=0;
kal_uint32 L1D_GetBandSupport_L1Core( void )
{
   /* For partial-source load, L1D only supports BAND_SUPPORT setting downgrade in project make file.
      Abnormal BAND_SUPPORT setting upgrade would cause link errors in this function */

   unsigned long band_support = 0;
#if defined(__MTK_TARGET__) && !defined(L1_NOT_PRESENT)
   {
      unsigned short     timeout_count = 0;
      while (l1d_band_support_shm_read_done==0)/*2G DRDI not done*/
      {
        if(timeout_count<=KAL_TICKS_1_SEC)
        {
           kal_sleep_task(KAL_TICKS_10_MSEC);
        }
        else
        {            
           ASSERT(0);
           break;
        }
         timeout_count += KAL_TICKS_10_MSEC;
      }
                                 /* Band 850                                             Band 900                                                                 Band 1800                                                      Band 1900 */
      band_support  = (l1d_custom_band_support.bandsupport_gsm850<<l1d_support_band850)|(l1d_custom_band_support.bandsupport_gsm900<<l1d_support_band900)|(l1d_custom_band_support.bandsupport_dcs1800<<l1d_support_band1800)|(l1d_custom_band_support.bandsupport_pcs1900<<l1d_support_band1900);
   }
#else
   {
      band_support  = (1<<l1d_support_band850)|(1<<l1d_support_band900)|(1<<l1d_support_band1800)|(1<<l1d_support_band1900);
   }
#endif

   return band_support;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MMRF_L1CoreSHMDataInit(void)
{
   int i;

   for(i=1; i<FrequencyBandCount; i++) // start from pointer not equal to zero
   {
      /* AGC PATHLOSS pointer table re-assign*/
      AGC_PATHLOSS_TABLE[i] = MMRF_CUSTOM_SHARED_ARRAY(AGC_PATHLOSS_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AGC_PATHLOSS_TABLE[i], (sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE));

      /* LNA PATHLOSS pointer table re-assign*/
      LNA_PATHLOSS_TABLE[i] = MMRF_CUSTOM_SHARED_ARRAY(LNA_PATHLOSS_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(LNA_PATHLOSS_TABLE[i], (sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE));

#if IS_RX_POWER_OFFSET_SUPPORT
     AGCLNA_PL_OFFSET_SETTING = MMRF_CUSTOM_SHARED_pVAR(AGCLNA_PL_OFFSET_SETTING_SHM_TABLE);
     MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AGCLNA_PL_OFFSET_SETTING, (sizeof(s2G_RF_RX_PARAMETER_EXT)));
     /* AGC LNA Gain Offset pointer table re-assign*/
      AGCLNA_PATHLOSS_OFFSET[i] = MMRF_CUSTOM_SHARED_ARRAY(AGCLNA_GAIN_OFFSET_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AGCLNA_PATHLOSS_OFFSET[i], (sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE));
#endif/*IS_RX_POWER_OFFSET_SUPPORT*/
      /* RampData pointer table re-assign*/
      RampData[i] = MMRF_CUSTOM_SHARED_ARRAY(RampData_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(RampData[i], (sizeof(sRAMPDATA)));

#if IS_EPSK_TX_SUPPORT
      /* EPSK RampData pointer table re-assign*/
      RampData_EPSK[i] = MMRF_CUSTOM_SHARED_ARRAY(RampData_EPSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(RampData_EPSK[i], (sizeof(sRAMPDATA)));
#endif

#if IS_EPSK_TX_SUPPORT
      /* EPSK InterRampData  pointer table re-assign*/
      EPSK_InterRampData[i] = MMRF_CUSTOM_SHARED_ARRAY(InterRampData_EPSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(*(EPSK_InterRampData[i]), (sizeof(sMIDRAMPDATA)*4));
#elif   (IS_GPRS || IS_MULTISLOT_TX_SUPPORT)
      /* InterRampData pointer table re-assign*/
      InterRampData[i] = MMRF_CUSTOM_SHARED_ARRAY(InterRampData_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(InterRampData[i], (sizeof(sMIDRAMPDATA)));
#endif

#if IS_GPRS
      /*  GMSK TX POWER ROLLBACK pointer table re-assign*/
      tx_power_rollback_gmsk[i] = MMRF_CUSTOM_SHARED_ARRAY(TX_POWER_ROLLBACK_GMSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(tx_power_rollback_gmsk[i], (sizeof(sTX_POWER_ROLLBACK)));
#endif

#if IS_EGPRS
      /*  EPSK TX POWER ROLLBACK pointer table re-assign*/
      tx_power_rollback_epsk[i] = MMRF_CUSTOM_SHARED_ARRAY(TX_POWER_ROLLBACK_EPSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(tx_power_rollback_epsk[i], (sizeof(sTX_POWER_ROLLBACK)));
#endif

#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /*   GMSK TX POWER OFFSET pointer table re-assign*/
      Tx_Power_Offset_GMSK[i] = MMRF_CUSTOM_SHARED_ARRAY(TX_Power_Offset_GMSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(Tx_Power_Offset_GMSK[i], (sizeof(sTX_POWER_OFFSET)));
   #if IS_EPSK_TX_SUPPORT
      /*   EPSK TX POWER OFFSET pointer table re-assign*/
      Tx_Power_Offset_EPSK[i] = MMRF_CUSTOM_SHARED_ARRAY(TX_Power_Offset_EPSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(Tx_Power_Offset_EPSK[i], (sizeof(sTX_POWER_OFFSET)));   
   #endif
#endif


#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
      /*   GMSK Adjust TPO pointer table re-assign*/
      Adjust_TPO_GMSK[i] = MMRF_CUSTOM_SHARED_ARRAY(Adjust_TPO_GMSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(Adjust_TPO_GMSK[i], (sizeof(sNSFT_ADJUST_TPO)));
   #if IS_EPSK_TX_SUPPORT
       #if IS_EPSK_ADJUST_TPO_SUPPORT
      /*   EPSK Adjust TPO pointer table re-assign*/
      Adjust_TPO_EPSK[i] = MMRF_CUSTOM_SHARED_ARRAY(Adjust_TPO_EPSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(Adjust_TPO_EPSK[i], (sizeof(sNSFT_ADJUST_TPO)));   
       #endif//IS_EPSK_ADJUST_TPO_SUPPORT
   #endif//IS_EPSK_TX_SUPPORT
#endif//IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT



#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
      /* GAIN RF pointer table re-assign*/
      GAIN_RF_TABLE[i] = MMRF_CUSTOM_SHARED_ARRAY(GAIN_RF_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(GAIN_RF_TABLE[i], (sizeof(sTXGAIN_RFDATA)));
#endif

#if IS_MIPI_SUPPORT
      /* MIPI pointer table re-assign*/
      GGE_MIPI_CTRL_TABLE[i] = MMRF_CUSTOM_SHARED_ARRAY(GGE_MIPI_CTRL_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(GGE_MIPI_CTRL_TABLE[i], (sizeof(sGGE_MIPI_CTRL_TABLE_BAND)));
#endif
   }

#if IS_TX_POWER_CONTROL_SUPPORT
   /* GMSK_TXPC DATA pointer re-assign*/
   GMSK_TXPC_ptr = MMRF_CUSTOM_SHARED_pVAR(GMSK_TXPC_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(GMSK_TXPC_ptr, (sizeof(l1cal_txpc_T)));

   #if IS_EPSK_TX_SUPPORT
   /* EPSK_TXPC DATA pointer re-assign*/
   EPSK_TXPC_ptr = MMRF_CUSTOM_SHARED_pVAR(EPSK_TXPC_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(EPSK_TXPC_ptr, (sizeof(l1cal_txpc_T)));
   #endif

   /* TEMPERATURE ADC pointer re-assign*/
   TEMPERATURE_ADC_ptr = MMRF_CUSTOM_SHARED_pVAR(TEMPERATURE_ADC_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(TEMPERATURE_ADC_ptr, (sizeof(l1cal_temperatureADC_T)));
#endif
   
#if IS_2G_MMPOC_SUPPORT
   rfc_data_ptr = MMRF_CUSTOM_SHARED_pVAR(MMRFC_GSM_RESULT_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(rfc_data_ptr, (sizeof(MMRFC_GSM_RESULT_T)));
#endif

   /* AFC DATA pointer re-assign*/
   l1cal_afcData_T_ptr = MMRF_CUSTOM_SHARED_pVAR(AFC_DATA_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(l1cal_afcData_T_ptr, (sizeof(l1cal_afcData_T)));

   /* CAP DATA pointer re-assign*/
   XO_CapID_ptr = (long *)MMRF_CUSTOM_SHARED_pVAR(CAP_DATA_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(XO_CapID_ptr, (sizeof(l1cal_crystalCapData_T)));

   /* TXIQ pointer re-assign*/
   BBTXParameters_ptr = MMRF_CUSTOM_SHARED_pVAR(TXIQ_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(BBTXParameters_ptr, (sizeof(sBBTXParameters)));

   /* RFSPECIALCOEF pointer re-assign*/
   RFSpecialCoef_ptr = MMRF_CUSTOM_SHARED_pVAR(RFSPECIALCOEF_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(RFSpecialCoef_ptr, (sizeof(sRFSpecialCoef)));


#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
   /* CLOAD FREQ OFFSET pointer re-assign*/
   CLoad_FreqOffset_ptr = MMRF_CUSTOM_SHARED_pVAR(CLOAD_FREQ_OFFSET_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(CLoad_FreqOffset_ptr, (sizeof(int)));
#endif

#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
   /* RF CUSTOM INPUT DATA pointer re-assign*/
   l1d_rf_custom_input_data_ptr = MMRF_CUSTOM_SHARED_pVAR(RF_CUSTOM_INPUT_DATA_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(l1d_rf_custom_input_data_ptr, (sizeof(sL1D_RF_CUSTOM_INPUT_DATA)));
#endif

#if (IS_2G_TAS_SUPPORT)
   /* TAS CUSTOM PARAMES pointer re-assign*/
   L1_TAS_Custom_NVRAM_ptr = MMRF_CUSTOM_SHARED_pVAR(TAS_CUSTOM_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_TAS_Custom_NVRAM_ptr, (sizeof(L1D_CUSTOM_TAS_NVRAM_T)));

   L1_TAS_Custom_FE_NVRAM_ptr = MMRF_CUSTOM_SHARED_pVAR(TAS_CUSTOM_FE_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_TAS_Custom_FE_NVRAM_ptr, (sizeof(L1D_CUSTOM_TAS_FE_NVRAM_T)));
   #if IS_2G_TAS_INHERIT_4G_ANT
   L1_TAS_Custom_InheritLteAntTable_ptr = MMRF_CUSTOM_SHARED_pVAR(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_TAS_Custom_InheritLteAntTable_ptr,(sizeof(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T)));
   #endif
   L1_TAS_Custom_TST_ptr = MMRF_CUSTOM_SHARED_pVAR(TAS_CUSTOM_TST_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_TAS_Custom_TST_ptr, (sizeof(L1D_CUSTOM_TAS_TST_T)));
#endif

#if IS_2G_DAT_SUPPORT
   /* DAT CUSTOM PARAMES pointer re-assign*/
   L1_DAT_Custom_FE_ROUTE_NVRAM_ptr = MMRF_CUSTOM_SHARED_pVAR(DAT_CUSTOM_FE_ROUTE_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_DAT_Custom_FE_ROUTE_NVRAM_ptr, (sizeof(L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T))); 

   L1_DAT_Custom_FE_CAT_A_NVRAM_ptr = MMRF_CUSTOM_SHARED_pVAR(DAT_CUSTOM_FE_CAT_A_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_DAT_Custom_FE_CAT_A_NVRAM_ptr, (sizeof(L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T))); 

   L1_DAT_Custom_FE_CAT_B_NVRAM_ptr = MMRF_CUSTOM_SHARED_pVAR(DAT_CUSTOM_FE_CAT_B_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_DAT_Custom_FE_CAT_B_NVRAM_ptr, (sizeof(L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T)));
#endif

#if IS_ANT_RXPWR_OFFSET_SUPPORT
   L1D_ANT_RxPWR_OFFSET_NVRAM_ptr= MMRF_CUSTOM_SHARED_pVAR(ANT_RXPWR_OFFSET_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1D_ANT_RxPWR_OFFSET_NVRAM_ptr, (sizeof(sL1D_ANT_RxPWR_Offset_v2_T))); 
#endif

//#if IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
   L1_Custom_MIPI_CLK_FROM_NVRAM_ptr = MMRF_CUSTOM_SHARED_pVAR(CUSTOM_DISPLAY_MIPI_CLK_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_Custom_MIPI_CLK_FROM_NVRAM_ptr, (sizeof(L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T)));
//#endif
#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   L1_Custom_SAR_TX_BACKOFF_FROM_NVRAM_ptr = MMRF_CUSTOM_SHARED_pVAR(CUSTOM_SAR_TX_BACKOFF_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_Custom_SAR_TX_BACKOFF_FROM_NVRAM_ptr, (sizeof(L1D_CUSTOM_SAR_TX_BACKOFF_NVRAM_T)));
#endif
   l1d_custom_band_support_ptr = MMRF_CUSTOM_SHARED_pVAR(CUSTOM_BAND_SUPPORT_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(l1d_custom_band_support_ptr, (sizeof(sl1CustomBandSupport)));

#if IS_2G_RX_DIVERSITY_PATH_SUPPORT  //#ifdef __GSM_RXD_SUPPORT__
   for(i=1; i<FrequencyBandCount; i++)
   {
   #if IS_RX_POWER_OFFSET_SUPPORT  //#ifdef __GSM_RXD_SUPPORT__
      AGCLNA_PATHLOSS_RXD_OFFSET[i] = MMRF_CUSTOM_SHARED_ARRAY(AGCLNA_GAIN_OFFSET_RXD_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AGCLNA_PATHLOSS_RXD_OFFSET[i], (sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE));
   #endif

      AGC_PATHLOSS_RXD_TABLE[i] = MMRF_CUSTOM_SHARED_ARRAY(AGC_PATHLOSS_RXD_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AGC_PATHLOSS_RXD_TABLE[i], (sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE));

      LNA_PATHLOSS_RXD_TABLE[i] = MMRF_CUSTOM_SHARED_ARRAY(LNA_PATHLOSS_RXD_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(LNA_PATHLOSS_RXD_TABLE[i], (sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE));
   }
   /* WCOEF RXD pointer re-assign*/
   WCOEF_RXD_ptr = MMRF_CUSTOM_SHARED_pVAR(WCOEF_RXD_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(WCOEF_RXD_ptr, (sizeof(l1cal_wcoef_T)));

   /* RAS CUSTOM PARAMES pointer re-assign*/
   L1_RAS_Custom_NVRAM_ptr = MMRF_CUSTOM_SHARED_pVAR(RAS_CUSTOM_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_RAS_Custom_NVRAM_ptr, (sizeof(L1D_CUSTOM_RAS_NVRAM_T)));
#endif

   /* query crystal type and is crystal on PMIC from MMRF API after MML1_RF_L1coreSHMUpdate2Local */
   L1D_Crystal_Type_Init();
}

void L1D_MMRF_L1coreSHMUpdate2Local(void)
{
   kal_uint32  l1d_band_support = 0;

   {
      kal_mem_cpy(&l1d_custom_band_support, l1d_custom_band_support_ptr , sizeof(sl1CustomBandSupport) );
      l1d_band_support_shm_read_done = 1;
   }

   l1d_band_support = L1D_GetBandSupport_L1Core();
#ifdef __GSM850__
   if( l1d_band_support & (1<<FrequencyBand850) )
   {      
      L1D_RF_SetRampTable( FrequencyBand850, 0 );
   #if IS_EPSK_TX_SUPPORT
      L1D_RF_SetRampTableEPSK( FrequencyBand850, 0 );
   #endif

   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      L1D_RF_InitRampTable_TPO( FrequencyBand850 );
      #if IS_EPSK_TX_SUPPORT
      L1D_RF_InitRampTableEPSK_TPO( FrequencyBand850);
      #endif
   #endif //IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
#if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
      L1D_RF_InitRampTable_AdjustTPO( FrequencyBand850 );
      #if IS_EPSK_TX_SUPPORT
          #if IS_EPSK_ADJUST_TPO_SUPPORT
      L1D_RF_InitRampTableEPSK_AdjustTPO( FrequencyBand850);
          #endif//IS_EPSK_ADJUST_TPO_SUPPORT
      #endif//IS_EPSK_TX_SUPPORT
#endif //IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT

   }
#endif
#ifdef __EGSM900__
   if( l1d_band_support & (1<<FrequencyBand900) )
   {
      L1D_RF_SetRampTable( FrequencyBand900, 0 );
   #if IS_EPSK_TX_SUPPORT
      L1D_RF_SetRampTableEPSK( FrequencyBand900, 0 );
   #endif   

   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      L1D_RF_InitRampTable_TPO( FrequencyBand900 );
      #if IS_EPSK_TX_SUPPORT
      L1D_RF_InitRampTableEPSK_TPO( FrequencyBand900);
      #endif
   #endif //IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
   #if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
      L1D_RF_InitRampTable_AdjustTPO( FrequencyBand900 );
      #if IS_EPSK_TX_SUPPORT
          #if IS_EPSK_ADJUST_TPO_SUPPORT
      L1D_RF_InitRampTableEPSK_AdjustTPO( FrequencyBand900);
          #endif//IS_EPSK_ADJUST_TPO_SUPPORT
      #endif//IS_EPSK_TX_SUPPORT
   #endif //IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT

   }
#endif
#ifdef __DCS1800__
   if( l1d_band_support & (1<<FrequencyBand1800) )
   {
      L1D_RF_SetRampTable( FrequencyBand1800, 0 );
   #if IS_EPSK_TX_SUPPORT
      L1D_RF_SetRampTableEPSK( FrequencyBand1800, 0 );
   #endif   

   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      L1D_RF_InitRampTable_TPO( FrequencyBand1800 );
      #if IS_EPSK_TX_SUPPORT
      L1D_RF_InitRampTableEPSK_TPO( FrequencyBand1800);
      #endif
   #endif //IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
   #if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
      L1D_RF_InitRampTable_AdjustTPO( FrequencyBand1800 );
      #if IS_EPSK_TX_SUPPORT
          #if IS_EPSK_ADJUST_TPO_SUPPORT
      L1D_RF_InitRampTableEPSK_AdjustTPO( FrequencyBand1800);
          #endif//IS_EPSK_ADJUST_TPO_SUPPORT
      #endif//IS_EPSK_TX_SUPPORT
   #endif //IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
   }
#endif
#ifdef __PCS1900__
   if( l1d_band_support & (1<<FrequencyBand1900) )
   {
      L1D_RF_SetRampTable( FrequencyBand1900, 0 );
   #if IS_EPSK_TX_SUPPORT
      L1D_RF_SetRampTableEPSK( FrequencyBand1900, 0 );
   #endif   

   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      L1D_RF_InitRampTable_TPO( FrequencyBand1900 );
      #if IS_EPSK_TX_SUPPORT
      L1D_RF_InitRampTableEPSK_TPO( FrequencyBand1900);
      #endif
   #endif //IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
   #if IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
      L1D_RF_InitRampTable_AdjustTPO( FrequencyBand1900 );
      #if IS_EPSK_TX_SUPPORT
          #if IS_EPSK_ADJUST_TPO_SUPPORT
      L1D_RF_InitRampTableEPSK_AdjustTPO( FrequencyBand1900);
          #endif//IS_EPSK_ADJUST_TPO_SUPPORT
      #endif//IS_EPSK_TX_SUPPORT
   #endif //IS_NSFT_ADJUST_TX_POWER_OFFSET_SUPPORT
   }
#endif

   L1I_SetAFcData( l1cal_afcData_T_ptr->dacValue, l1cal_afcData_T_ptr->slopeInv );

   L1D_RF_SetBBTXParameters( BBTXParameters_ptr );

   L1D_RF_SetRFSpecialCoef( RFSpecialCoef_ptr );

#if IS_2G_RX_DIVERSITY_PATH_SUPPORT 
   L1D_RF_SetWCoef_RXD( WCOEF_RXD_ptr );

   L1D_RF_SetRASParameters(L1_RAS_Custom_NVRAM_ptr);
#endif

   L1D_RF_SetCrystalCap_Value( *XO_CapID_ptr );

#if IS_TX_POWER_CONTROL_SUPPORT
   L1D_RF_TXPC_SET_CAL( (sTXPC_L1CAL*)GMSK_TXPC_ptr, 0 /*GMSK*/, 0 /*update pointer*/ );
   #if IS_EPSK_TX_SUPPORT
   L1D_RF_TXPC_SET_CAL( (sTXPC_L1CAL*)EPSK_TXPC_ptr, 1 /*EPSK*/, 0 /*update pointer*/  );
   #endif
#endif

#if IS_TX_POWER_CONTROL_SUPPORT
   #if !defined(__GL1_MULTI_MODE__) || !defined(__MTK_UL1_FDD__) || IS_MULTI_RAT_TADC_SHARE_SUPPORT
   L1D_RF_TXPC_SET_TEMP_ADC( (sTEMPERATURE_ADC_L1CAL*)TEMPERATURE_ADC_ptr, 0 /*update pointer*/ );
   #endif /*!defined(__GL1_MULTI_MODE__) || !defined(__MTK_UL1_FDD__)|| IS_MULTI_RAT_TADC_SHARE_SUPPORT*/
#endif /* IS_TX_POWER_CONTROL_SUPPORT */

#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
   // Update 2G RF Parameter
   kal_mem_cpy(&l1d_rf_custom_input_data, l1d_rf_custom_input_data_ptr , sizeof(l1d_rf_custom_input_data_T) );
   L1D_RF_Custom_Table_Update_V2_No_Check();
#endif

#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
   L1D_RF_SetCLoadFreqOffset( (kal_int32*)CLoad_FreqOffset_ptr );
#endif /* IS_32K_CRYSTAL_REMOVAL_SUPPORT */

#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
   L1D_RF_SetGainRF(0);
#endif

#if IS_2G_MMPOC_SUPPORT
   L1D_RF_Set_RFC_Result(rfc_data_ptr);
#endif

#if IS_MIPI_SUPPORT
   {  int i = 0;
      for(i=0; i<FrequencyBandCount; i++)
      {
         GGE_MIPI_CTRL_TABLE_RX_EVENT[i]    = GGE_MIPI_CTRL_TABLE[i]->mipi_rx_ctrl_table.mipi_rxctrl_event;
         GGE_MIPI_CTRL_TABLE_TX_EVENT[i]    = GGE_MIPI_CTRL_TABLE[i]->mipi_tx_ctrl_table.mipi_txctrl_event;
         GGE_MIPI_CTRL_TABLE_RX_DATA[i]     = GGE_MIPI_CTRL_TABLE[i]->mipi_rx_ctrl_table.mipi_rxctrl_data;
         GGE_MIPI_CTRL_TABLE_TX_DATA[i]     = GGE_MIPI_CTRL_TABLE[i]->mipi_tx_ctrl_table.mipi_txctrl_data;
         GGE_MIPI_CTRL_TABLE_PA_DATA[i]     = (sGGE_MIPIPADATA*)(&GGE_MIPI_CTRL_TABLE[i]->mipi_tx_ctrl_table.mipi_txctrl_pa_data);
         GGE_MIPI_CTRL_TABLE_TXMID_EVENT[i] = (sGGE_MIPIEVENT*)GGE_MIPI_CTRL_TABLE[i]->mipi_txmid_ctrl_table.mipi_txmidctrl_event;
         GGE_MIPI_CTRL_TABLE_TXMID_DATA[i]  = GGE_MIPI_CTRL_TABLE[i]->mipi_txmid_ctrl_table.mipi_txmidctrl_data;
      }
   }
#endif

#if (IS_2G_TAS_SUPPORT)
   {      
      L1D_TAS_database2l1cpararmeterParser();
   #if IS_MIPI_SUPPORT
      L1D_TAS_database2MIPITableParser();
   #endif
      L1D_UpdateTASParameters(&L1_TAS_Custom_NVRAM);
   }
#endif
#if IS_2G_DAT_SUPPORT
   L1D_DAT_database2l1cpararmeterParser();
   #if IS_MIPI_SUPPORT
   L1D_DAT_database2MIPITableParser();
   #endif
#endif

#if IS_ANT_RXPWR_OFFSET_SUPPORT
   kal_mem_cpy(&L1D_ANT_RxPWR_Offset_v2_NVRAM, L1D_ANT_RxPWR_OFFSET_NVRAM_ptr , sizeof(sL1D_ANT_RxPWR_Offset_v2_T) );
#endif

//#if IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
   kal_mem_cpy(&L1_Custom_DISPLAY_MIPI_CLK_NVRAM,L1_Custom_MIPI_CLK_FROM_NVRAM_ptr,sizeof(L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T));
   L1D_Update_MIPICLOCK_GROUP(&L1_Custom_DISPLAY_MIPI_CLK_NVRAM);
//#endif
#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   kal_mem_cpy(&L1_Custom_SAR_TX_BACKOFF_DB_NVRAM,L1_Custom_SAR_TX_BACKOFF_FROM_NVRAM_ptr,sizeof(L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T));
#endif

}

kal_int16 L1D_RF_Antenna_RX_Power_Offset(kal_uint16 rf_band, kal_uint16 arfcn, kal_int16 RSSI, kal_uint32 pcell_id)
{
#if IS_ANT_RXPWR_OFFSET_SUPPORT

   int pcell_idx = 0;
   int arfcn_idx = 0;
   int rx_offset = 0;

   if(L1D_ANT_RxPWR_Offset_v2_NVRAM.is_enable == 0)
   {
      //L1D_RF_Info_Trace(2199, 0, 0);
      return 0;
   }

   /* arfcn add 1024 if PCS1900 */
   if(rf_band==1)                            /* LTE DCS: GSM850 or PCS1900 */
   {
      if((512<=arfcn) && (arfcn<=810))       /* PCS1900 */
      {  arfcn += 1024;  }
   }

   for(; pcell_idx<PLTABLE_SIZE; pcell_idx++)
   {
      if(L1D_ANT_RxPWR_Offset_v2_NVRAM.pcell_list[pcell_idx].pcell_id== TABLE_END)
      {
         /* white pcell id, offset=0 */
         pcell_idx = -1;
         rx_offset = 0;
         break;
      }      
      else if(L1D_ANT_RxPWR_Offset_v2_NVRAM.pcell_list[pcell_idx].pcell_id == pcell_id)
      {
         for(arfcn_idx=0; arfcn_idx<PLTABLE_SIZE; arfcn_idx++)
         {
            if(L1D_ANT_RxPWR_Offset_v2_NVRAM.pcell_list[pcell_idx].arfcn_list[arfcn_idx].arfcn == TABLE_END)
            {
               rx_offset = 0;
               L1D_RF_Info_Trace(2198, -1, 0);
               break;
            }
            else if(L1D_ANT_RxPWR_Offset_v2_NVRAM.pcell_list[pcell_idx].arfcn_list[arfcn_idx].arfcn == arfcn)
            {
               if(L1D_ANT_RxPWR_Offset_v2_NVRAM.pcell_list[pcell_idx].arfcn_list[arfcn_idx].threshold > RSSI)
               {
                  /* threshold restriction triggered */
                  L1D_RF_Info_Trace(2197, arfcn_idx, RSSI);
                  
                  rx_offset = 0;
               }
               else
               {
                  L1D_RF_Info_Trace(2198, arfcn_idx, RSSI);
                  
                  rx_offset = L1D_ANT_RxPWR_Offset_v2_NVRAM.pcell_list[pcell_idx].arfcn_list[arfcn_idx].offset;
                  /* offset range from -20dB ~ +20dB */
                  rx_offset = (rx_offset>80)?(80):rx_offset;
                  rx_offset = (rx_offset<(-80))?(-80):rx_offset;
               }
               break;
            }

            /* table end case if arfcn list is fullfilled */
            if(arfcn_idx == (PLTABLE_SIZE-1))
            {
               rx_offset = 0;
               L1D_RF_Info_Trace(2198, PLTABLE_SIZE, 0);
               break;
            }
         }

         break;
      }

      /* table end case if pcell list is fullfilled */
      if(pcell_idx == (PLTABLE_SIZE-1))
      {
         pcell_idx = PLTABLE_SIZE;
         rx_offset = 0;
         break;
      }
   }

   L1D_RF_Info_Trace(2199, pcell_idx, rx_offset);
   return rx_offset;

#else
   //L1D_RF_Info_Trace(2199, -1, -1);
   return 0;
#endif
}

#if IS_2G_RXD_SUPPORT
uint16 L1D_RF_RAS_NVRAM_LID_QUERY(void)
{
   return (uint16) NVRAM_EF_L1_RAS_CUSTOM_PARAMES_LID;
}
#endif /* IS_2G_RXD_SUPPORT */

#if (IS_2G_TAS_SUPPORT)
uint16 L1D_RF_TAS_NVRAM_LID_QUERY(void)
{
   return (uint16) NVRAM_EF_L1_TAS_CUSTOM_PARAMES_LID;
}

kal_bool  L1D_RF_TAS_Support( void )
{
   return (kal_bool) L1_TAS_Custom_NVRAM.L1_TAS_ENABLE_ON_REAL_SIM;
   
}

void L1D_RF_Force_TAS(kal_bool force_tas_enable, kal_uint8 tas_idx)
{
   if( L1D_CheckIfMetaMode() )
   {
      L1_TAS_Custom_NVRAM.L1_TAS_FORCE_ENABLE = force_tas_enable;
      L1_TAS_Custom_NVRAM.L1_TAS_FORCE_INIT_SETTING = tas_idx;
   }  
   return;
}

kal_uint16 L1D_IsQueryingTasStateInfoSupported( void )
{
   kal_uint16 reslut = KAL_FALSE;
   if (L1_TAS_Custom_NVRAM.L1_TAS_VERSION == L1D_TAS_VER_2_0)
   {
      reslut = KAL_TRUE;
   }
   return reslut;
}

kal_uint16 L1D_QueryTasVersion( void )
{
   L1D_CUSTOM_TAS_VER_E version = L1_TAS_Custom_NVRAM.L1_TAS_VERSION; 
   kal_uint16           result  = MMTST_TAS_VER_INVALID;
   switch( version )
   {  
      case L1D_TAS_VER_1_0: 
      {
         result = MMTST_TAS_VER_1_0;    
         break;
      }
      case L1D_TAS_VER_2_0:
      {
         result = MMTST_TAS_VER_2_0;    
         break;
      }
      default:
      {
         ASSERT(0);    
         break;
      }
   }  
   return result; 
}

kal_uint16 L1D_GetTasStateConfigBandNum( void )
{
   kal_uint16              supported_band_count = 0;
   kal_uint32              index;

   for( index=FrequencyBand400; index<FrequencyBandCount; index++ )
   {
      if( L1_TAS_Custom_TST_ptr->L1_TAS_TST_ENABLE[index] == L1D_TAS_ENABLE /* band valid */ )
      {
         supported_band_count++;
      }
   }
   return supported_band_count;
}

void L1D_GetTasStateConfig(kal_uint16 buf_length, kal_uint16* band_list, kal_uint16* state_limit, kal_uint16* tas_state )
{
   kal_uint16  supported_band_count = 0;
   kal_uint16  index;
   
   for( index=FrequencyBand400; index<FrequencyBandCount; index++ )
   {
      if( L1_TAS_Custom_TST_ptr->L1_TAS_TST_ENABLE[index] == L1D_TAS_ENABLE /* band valid */ )
      {
         band_list[supported_band_count]   = index;  
         state_limit[supported_band_count] = L1_TAS_Custom_NVRAM.L1_TAS_STATE_NUM[index];
         tas_state[supported_band_count]   = (  ((L1_TAS_Custom_TST_ptr->L1_TAS_TST_STATE0_ENABLE[index]) == L1D_TAS_ENABLE)
                                              |(((L1_TAS_Custom_TST_ptr->L1_TAS_TST_STATE1_ENABLE[index]) == L1D_TAS_ENABLE)<<1)
                                              |(((L1_TAS_Custom_TST_ptr->L1_TAS_TST_STATE2_ENABLE[index]) == L1D_TAS_ENABLE)<<2));
         supported_band_count++;
      }

      // Prevent from happening of memery curruption
      if( supported_band_count>=buf_length )
      {
         break;
      }
   }
}

#endif/* IS_2G_TAS_SUPPORT */

#if IS_2G_TAS_SUPPORT
#include "l1d_rf_tas_typedef.h"

uintBPI TASBPITable_CatA[FrequencyBandCount][L1D_TAS_STATE_NUM][2]={{{0}}};
uintBPI TASBPITable_CatB[FrequencyBandCount][L1D_TAS_STATE_NUM][2]={{{0}}};
uintBPI TASBPITable_CatC[FrequencyBandCount][L1D_TAS_STATE_NUM][2]={{{0}}};

void L1D_TAS_database2l1cpararmeterParser(void)
{   
   #ifdef __MTK_TARGET__
   
   kal_mem_cpy(&L1_TAS_Custom_NVRAM,L1_TAS_Custom_NVRAM_ptr,sizeof(L1D_CUSTOM_TAS_NVRAM_T));
   kal_mem_cpy(&L1_TAS_Custom_FE_NVRAM,L1_TAS_Custom_FE_NVRAM_ptr,sizeof(L1D_CUSTOM_TAS_FE_NVRAM_T));
      #if IS_2G_TAS_INHERIT_4G_ANT
   kal_mem_cpy(&L1_TAS_Custom_InheritLteAntTable,L1_TAS_Custom_InheritLteAntTable_ptr,sizeof(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T));
      #endif
   L1D_TAS_database2bpiparser();
   #else
   #endif
}

void L1D_TAS_database2bpiparser(void)
{
   FrequencyBand band=0;
   L1D_CUSTOM_TAS_STATE_E tas_state=0; 
   
   kal_uint32   cat_a_config_num=0;
   kal_uint32   cat_a_config_mask=0;
   kal_uint32   cat_a_config_bpi=0;

   kal_uint32   cat_b_config_num=0;
   kal_uint32   cat_b_config_mask=0;
   kal_uint32   cat_b_config_bpi=0;
   
   kal_uint32   cat_c_config_num=0;
   kal_uint32   cat_c_config_mask=0;
   kal_uint32   cat_c_config_bpi=0;

   for(band=FrequencyBand1900;band>FrequencyBand400;band--)
   {
      
      for(tas_state=L1D_TAS_STATE0;tas_state<L1D_TAS_STATE_NUM;tas_state++)
      {
         cat_a_config_num   = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_database.l1d_tas_sb_fe_db[band].l1d_tas_config_map[tas_state].cat_a_config_num;
         if(cat_a_config_num != L1D_TAS_FE_NULL)
         {
            cat_a_config_mask  = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_cat_a.tas_cat_a_fe_config[cat_a_config_num].bpi_mask;
            cat_a_config_bpi   = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_cat_a.tas_cat_a_fe_config[cat_a_config_num].bpi_value;
         }
         else
         {
            cat_a_config_mask  = 0;
            cat_a_config_bpi   = 0;
         }

         cat_b_config_num   = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_database.l1d_tas_sb_fe_db[band].l1d_tas_config_map[tas_state].cat_b_config_num;
         if(cat_b_config_num != L1D_TAS_FE_NULL)
         {
            cat_b_config_mask  = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_cat_b.tas_cat_b_fe_config[cat_b_config_num].bpi_mask;
            cat_b_config_bpi   = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_cat_b.tas_cat_b_fe_config[cat_b_config_num].bpi_value;
         }
         else
         {
            cat_b_config_mask  = 0;
            cat_b_config_bpi   = 0;
         }

         cat_c_config_num   = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_database.l1d_tas_sb_fe_db[band].l1d_tas_config_map[tas_state].cat_c_config_num;
         if(cat_c_config_num != L1D_TAS_FE_NULL)
         {
            cat_c_config_mask  = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_cat_c.tas_cat_c_fe_config[cat_c_config_num].bpi_mask;
            cat_c_config_bpi   = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_cat_c.tas_cat_c_fe_config[cat_c_config_num].bpi_value;
         }
         else
         {
            cat_c_config_mask  = 0;
            cat_c_config_bpi   = 0;
         }

         TASBPITable_CatA[band][tas_state][0] = cat_a_config_mask;
         TASBPITable_CatA[band][tas_state][1] = cat_a_config_bpi;

         TASBPITable_CatB[band][tas_state][0] = cat_b_config_mask;
         TASBPITable_CatB[band][tas_state][1] = cat_b_config_bpi;

         TASBPITable_CatC[band][tas_state][0] = cat_c_config_mask;
         TASBPITable_CatC[band][tas_state][1] = cat_c_config_bpi;
      }   
   }
}
   #if IS_MIPI_SUPPORT
void L1D_TAS_MIPITable_Init(void)
{
   FrequencyBand band=0;
   uint16 tas_state,mipi_evnt_num,mipi_data_num =0;

   for(band=FrequencyBand1900;band>FrequencyBand400;band--)
   {
      
      for(tas_state =0;tas_state<L1D_TAS_STATE_NUM;tas_state++)
      {
         for(mipi_evnt_num=0;mipi_evnt_num<(L1D_TAS_FE_CAT_MAX_NUM*L1D_TAS_MAX_MIPI_EVNET_NUM);mipi_evnt_num++)
         {
            kal_mem_cpy( &(GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_event[mipi_evnt_num]),&L1D_TAS_MIPI_EVENT_NULL,sizeof(sGGE_MIPIEVENT));
         }

         for(mipi_data_num=0;mipi_data_num<(L1D_TAS_FE_CAT_MAX_NUM*L1D_TAS_MAX_MIPI_DATA_NUM);mipi_data_num++)
         {
            kal_mem_cpy( &(GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_data[mipi_data_num]),&L1D_TAS_MIPI_DATA_NULL,sizeof(sGGE_MIPIDATA_SUBBAND));
         }         
      }
   }
}

void L1D_TAS_database2MIPITableParser(void)
{
   FrequencyBand band=0;
   uint16 tas_config=0,tas_state=0,mipi_evnt_num=0,mipi_data_num=0,mipi_evnt_table_index=0,mipi_data_table_index=0;
   uint16 mipi_data_cat_a_index_offset=0,mipi_data_cat_b_index_offset=0;
   kal_uint32   cat_a_mipi_table_index=0;
   kal_uint32   cat_b_mipi_table_index=0;
   kal_uint32   cat_c_mipi_table_index=0;
      #if IS_L1D_USEC_TRACE_SUPPORT   
   L1D_TAS_Usec_Trace(0);
      #endif   
   L1D_TAS_MIPITable_Init();
      #if IS_L1D_USEC_TRACE_SUPPORT
   L1D_TAS_Usec_Trace(1);
      #endif
   for(band=FrequencyBand1900;band>FrequencyBand400;band--)
   {
      for(tas_state=L1D_TAS_STATE0;tas_state<L1D_TAS_MAX_STATE_NUM;tas_state++)
      {
         mipi_evnt_table_index = 0;
         mipi_data_table_index = 0;
         mipi_data_cat_a_index_offset=0;
         mipi_data_cat_b_index_offset=0;
         cat_a_mipi_table_index = L1D_TAS_MIPI_TABLE_NULL;
         cat_b_mipi_table_index = L1D_TAS_MIPI_TABLE_NULL;
         cat_c_mipi_table_index = L1D_TAS_MIPI_TABLE_NULL;
         tas_config   = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_database.l1d_tas_sb_fe_db[band].l1d_tas_config_map[tas_state].cat_a_config_num;
         if(tas_config != L1D_TAS_FE_NULL)
         {
            cat_a_mipi_table_index = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_cat_a.tas_cat_a_fe_config[tas_config].tas_mipi_table_index;
         }
         else
         {
            cat_a_mipi_table_index = L1D_TAS_MIPI_TABLE_NULL;
         }        
         if(cat_a_mipi_table_index != L1D_TAS_MIPI_TABLE_NULL)
         {
            for(mipi_evnt_num=0;mipi_evnt_num<L1D_TAS_MAX_MIPI_EVNET_NUM;mipi_evnt_num++)
            {
               if(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_a_mipi_event[tas_config][mipi_evnt_num].mipi_elm_type != GGE_MIPI_NULL)
               {
                  kal_mem_cpy( &(GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_event[mipi_evnt_table_index]),&(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_a_mipi_event[cat_a_mipi_table_index][mipi_evnt_num]),sizeof(sGGE_MIPIEVENT));
                  mipi_evnt_table_index++;
               }
               else
               {
                  break;
               }
            }
            for(mipi_data_num=0;mipi_data_num<L1D_TAS_MAX_MIPI_DATA_NUM;mipi_data_num++)
            {
               if(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_a_mipi_data[tas_config][mipi_data_num].mipi_elm_type != GGE_MIPI_NULL)
               {
                  kal_mem_cpy( &(GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_data[mipi_data_table_index]),&(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_a_mipi_data[cat_a_mipi_table_index][mipi_data_num]),sizeof(sGGE_MIPIDATA_SUBBAND));
                  mipi_data_table_index++;
                  mipi_data_cat_a_index_offset++;
               }
               else
               {
                  break;
               }
            }
         }
         else
         {
             //do nothing;
         }
         tas_config   = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_database.l1d_tas_sb_fe_db[band].l1d_tas_config_map[tas_state].cat_b_config_num;
         if(tas_config != L1D_TAS_FE_NULL)
         {
            cat_b_mipi_table_index = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_cat_b.tas_cat_b_fe_config[tas_config].tas_mipi_table_index;
         }
         else
         {
            cat_b_mipi_table_index = L1D_TAS_MIPI_TABLE_NULL;
         }
         if(cat_b_mipi_table_index != L1D_TAS_MIPI_TABLE_NULL)
         {
            for(mipi_evnt_num=0;mipi_evnt_num<L1D_TAS_MAX_MIPI_EVNET_NUM;mipi_evnt_num++)
            {
               if(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_b_mipi_event[tas_config][mipi_evnt_num].mipi_elm_type != GGE_MIPI_NULL)
               {                
                  kal_mem_cpy( &(GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_event[mipi_evnt_table_index]),&(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_b_mipi_event[cat_b_mipi_table_index][mipi_evnt_num]),sizeof(sGGE_MIPIEVENT));
                  GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_event[mipi_evnt_table_index].mipi_data_stsp.mipi_data_st += mipi_data_cat_a_index_offset;
                  GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_event[mipi_evnt_table_index].mipi_data_stsp.mipi_data_sp += mipi_data_cat_a_index_offset;
                  mipi_evnt_table_index++;
               }
               else
               {
                  break;
               }
            }
            for(mipi_data_num=0;mipi_data_num<L1D_TAS_MAX_MIPI_DATA_NUM;mipi_data_num++)
            {
               if(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_b_mipi_data[tas_config][mipi_data_num].mipi_elm_type != GGE_MIPI_NULL)
               {
                  kal_mem_cpy( &(GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_data[mipi_data_table_index]),&(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_b_mipi_data[cat_b_mipi_table_index][mipi_data_num]),sizeof(sGGE_MIPIDATA_SUBBAND));
                  mipi_data_table_index++;
                  mipi_data_cat_b_index_offset++;
               }
               else
               {
                  break;
               }
            }

         }
         else
         {
            //do nothing;
         }
         tas_config   = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_database.l1d_tas_sb_fe_db[band].l1d_tas_config_map[tas_state].cat_c_config_num;
         if(tas_config != L1D_TAS_FE_NULL)
         {
            cat_c_mipi_table_index = L1_TAS_Custom_FE_NVRAM.l1d_custom_tas_fe_cat_c.tas_cat_c_fe_config[tas_config].tas_mipi_table_index;
         }
         else
         {
            cat_c_mipi_table_index = L1D_TAS_MIPI_TABLE_NULL;
         }         
         if(cat_c_mipi_table_index != L1D_TAS_MIPI_TABLE_NULL)
         {
            for(mipi_evnt_num=0;mipi_evnt_num<L1D_TAS_MAX_MIPI_EVNET_NUM;mipi_evnt_num++)
            {
               if(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_c_mipi_event[tas_config][mipi_evnt_num].mipi_elm_type != GGE_MIPI_NULL)
               {
                  kal_mem_cpy( &(GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_event[mipi_evnt_table_index]),&L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_c_mipi_event[cat_c_mipi_table_index][mipi_evnt_num],sizeof(sGGE_MIPIEVENT));
                  GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_event[mipi_evnt_table_index].mipi_data_stsp.mipi_data_st += (mipi_data_cat_a_index_offset + mipi_data_cat_b_index_offset);
                  GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_event[mipi_evnt_table_index].mipi_data_stsp.mipi_data_sp += (mipi_data_cat_a_index_offset + mipi_data_cat_b_index_offset);
                  mipi_evnt_table_index++;
               }
               else
               {
                  break;
               }
            }
            for(mipi_data_num=0;mipi_data_num<L1D_TAS_MAX_MIPI_DATA_NUM;mipi_data_num++)
            {
               if(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_c_mipi_data[tas_config][mipi_data_num].mipi_elm_type != GGE_MIPI_NULL)
               {
                  kal_mem_cpy( &(GGE_TAS_MIPI_CTRL_TABLE[band][tas_state]->tas_mipi_rtxctrl_data[mipi_data_table_index]),&(L1_TAS_Custom_FE_NVRAM.l1d_tas_cat_c_mipi_data[cat_c_mipi_table_index][mipi_data_num]),sizeof(sGGE_MIPIDATA_SUBBAND));
                  mipi_data_table_index++;
               }
               else
               {
                  break;
               }
            }
         }
         else
         {
             //do nothing;
         }         
      }
   }
      #if IS_L1D_USEC_TRACE_SUPPORT
   L1D_TAS_Usec_Trace(2);
      #endif   
}
   #endif
#endif
#if IS_2G_DAT_SUPPORT
#include "l1d_rf_dat_typedef.h"

uintBPI DATBPITable[FrequencyBandCount][L1D_DAT_STATE_NUM][2];

void L1D_DAT_database2l1cpararmeterParser(void)
{   
   #ifdef __MTK_TARGET__
   kal_mem_cpy(&L1_DAT_Custom_FE_ROUTE_NVRAM,L1_DAT_Custom_FE_ROUTE_NVRAM_ptr,sizeof(L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T));
   kal_mem_cpy(&L1_DAT_Custom_FE_CAT_A_NVRAM,L1_DAT_Custom_FE_CAT_A_NVRAM_ptr,sizeof(L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T));
   kal_mem_cpy(&L1_DAT_Custom_FE_CAT_B_NVRAM,L1_DAT_Custom_FE_CAT_B_NVRAM_ptr,sizeof(L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T));

   L1D_DAT_database2bpiparser();
   #else
   #endif
}

void L1D_DAT_database2bpiparser(void)
{
   FrequencyBand band=0;
   L1D_CUSTOM_DAT_STATE_E dat_state=0; 
   
   kal_uint32   cat_a_route_num=0;
   uintBPI   cat_a_route_mask=0;
   uintBPI   cat_a_route_bpi=0;

   kal_uint32   cat_b_route_num=0;
   uintBPI   cat_b_route_mask=0;
   uintBPI   cat_b_route_bpi=0;

   for(band=FrequencyBand1900;band>FrequencyBand400;band--)
   {
      
      for(dat_state=L1D_DAT_STATE0;dat_state<L1D_DAT_STATE_NUM;dat_state++)
      {
         cat_a_route_num   = L1_DAT_Custom_FE_ROUTE_NVRAM.l1d_custom_dat_fe_database.l1d_dat_sb_fe_db[band].l1d_dat_route_map[dat_state].cat_a_route_num;
         if(cat_a_route_num != L1D_DAT_FE_CAT_A_NULL)
         {
            cat_a_route_mask  = L1_DAT_Custom_FE_CAT_A_NVRAM.l1d_custom_dat_fe_cat_a.dat_cat_a_fe_route[cat_a_route_num].bpi_mask;
            cat_a_route_bpi   = L1_DAT_Custom_FE_CAT_A_NVRAM.l1d_custom_dat_fe_cat_a.dat_cat_a_fe_route[cat_a_route_num].bpi_value;
         }
         else
         {
            cat_a_route_mask  = 0;
            cat_a_route_bpi   = 0;
         }

         cat_b_route_num   = L1_DAT_Custom_FE_ROUTE_NVRAM.l1d_custom_dat_fe_database.l1d_dat_sb_fe_db[band].l1d_dat_route_map[dat_state].cat_b_route_num;
         if(cat_b_route_num != L1D_DAT_FE_CAT_B_NULL)
         {
            cat_b_route_mask  = L1_DAT_Custom_FE_CAT_B_NVRAM.l1d_custom_dat_fe_cat_b.dat_cat_b_fe_route[cat_b_route_num].bpi_mask;
            cat_b_route_bpi   = L1_DAT_Custom_FE_CAT_B_NVRAM.l1d_custom_dat_fe_cat_b.dat_cat_b_fe_route[cat_b_route_num].bpi_value;
         }
         else
         {
            cat_b_route_mask  = 0;
            cat_b_route_bpi   = 0;
         }

         DATBPITable[band][dat_state][0]= (cat_a_route_mask | cat_b_route_mask );
         DATBPITable[band][dat_state][1]= (cat_a_route_bpi | cat_b_route_bpi );    
      }   
   }
}
   #if IS_MIPI_SUPPORT
void L1D_DAT_MIPITable_Init(void)
{
   FrequencyBand band=0;
   uint16 dat_state,mipi_evnt_num,mipi_data_num =0;

   for(band=FrequencyBand1900;band>FrequencyBand400;band--)
   {
      
      for(dat_state =0;dat_state<L1D_DAT_MAX_STATE_NUM;dat_state++)
      {
         for(mipi_evnt_num=0;mipi_evnt_num<(L1D_DAT_FE_CAT_MAX_NUM*L1D_DAT_MAX_MIPI_EVNET_NUM);mipi_evnt_num++)
         {
            kal_mem_cpy( &(GGE_DAT_MIPI_CTRL_TABLE[band][dat_state]->dat_mipi_rtxctrl_event[mipi_evnt_num]),&L1D_DAT_MIPI_EVENT_NULL,sizeof(sGGE_MIPIEVENT));
         }

         for(mipi_data_num=0;mipi_data_num<(L1D_DAT_FE_CAT_MAX_NUM*L1D_DAT_MAX_MIPI_DATA_NUM);mipi_data_num++)
         {
            kal_mem_cpy( &(GGE_DAT_MIPI_CTRL_TABLE[band][dat_state]->dat_mipi_rtxctrl_data[mipi_data_num]),&L1D_DAT_MIPI_DATA_NULL,sizeof(sGGE_MIPIDATA_SUBBAND));
         }         
      }
   }
}

void L1D_DAT_database2MIPITableParser(void)
{
   FrequencyBand band=0;
   uint16 dat_route=0,dat_state=0,mipi_evnt_num=0,mipi_data_num=0,mipi_evnt_table_index=0,mipi_data_table_index=0;
   uint16 mipi_data_cat_a_index_offset=0,mipi_data_cat_b_index_offset=0;
   kal_uint32   cat_a_mipi_table_index=0;
   kal_uint32   cat_b_mipi_table_index=0;
  
   L1D_DAT_MIPITable_Init();

   for(band=FrequencyBand1900;band>FrequencyBand400;band--)
   {
      for(dat_state=L1D_DAT_STATE0;dat_state<L1D_DAT_STATE_NUM;dat_state++)
      {
         mipi_evnt_table_index = 0;
         mipi_data_table_index = 0;
         mipi_data_cat_a_index_offset=0;
         mipi_data_cat_b_index_offset=0;
         cat_a_mipi_table_index = L1D_DAT_MIPI_TABLE_NULL;
         cat_b_mipi_table_index = L1D_DAT_MIPI_TABLE_NULL;
         dat_route   = L1_DAT_Custom_FE_ROUTE_NVRAM.l1d_custom_dat_fe_database.l1d_dat_sb_fe_db[band].l1d_dat_route_map[dat_state].cat_a_route_num;
         if(dat_route != L1D_DAT_FE_CAT_A_NULL)
         {
            cat_a_mipi_table_index = L1_DAT_Custom_FE_CAT_A_NVRAM.l1d_custom_dat_fe_cat_a.dat_cat_a_fe_route[dat_route].dat_mipi_table_index;
         }
         else
         {
            cat_a_mipi_table_index = L1D_DAT_MIPI_TABLE_NULL;
         }        
         if(cat_a_mipi_table_index != L1D_DAT_MIPI_TABLE_NULL)
         {
            for(mipi_evnt_num=0;mipi_evnt_num<L1D_DAT_MAX_MIPI_EVNET_NUM;mipi_evnt_num++)
            {
               if(L1_DAT_Custom_FE_CAT_A_NVRAM.l1d_dat_cat_a_mipi_event[dat_route][mipi_evnt_num].mipi_elm_type != GGE_MIPI_NULL)
               {
                  kal_mem_cpy( &(GGE_DAT_MIPI_CTRL_TABLE[band][dat_state]->dat_mipi_rtxctrl_event[mipi_evnt_table_index]),&(L1_DAT_Custom_FE_CAT_A_NVRAM.l1d_dat_cat_a_mipi_event[cat_a_mipi_table_index][mipi_evnt_num]),sizeof(sGGE_MIPIEVENT));
                  mipi_evnt_table_index++;
               }
               else
               {
                  break;
               }
            }
            for(mipi_data_num=0;mipi_data_num<L1D_DAT_MAX_MIPI_DATA_NUM;mipi_data_num++)
            {
               if(L1_DAT_Custom_FE_CAT_A_NVRAM.l1d_dat_cat_a_mipi_data[dat_route][mipi_data_num].mipi_elm_type != GGE_MIPI_NULL)
               {
                  kal_mem_cpy( &(GGE_DAT_MIPI_CTRL_TABLE[band][dat_state]->dat_mipi_rtxctrl_data[mipi_data_table_index]),&(L1_DAT_Custom_FE_CAT_A_NVRAM.l1d_dat_cat_a_mipi_data[cat_a_mipi_table_index][mipi_data_num]),sizeof(sGGE_MIPIDATA_SUBBAND));
                  mipi_data_table_index++;
                  mipi_data_cat_a_index_offset++;
               }
               else
               {
                  break;
               }
            }
         }
         else
         {
             //do nothing;
         }
         dat_route   = L1_DAT_Custom_FE_ROUTE_NVRAM.l1d_custom_dat_fe_database.l1d_dat_sb_fe_db[band].l1d_dat_route_map[dat_state].cat_b_route_num;
         if(dat_route != L1D_DAT_FE_CAT_B_NULL)
         {
            cat_b_mipi_table_index = L1_DAT_Custom_FE_CAT_B_NVRAM.l1d_custom_dat_fe_cat_b.dat_cat_b_fe_route[dat_route].dat_mipi_table_index;
         }
         else
         {
            cat_b_mipi_table_index = L1D_DAT_MIPI_TABLE_NULL;
         }
         if(cat_b_mipi_table_index != L1D_DAT_MIPI_TABLE_NULL)
         {
            for(mipi_evnt_num=0;mipi_evnt_num<L1D_DAT_MAX_MIPI_EVNET_NUM;mipi_evnt_num++)
            {
               if(L1_DAT_Custom_FE_CAT_B_NVRAM.l1d_dat_cat_b_mipi_event[dat_route][mipi_evnt_num].mipi_elm_type != GGE_MIPI_NULL)
               {                
                  kal_mem_cpy( &(GGE_DAT_MIPI_CTRL_TABLE[band][dat_state]->dat_mipi_rtxctrl_event[mipi_evnt_table_index]),&(L1_DAT_Custom_FE_CAT_B_NVRAM.l1d_dat_cat_b_mipi_event[cat_b_mipi_table_index][mipi_evnt_num]),sizeof(sGGE_MIPIEVENT));
                  GGE_DAT_MIPI_CTRL_TABLE[band][dat_state]->dat_mipi_rtxctrl_event[mipi_evnt_table_index].mipi_data_stsp.mipi_data_st += mipi_data_cat_a_index_offset;
                  GGE_DAT_MIPI_CTRL_TABLE[band][dat_state]->dat_mipi_rtxctrl_event[mipi_evnt_table_index].mipi_data_stsp.mipi_data_sp += mipi_data_cat_a_index_offset;
                  mipi_evnt_table_index++;
               }
               else
               {
                  break;
               }
            }
            for(mipi_data_num=0;mipi_data_num<L1D_DAT_MAX_MIPI_DATA_NUM;mipi_data_num++)
            {
               if(L1_DAT_Custom_FE_CAT_B_NVRAM.l1d_dat_cat_b_mipi_data[dat_route][mipi_data_num].mipi_elm_type != GGE_MIPI_NULL)
               {
                  kal_mem_cpy( &(GGE_DAT_MIPI_CTRL_TABLE[band][dat_state]->dat_mipi_rtxctrl_data[mipi_data_table_index]),&(L1_DAT_Custom_FE_CAT_B_NVRAM.l1d_dat_cat_b_mipi_data[cat_b_mipi_table_index][mipi_data_num]),sizeof(sGGE_MIPIDATA_SUBBAND));
                  mipi_data_table_index++;
                  mipi_data_cat_b_index_offset++;
               }
               else
               {
                  break;
               }
            }

         }
         else
         {
            //do nothing;
         }       
      }
   } 
}
   #endif
#endif

#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
/*=======================================================================================================*/
/*  L1D_RF_SAR_Tx_Power_Backoff_DB                                                                       */
/*=======================================================================================================*/
/*
Account:
   This function returns rollback value when SAR is enabled.

Input :
   rf_band:       used band. i.e. GSM900 = 2. 
   mod_type:      modulation.
   tx_slot_cnt:   number of multislot
   ant_idx:       antenna index.
   
Output:
   rollback value of SAR_db 
*/

int L1D_RF_SAR_Tx_Power_Backoff_DB( int rf_band, short mod_type, int tx_slot_cnt, int ant_idx )
{
   kal_uint16 table_idx;
   int SAR_db = 0;   //return 0 if table_idx is not from 1 to 8.
   uint8 tas_ant_sel = 0;
   #if (IS_2G_TAS_SUPPORT)
   tas_ant_sel = l1d_rf.tas_ant_sel;
   if (ant_idx != 0xFFFF)
   {
      tas_ant_sel = ant_idx;
   }
   #endif

   table_idx = MMRF_AP_Sensor_Relative_Feature_Query_Status(OP_CODE_SAR, MMRF_AP_SENSOR_RELATIVE_GSM);
   
   if((table_idx >= GGE_SAR_RF_STATE_1) && (table_idx <= GGE_SAR_RF_STATE_8))
   {
      SAR_db = L1_Custom_SAR_TX_BACKOFF_DB_NVRAM.SAR_RF_STATE[table_idx].power_decrement[rf_band-1][tas_ant_sel][mod_type][tx_slot_cnt-1];
   }
   return SAR_db;
}

/*=======================================================================================================*/
/*  L1D_RF_SAR_Tx_Power_Backoff_DB_Offset                                                                */
/*=======================================================================================================*/
/*
Account:
   This function returns offset value,the main purpose is to compensate for the difference between wireless and conductive.

Input :
   real_tx_power: TX power. 
   lowest_dbm:    minimum power of used band. 
   max_power:     maximum power of used band.
   Weight:        weight value of current used band. i.e. high_weight, low_weight.
   band:          ramp data of operating band.
   
   
Output:
   offset value,it might be positive or negative value.
*/

short L1D_RF_SAR_Tx_Power_Backoff_DB_Offset( int rf_band, short mod_type, int tx_slot_cnt, short real_tx_power, unsigned short weight, char lowest_dbm, short max_power, const sRAMPDATA* band )
{
   short offset = 0;
   short power_dac_before = 0, power_dac_after = 0;
   int default_db;

   uint8 tas_ant_sel = 0;
   #if (IS_2G_TAS_SUPPORT)
   tas_ant_sel = l1d_rf.tas_ant_sel;   //default table would be not affect by L1C part.
   #endif

   default_db = L1_Custom_SAR_TX_BACKOFF_DB_NVRAM.SAR_RF_STATE[GGE_SAR_RF_STATE_DEFAULT].power_decrement[rf_band-1][tas_ant_sel][mod_type][tx_slot_cnt-1];

   if( mod_type == 0 )
   {
      power_dac_before = L1D_RF_Calc_TX_Power_DAC(real_tx_power, lowest_dbm, max_power, band);   // without power offset
      power_dac_after  = L1D_RF_Calc_TX_Power_DAC((real_tx_power - default_db/F2I_Resolution), lowest_dbm, max_power, band);   // with power offset by default table
      offset = ((power_dac_before - power_dac_after)*weight)>>14 ;

   }
   #if IS_EPSK_TX_SUPPORT
   else
   {
      offset = (short)default_db;
   }
   #endif

   return offset;
}

/*=======================================================================================================*/
/*  L1D_RF_Calc_TX_Power_DAC                                                                             */
/*=======================================================================================================*/
/*
Account:
   This function returns the corresponding dac from input tx power.

Input :
   real_tx_power: TX power. 
   lowest_dbm:    minimum power of used band. 
   max_power:     maximum power of used band.
   band:          ramp data of operating band.
   
Output:
   Power dac value(positive)
*/

short L1D_RF_Calc_TX_Power_DAC( short real_tx_power, char lowest_dbm, short max_power, const sRAMPDATA* band )
{
   short left_index, right_index, max_power_idx, dcoffset_thres_idx;
   short tx_power_dac;
   static short apc_dcoffset_threshold, apc_dcoffset_high, apc_dcoffset_low;
   short dc_offset_dac, right_dc_offset_dac, left_dac, right_dac;

   left_index = ( real_tx_power - lowest_dbm )/2;
   right_index = ( left_index + 1 );
   max_power_idx = ( max_power - lowest_dbm )/2;

   apc_dcoffset_threshold = band->lowest_power&0xFF;
   apc_dcoffset_high = ((band->lowest_power)>>8)&0x3FF;
   apc_dcoffset_low = ((band->lowest_power)>>18)&0x3FF;

   if((apc_dcoffset_threshold - ((apc_dcoffset_threshold - lowest_dbm)/2*2 + lowest_dbm))>0)
   {  dcoffset_thres_idx = (apc_dcoffset_threshold - lowest_dbm)/2;  }
   else
   {  dcoffset_thres_idx = (apc_dcoffset_threshold - lowest_dbm)/2-1;  }

   if( real_tx_power < lowest_dbm )
   {
      //compensate PA vbias first
        //0 for lowest power idx
      dc_offset_dac = (0 <= dcoffset_thres_idx) ? apc_dcoffset_low : apc_dcoffset_high;
      
      tx_power_dac = band->power[0] + dc_offset_dac;
   }
   else if( real_tx_power > max_power )
   {
      //compensate PA vbias first
      dc_offset_dac = (max_power_idx <= dcoffset_thres_idx) ? apc_dcoffset_low : apc_dcoffset_high;
      
      tx_power_dac = (band->power[max_power_idx] + (real_tx_power - max_power )*32) + dc_offset_dac;
   }
   else
   {
      //compensate PA vbias first
      dc_offset_dac = (left_index <= dcoffset_thres_idx) ? apc_dcoffset_low : apc_dcoffset_high;
      //compensate PA vbias first for right idx
      right_dc_offset_dac = (right_index <= dcoffset_thres_idx) ? apc_dcoffset_low : apc_dcoffset_high;

      left_dac = band->power[left_index] + dc_offset_dac;
      right_dac = band->power[right_index] + right_dc_offset_dac;
      
      tx_power_dac = (((right_dac - left_dac)*(real_tx_power - (lowest_dbm + 2*left_index)) / 2) + left_dac );
   }
   return tx_power_dac;
}

/*=======================================================================================================*/
/*  L1D_RF_PowerRollback_dB                                                                              */
/*=======================================================================================================*/
/*
Account:
   This function returns rollback power (positive dbm value)for L1C query,which is reduced by SAR.
   
Input :
   power_dbm: TX power. i.e. power_dbm = 30
   rf_band:   used band. i.e. GSM900 = 2
   ant_idx:   antenna index.
   slot:      number of multislots
   
Output:
   Power dbm value (positive)
*/

short L1D_RF_PowerRollback_dB( short power_dbm, int rf_band, short mod_type, unsigned char ant_idx, short slot )
{
    short max_power = 0;
    int rollback_db = 0, decrement_db = 0, SAR_db = 0;
    short result;

   if( mod_type == 0 )
   {/*GMSK*/
      max_power = ( rf_band <= FrequencyBand900 ) ? GMSK_LB_MAX_POWER : GMSK_HB_MAX_POWER;
   }
   #if IS_EPSK_TX_SUPPORT
   else
   {/*EPSK*/
      max_power = ( rf_band <= FrequencyBand900 ) ? EPSK_LB_MAX_POWER : EPSK_HB_MAX_POWER;
   }
   #endif
   
   if( max_power==0 )
   {  /*Chuwei: mod_type error or memory corruption*/
      return 0;
   }

   /*Check the request of TX max power decrement from upper layers*/
   decrement_db = L1D_RF_RefineTxMaxPowerDecrement( rf_band, mod_type, slot );

   /*Determine final rollback value*/
   //rollback_db = (decrement_db > rollback_db) ? decrement_db : rollback_db;

   SAR_db = L1D_RF_SAR_Tx_Power_Backoff_DB( rf_band, mod_type, slot, ant_idx );
   rollback_db = ( SAR_db > decrement_db ) ? SAR_db : decrement_db;

   /*decrease rollback value for lower power*/
   rollback_db = ( rollback_db - ( max_power - power_dbm ) );

   result = ( rollback_db <= 0 ) ? 0 : rollback_db;

   return result;
}

#endif