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
 * nvram_errcode.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Error code header file for NVRAM
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef NVRAM_ERRCODE_H
#define NVRAM_ERRCODE_H

#define NVRAM_ERROR_LOC_GRP_BITMAP(x)                              (0x0100 | (0x00FF & x))     //1st Grouop:Bitmap Feature

#define NVRAM_ERROR_LOC_GRP_BITMAP_END                             (0x0200)
#define NVRAM_ERROR_LOC_GRP_NULL_POINTER_START                     (0x0200)                    //2nd Group: Pointer is NULL 

#define NVRAM_ERROR_LOC_GRP_BUFFER_IS_NULL_POINTER(x)              (0x0200 | (0x003F & x))     //Buffer Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_LID_PTR_IS_NULL(x)                     (0x0240 | (0x003F & x))     //Lid Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_STARTUP_REQ_PTR_IS_NULL(x)             (0x0280 | (0x003F & x))     //Startup Req Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_READ_REQ_PTR_IS_NULL(x)                (0x02C0 | (0x003F & x))     //Read Req Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_WRITE_REQ_PTR_IS_NULL(x)               (0x0300 | (0x003F & x))     //Write Req Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_RESET_REQ_PTR_IS_NULL(x)               (0x0340 | (0x003F & x))     //Reset Req Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_SPECIAL_WRITE_REQ_PTR_IS_NULL(x)       (0x0380 | (0x003F & x))     //Special Write Req Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_ILM_PTR_IS_NULL(x)                     (0x03C0 | (0x003F & x))     //ILM Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_ILM_PEER_BUFF_PTR_IS_NULL(x)           (0x0400 | (0x003F & x))     //Peer Buffer Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_TST_INJECT_REQ_PTR_IS_NULL(x)          (0x0440 | (0x003F & x))     //Tst inject Req Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_GET_DEFAULT_VALUE_IS_NULL(x)           (0x0480 | (0x003F & x))     //Default Value is NULL
#define NVRAM_ERROR_LOC_GRP_REG_NOTIFY_REQ_PTR_IS_NULL(x)          (0x04C0 | (0x003F & x))     //Reg Notify Req Pointer is NULL 
#define NVRAM_ERROR_LOC_GRP_DEREG_NOTIFY_REQ_PTR_IS_NULL(x)        (0x0500 | (0x003F & x))     //Dereg Notify Req Pointer is NULL 

#define NVRAM_ERROR_LOC_GRP_NULL_POINTER_END                       (0x0600)
#define NVRAM_ERROR_LOC_GRP_WRONG_PARA_START                       (0x0600)                    //3rd Group:Wrong Parameter

#define NVRAM_ERROR_LOC_GRP_INVALID_LID(x)                         (0x0600 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_INVALID_LID_SIZE(x)                    (0x0640 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_INVALID_RECORD(x)                      (0x0680 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_INVALID_FOLDER(x)                      (0x06C0 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_BUFFER_SIZE_NOT_ENOUGH(x)              (0x0700 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_GET_DEFAULT_WITH_WRONG_PARAM(x)        (0x0740 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_ADDRESS_ALIGN(x)                       (0x0780 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_LENGTH_ALIGN(x)                        (0x07C0 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_INVALID_INDEX(x)                       (0x0800 | (0x003F & x))     //

#define NVRAM_ERROR_LOC_GRP_WRONG_PARA_END                         (0x0900)                    //
#define NVRAM_ERROR_LOC_GRP_ACCESS_FILE_START                      (0x0900)                    //4th Group:Access Error

#define NVRAM_ERROR_LOC_GRP_CREAT_FILE(x)                          (0x0900 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_READ_FILE(x)                           (0x0940 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_WRITE_FILE(x)                          (0x0980 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_INVALID_CHECKSUM(x)                    (0x09C0 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_READ_SPECIAL_FILE(x)                   (0x0A00 | (0x003F & x))     //ex:IMEI
#define NVRAM_ERROR_LOC_GRP_ACCESS_SDS_FILE(x)                     (0x0A40 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_OPEN_NV_FOLDER(x)                      (0x0A80 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_WRITE_IMPORTANT_DATA_FAIL(x)           (0x0AC0 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_WRITE_AND_RESET_FAIL(x)                (0x0B00 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_SPACE_NOT_ENOUGH(x)                    (0x0B40 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_ACCESS_TIMEOUT(x)                      (0x0B80 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_ACCESS_BACKUP_FILE(x)                  (0x0BC0 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_ACCESS_UNCOMPRESS_FILE(x)              (0x0C00 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_READ_IMPORTANT_FILE(x)                 (0x0C40 | (0x003F & x))     //
#define NVRAM_ERROR_LOC_GRP_LID_ATTR_CHANGE(x)                     (0x0C80 | (0x003F & x))     //


