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
/*****************************************************************************
 *
 * Filename:
 * ---------
 *  nvram_compress.c
 *
 * Project:
 * -------- 
 *  MAUI
 *
 * Description:
 * ------------
 *  compress nvram default value.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <io.h>

#ifdef __NVRAM_COMPRESS_SUPPORT__
/*****************************************************************************
 * Header file
 *****************************************************************************/
#include "nvram_auto_gen.h"

#include "zlib.h"

#if defined(__MMI_FMI__)
#include "custom_mmi_default_value.h"
#include "nvram_user_defs.h"
#endif

/*****************************************************************************
 * Typedef
 *****************************************************************************/
#define RESULT_HEADER_PATH                      "..\\..\\..\\custom\\common\\pluto_mmi\\nvram_default_value.h"
#define RESULT_SRC_PATH                         "..\\..\\..\\custom\\common\\pluto_mmi\\nvram_default_value.c"
#define CUSTPACK_PATH                           "..\\..\\..\\custom\\common\\pluto_mmi\\nvram_cust_pack_default_value.c"
#define COMPRESS_REPORT_FILE                    "..\\..\\..\\~nvram_compress.txt"

#define CUSTPACK_FILE_INCLUDE                   "\n#include \"kal_release.h\"\n#include \"nvram_defs.h\"\n"

#define FILE_HEADER                             "\/* \nThis file is generated by nvram auto gen, all modification will be lost, \n Author: Wen Wu(MTK80153)\n *\/"
#define FILE_INCLUDE                            "\n#include \"kal_general_types.h\"\n"
#define FILE_COMPILE_OPTION_START               "\n#ifdef __NVRAM_COMPRESS_SUPPORT__\n"
#define FILE_COMPILE_OPTION_END                 "\n#endif\n\n"
#define CUSTPACK_FILE_COMPILE_OPTION_START      "\n#ifdef NVRAM_INTERNAL_USE\n#ifdef __NVRAM_COMPRESS_SUPPORT__\n"
#define CUSTPACK_FILE_COMPILE_OPTION_END        "\n#endif\n#endif\n\n"

#define VALUE_MACRO_START                       "\n#ifndef __NVRAM_DEFAULT_VALUE_H__\n#define __NVRAM_DEFAULT_VALUE_H__\n"
#define VALUE_MACRO_END                         "\n#endif\n\n"

#define VALUE_START                             "\nconst kal_uint8 %s_ZIP[%d] =\n"
#define VALUE_BRACE                             "{"
#define VALUE_END                               "\n};\n"

#define VALUE_EXTERN                            "\nextern const kal_uint8 %s_ZIP[];\n"
#define VALUE_REDEFINE                          "\n#define %s_ZIP %s\n"
#define VAR_TABLE_ENTRY                         "\t{%s,%d,%d},\n"

#define VALUE_MAX_SIZE                          "\n#define NVRAM_MAX_DEFAULE_VALUE_SIZE %d\n"

#define BUFFER_FOR_LEN 4

/* High trace will exist current env */
#define NVRAM_TRC_HIGH(x)           { printf(x); exit(3);}
#define NVRAM_TRC_HIGH1(x,y)        { printf(x,y); exit(3);}
#define NVRAM_TRC_LOW(x)            { printf(x);}
#define NVRAM_TRC_LOW1(xx, x)       { printf(xx,x);}
#define NVRAM_TRC_LOW2(xx, x, y)    { printf(xx, x, y);}

#define RETURN_IF_FAIL(p)           if(!(p)){printf("NVRAM abormal return at line %d\n", __LINE__);return;}
#define RETURN_VAL_IF_FAIL(p, ret)  if(!(p)){ printf("NVRAM return fail at line %d\n", __LINE__); return (ret);}

#define NVRAM_MALLOC(size)          malloc(size)
#define NVRAM_MFREE(p)              if(!p) {free(p); p = NULL;}

#define NVRAM_MEM_FACTOR1 10
#define NVRAM_MEM_FACTOR2 50

#define NVRAM_TEMP_BUFFER_SIZE 512
#define NVRAM_ZLIB_BUFF_SIZE (80*1024)

/*
 *  conv between unsigned char to unsigned int
 */
#define CONV_4BYTES_TO_INT(b, i) (i = ((b[0] << 24) + (b[1] << 16) + (b[2] << 8) + b[3]))
#define CONV_INT_TO_4BYTES(b, i) \
            b[0] = (kal_uint8)(i >> 24); \
            b[1] = (kal_uint8)(i >> 16); \
            b[2] = (kal_uint8)(i >> 8); \
            b[3] = (kal_uint8)i;


/*****************************************************************************
 * define
 *****************************************************************************/
typedef enum{
    RET_OK,
    RET_STOP,
    RET_OOM,
    RET_TOTAL
}Ret;

typedef kal_int32 (*compress_funcptr)(kal_uint8 *dest, kal_uint32 *destLen,const kal_uint8 *source, kal_uint32 sourceLen, kal_int32 level);
typedef kal_int32 (*uncompress_funcptr)(kal_uint8 *dest, kal_uint32 *destLen, const kal_uint8 *source, kal_uint32 sourceLen);
typedef Ret (*visit_funcptr)(void *data, void* usr_data);


