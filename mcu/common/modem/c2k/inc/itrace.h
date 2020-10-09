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
/*************************************************************************
 *
 * File Name:       itrace.h
 * Project:         Protocol Engine tracing header file
 *
 * Original Author: Stuart Harker
 * Creation Date:   August 10, 1998
 *
 * Description:     
 *
 * Restrictions:
 * Dependencies:
 *
 **************************************************************************
 **************************************************************************
 *
 * RCS Log Information
 *
 * $Revision: 1.2 $
 *
 * $Log: itrace.h $
 *
 *
 ************************************************************************/

#ifndef _ITRACE_H_
#define _ITRACE_H_ 1

#include "kal_public_defs.h"
#include "kal_public_api.h"

/* Each Protocol Engine module has a unique ID */
/* ********* DO NOT MODIFY ********** */
enum
{
  ISOLIB_ENGINE_ID,       /* ISOLIB modules */
  CP_ENGINE_ID,           /* Call Processing engine     */
  RLP_ENGINE_ID,          /* RLP protocol engine        */
  PPP_ENGINE_ID,          /* PPP protocol engine        */
  TCPIP_ENGINE_ID,        /* TCP/IP/UDP protocol engine */
  NSPE_ENGINE_ID,         /* NSPE protocol engine       */
  APPINT_ENGINE_ID,       /* AppInt protocol engine     */
  LAYER1_ENGINE_ID,       /* Layer 1 driver engine      */
  SMS_ENGINE_ID,          /* SMS PE */
  OTA_ENGINE_ID,          /* OTA PE */
  MEM_ENGINE_ID,          /* MEM utility */
  SCC_ENGINE_ID,          /* SCC */
  BIC_ENGINE_ID,          /* Beta Interface Controller  */
  MB_ENGINE_ID,
  MCM_ENGINE_ID,
  CSS_ENGINE_ID,            /*Custom System Selection*/
  EXT_APPINT_ENGINE_ID,   /*Extended AppInt protocol engine */
  NUM_ENGINE_IDS          /* this must be last          */
};
typedef kal_uint8 ProtocolEngineID;

/*****************************************************************************
 * Trace definitions
 ****************************************************************************/
#define TOKEN_TRACING 0
#define STRING_TRACING 1


#ifdef	TRACEON

#define TRACE_TABLE(name,id,len) CONST char* name[len]

#ifndef ITRACE_TYPE
#define ITRACE_TYPE TOKEN_TRACING
#endif

/* enable Tracing in the engine code */
#define TraceIt

/* Trace levels; LEVEL0 = little detail; LEVEL5 = lots of detail */
typedef enum
{
  LEVEL0=0,
  LEVEL1,
  LEVEL2,
  LEVEL3,
  LEVEL4,
  LEVEL5
} TraceLevel;


/* this is the maximum number of categories per engine */
#define MAX_NUM_TRACE_CATEGORIES  100


/*****************************************************************************
 * Trace Function Prototypes
 ****************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif


#if (ITRACE_TYPE == TOKEN_TRACING)

#define TRACE_INSTALL(s, i)  static CONST kal_uint8 ROM MyNameID = i;

void engTraceEvent (const ProtocolEngineID engine_id, 
                    const kal_uint8 cat, const kal_uint8 level,
                    const kal_uint8 moduleId, const kal_uint8 token,
                    kal_uint8 size1, kal_uint8 *var1, 
                    kal_uint8 size2, kal_uint8 *var2);

void engTraceIndexEvent (const ProtocolEngineID engineId,
                         const kal_uint8 cat, const kal_uint8 level,
                         const kal_uint8 modId, const kal_uint8 token,
                         kal_uint16 tableID, kal_uint16 index);

void engTraceStringEvent (const ProtocolEngineID engine_id, 
                          const kal_uint8 cat, const kal_uint8 level,
                          const kal_uint8 mod_id, const kal_uint8 token,
                          char *var1);

void engTraceDataEvent (const ProtocolEngineID engineId, 
                        const kal_uint8 cat, const kal_uint8 level,
                        const kal_uint8 moduleId, const kal_uint8 token,
                        int size, kal_uint8 *var1);


#ifdef SYS_DEBUG_FAULT_FILE_INFO

void engAssert (const ProtocolEngineID engineId, const kal_uint8 moduleId,
                const char *filename, unsigned line);

#else

void engAssert (const ProtocolEngineID engineId, const kal_uint8 moduleId,
                unsigned line);

#endif /* SYS_DEBUG_FAULT_FILE_INFO */


#else /* !TOKEN_TRACING */

#define TRACE_INSTALL(s, i) static CONST char ROM MyName[] = s;

void engTraceEvent (const ProtocolEngineID engine_id, 
                    const kal_uint8 cat, const kal_uint8 level,
                    const char *modName, 
                    char *string, kal_uint8 size1, void *var1,
                    kal_uint8 size2, void *var2);

void engTraceIndexEvent (const ProtocolEngineID engineId,
                         const kal_uint8 cat, const kal_uint8 level,
                         const char* modName,
                         char* string, const char* table[],
                         kal_uint16 index);

void engTraceStringEvent (const ProtocolEngineID engine_id, 
                          const kal_uint8 cat, const kal_uint8 level,
                          const char *modName,
                          char *string, char *var1);

void engTraceDataEvent (const ProtocolEngineID engineId, 
                        const kal_uint8 cat, const kal_uint8 level,
                        const char *modName,
                        char *str, int size, kal_uint8 *var1);

void engAssert (const char *modName, unsigned line);

#endif /* ITRACE_TYPE */


#ifdef __cplusplus
}
#endif


#else   /* !TRACEON */

#define TRACE_INSTALL(s, i)

#endif  /* TRACEON */
#endif  /* _ITRACE_H_ */