#define NVRAM_ERROR_LOC_GRP_ACCESS_FILE_END                        (0x0F00)                    //


/*---------------------------------------------------------------------------
 * Error Codes
 *---------------------------------------------------------------------------*/
typedef enum
{
    NVRAM_LOC_DEFAULT,                               // No error
    NVRAM_LOC_OPEN_NV_FOLDER_FAIL,                   // (1) Open Nvram root directory fail
    NVRAM_LOC_CALIBRATION_SIZE_CHANGE,               // (2) (Smart phone only) MP upgrade modem issue; calibration size is not allow to change after smart phone chip MP, it's because data will lost while upgrade modem; before chip MP, just format FS to make new setting to take effect
    NVRAM_LOC_IMPORTANT_SIZE_CHANGE,                 // (3) (Smart phone only) MP upgrade modem issue; important size is not allow to change after smart phone chip MP, it's because data will lost while upgrade modem; before chip MP, just format FS to make new setting to take effect    
    NVRAM_LOC_RESTORE_SUCCESS_READ_FAIL,             // (4) (Smart phone only) Read fail after bin region restore success (bin region data may corrupted)
    NVRAM_LOC_BIN_REGION_RESTORE_FAIL,               // (5) (Smart phone only) AP bin region restore fail; transfer to AP NVRAM
    NVRAM_LOC_OTP_INIT_FAIL,                         // (6) Query OTP size fail or OTP size is not enough
    NVRAM_LOC_SPACE_NOT_ENOUGH,                      // (7)Space not enough for upgrade, config storage for more space
    NVRAM_LOC_OPEN_BACKUP_DISK_FAIL,                  //(8)(Feature phone only) open backup partition folder fail
    NVRAM_LOC_READ_IMPORTANT_DATA_FAIL,              //(9)(Feature phone only)
    NVRAM_LOC_READ_AND_RESET_FAIL,                   //(a)Read fail and then reset to default value also fail
    NVRAM_LOC_READ_SYS_CACHE_FAIL,                   //(b)Read SYS_CACHE_OCTET_LID fail
    NVRAM_LOC_READ_PACKED_FILE_FAIL,                //(c)
    NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL,            //(d)
    NVRAM_LOC_WRITE_AND_RESET_FAIL,                  //(e)Write fail and then reset to default value also fail
    NVRAM_LOC_WRITE_SYS_LID_FAIL,                    // (f)Write NVRAM_EF_SYS_LID fail due to nvram_ptr->state != ready
    NVRAM_LOC_GET_DEFAULT_WITH_WRONG_PARAM,          // (0x10)Nvram internal error; buffer size is not enough
    NVRAM_LOC_GET_DEFAULT_FROM_SDS_FAIL,             //(0x11)(Feature phone only) Get important data default value from SDS fail
    NVRAM_LOC_GEN_TARGET_ASYNC_CUSTPACK,            //(0x12)
    NVRAM_LOC_SECRO_CHKSUM_FAIL,                     //(0x13)Secupack checksum not match: default value checksum from secupack != secupack item checksum store in fs

    //Special feature error code
    NVRAM_LOC_INIT_BUFFER_OVERFLOW = 0x80,
    
    //BITMAP feature error code
    NVRAM_LOC_BITMAP_ACCESS_START = NVRAM_ERROR_LOC_GRP_BITMAP(0), //0x0100
    NVRAM_LOC_BITMAP_OPEN_FAIL = NVRAM_LOC_BITMAP_ACCESS_START,
    NVRAM_LOC_BITMAP_WRITE_FAIL,    
    NVRAM_LOC_BITMAP_ACCESS_OOR,
    NVRAM_LOC_BITMAP_INVALID,
    NVRAM_LOC_BITMAP_DELETE_FAIL,
    NVRAM_LOC_BITMAP_ACCESS_END = NVRAM_ERROR_LOC_GRP_BITMAP(255),

    ///////////////////////////////////////////////////////////////////////
    
    NVRAM_LOC_NULL_POINTER_START = NVRAM_ERROR_LOC_GRP_NULL_POINTER_START,
    NVRAM_LOC_BUFFER_PTR_IS_NULL_START = NVRAM_ERROR_LOC_GRP_BUFFER_IS_NULL_POINTER(0), //0x0200
    NVRAM_LOC_BUFFER_PTR_IS_NULL_1,
    NVRAM_LOC_BUFFER_PTR_IS_NULL_2,
    NVRAM_LOC_BUFFER_PTR_IS_NULL_3,
    NVRAM_LOC_BUFFER_PTR_IS_NULL_4,
    NVRAM_LOC_BUFFER_PTR_IS_NULL_5,
    NVRAM_LOC_BUFFER_PTR_IS_NULL_6,
    NVRAM_LOC_BUFFER_PTR_IS_NULL_7,
    NVRAM_LOC_BUFFER_PTR_IS_NULL_8,
    NVRAM_LOC_BUFFER_PTR_IS_NULL_9,
    NVRAM_LOC_BUFFER_PTR_IS_NULL_END = NVRAM_ERROR_LOC_GRP_BUFFER_IS_NULL_POINTER(64),

    NVRAM_LOC_LID_PTR_IS_NULL_START = NVRAM_ERROR_LOC_GRP_LID_PTR_IS_NULL(0), //0x0240
    NVRAM_LOC_LID_PTR_IS_NULL_1,
    NVRAM_LOC_LID_PTR_IS_NULL_2,
    NVRAM_LOC_LID_PTR_IS_NULL_END = NVRAM_ERROR_LOC_GRP_LID_PTR_IS_NULL(64),
    
    NVRAM_LOC_STARTUP_REQ_PTR_IS_NULL_START = NVRAM_ERROR_LOC_GRP_STARTUP_REQ_PTR_IS_NULL(0), //0x0280
    NVRAM_LOC_STARTUP_REQ_PTR_IS_NULL_1,
    NVRAM_LOC_STARTUP_REQ_PTR_IS_NULL_END = NVRAM_ERROR_LOC_GRP_STARTUP_REQ_PTR_IS_NULL(64),
    
    NVRAM_LOC_READ_REQ_PTR_IS_NULL_START = NVRAM_ERROR_LOC_GRP_READ_REQ_PTR_IS_NULL(0), //0x02C0
    NVRAM_LOC_READ_REQ_PTR_IS_NULL_1,
    NVRAM_LOC_READ_REQ_PTR_IS_NULL_END = NVRAM_ERROR_LOC_GRP_READ_REQ_PTR_IS_NULL(64),
    
    NVRAM_LOC_WRITE_REQ_PTR_IS_NULL_START = NVRAM_ERROR_LOC_GRP_WRITE_REQ_PTR_IS_NULL(0), //0x0300
    NVRAM_LOC_WRITE_REQ_PTR_IS_NULL_1,
    NVRAM_LOC_WRITE_REQ_PTR_IS_NULL_END = NVRAM_ERROR_LOC_GRP_WRITE_REQ_PTR_IS_NULL(64),

    NVRAM_LOC_RESET_REQ_PTR_IS_NULL_START = NVRAM_ERROR_LOC_GRP_RESET_REQ_PTR_IS_NULL(0), //0x0340
    NVRAM_LOC_RESET_REQ_PTR_IS_NULL_1,
    NVRAM_LOC_RESET_REQ_PTR_IS_NULL_END = NVRAM_ERROR_LOC_GRP_RESET_REQ_PTR_IS_NULL(64),
    
    NVRAM_LOC_SPECIAL_WRITE_REQ_PTR_IS_NULL_START = NVRAM_ERROR_LOC_GRP_SPECIAL_WRITE_REQ_PTR_IS_NULL(0), //0x0380
    NVRAM_LOC_WRITE_IMEI_REQ_PTR_IS_NULL_1,
    NVRAM_LOC_SPECIAL_WRITE_REQ_PTR_IS_NULL_END = NVRAM_ERROR_LOC_GRP_SPECIAL_WRITE_REQ_PTR_IS_NULL(64),

    NVRAM_LOC_ILM_PTR_IS_NULL_START = NVRAM_ERROR_LOC_GRP_ILM_PTR_IS_NULL(0), //0x03C0
    NVRAM_LOC_ILM_PTR_IS_NULL_1,
    NVRAM_LOC_ILM_PTR_IS_NULL_2,
    NVRAM_LOC_ILM_PTR_IS_NULL_END = NVRAM_ERROR_LOC_GRP_ILM_PTR_IS_NULL(64),

    NVRAM_LOC_ILM_PEER_BUFF_PTR_IS_NULL_START = NVRAM_ERROR_LOC_GRP_ILM_PEER_BUFF_PTR_IS_NULL(0), //0x0400
    NVRAM_LOC_ILM_PEER_BUFF_PTR_IS_NULL_1,
    NVRAM_LOC_ILM_PEER_BUFF_PTR_IS_NULL_END = NVRAM_ERROR_LOC_GRP_ILM_PEER_BUFF_PTR_IS_NULL(64),
    
    NVRAM_LOC_TST_INJECT_REQ_PTR_IS_NULL_START = NVRAM_ERROR_LOC_GRP_TST_INJECT_REQ_PTR_IS_NULL(0), //0x0440
    NVRAM_LOC_TST_INJECT_REQ_PTR_IS_NULL_1,
    NVRAM_LOC_TST_INJECT_REQ_PTR_IS_NULL_END = NVRAM_ERROR_LOC_GRP_TST_INJECT_REQ_PTR_IS_NULL(64),
    
    NVRAM_LOC_GET_DEFAULT_VALUE_IS_NULL_START = NVRAM_ERROR_LOC_GRP_GET_DEFAULT_VALUE_IS_NULL(0), //0x0480
    NVRAM_LOC_GET_DEFAULT_VALUE_IS_NULL_1,
    NVRAM_LOC_GET_DEFAULT_VALUE_IS_NULL_END = NVRAM_ERROR_LOC_GRP_GET_DEFAULT_VALUE_IS_NULL(64),

    NVRAM_LOC_REG_NOTIFY_REQ_IS_NULL_START = NVRAM_ERROR_LOC_GRP_REG_NOTIFY_REQ_PTR_IS_NULL(0), //0x04C0
    NVRAM_LOC_REG_NOTIFY_REQ_IS_NULL_1,
    NVRAM_LOC_REG_NOTIFY_REQ_IS_NULL_END = NVRAM_ERROR_LOC_GRP_REG_NOTIFY_REQ_PTR_IS_NULL(64),

    NVRAM_LOC_DEREG_NOTIFY_REQ_IS_NULL_START = NVRAM_ERROR_LOC_GRP_DEREG_NOTIFY_REQ_PTR_IS_NULL(0), //0x0500
    NVRAM_LOC_DEREG_NOTIFY_REQ_IS_NULL_1,
    NVRAM_LOC_DEREG_NOTIFY_REQ_IS_NULL_END = NVRAM_ERROR_LOC_GRP_DEREG_NOTIFY_REQ_PTR_IS_NULL(64),

    NVRAM_LOC_NULL_POINTER_END = NVRAM_ERROR_LOC_GRP_NULL_POINTER_END,
    
    /////////////////////////////////////////////////////////////////////////////
    
    NVRAM_LOC_WRONG_PARAM_START = NVRAM_ERROR_LOC_GRP_WRONG_PARA_START,
    NVRAM_LOC_INVALID_LID_START = NVRAM_ERROR_LOC_GRP_INVALID_LID(0), //0x0600
    NVRAM_LOC_INVALID_LID_1,
    NVRAM_LOC_INVALID_LID_2,
    NVRAM_LOC_INVALID_LID_3,
    NVRAM_LOC_INVALID_LID_4,
    NVRAM_LOC_INVALID_LID_END = NVRAM_ERROR_LOC_GRP_INVALID_LID(64),
    
    NVRAM_LOC_INVALID_LID_SIZE_START = NVRAM_ERROR_LOC_GRP_INVALID_LID_SIZE(0), //0x0640
    NVRAM_LOC_INVALID_LID_SIZE_1,
    NVRAM_LOC_INVALID_LID_SIZE_2,
    NVRAM_LOC_INVALID_LID_SIZE_3,
    NVRAM_LOC_INVALID_LID_SIZE_4,
    NVRAM_LOC_INVALID_LID_SIZE_END = NVRAM_ERROR_LOC_GRP_INVALID_LID_SIZE(64),
    
    NVRAM_LOC_INVALID_RECORD_START = NVRAM_ERROR_LOC_GRP_INVALID_RECORD(0), //0x0680
    NVRAM_LOC_INVALID_RECORD_1,
    NVRAM_LOC_INVALID_RECORD_END = NVRAM_ERROR_LOC_GRP_INVALID_RECORD(64),

    NVRAM_LOC_INVALID_FOLDER_START = NVRAM_ERROR_LOC_GRP_INVALID_FOLDER(0), //0x06C0
    NVRAM_LOC_INVALID_FOLDER_1,
    NVRAM_LOC_INVALID_FOLDER_2,
    NVRAM_LOC_INVALID_FOLDER_END = NVRAM_ERROR_LOC_GRP_INVALID_FOLDER(64),
    
    NVRAM_LOC_BUFFER_SIZE_NOT_ENOUGH_START = NVRAM_ERROR_LOC_GRP_BUFFER_SIZE_NOT_ENOUGH(0), //0x0700
    NVRAM_LOC_BUFFER_SIZE_NOT_ENOUGH_1,
    NVRAM_LOC_BUFFER_SIZE_NOT_ENOUGH_2,
    NVRAM_LOC_BUFFER_SIZE_NOT_ENOUGH_3,
    NVRAM_LOC_BUFFER_SIZE_NOT_ENOUGH_4,
    NVRAM_LOC_BUFFER_SIZE_NOT_ENOUGH_5,
    NVRAM_LOC_BUFFER_SIZE_NOT_ENOUGH_END = NVRAM_ERROR_LOC_GRP_BUFFER_SIZE_NOT_ENOUGH(64),
    
    NVRAM_LOC_GET_DEFAULT_WITH_WRONG_PARAM_START = NVRAM_ERROR_LOC_GRP_GET_DEFAULT_WITH_WRONG_PARAM(0), //0x0740
    NVRAM_LOC_GET_DEFAULT_WITH_WRONG_PARAM_1,
    NVRAM_LOC_GET_DEFAULT_WITH_WRONG_PARAM_2,
    NVRAM_LOC_GET_DEFAULT_WITH_WRONG_PARAM_END = NVRAM_ERROR_LOC_GRP_GET_DEFAULT_WITH_WRONG_PARAM(64),

    NVRAM_LOC_ADDRESS_ALIGN_FAIL_START = NVRAM_ERROR_LOC_GRP_ADDRESS_ALIGN(0), //0x0780
    NVRAM_LOC_ADDRESS_ALIGN_FAIL_1,
    NVRAM_LOC_ADDRESS_ALIGN_FAIL_END = NVRAM_ERROR_LOC_GRP_ADDRESS_ALIGN(64),
    
    NVRAM_LOC_LENGTH_ALIGN_FAIL_START = NVRAM_ERROR_LOC_GRP_LENGTH_ALIGN(0), //0x07C0
    NVRAM_LOC_LENGTH_ALIGN_FAIL_1,
    NVRAM_LOC_LENGTH_ALIGN_FAIL_END = NVRAM_ERROR_LOC_GRP_LENGTH_ALIGN(64),
    
    NVRAM_LOC_INVALID_INDEX_START = NVRAM_ERROR_LOC_GRP_INVALID_INDEX(0), //0x0800
    NVRAM_LOC_INVALID_INDEX_1,
    NVRAM_LOC_INVALID_INDEX_2,
    NVRAM_LOC_INVALID_INDEX_3,
    NVRAM_LOC_INVALID_INDEX_4,
    NVRAM_LOC_INVALID_INDEX_5,
    NVRAM_LOC_INVALID_INDEX_END = NVRAM_ERROR_LOC_GRP_INVALID_INDEX(64),

    NVRAM_LOC_WRONG_PARAM_END = NVRAM_ERROR_LOC_GRP_WRONG_PARA_END,
    
    /////////////////////////////////////////////////////////////////////////////
    
    NVRAM_LOC_ACCESS_FILE_FAIL_START = NVRAM_ERROR_LOC_GRP_ACCESS_FILE_START, 

    NVRAM_LOC_CREAT_FILE_FAIL_START = NVRAM_ERROR_LOC_GRP_CREAT_FILE(0), //0x0900
    NVRAM_LOC_CREAT_FILE_FAIL_1,
    NVRAM_LOC_CREAT_FILE_FAIL_2,
    NVRAM_LOC_CREAT_FILE_FAIL_END = NVRAM_ERROR_LOC_GRP_CREAT_FILE(64),

    NVRAM_LOC_READ_FILE_FAIL_START = NVRAM_ERROR_LOC_GRP_READ_FILE(0), //0x0940
    NVRAM_LOC_READ_FILE_FAIL_1,
    NVRAM_LOC_READ_FILE_FAIL_END = NVRAM_ERROR_LOC_GRP_READ_FILE(64),
    
    NVRAM_LOC_WRITE_FILE_FAIL_START = NVRAM_ERROR_LOC_GRP_WRITE_FILE(0), //0x0980
    NVRAM_LOC_WRITE_FILE_FAIL_1,
    NVRAM_LOC_WRITE_FILE_FAIL_2,
    NVRAM_LOC_WRITE_FILE_FAIL_3,
    NVRAM_LOC_WRITE_FILE_FAIL_END = NVRAM_ERROR_LOC_GRP_WRITE_FILE(64),
    
    NVRAM_LOC_INVALID_CHECKSUM_START = NVRAM_ERROR_LOC_GRP_INVALID_CHECKSUM(0), //0x09C0
    NVRAM_LOC_INVALID_CHECKSUM_1,
    NVRAM_LOC_INVALID_CHECKSUM_2,
    NVRAM_LOC_INVALID_CHECKSUM_END = NVRAM_ERROR_LOC_GRP_INVALID_CHECKSUM(64),
    
    NVRAM_LOC_READ_SPECIAL_FILE_START = NVRAM_ERROR_LOC_GRP_READ_SPECIAL_FILE(0), //0x0A00
    NVRAM_LOC_READ_SPECIAL_FILE_1,
    NVRAM_LOC_READ_SPECIAL_FILE_END = NVRAM_ERROR_LOC_GRP_READ_SPECIAL_FILE(64),
    
    NVRAM_LOC_ACCESS_SDS_FILE_START = NVRAM_ERROR_LOC_GRP_ACCESS_SDS_FILE(0), //0x0A00
    NVRAM_LOC_ACCESS_SDS_FILE_1,
    NVRAM_LOC_ACCESS_SDS_FILE_2,
    NVRAM_LOC_ACCESS_SDS_FILE_END = NVRAM_ERROR_LOC_GRP_ACCESS_SDS_FILE(64),
    
    
    NVRAM_LOC_OPEN_NV_FOLDER_FAIL_START = NVRAM_ERROR_LOC_GRP_OPEN_NV_FOLDER(0), //0x0A80
    NVRAM_LOC_OPEN_NV_FOLDER_FAIL_1,
    NVRAM_LOC_OPEN_NV_FOLDER_FAIL_2,
    NVRAM_LOC_OPEN_NV_FOLDER_FAIL_3,
    NVRAM_LOC_OPEN_NV_FOLDER_FAIL_4,
    NVRAM_LOC_OPEN_NV_FOLDER_FAIL_5,
    NVRAM_LOC_OPEN_NV_FOLDER_FAIL_END = NVRAM_ERROR_LOC_GRP_OPEN_NV_FOLDER(64),

    NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL_START = NVRAM_ERROR_LOC_GRP_WRITE_IMPORTANT_DATA_FAIL(0), //0x0AC0
    NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL_1,
    NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL_2,
    NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL_3,
    NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL_4,
    NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL_5,
    NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL_END = NVRAM_ERROR_LOC_GRP_WRITE_IMPORTANT_DATA_FAIL(64),
    
    NVRAM_LOC_WRITE_AND_RESET_FAIL_START = NVRAM_ERROR_LOC_GRP_WRITE_AND_RESET_FAIL(0), //0x0B00
    NVRAM_LOC_WRITE_AND_RESET_FAIL_1,
    NVRAM_LOC_WRITE_AND_RESET_FAIL_END = NVRAM_ERROR_LOC_GRP_WRITE_AND_RESET_FAIL(64),
    
    NVRAM_LOC_SPACE_NOT_ENOUGH_START = NVRAM_ERROR_LOC_GRP_SPACE_NOT_ENOUGH(0), //0x0B40
    NVRAM_LOC_SPACE_NOT_ENOUGH_1,
    NVRAM_LOC_SPACE_NOT_ENOUGH_2,
    NVRAM_LOC_SPACE_NOT_ENOUGH_END = NVRAM_ERROR_LOC_GRP_SPACE_NOT_ENOUGH(64),

    NVRAM_LOC_ACCESS_TIMEOUT_START = NVRAM_ERROR_LOC_GRP_ACCESS_TIMEOUT(0), //0x0B80
    NVRAM_LOC_ACCESS_TIMEOUT_1,
    NVRAM_LOC_ACCESS_TIMEOUT_END = NVRAM_ERROR_LOC_GRP_ACCESS_TIMEOUT(64),

    NVRAM_LOC_ACCESS_BACKUP_FILE_FAIL_START = NVRAM_ERROR_LOC_GRP_ACCESS_BACKUP_FILE(0), //0x0BC0
    NVRAM_LOC_ACCESS_BACKUP_FILE_FAIL_1,
    NVRAM_LOC_ACCESS_BACKUP_FILE_FAIL_2,
    NVRAM_LOC_ACCESS_BACKUP_FILE_FAIL_3,
    NVRAM_LOC_ACCESS_BACKUP_FILE_FAIL_END = NVRAM_ERROR_LOC_GRP_ACCESS_BACKUP_FILE(64),

    NVRAM_LOC_ACCESS_UNCOMPRESS_FILE_FAIL_START = NVRAM_ERROR_LOC_GRP_ACCESS_UNCOMPRESS_FILE(0), //0x0C00
    NVRAM_LOC_ACCESS_UNCOMPRESS_FILE_FAIL_1,
    NVRAM_LOC_ACCESS_UNCOMPRESS_FILE_FAIL_END = NVRAM_ERROR_LOC_GRP_ACCESS_UNCOMPRESS_FILE(64),

    NVRAM_LOC_READ_IMPORTANT_DATA_FAIL_START = NVRAM_ERROR_LOC_GRP_READ_IMPORTANT_FILE(0), //0x0C40
    NVRAM_LOC_READ_IMPORTANT_DATA_FAIL_1,
    NVRAM_LOC_READ_IMPORTANT_DATA_FAIL_2,
    NVRAM_LOC_READ_IMPORTANT_DATA_FAIL_END = NVRAM_ERROR_LOC_GRP_READ_IMPORTANT_FILE(64),

    NVRAM_ERROR_LOC_LID_ATTR_CHANGE_START = NVRAM_ERROR_LOC_GRP_LID_ATTR_CHANGE(0),
    NVRAM_ERROR_LOC_LID_ATTR_CHANGE_1,
    NVRAM_ERROR_LOC_LID_ATTR_CHANGE_END = NVRAM_ERROR_LOC_GRP_LID_ATTR_CHANGE(64),
    NVRAM_LOC_ACCESS_FILE_FAIL_END = NVRAM_ERROR_LOC_GRP_ACCESS_FILE_END,
    
} nvram_error_location_enum;

#define DISPLAY_ERROR(NVRAM_ERROR) ((nvram_drv_fat_get_last_err())?(nvram_drv_fat_get_last_err()):NVRAM_ERROR)


#define LID_OWNER_ERR(LID)         ((1<<16) | LID)
#define NVRAM_INTERNAL_ERR(LID)    ((2<<16) | LID)


#endif /* NVRAM_ERRCODE_H */