typedef struct _NvramCompress
{
    compress_funcptr onCompress;
    uncompress_funcptr onUncompress;
    kal_uint32 count;
    kal_uint32 org_total_size;
    kal_uint32 compress_total_size;
    kal_uint32 max_default_value;
    kal_uint32 last_custpack;
    kal_uint32 custpack_index;
    kal_uint32 custpack_total;
    FILE *result_src_fp;
    FILE *custpack_fp;
    FILE *result_header_fp;
    FILE *report_fp;
}NvramCompress;

/*****************************************************************************
 * Global variable
 *****************************************************************************/

/*****************************************************************************
 * Local variable
 *****************************************************************************/
static NvramCompress g_nvram_compress_cntx;

/*****************************************************************************
 * Local Function
 *****************************************************************************/

/*****************************************************************************
 * Global Function
 *****************************************************************************/

/*****************************************************************************
* FUNCTION
*   nvram_for_each
* DESCRIPTION
*   scan all the lid of the table
* PARAMETERS
*   table       [IN]    the logical table
*   visit       [IN]    vist function pointer
*   usr_data    [IN]    user data
* RETURNS
*   void
*****************************************************************************/
static void nvram_for_each(const ltable_entry_struct *table, visit_funcptr visit, void *usr_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_lid_enum i = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_IF_FAIL(table != NULL && visit != NULL);

    while (table[i].LID != NVRAM_EF_RESERVED_LID &&
        table[i].LID < NVRAM_EF_LAST_LID_CUST)
    {
        if (visit(&table[i], usr_data) == RET_STOP)
        {
            break;
        }
        i++;
    }

}

/*****************************************************************************
* FUNCTION
*  nvram_compress_mem_dump
* DESCRIPTION
*   Dump memory
* PARAMETERS
*  None
* RETURNS
*  None
*****************************************************************************/
static void nvram_compress_mem_dump(kal_uint8 *str1, kal_uint8 *buffer, kal_uint32 size, FILE* fp)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 i;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    fprintf(fp, "\nMemoryDump:");
    fprintf(fp, "%s:{",str1);

    for(i = 0; i < size; i++)
    {
        if ((i % 20 == 0))
        {
            fprintf(fp, "\n\t");
        }

        fprintf(fp, "%2x,", buffer[i]);
    }
    fprintf(fp, "}\n");
    fflush(fp);
}

