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
* Copyright (c) 1998-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef __INC_OTTSDEFS_H__
#define __INC_OTTSDEFS_H__

/*****************************************************************************
  FILE NAME:  ottsdefs.h

  DESCRIPTION:
    Defines macros and types that allow the code to be freely ported between
    ARM and Visual C++ compiler environments. The Visual C++ compiler is used
    for the Off Target Test System (OTTS) simulation (where the protocol stack
    and some other CP code is compiled so it can be tested under simulation),
    while the ARM compiler is used for the "real code" targeted toward the phone
    hardware.

*****************************************************************************/

#if (defined MTK_PLT_ON_PC)

    /*Nucleus definitions*/
    #define NU_MEMORY_POOL   kal_uint8
    #define NU_MAX_NAME      0xFF
    #define NU_TASK          kal_uint8
    #define NU_QUEUE         kal_uint8
    #define NU_EVENT_GROUP   kal_uint8
    #define NU_SUSPEND       0xFFFFFFFFUL
    #define NU_NO_SUSPEND    0
    #define NU_SUCCESS       0
    #define NU_NO_PREEMPT    8
    #define NU_NULL          0

    /* Suppress some of the useless and annoying warnings.
       Also suppress some of the warnings that the ARM compiler should be
       bitching about, and which the stack programmers should pay attention to,
       but are frequent enough that they muddy the compile result listing (the
       purpose of the run through the Visual C++ compiler is *not* to catch
       this kind of stuff, just to allow their code to run and be tested under
       the simulator. These kinds of warnings should be caught and fixed at the
       ARM compile stage.
       ----------------------------------------------------------------------- */
    #pragma warning(disable: 4761) /* integral size mismatch */
    #pragma warning(disable: 4244) /* conversion loses precision */
    #pragma warning(disable: 4013) /* function used without prototype, assuming extern returning int */
    #pragma warning(disable: 4018) /* signed/unsigned mismatch */
    #pragma warning(disable: 4091) /* extern ignored when variable not declared */
    #pragma warning(disable: 4002) /* too many actual parameters for macro */
    #pragma warning(disable: 4003) /* not enough actual parameters for macro */
    #pragma warning(disable: 4554) /* check operator precedence for possible error */
    #pragma warning(disable: 4103) /* used #pragma to change alignment */
    #pragma warning(disable: 4142) /* bening redefinition of type */

#endif /* MTK_PLT_ON_PC */

#define OTTS_static

    /* enable ARM compiler "__packed" and "__inline" directives */
#if defined(GEN_FOR_PC)   /* For Cgen generate NVRAM database */
    #define PACKED
    #define PACKED_PREFIX
    #define PACKED_POSTFIX
#elif defined(__ARMCC_VERSION)
    #define PACKED  __packed
    #define PACKED_PREFIX  PACKED
    #define PACKED_POSTFIX

    #define INLINE __inline
#elif defined(__GNUC__)
    #define PACKED
    #define PACKED_PREFIX
    #define PACKED_POSTFIX

    #define INLINE inline
#elif defined(_MSC_VER)
    /* no "__packed" or "__inline" directives in Visual C++ */
    #define PACKED
    #define PACKED_PREFIX
    #define PACKED_POSTFIX

    /* INLINE has been defined in kal_public_defs.h  */
#endif

/*After Jade (GCC build), Remove PACKED attribute for NVRAM Data structure*/
#if defined (MTK_DEV_CCCI_FS) && defined (__GNUC__)
   #define NV_PACKED_PREFIX
   #define NV_PACKED_POSTFIX
#else
   #define NV_PACKED_PREFIX  PACKED_PREFIX
   #define NV_PACKED_POSTFIX PACKED_POSTFIX
#endif

#if defined(GEN_FOR_PC)   /* For Cgen generate NVRAM database */
    #define GET_RETURN_ADDRESS(a)
    #define GET_STACK_POINTER(a)
    #define PRAGMA_BEGIN_COMPILER_OPTIMIZE_DISABLE
    #define PRAGMA_END_COMPILER_OPTIMIZE_DISABLE
    #define PRAGMA_BEGIN_COMPILER_OPTIMIZE_TIME
    #define PRAGMA_END_COMPILER_OPTIMIZE_TIME
    #define PRAGMA_BEGIN_COMPILER_OPTIMIZE_SPACE
    #define PRAGMA_END_COMPILER_OPTIMIZE_SPACE
#endif

#if defined(GEN_FOR_PC) /* For Cgen generate NVRAM database */
    #define ATTRIB(x)
    #define ATTRIB_SECTION(x)
    #define ATTRIB_ALIGNED(x)
#elif defined(__ARMCC_VERSION)
    #define ATTRIB(x)                     __attribute__(x)
  #if defined(USE_ATTRIB_SECTION)
    #define ATTRIB_SECTION(x)             ATTRIB((section(x)))
  #else
    #define ATTRIB_SECTION(x)
  #endif
    #define ATTRIB_ALIGNED(x)             __align(x)
#elif defined(__GNUC__)
    #define ATTRIB(x)                     /*__attribute__(x)*/
    #define ATTRIB_SECTION(x)             /* ATTRIB((section(x))) */
    #define ATTRIB_ALIGNED(x)             ATTRIB((aligned(x)))
#elif defined(_MSC_VER)
    #define ATTRIB(x)
    #define ATTRIB_SECTION(x)
    #define ATTRIB_ALIGNED(x)             __declspec(align(x))
#endif

/*****************************************************************************
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
*****************************************************************************/

/*****************************************************************************
* End of File
*****************************************************************************/
#endif
/**Log information: \main\TROPHY_Trophy_0.4.21_QILIAN_ALPHA\1 2013-08-26 07:41:52 GMT xding
** href#0000, merge MMC from CBP8**/
/**Log information: \main\Trophy\Trophy_xding_href22331\1 2013-12-10 07:18:02 GMT xding
** HREF#22331, �ϲ�MMC��ع��ܵ�Trophy baseline��**/
/**Log information: \main\Trophy\1 2013-12-10 08:33:37 GMT jzwang
** href#22331:Merge MMC latest implementation from Qilian branch.**/