/*****************************************************************************
* FUNCTION
*   nvram_check_compress
* DESCRIPTION
*   To check whether the entry can be compressed
* PARAMETERS
*   entry       [IN]    the logical table
* RETURNS
*   kal_bool
*****************************************************************************/
static kal_bool nvram_check_compress(const ltable_entry_struct *entry)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_VAL_IF_FAIL(entry != NULL, KAL_FALSE);

    /* No data */
    if (entry == NULL ||
        entry->LID == 0 ||
        entry->size == 0 ||
        entry->total_records == 0)
    {
        return KAL_FALSE;
    }

    /* Some default value can't be compressed */
    if (strstr(entry->str_default_value, "NVRAM_EF_ZERO_DEFAULT") != NULL ||
        strstr(entry->str_default_value, "NVRAM_EF_FF_DEFAULT") != NULL)
    {
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   nvram_compress_custpack_callback
* DESCRIPTION
*   Compress the custpack entry
* PARAMETERS
*   data        [IN]data item
*   usr_data    [IN]user data
* RETURNS
*   Ret
*****************************************************************************/
static Ret nvram_compress_custpack_callback(void *data, void* usr_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    ltable_entry_struct *entry;
    kal_uint32 size, value_size;
    kal_int32 ret;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_VAL_IF_FAIL(data != NULL && usr_data != NULL, RET_STOP);

    entry = (ltable_entry_struct *)data;

    /*
     *  Only care about custpack entry in this callback
     */
    if (NVRAM_IS_CATEGORY_CUSTPACK(entry->category))
    {
        nvram_compress_callback(entry, usr_data);
    }

    return RET_OK;
}



/*****************************************************************************
* FUNCTION
*   nvram_compress_callback
* DESCRIPTION
*   Compress the entry
* PARAMETERS
*   data        [IN]data item
*   usr_data    [IN]user data
* RETURNS
*   Ret
*****************************************************************************/
static Ret nvram_compress_callback(void *data, void* usr_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    ltable_entry_struct *entry;
    kal_uint32 size, value_size, i;
    kal_uint32 *compress_size;
    kal_int32 ret;
    kal_uint8 *dest = NULL, *data_ptr, *str, *default_value;
    NvramCompress *thiz;
    FILE* fp;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_VAL_IF_FAIL(data != NULL && usr_data != NULL, RET_STOP);

    thiz = (NvramCompress *)usr_data;
    entry = (ltable_entry_struct *)data;

    if (!nvram_check_compress(entry))
    {
        return RET_OK;
    }

    /* Port default value to nvram_default_value.c */
    str = nvram_compress_locate_default_value(entry->str_default_value);
    if (str == NULL)
    {
        NVRAM_TRC_HIGH1("No default value! %d", entry->LID);
        return RET_OK;
    }

    /* we only compress the data in internal category */
    if (NVRAM_IS_CATEGORY_INTERNAL(entry->category) ||
        NVRAM_IS_CATEGORY_CALIBRAT(entry->category) ||
        NVRAM_IS_CATEGORY_IMPORTANT(entry->category) ||
        NVRAM_IS_CATEGORY_SECUPACK(entry->category))
    {
        fprintf(thiz->result_header_fp, VALUE_REDEFINE, str, str);
        return RET_OK;
    }


    if (NVRAM_IS_ATTR_NOT_ZIP_DEFAULT(entry->attr))
    {
        if (NVRAM_IS_CATEGORY_CUSTPACK(entry->category))
        {
            NVRAM_TRC_HIGH1("Custpack with not compress attribute %d!\n", entry->LID);
        }

        fprintf(thiz->result_header_fp, VALUE_REDEFINE, str, str);
        return RET_OK;
    }

    if (NVRAM_IS_ATTR_MULTI_DEFAULT(entry->attr))
    {
        value_size = entry->size * entry->total_records;
    }
    else
    {
        value_size = entry->size;
    }

    /*
     *  1. For custpack default value, redirect it to nvram_custpack_default_value.c
     *    because ExtractObj.exe needs to find nvram default value from nvram_cust_pack.obj.
     *  2. always compress custpack so that custpack tool don't need to care which data is compressed or not.
     */
    if (NVRAM_IS_CATEGORY_CUSTPACK(entry->category))
    {
        thiz->last_custpack = entry->LID;
        fp = thiz->custpack_fp;
        default_value = custpack_nvram_ptr.custpack_default[thiz->custpack_index];
        thiz->custpack_index++;
    }
    else
    {
        fp = thiz->result_src_fp;
        default_value = entry->default_value;
    }

    if (default_value == NVRAM_EF_FF_DEFAULT ||
        default_value == NVRAM_EF_ZERO_DEFAULT)
    {
        NVRAM_TRC_LOW(("Wrong default to compress for LID:%d \n", entry->str_LID));
        NVRAM_TRC_HIGH("ZERO or FF default!\n");
    }

    /* At compressing state */
    if (value_size < 20)
    {
        size = NVRAM_MEM_FACTOR2 * value_size;
    }
    else
    {
        size = NVRAM_MEM_FACTOR1 * value_size;
    }

    dest = (kal_uint8*)NVRAM_MALLOC(size);

    if (dest == NULL)
    {
        NVRAM_TRC_HIGH("No Memory!\n");
    }

    /* compress function need to know the output buffer size. */
    /*The first 4 bytes will be compressed buffer size, after this int, there will be compressed data */
    data_ptr = dest + BUFFER_FOR_LEN;
    size -= BUFFER_FOR_LEN;
    ret = thiz->onCompress(data_ptr, &size, default_value, value_size, Z_BEST_COMPRESSION);
    if (ret != Z_OK)
    {
        nvram_compress_mem_dump(entry->str_LID, default_value, value_size, thiz->report_fp);
        NVRAM_TRC_LOW2("Compress [%s]not Z_OK, %d!\n",entry->str_LID, ret);

        NVRAM_MFREE(dest);
        return RET_OK;
    }
    NVRAM_TRC_LOW(("Compress [%s] OK!\n", entry->str_LID));

    /* Uncompress and verify the data */
    nvram_compress_verify(thiz, default_value, value_size, data_ptr, size);

    CONV_INT_TO_4BYTES(dest, size);

    if (thiz->max_default_value < value_size)
    {
        thiz->max_default_value = value_size;
    }

    size += BUFFER_FOR_LEN;
    thiz->org_total_size += value_size;
    thiz->compress_total_size += size;

    nvram_compress_port_default_value_to_file(str, dest, size, fp);

    /* Port default value extern to nvram_default_value.h */
    fprintf(thiz->result_header_fp, VALUE_EXTERN, str);
    /* Write data struct to table */
    fprintf(thiz->report_fp, VAR_TABLE_ENTRY, entry->str_LID, size, value_size);
    fflush(thiz->report_fp);

    NVRAM_MFREE(dest);

    return RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *   nvram_compress_verify
 * DESCRIPTION
 *   Verify the compressed data
 * PARAMETERS
 *   thiz           [IN]
 *   org_buff       [IN]
 *   org_buff_size  [IN]
 *   buffer         [IN]
 *  buff_size       [IN]
 * RETURNS
 *   Ret
 *****************************************************************************/
static void nvram_compress_verify(NvramCompress *thiz,
                                    kal_uint8  *org_buff,
                                    kal_uint32 org_buff_size,
                                    kal_uint8  *buffer,
                                    kal_uint32 buff_size)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_int32 ret;
    kal_uint8* dbuffer;
    kal_uint32 size;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_IF_FAIL(thiz != NULL);
    RETURN_IF_FAIL(org_buff != NULL && org_buff_size != 0);
    RETURN_IF_FAIL(buffer != NULL && buff_size != 0);

    size = 50 * org_buff_size;
    dbuffer = NVRAM_MALLOC(size);
    ret = thiz->onUncompress(dbuffer, &size, buffer, buff_size);
    if (ret != Z_OK)
    {
        NVRAM_TRC_HIGH1("Uncompress verify failed 1, ret=%d!\n", ret);
    }

    if (size != org_buff_size)
    {
    NVRAM_TRC_HIGH("Uncompress verify failed 2!\n");
    }

    if (memcmp(dbuffer, org_buff, org_buff_size) != 0)
    {
        NVRAM_TRC_HIGH("Uncompress verify failed 3!\n");
    }

    NVRAM_MFREE(dbuffer);

    NVRAM_TRC_LOW("Uncompress verify OK!\n");
}


/*****************************************************************************
 * FUNCTION
 *   nvram_compress_locate_default_value
 * DESCRIPTION
 *   Locate the default value string
 * PARAMETERS
 *   value  [IN]
 * RETURNS
 *   kal_uint8 *
 *****************************************************************************/
static kal_uint8 *nvram_compress_locate_default_value(const kal_uint8 *value)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 *str;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_VAL_IF_FAIL(value != NULL, NULL);

    str = strstr(value, ")");
    if (str == NULL)
    {
        str = value;
    }
    else
    {
        str++;
    }

    if (*str == '&')
    {
        str++;
    }

    return str;
}


/*****************************************************************************
 * FUNCTION
 *   nvram_compress_port_default_value_to_file
 * DESCRIPTION
 *   Port default value to another file
 * PARAMETERS
 *   value_name     [IN]
 *   buffer         [IN]
 *   buffer_len     [IN]
 *   fp             [IN]
 * RETURNS
 *   void
 *****************************************************************************/
static void nvram_compress_port_default_value_to_file(
                const kal_uint8 *value_name,
                const kal_uint8 *buffer,
                const kal_uint32 buffer_len,
                FILE *fp)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 i;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_IF_FAIL(value_name != NULL);
    RETURN_IF_FAIL(buffer != NULL && buffer_len != 0);
    RETURN_IF_FAIL(fp != NULL);

    fprintf(fp, VALUE_START, value_name, buffer_len);
    fprintf(fp, VALUE_BRACE);

    for(i = 0; i < buffer_len; i++)
    {
        if ((i % 8 == 0))
        {
            fprintf(fp, "\n\t");
        }

        if ((i + 1) == buffer_len)
        {
            fprintf(fp, "0x%02X", buffer[i]);
        }
        else
        {
            fprintf(fp, "0x%02X,", buffer[i]);
        }
    }

    fprintf(fp, VALUE_END);
    fflush(fp);

}


/*****************************************************************************
 * FUNCTION
 *   nvram_compress_custpack_jump_tbl_callback
 * DESCRIPTION
 *   regenerate jump table callback
 * PARAMETERS
 *   data           [IN]
 *   usr_data       [IN]
 * RETURNS
 *   Ret
 *****************************************************************************/
static Ret nvram_compress_custpack_jump_tbl_callback(void *data, void* usr_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    ltable_entry_struct *entry;
    NvramCompress *thiz;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_VAL_IF_FAIL(data != NULL && usr_data != NULL, RET_STOP);

    thiz = (NvramCompress *)usr_data;
    entry = (ltable_entry_struct *)data;

    if (entry == NULL ||
        entry->LID == 0 ||
        entry->size == 0 ||
        entry->total_records == 0)
    {
        return RET_OK;
    }

    if (strstr(entry->str_default_value, "NVRAM_EF_ZERO_DEFAULT") ||
        strstr(entry->str_default_value, "NVRAM_EF_FF_DEFAULT"))
    {
        return RET_OK;
    }

    if (NVRAM_IS_CATEGORY_CUSTPACK(entry->category))
    {
        fprintf(thiz->custpack_fp, "        %s_ZIP", entry->str_default_value);
        if (thiz->last_custpack != entry->LID)
        {
            fprintf(thiz->custpack_fp, ",");
        }
        fprintf(thiz->custpack_fp, "\n");
    }

    return RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *   nvram_compress_custpack_jump_tbl
 * DESCRIPTION
 *   regenerate jump table callback
 * PARAMETERS
 *   data           [IN]
 *   usr_data       [IN]
 * RETURNS
 *   Ret
 *****************************************************************************/
static void nvram_compress_custpack_jump_tbl(NvramCompress *thiz, FILE* output)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 i, tbl_idx = sizeof(table_pool)/sizeof(nvram_ltable_tbl_struct) - 1;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_IF_FAIL(thiz != NULL && output != NULL);

    fprintf(output, "const custpack_nvram_header custpack_nvram_ptr = \n");
    fprintf(output, "{\n");
    fprintf(output, "    %d,\n", 0);
    fprintf(output, "    {\n");
    for (;tbl_idx >= 0; tbl_idx--)
    {
        ltable_entry_struct **ltable = table[tbl_idx].ltable;
        
        nvram_for_each(ltable, nvram_compress_custpack_jump_tbl_callback, thiz);
    }

    fprintf(output, "    }\n");
    fprintf(output, "};\n");
}


/*****************************************************************************
* FUNCTION
*   nvram_compress_create
* DESCRIPTION
*   create nvram compresser handler
* PARAMETERS
*   void
* RETURNS
*   NvramCompress
*****************************************************************************/
static NvramCompress* nvram_compress_create(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return &g_nvram_compress_cntx;
}


/*****************************************************************************
* FUNCTION
*   nvram_compress_init
* DESCRIPTION
*   init comprresser struct
* PARAMETERS
*   thiz
* RETURNS
*   void
*****************************************************************************/
static void nvram_compress_init(NvramCompress *thiz)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_IF_FAIL(thiz != NULL);

    thiz->count = 0;
    thiz->max_default_value = 0;

    thiz->report_fp = fopen(COMPRESS_REPORT_FILE, "w+");
    if (thiz->report_fp == NULL)
    {
        NVRAM_TRC_HIGH("File Create Failed!\n");
    }

    thiz->result_header_fp = fopen(RESULT_HEADER_PATH, "w+");
    if (thiz->result_header_fp == NULL)
    {
        NVRAM_TRC_HIGH("File Create Failed!\n");
    }

    fprintf(thiz->result_header_fp, FILE_HEADER);
    fprintf(thiz->result_header_fp, VALUE_MACRO_START);


    thiz->result_src_fp = fopen(RESULT_SRC_PATH, "w+");
    if (thiz->result_src_fp == NULL)
    {
        NVRAM_TRC_HIGH("File Create Failed!\n");
    }
    fprintf(thiz->result_src_fp, FILE_HEADER);
    fprintf(thiz->result_src_fp, FILE_INCLUDE);
    fprintf(thiz->result_src_fp, FILE_COMPILE_OPTION_START);

    // custpack default value file
    thiz->custpack_fp = fopen(CUSTPACK_PATH, "w+");
    if (thiz->custpack_fp == NULL)
    {
        NVRAM_TRC_HIGH("Custpack file create failed!\n");
    }

    fprintf(thiz->custpack_fp, FILE_HEADER);
    fprintf(thiz->custpack_fp, CUSTPACK_FILE_INCLUDE);
    fprintf(thiz->custpack_fp, CUSTPACK_FILE_COMPILE_OPTION_START);

    thiz->org_total_size = 0;
    thiz->compress_total_size = 0;
    thiz->onCompress = compress2;
    thiz->onUncompress = uncompress;

}


/*****************************************************************************
* FUNCTION
*   nvram_compress_close
* DESCRIPTION
*   close comprresser handler
* PARAMETERS
*   thiz
* RETURNS
*   void
*****************************************************************************/
static void nvram_compress_close(NvramCompress *thiz)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 buffer[NVRAM_TEMP_BUFFER_SIZE];
    kal_uint32 size;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_IF_FAIL(thiz != NULL);

    /* header file */
    fprintf(thiz->result_header_fp, VALUE_MAX_SIZE, thiz->max_default_value);
    fprintf(thiz->result_header_fp, VALUE_MACRO_END);
    fclose(thiz->result_header_fp);

    nvram_compress_custpack_jump_tbl(thiz, thiz->custpack_fp);

    fprintf(thiz->custpack_fp, CUSTPACK_FILE_COMPILE_OPTION_END);
    fclose(thiz->custpack_fp);

    /* move table item to src file */
    fclose(thiz->report_fp);

    fprintf(thiz->result_src_fp, FILE_COMPILE_OPTION_END);
    fclose(thiz->result_src_fp);

    NVRAM_TRC_LOW2("\n\nTotal: original data=%d, compressed data=%d\n", thiz->org_total_size, thiz->compress_total_size);

    thiz->count = 0;
    thiz->onCompress = NULL;
    thiz->onUncompress = NULL;
    thiz->org_total_size = 0;
    thiz->compress_total_size = 0;
}



/*****************************************************************************
* FUNCTION
*   nvram_compress
* DESCRIPTION
*   compress all nvram default value
* PARAMETERS
*   void
* RETURNS
*   void
*****************************************************************************/
static void nvram_compress(char *project_name, char *broad_ver)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    NvramCompress *thiz = nvram_compress_create();

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    nvram_compress_init(thiz);

    /* Only compress comm and cust table */
    nvram_for_each(logical_data_item_table_core, nvram_compress_callback, thiz);
    nvram_for_each(logical_data_item_table_comm_app, nvram_compress_callback, thiz);
    nvram_for_each(logical_data_item_table_cust, nvram_compress_callback, thiz);

    nvram_compress_close(thiz);
}


#endif /* __NVRAM_COMPRESS_SUPPORT__ */

#ifdef NVRAM_GEN_LID_TABLE

/* core folder */
#define NVRAM_FS_COREITEM_PATH               "Z:\\NVRAM\\NVD_CORE"
#define NVRAM_FS_CALIBRAT_DATAITEM_PATH	     "Z:\\NVRAM\\CALIBRAT"
#define NVRAM_FS_IMPT_DATAITEM_PATH    	     "Z:\\NVRAM\\NVD_IMEI"
#define NVRAM_FS_CUST_DATAITEM_PATH          "Z:\\NVRAM\\NVD_CUST"
#define NVRAM_FS_IMPORTNT_DATAITEM_PATH      "Z:\\NVRAM\\IMPORTNT"

#ifdef __NVRAM_BACKUP_DISK_FAT__
#if defined(__TC01__) && defined(__MTK_TARGET__)
#define NVRAM_FS_BACKUP_ROOT_PATH            "G:\\NVRAM"
#else
#define NVRAM_FS_BACKUP_ROOT_PATH            "Z:\\NVRAM_BAK"
#endif
#endif


#define NVRAM_FS_DATAITEM_PATH               "Z:\\NVRAM\\NVD_DATA"

#if defined (__NVRAM_UT_TEST__)
/*  paths defined in __NVRAM_UT_TEST__ is used for nvram first init test*/

/* NVRAM Test Folder Path */
#define NVRAM_TEST_FS_COREITEM_PATH               "Z:\\NV_TEST\\NVD_CORE"
#define NVRAM_TEST_FS_CALIBRAT_DATAITEM_PATH	     "Z:\\NV_TEST\\CALIBRAT"
#define NVRAM_TEST_FS_IMPT_DATAITEM_PATH    	     "Z:\\NV_TEST\\NVD_IMEI"
#define NVRAM_TEST_FS_CUST_DATAITEM_PATH          "Z:\\NV_TEST\\NVD_CUST"
#define NVRAM_TEST_FS_IMPORTNT_DATAITEM_PATH      "Z:\\NV_TEST\\IMPORTNT"
#define NVRAM_TEST_FS_DATAITEM_PATH               "Z:\\NV_TEST\\NVD_DATA"

extern kal_taskid nvram_test_task1_id;
extern kal_uint8 is_insulation_access;
#endif //__NVRAM_UT_TEST__


#if defined (__NVRAM_UT_TEST__)
#define NVRAM_FS_MAKE_LID_PATH_FILENAME_1( buf, name )   if((is_insulation_access) && (nvram_test_task1_id) && (kal_get_current_task()==nvram_test_task1_id))\
	sprintf(buf, "%s\\%s", NVRAM_TEST_FS_DATAITEM_PATH, name);\
	else \
    sprintf(buf, "%s\\%s", NVRAM_FS_DATAITEM_PATH, name)

#define NVRAM_FS_MAKE_CORE_PATH_FILENAME(buf, name)   if((is_insulation_access) && (nvram_test_task1_id) && (kal_get_current_task()==nvram_test_task1_id))\
	sprintf(buf, "%s\\%s", NVRAM_TEST_FS_COREITEM_PATH, name);\
	else \
	sprintf(buf, "%s\\%s", NVRAM_FS_COREITEM_PATH, name)     
   
#define NVRAM_FS_MAKE_CRITICAL_CALIBRAT_PATH_FILENAME(buf, name)    if((is_insulation_access) && (nvram_test_task1_id) && (kal_get_current_task()==nvram_test_task1_id))\
	  sprintf(buf, "%s\\%s", NVRAM_TEST_FS_CALIBRAT_DATAITEM_PATH, name);\
	  else \
	  sprintf(buf, "%s\\%s", NVRAM_FS_CALIBRAT_DATAITEM_PATH, name)  
   
#define NVRAM_FS_MAKE_CRITICAL_IMEI_PATH_FILENAME(buf, name)    if((is_insulation_access) && (nvram_test_task1_id) && (kal_get_current_task()==nvram_test_task1_id))\
	  sprintf(buf, "%s\\%s", NVRAM_TEST_FS_IMPT_DATAITEM_PATH, name);\
	  else \
	  sprintf(buf, "%s\\%s", NVRAM_FS_IMPT_DATAITEM_PATH, name)
   
#define NVRAM_FS_MAKE_CUST_PATH_FILENAME(buf, name) if((is_insulation_access) && (nvram_test_task1_id) && (kal_get_current_task()==nvram_test_task1_id))\
	  sprintf(buf, "%s\\%s", NVRAM_TEST_FS_CUST_DATAITEM_PATH, name);\
	  else \
	  sprintf(buf, "%s\\%s", NVRAM_FS_CUST_DATAITEM_PATH, name)
   
#define NVRAM_FS_MAKE_IMPORTNT_PATH_FILENAME(buf, name) if((is_insulation_access) && (nvram_test_task1_id) && (kal_get_current_task()==nvram_test_task1_id))\
	  sprintf(buf, "%s\\%s", NVRAM_TEST_FS_IMPORTNT_DATAITEM_PATH, name);\
	  else \
	  sprintf(buf, "%s\\%s", NVRAM_FS_IMPORTNT_DATAITEM_PATH, name)

#else
#define NVRAM_FS_MAKE_LID_PATH_FILENAME_1( buf, name )   \
   sprintf(buf, "%s\\%s", NVRAM_FS_DATAITEM_PATH, name)

#define NVRAM_FS_MAKE_CORE_PATH_FILENAME(buf, name)        \
   sprintf(buf, "%s\\%s", NVRAM_FS_COREITEM_PATH, name);

#define NVRAM_FS_MAKE_CRITICAL_CALIBRAT_PATH_FILENAME(buf, name)    \
   sprintf(buf, "%s\\%s", NVRAM_FS_CALIBRAT_DATAITEM_PATH, name);

#define NVRAM_FS_MAKE_CRITICAL_IMPT_PATH_FILENAME(buf, name)    \
   sprintf(buf, "%s\\%s", NVRAM_FS_IMPT_DATAITEM_PATH, name);

#define NVRAM_FS_MAKE_CUST_PATH_FILENAME(buf, name) \
   sprintf(buf, "%s\\%s", NVRAM_FS_CUST_DATAITEM_PATH, name);

#define NVRAM_FS_MAKE_IMPORTNT_PATH_FILENAME(buf, name) \
   sprintf(buf, "%s\\%s", NVRAM_FS_IMPORTNT_DATAITEM_PATH, name);

#endif

#ifdef __NVRAM_BACKUP_DISK_FAT__
#define NVRAM_FS_MAKE_BACKUP_PATH_FILENAME(buf, name) \
	sprintf(buf, "%s\\%s", NVRAM_FS_BACKUP_ROOT_PATH, name);
#endif


#define NVRAM_MAKE_LID_FILENAME(buf, prefix, M, verno) {\
   ((kal_char*) (buf))[0] = ((kal_char*) (prefix))[0];  \
   ((kal_char*) (buf))[1] = ((kal_char*) (prefix))[1];  \
   ((kal_char*) (buf))[2] = ((kal_char*) (prefix))[2];  \
   ((kal_char*) (buf))[3] = ((kal_char*) (prefix))[3];  \
   ((kal_char*) (buf))[4] = (kal_char) (M);             \
   ((kal_char*) (buf))[5] = ((kal_char*) (verno))[0];   \
   ((kal_char*) (buf))[6] = ((kal_char*) (verno))[1];   \
   ((kal_char*) (buf))[7] = ((kal_char*) (verno))[2];   \
   ((kal_char*) (buf))[8] = '\0';                       \
};

#define NVRAM_MAKE_PACKAGE_FILENAME(buf, M) {       \
   ((kal_char*) (buf))[0] = 'P';                    \
   ((kal_char*) (buf))[1] = 'A';                    \
   ((kal_char*) (buf))[2] = 'C';                    \
   ((kal_char*) (buf))[3] = 'K';                    \
   ((kal_char*) (buf))[4] = (kal_char) (M);         \
   ((kal_char*) (buf))[5] = 'L';                    \
   ((kal_char*) (buf))[6] = 'I';                    \
   ((kal_char*) (buf))[7] = 'D';                    \
   ((kal_char*) (buf))[8] = '\0';                   \
};

#define TABLE_FILE "..\\..\\..\\~nvram_lid_table.xls"


/*****************************************************************************
 * FUNCTION
 *  nvram_make_lid_filename
 * DESCRIPTION
 * PARAMETERS
 * RETURNS
 *****************************************************************************/
static void nvram_util_make_lid_filename(ltable_entry_struct *ldi, NVRAM_FILE_NAME nvramname, kal_bool first_copy)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (ldi == NULL)
    {
        NVRAM_TRC_HIGH("Empty ldi ");
        return;
    }

#ifdef __NVRAM_PSEUDO_MERGE__
    if (NVRAM_IS_ATTR_PACKAGE(ldi->attr))
    {
        NVRAM_MAKE_PACKAGE_FILENAME(nvramname, 'A');
        return;
    }
#endif

    if (NVRAM_IS_ATTR_MULTIPLE(ldi->attr))
    {
        if (first_copy)
        {
            NVRAM_MAKE_LID_FILENAME(nvramname, ldi->fileprefix, 'A', ldi->fileverno);
        }
        else
        {
            NVRAM_MAKE_LID_FILENAME(nvramname, ldi->fileprefix, 'B', ldi->fileverno);
        }
    }
    else
    {
        NVRAM_MAKE_LID_FILENAME(nvramname, ldi->fileprefix, '_', ldi->fileverno);
    }

    return;

}



/*****************************************************************************
 * FUNCTION
 *  nvram_query_folder_index
 * DESCRIPTION
 *  Get the index of folder
 * PARAMETERS
 *  category
 * RETURNS
 *  Success or Fail
 *****************************************************************************/
static nvram_folder_enum nvram_query_folder_index(nvram_category_enum category)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_folder_enum folder_index;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __NVRAM_MULTI_FOLDERS__
    if (NVRAM_IS_CATEGORY_INTERNAL(category))
    {
        folder_index = NVRAM_NVD_CORE;
    }
    else if (NVRAM_IS_CATEGORY_CALIBRAT(category))
    {
        folder_index = NVRAM_NVD_CALI;
    }
    else if (NVRAM_IS_CATEGORY_IMPORTANT(category))
    {
        folder_index = NVRAM_NVD_IMPT;
    }
#ifdef __CCCIFS_SUPPORT__
    else if (category & NVRAM_CATEGORY_IMPORTANT_L4)
    {
        folder_index = NVRAM_NVD_IMPNT;
    }
    else if (NVRAM_IS_CATEGORY_IMPORTANT_L1(category)
    {
        folder_index = NVRAM_NVD_IMPNT;
    }
#endif
    #ifdef __NVRAM_CUSTOM_SENSITIVE__
    else if (NVRAM_IS_CATEGORY_CUSTOM_SENSITIVE(category))
    {
        folder_index = NVRAM_NVD_CUST;
    }
    #endif
    else
#endif /* __NVRAM_MULTI_FOLDERS__ */
    {
        folder_index = NVRAM_NVD_DATA;
    }

    return folder_index;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_query_file_name
 * DESCRIPTION
 *  Get file full name
 * PARAMETERS
 *  folder_idx  :
 *  nvramname   : nvram file
 *  filename    : full name of nvram file
 * RETURNS
 *  Success or Fail
 *****************************************************************************/
static kal_wchar * nvram_query_file_name(nvram_folder_enum folder_idx, kal_char *nvramname, kal_wchar *filename)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (folder_idx)
    {
        case NVRAM_NVD_DATA:
        {
            NVRAM_FS_MAKE_LID_PATH_FILENAME_1(filename, nvramname);
            break;
        }
    #ifdef __NVRAM_MULTI_FOLDERS__
        case NVRAM_NVD_CORE:
        {
            NVRAM_FS_MAKE_CORE_PATH_FILENAME(filename, nvramname);
            break;
        }
        case NVRAM_NVD_CALI:
        {
            NVRAM_FS_MAKE_CRITICAL_CALIBRAT_PATH_FILENAME(filename, nvramname);
            break;
        }
        case NVRAM_NVD_IMPT:
        {
            NVRAM_FS_MAKE_CRITICAL_IMEI_PATH_FILENAME(filename, nvramname);
            break;
        }
        #ifdef __CCCIFS_SUPPORT__
        case NVRAM_NVD_IMPNT:
        {
            NVRAM_FS_MAKE_IMPORTNT_PATH_FILENAME(filename, nvramname);
            break;
        }
        #endif
        #ifdef __NVRAM_CUSTOM_SENSITIVE__
        case NVRAM_NVD_CUST:
        {
            NVRAM_FS_MAKE_CUST_PATH_FILENAME(filename, nvramname);
            break;
        }
        #endif
    #endif /* __NVRAM_MULTI_FOLDERS__ */
    #ifdef __NVRAM_BACKUP_DISK_FAT__
        case NVRAM_NVD_BAK:
        {
            NVRAM_FS_MAKE_BACKUP_PATH_FILENAME(filename, nvramname);
            break;
        }
    #endif
        default:
        {
            NVRAM_TRC_HIGH("Wrong folder idex !");
            break;
        }
    }

    return filename;
}


/*****************************************************************************
* FUNCTION
*  nvram_gen_table_callback
* DESCRIPTION
*  main function.
* PARAMETERS
*  None
* RETURNS
*  None
*****************************************************************************/
static Ret nvram_gen_table_callback(void *data, void* usr_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    ltable_entry_struct *entry;
    FILE* fp;
    kal_uint8 filename[9];
    kal_uint16 folder_idx;
    kal_char src_path[32];

    kal_char nvramname[9];

    #define TABLE_PATTARN "\n%s\t%s\t%s"
    #define TABLE_SEL_FLAG	"\t#"
    #define TABLE_UNSEL_FLAG	"\t"

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_VAL_IF_FAIL(data != NULL && usr_data != NULL, RET_STOP);
    entry = (ltable_entry_struct *)data;
    fp = (FILE *)usr_data;

    folder_idx = nvram_query_folder_index(entry->category);

    nvram_util_make_lid_filename(entry, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_idx, nvramname, src_path);

    fprintf(fp, TABLE_PATTARN, entry->str_LID, entry->description, src_path);

    /* System */
    if (entry->attr & NVRAM_ATTR_OTA_RESET)
    {
        fprintf(fp, TABLE_SEL_FLAG);
    }
    else
    {
        fprintf(fp, TABLE_UNSEL_FLAG);
    }

    /* custpack */
    if (NVRAM_IS_CATEGORY_CUSTPACK(entry->category))
    {
        fprintf(fp, TABLE_SEL_FLAG);
    }
    else
    {
        fprintf(fp, TABLE_UNSEL_FLAG);
    }

    /* Calibartion */
    if (NVRAM_IS_CATEGORY_CALIBRAT(entry->category))
    {
        fprintf(fp, TABLE_SEL_FLAG);
    }
    else
    {
        fprintf(fp, TABLE_UNSEL_FLAG);
    }

    /* Internal */
    if (NVRAM_IS_CATEGORY_INTERNAL(entry->category))
    {
        fprintf(fp, TABLE_SEL_FLAG);
    }
    else
    {
        fprintf(fp, TABLE_UNSEL_FLAG);
    }

    /* Important */
    if (NVRAM_IS_CATEGORY_IMPORTANT(entry->category))
    {
        fprintf(fp, TABLE_SEL_FLAG);
    }
    else
    {
        fprintf(fp, TABLE_UNSEL_FLAG);
    }

    /* Secupack */
    if (NVRAM_IS_CATEGORY_SECUPACK(entry->category))
    {
        fprintf(fp, TABLE_SEL_FLAG);
    }
    else
    {
        fprintf(fp, TABLE_UNSEL_FLAG);
    }

    /* Factory Reset */
    if (NVRAM_IS_CATEGORY_FACTORY_RESET(entry->category))
    {
        fprintf(fp, TABLE_SEL_FLAG);
    }
    else
    {
        fprintf(fp, TABLE_UNSEL_FLAG);
    }

#ifdef __NVRAM_COMPRESS_SUPPORT__
    /* Zip default value */
    if ((entry->attr & NVRAM_ATTR_ZIP_DEFAULT) ||
        NVRAM_IS_CATEGORY_CUSTPACK(entry->category))
    {
        fprintf(fp, TABLE_SEL_FLAG);
    }
    else
#endif /* __NVRAM_COMPRESS_SUPPORT__ */
    {
        fprintf(fp, TABLE_UNSEL_FLAG);
    }


    return RET_OK;
}


/*****************************************************************************
* FUNCTION
*  nvram_compress_gen_lid_table
* DESCRIPTION
*  main function.
* PARAMETERS
*  None
* RETURNS
*  None
*****************************************************************************/
void nvram_gen_lid_table(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    FILE *fp;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    fp = fopen(TABLE_FILE, "w");
    if (fp == NULL)
    {
        NVRAM_TRC_HIGH("File Open Error!");
    }
    fprintf(fp, "LID      \t LID_description \t folder      \t System \t Custpack \t Calibartion \t Internal \t Important \t Secupack \t Restore \t compress");

    nvram_for_each(logical_data_item_table_core, nvram_gen_table_callback, fp);
    nvram_for_each(logical_data_item_table_comm_app, nvram_gen_table_callback, fp);
    nvram_for_each(logical_data_item_table_cust, nvram_gen_table_callback, fp);

    fclose(fp);
}
#endif /* NVRAM_GEN_LID_TABLE */

/*****************************************************************************
* FUNCTION
*  main
* DESCRIPTION
*  main function.
* PARAMETERS
*  None
* RETURNS
*  None
*****************************************************************************/
int main(int argc, char *argv[])
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (argc > 1)
    {
    #ifdef __NVRAM_COMPRESS_SUPPORT__
        NVRAM_TRC_LOW("\nNvram default value compressing....\n");
        nvram_compress(argv[1], argv[2]);

    #else /* __NVRAM_COMPRESS_SUPPORT__ */
        printf("\nDon't support nvram compress!\n");
    #endif /* __NVRAM_COMPRESS_SUPPORT__ */

    #ifdef NVRAM_GEN_LID_TABLE
        nvram_gen_lid_table();
    #endif
    }
    return 0;
}

