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
 * u1ld_custom_mipi_etm.c
 *
 * Project:
 * --------
 * MT6293
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *

===============================================================================*/

#include "kal_general_types.h"
#include "ul1d_custom_mipi.h"
#include "ul1d_custom_mipi_etm.h"
#include "ul1d_custom_rf.h"
#include "ul1d_mipi_public.h"

#if defined(L1_SIM)
#include "SymWrap.h"
#endif
/*===============================================================================*/

#if (IS_3G_MIPI_SUPPORT)

#if __IS_UL1D_ETM_SUPPORT__

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBandNone_SetDefault[ UL1_MIPI_ETM_TX_EVENT_NUM ] = 
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 2  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBandNone_SetDefault[ UL1_MIPI_ETM_TX_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,            {  { addr_subband_0,                                       data_subband_0                                    },   { addr_subband_1,                                      data_subband_1                                    },   { addr_subband_2,                                       data_subband_2                                    },   { addr_subband_3,                                      data_subband_3                                    },   { addr_subband_4,                                       data_subband_4                                    } }  },
   { /* 0  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 1  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 2  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 3  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 4  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 5  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 6  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 7  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 8  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 9  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 10 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 11 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBandNone_SetDefault[ UL1_MIPI_ETM_TPC_EVENT_NUM ] = 
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBandNone_SetDefault[ UL1_MIPI_ETM_TPC_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,            {  { addr_subband_0,                                       data_subband_0                                    },   { addr_subband_1,                                      data_subband_1                                    },   { addr_subband_2,                                       data_subband_2                                    },   { addr_subband_3,                                      data_subband_3                                    },   { addr_subband_4,                                       data_subband_4                                    } }  },
   { /* 0  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 1  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 2  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 3  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 4  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
};



#if IS_UMTS_ETM_FRONT_END_ENABLE_SetDefault

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBand1_SetDefault[ UL1_MIPI_ETM_TX_EVENT_NUM ] = 
{
	 /* No.         data idx,                                                                                                                                                              evt_type,                       evt_offset                                   */
    /*            { start,                                                                             stop                                                                           },                                       ( us )                                         */
   { /* 0  */ { UMTS_ETM_TX_ON_DATA_START_ADDRESS_0_SetDefault, UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, UL1_MIPI_TRX_ON,     UMTS_ETM_TX_ON0_SetDefault  },
   { /* 1  */ { UMTS_ETM_TX_ON_DATA_START_ADDRESS_1_SetDefault, UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, UL1_MIPI_TRX_ON,     UMTS_ETM_TX_ON1_SetDefault  },
   { /* 2  */ { UMTS_ETM_TX_OFF_DATA_START_ADDRESS_SetDefault,  UMTS_ETM_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, UL1_MIPI_TRX_OFF,    UMTS_ETM_TX_OFF0_SetDefault },
   { /* 3  */ { 0,                                              0                                             }, UL1_MIPI_EVENT_NULL, 0                           },
   { /* 4  */ { 0,                                              0                                             }, UL1_MIPI_EVENT_NULL, 0                           },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBand2_SetDefault[ UL1_MIPI_ETM_TX_EVENT_NUM ] = 
{
	 /* No.         data idx,                                                                                                                                                              evt_type,                       evt_offset                                   */
    /*            { start,                                                                             stop                                                                           },                                       ( us )                                         */
   { /* 0  */ { UMTS_ETM_TX_ON_DATA_START_ADDRESS_0_SetDefault, UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, UL1_MIPI_TRX_ON,     UMTS_ETM_TX_ON0_SetDefault  },
   { /* 1  */ { UMTS_ETM_TX_ON_DATA_START_ADDRESS_1_SetDefault, UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, UL1_MIPI_TRX_ON,     UMTS_ETM_TX_ON1_SetDefault  },
   { /* 2  */ { UMTS_ETM_TX_OFF_DATA_START_ADDRESS_SetDefault,  UMTS_ETM_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, UL1_MIPI_TRX_OFF,    UMTS_ETM_TX_OFF0_SetDefault },
   { /* 3  */ { 0,                                              0                                             }, UL1_MIPI_EVENT_NULL, 0                           },
   { /* 4  */ { 0,                                              0                                             }, UL1_MIPI_EVENT_NULL, 0                           },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBand4_SetDefault[ UL1_MIPI_ETM_TX_EVENT_NUM ] = 
{
	 /* No.         data idx,                                                                                                                                                              evt_type,                       evt_offset                                   */
    /*            { start,                                                                             stop                                                                           },                                       ( us )                                         */
   { /* 0  */ { UMTS_ETM_TX_ON_DATA_START_ADDRESS_0_SetDefault, UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, UL1_MIPI_TRX_ON,     UMTS_ETM_TX_ON0_SetDefault  },
   { /* 1  */ { UMTS_ETM_TX_ON_DATA_START_ADDRESS_1_SetDefault, UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, UL1_MIPI_TRX_ON,     UMTS_ETM_TX_ON1_SetDefault  },
   { /* 2  */ { UMTS_ETM_TX_OFF_DATA_START_ADDRESS_SetDefault,  UMTS_ETM_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, UL1_MIPI_TRX_OFF,    UMTS_ETM_TX_OFF0_SetDefault },
   { /* 3  */ { 0,                                              0                                             }, UL1_MIPI_EVENT_NULL, 0                           },
   { /* 4  */ { 0,                                              0                                             }, UL1_MIPI_EVENT_NULL, 0                           },
};


const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBand5_SetDefault[ UL1_MIPI_ETM_TX_EVENT_NUM ] = 
{
	 /* No.         data idx,                                                                                                                                                              evt_type,                       evt_offset                                   */
    /*            { start,                                                                             stop                                                                           },                                       ( us )                                         */
   { /* 0  */ { UMTS_ETM_TX_ON_DATA_START_ADDRESS_0_SetDefault, UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, UL1_MIPI_TRX_ON,     UMTS_ETM_TX_ON0_SetDefault  },
   { /* 1  */ { UMTS_ETM_TX_ON_DATA_START_ADDRESS_1_SetDefault, UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, UL1_MIPI_TRX_ON,     UMTS_ETM_TX_ON1_SetDefault  },
   { /* 2  */ { UMTS_ETM_TX_OFF_DATA_START_ADDRESS_SetDefault,  UMTS_ETM_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, UL1_MIPI_TRX_OFF,    UMTS_ETM_TX_OFF0_SetDefault },
   { /* 3  */ { 0,                                              0                                             }, UL1_MIPI_EVENT_NULL, 0                           },
   { /* 4  */ { 0,                                              0                                             }, UL1_MIPI_EVENT_NULL, 0                           },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBand8_SetDefault[ UL1_MIPI_ETM_TX_EVENT_NUM ] = 
{
	 /* No.         data idx,                                                                                                                                                              evt_type,                       evt_offset                                   */
    /*            { start,                                                                             stop                                                                           },                                       ( us )                                         */
   { /* 0  */ { UMTS_ETM_TX_ON_DATA_START_ADDRESS_0_SetDefault, UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_0_SetDefault }, UL1_MIPI_TRX_ON,     UMTS_ETM_TX_ON0_SetDefault  },
   { /* 1  */ { UMTS_ETM_TX_ON_DATA_START_ADDRESS_1_SetDefault, UMTS_ETM_TX_ON_DATA_STOP_ADDRESS_1_SetDefault }, UL1_MIPI_TRX_ON,     UMTS_ETM_TX_ON1_SetDefault  },
   { /* 2  */ { UMTS_ETM_TX_OFF_DATA_START_ADDRESS_SetDefault,  UMTS_ETM_TX_OFF_DATA_STOP_ADDRESS_SetDefault  }, UL1_MIPI_TRX_OFF,    UMTS_ETM_TX_OFF0_SetDefault },
   { /* 3  */ { 0,                                              0                                             }, UL1_MIPI_EVENT_NULL, 0                           },
   { /* 4  */ { 0,                                              0                                             }, UL1_MIPI_EVENT_NULL, 0                           },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBand3_SetDefault[]  =
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 2  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBand6_SetDefault[]  =
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 2  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBand9_SetDefault[]  =
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 2  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBand11_SetDefault[] =
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 2  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TX_EVENT_UMTSBand19_SetDefault[] =
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 2  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};   



const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBand1_SetDefault[ UL1_MIPI_ETM_TX_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,            {  { addr_subband_0,                                       data_subband_0                                    },   { addr_subband_1,                                      data_subband_1                                    },   { addr_subband_2,                                       data_subband_2                                    },   { addr_subband_3,                                      data_subband_3                                    },   { addr_subband_4,                                       data_subband_4                                    } }  },
   { /* 0  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault } } },
   { /* 1  */ USE_ETM_INDEX_0,    UL1_REG_W_EXT, { { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault } } },
   { /* 2  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault } } },
   { /* 3  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault } } },
   { /* 4  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault } } },
   { /* 5  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault } } },
   { /* 6  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault } } },
   { /* 7  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault } } },
   { /* 8  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault } } },
   { /* 9  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 10 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 11 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBand2_SetDefault[ UL1_MIPI_ETM_TX_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,            {  { addr_subband_0,                                       data_subband_0                                    },   { addr_subband_1,                                      data_subband_1                                    },   { addr_subband_2,                                       data_subband_2                                    },   { addr_subband_3,                                      data_subband_3                                    },   { addr_subband_4,                                       data_subband_4                                    } }  },
   { /* 0  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault } } },
   { /* 1  */ USE_ETM_INDEX_0,    UL1_REG_W_EXT, { { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault } } },
   { /* 2  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault } } },
   { /* 3  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault } } },
   { /* 4  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault } } },
   { /* 5  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault } } },
   { /* 6  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault } } },
   { /* 7  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault } } },
   { /* 8  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault } } },
   { /* 9  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 10 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 11 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBand4_SetDefault[ UL1_MIPI_ETM_TX_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,            {  { addr_subband_0,                                       data_subband_0                                    },   { addr_subband_1,                                      data_subband_1                                    },   { addr_subband_2,                                       data_subband_2                                    },   { addr_subband_3,                                      data_subband_3                                    },   { addr_subband_4,                                       data_subband_4                                    } }  },
   { /* 0  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault } } },
   { /* 1  */ USE_ETM_INDEX_0,    UL1_REG_W_EXT, { { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault } } },
   { /* 2  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault } } },
   { /* 3  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault } } },
   { /* 4  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault } } },
   { /* 5  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault } } },
   { /* 6  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault } } },
   { /* 7  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault } } },
   { /* 8  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault } } },
   { /* 9  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 10 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 11 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBand5_SetDefault[ UL1_MIPI_ETM_TX_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,            {  { addr_subband_0,                                       data_subband_0                                    },   { addr_subband_1,                                      data_subband_1                                    },   { addr_subband_2,                                       data_subband_2                                    },   { addr_subband_3,                                      data_subband_3                                    },   { addr_subband_4,                                       data_subband_4                                    } }  },
   { /* 0  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault } } },
   { /* 1  */ USE_ETM_INDEX_0,    UL1_REG_W_EXT, { { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault } } },
   { /* 2  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault } } },
   { /* 3  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault } } },
   { /* 4  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault } } },
   { /* 5  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault } } },
   { /* 6  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault } } },
   { /* 7  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault } } },
   { /* 8  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault } } },
   { /* 9  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 10 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 11 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
};


const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBand8_SetDefault[ UL1_MIPI_ETM_TX_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,            {  { addr_subband_0,                                       data_subband_0                                    },   { addr_subband_1,                                      data_subband_1                                    },   { addr_subband_2,                                       data_subband_2                                    },   { addr_subband_3,                                      data_subband_3                                    },   { addr_subband_4,                                       data_subband_4                                    } }  },
   { /* 0  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault }, { UL1D_ETM_TX_DATA_0_ADDR_SetDefault, UL1D_ETM_TX_DATA_0_VAL_SetDefault } } },
   { /* 1  */ USE_ETM_INDEX_0,    UL1_REG_W_EXT, { { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault }, { UL1D_ETM_TX_DATA_1_ADDR_SetDefault, UL1D_ETM_TX_DATA_1_VAL_SetDefault } } },
   { /* 2  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault }, { UL1D_ETM_TX_DATA_2_ADDR_SetDefault, UL1D_ETM_TX_DATA_2_VAL_SetDefault } } },
   { /* 3  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault }, { UL1D_ETM_TX_DATA_3_ADDR_SetDefault, UL1D_ETM_TX_DATA_3_VAL_SetDefault } } },
   { /* 4  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault }, { UL1D_ETM_TX_DATA_4_ADDR_SetDefault, UL1D_ETM_TX_DATA_4_VAL_SetDefault } } },
   { /* 5  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault }, { UL1D_ETM_TX_DATA_5_ADDR_SetDefault, UL1D_ETM_TX_DATA_5_VAL_SetDefault } } },
   { /* 6  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault }, { UL1D_ETM_TX_DATA_6_ADDR_SetDefault, UL1D_ETM_TX_DATA_6_VAL_SetDefault } } },
   { /* 7  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault }, { UL1D_ETM_TX_DATA_7_ADDR_SetDefault, UL1D_ETM_TX_DATA_7_VAL_SetDefault } } },
   { /* 8  */ USE_ETM_INDEX_0,    UL1_REG_W,     { { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault }, { UL1D_ETM_TX_DATA_8_ADDR_SetDefault, UL1D_ETM_TX_DATA_8_VAL_SetDefault } } },
   { /* 9  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 10 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
   { /* 11 */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL,  { { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 }, { 0x00, 0x00 } } },
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBand3_SetDefault[]  = {{0}};
const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBand6_SetDefault[]  = {{0}};
const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBand9_SetDefault[]  = {{0}};
const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBand11_SetDefault[] = {{0}};
const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TX_DATA_UMTSBand19_SetDefault[] = {{0}};



const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBand1_SetDefault[ UL1_MIPI_ETM_TPC_EVENT_NUM ] = 
{
	 /* No.         data idx,                                                                                                                                                       evt_type,                       evt_offset                                                    */
    /*            { start,                                                                          stop                                                                      },                                       ( us )                                                           */
   { /* 0  */ { UMTS_ETM_TPC_DATA_START_ADDRESS_0_SetDefault, UMTS_ETM_TPC_DATA_STOP_ADDRESS_0_SetDefault }, UL1_MIPI_TPC_SET,    UMTS_ETM_TIME_OFFSET_TPC_0_SetDefault },
   { /* 1  */ { 0,                                            0                                           }, UL1_MIPI_EVENT_NULL, 0                                     },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBand2_SetDefault[ UL1_MIPI_ETM_TPC_EVENT_NUM ] = 
{
	 /* No.         data idx,                                                                                                                                                       evt_type,                       evt_offset                                                    */
    /*            { start,                                                                          stop                                                                      },                                       ( us )                                                           */
   { /* 0  */ { UMTS_ETM_TPC_DATA_START_ADDRESS_0_SetDefault, UMTS_ETM_TPC_DATA_STOP_ADDRESS_0_SetDefault }, UL1_MIPI_TPC_SET,    UMTS_ETM_TIME_OFFSET_TPC_0_SetDefault },
   { /* 1  */ { 0,                                            0                                           }, UL1_MIPI_EVENT_NULL, 0                                     },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBand4_SetDefault[ UL1_MIPI_ETM_TPC_EVENT_NUM ] = 
{
	 /* No.         data idx,                                                                                                                                                       evt_type,                       evt_offset                                                    */
    /*            { start,                                                                          stop                                                                      },                                       ( us )                                                           */
   { /* 0  */ { UMTS_ETM_TPC_DATA_START_ADDRESS_0_SetDefault, UMTS_ETM_TPC_DATA_STOP_ADDRESS_0_SetDefault }, UL1_MIPI_TPC_SET,    UMTS_ETM_TIME_OFFSET_TPC_0_SetDefault },
   { /* 1  */ { 0,                                            0                                           }, UL1_MIPI_EVENT_NULL, 0                                     },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBand5_SetDefault[ UL1_MIPI_ETM_TPC_EVENT_NUM ] = 
{
	 /* No.         data idx,                                                                                                                                                       evt_type,                       evt_offset                                                    */
    /*            { start,                                                                          stop                                                                      },                                       ( us )                                                           */
   { /* 0  */ { UMTS_ETM_TPC_DATA_START_ADDRESS_0_SetDefault, UMTS_ETM_TPC_DATA_STOP_ADDRESS_0_SetDefault }, UL1_MIPI_TPC_SET,    UMTS_ETM_TIME_OFFSET_TPC_0_SetDefault },
   { /* 1  */ { 0,                                            0                                           }, UL1_MIPI_EVENT_NULL, 0                                     },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBand8_SetDefault[ UL1_MIPI_ETM_TPC_EVENT_NUM ] = 
{
	 /* No.         data idx,                                                                                                                                                       evt_type,                       evt_offset                                                    */
    /*            { start,                                                                          stop                                                                      },                                       ( us )                                                           */
   { /* 0  */ { UMTS_ETM_TPC_DATA_START_ADDRESS_0_SetDefault, UMTS_ETM_TPC_DATA_STOP_ADDRESS_0_SetDefault }, UL1_MIPI_TPC_SET,    UMTS_ETM_TIME_OFFSET_TPC_0_SetDefault },
   { /* 1  */ { 0,                                            0                                           }, UL1_MIPI_EVENT_NULL, 0                                     },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBand3_SetDefault[]  =
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBand6_SetDefault[]  =
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBand9_SetDefault[]  =
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBand11_SetDefault[] =
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T UMTS_MIPI_ETM_TPC_EVENT_UMTSBand19_SetDefault[] =
{
   /* No.            data idx     ,        evt_type,                        evt_offset           */
   /*              { start, stop },                                             ( us )                  */
   { /* 0  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};   



const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBand1_SetDefault[ UL1_MIPI_ETM_TPC_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,           {  { addr_subband_0,                                        data_subband_0                                      },   { addr_subband_1,                                        data_subband_1                                      },   { addr_subband_2,                                        data_subband_2                                     },   { addr_subband_3,                                         data_subband_3                                     },   { addr_subband_4,                                         data_subband_4                                      } }  },
   { /* 0  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault } } },
   { /* 1  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault } } },
   { /* 2  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault } } },
   { /* 3  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault } } },
   { /* 4  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL, { { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               } } }
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBand2_SetDefault[ UL1_MIPI_ETM_TPC_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,           {  { addr_subband_0,                                        data_subband_0                                      },   { addr_subband_1,                                        data_subband_1                                      },   { addr_subband_2,                                        data_subband_2                                     },   { addr_subband_3,                                         data_subband_3                                     },   { addr_subband_4,                                         data_subband_4                                      } }  },
   { /* 0  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault } } },
   { /* 1  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault } } },
   { /* 2  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault } } },
   { /* 3  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault } } },
   { /* 4  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL, { { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               } } }
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBand4_SetDefault[ UL1_MIPI_ETM_TPC_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,           {  { addr_subband_0,                                        data_subband_0                                      },   { addr_subband_1,                                        data_subband_1                                      },   { addr_subband_2,                                        data_subband_2                                     },   { addr_subband_3,                                         data_subband_3                                     },   { addr_subband_4,                                         data_subband_4                                      } }  },
   { /* 0  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault } } },
   { /* 1  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault } } },
   { /* 2  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault } } },
   { /* 3  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault } } },
   { /* 4  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL, { { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               } } }
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBand5_SetDefault[ UL1_MIPI_ETM_TPC_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,           {  { addr_subband_0,                                        data_subband_0                                      },   { addr_subband_1,                                        data_subband_1                                      },   { addr_subband_2,                                        data_subband_2                                     },   { addr_subband_3,                                         data_subband_3                                     },   { addr_subband_4,                                         data_subband_4                                      } }  },
   { /* 0  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault } } },
   { /* 1  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault } } },
   { /* 2  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault } } },
   { /* 3  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault } } },
   { /* 4  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL, { { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               } } }
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBand8_SetDefault[ UL1_MIPI_ETM_TPC_DATA_NUM ] = 
{
 //{  No.         ETM index,                   data_seq,           {  { addr_subband_0,                                        data_subband_0                                      },   { addr_subband_1,                                        data_subband_1                                      },   { addr_subband_2,                                        data_subband_2                                     },   { addr_subband_3,                                         data_subband_3                                     },   { addr_subband_4,                                         data_subband_4                                      } }  },
   { /* 0  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_0_ADDR_SetDefault, UL1D_ETM_TPC_DATA_0_VAL_SetDefault } } },
   { /* 1  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_1_ADDR_SetDefault, UL1D_ETM_TPC_DATA_1_VAL_SetDefault } } },
   { /* 2  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_2_ADDR_SetDefault, UL1D_ETM_TPC_DATA_2_VAL_SetDefault } } },
   { /* 3  */ USE_ETM_INDEX_0,    UL1_REG_W,    { { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault }, { UL1D_ETM_TPC_DATA_3_ADDR_SetDefault, UL1D_ETM_TPC_DATA_3_VAL_SetDefault } } },
   { /* 4  */ USE_ETM_INDEX_NULL, UL1_SEQ_NULL, { { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               }, { 0x00,                                0x00                               } } }
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBand3_SetDefault[]  = {{0}};
const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBand6_SetDefault[]  = {{0}};
const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBand9_SetDefault[]  = {{0}};
const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBand11_SetDefault[] = {{0}};
const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T UMTS_MIPI_ETM_TPC_DATA_UMTSBand19_SetDefault[] = {{0}};



const UL1_MIPI_SIMPLE_EVENT_TABLE_T* const UMTS_MIPI_ETM_TX_EVENT_TABLE_SetDefault[] =
{
   M_UMTS_ETM_TX_EVENT(UMTSBandNone,SetDefault),                       /*UMTSUMTSBandNone*/          
   M_UMTS_ETM_TX_EVENT(RX_BAND_INDICATOR_0_SetDefault,SetDefault),     /*RX_BAND_INDICATOR_0_SetDefault*/
   M_UMTS_ETM_TX_EVENT(RX_BAND_INDICATOR_1_SetDefault,SetDefault),     /*RX_BAND_INDICATOR_1_SetDefault*/
   M_UMTS_ETM_TX_EVENT(RX_BAND_INDICATOR_2_SetDefault,SetDefault),     /*RX_BAND_INDICATOR_2_SetDefault*/
   M_UMTS_ETM_TX_EVENT(RX_BAND_INDICATOR_3_SetDefault,SetDefault),     /*RX_BAND_INDICATOR_3_SetDefault*/ 
   M_UMTS_ETM_TX_EVENT(RX_BAND_INDICATOR_4_SetDefault,SetDefault),     /*RX_BAND_INDICATOR_4_SetDefault*/ 
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_ETM_TX_DATA_TABLE_SetDefault[] = 
{
   M_UMTS_ETM_TX_DATA(UMTSBandNone,SetDefault),                     /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_DATA(RX_BAND_INDICATOR_0_SetDefault,SetDefault),   /*RX_BAND_INDICATOR_0_SetDefault*/
   M_UMTS_ETM_TX_DATA(RX_BAND_INDICATOR_1_SetDefault,SetDefault),   /*RX_BAND_INDICATOR_1_SetDefault*/
   M_UMTS_ETM_TX_DATA(RX_BAND_INDICATOR_2_SetDefault,SetDefault),   /*RX_BAND_INDICATOR_2_SetDefault*/
   M_UMTS_ETM_TX_DATA(RX_BAND_INDICATOR_3_SetDefault,SetDefault),   /*RX_BAND_INDICATOR_3_SetDefault*/
   M_UMTS_ETM_TX_DATA(RX_BAND_INDICATOR_4_SetDefault,SetDefault),   /*RX_BAND_INDICATOR_4_SetDefault*/
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T* const UMTS_MIPI_ETM_TPC_EVENT_TABLE_SetDefault[] =
{
   M_UMTS_ETM_TPC_EVENT(UMTSBandNone,SetDefault),                       /*UMTSUMTSBandNone*/          
   M_UMTS_ETM_TPC_EVENT(RX_BAND_INDICATOR_0_SetDefault,SetDefault),     /*RX_BAND_INDICATOR_0_SetDefault*/
   M_UMTS_ETM_TPC_EVENT(RX_BAND_INDICATOR_1_SetDefault,SetDefault),     /*RX_BAND_INDICATOR_1_SetDefault*/
   M_UMTS_ETM_TPC_EVENT(RX_BAND_INDICATOR_2_SetDefault,SetDefault),     /*RX_BAND_INDICATOR_2_SetDefault*/
   M_UMTS_ETM_TPC_EVENT(RX_BAND_INDICATOR_3_SetDefault,SetDefault),     /*RX_BAND_INDICATOR_3_SetDefault*/ 
   M_UMTS_ETM_TPC_EVENT(RX_BAND_INDICATOR_4_SetDefault,SetDefault),     /*RX_BAND_INDICATOR_4_SetDefault*/ 
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_ETM_TPC_DATA_TABLE_SetDefault[] = 
{
   M_UMTS_ETM_TPC_DATA(UMTSBandNone,SetDefault),                     /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TPC_DATA(RX_BAND_INDICATOR_0_SetDefault,SetDefault),   /*RX_BAND_INDICATOR_0_SetDefault*/
   M_UMTS_ETM_TPC_DATA(RX_BAND_INDICATOR_1_SetDefault,SetDefault),   /*RX_BAND_INDICATOR_1_SetDefault*/
   M_UMTS_ETM_TPC_DATA(RX_BAND_INDICATOR_2_SetDefault,SetDefault),   /*RX_BAND_INDICATOR_2_SetDefault*/
   M_UMTS_ETM_TPC_DATA(RX_BAND_INDICATOR_3_SetDefault,SetDefault),   /*RX_BAND_INDICATOR_3_SetDefault*/
   M_UMTS_ETM_TPC_DATA(RX_BAND_INDICATOR_4_SetDefault,SetDefault),   /*RX_BAND_INDICATOR_4_SetDefault*/
};

#else

const UL1_MIPI_SIMPLE_EVENT_TABLE_T* const UMTS_MIPI_ETM_TX_EVENT_TABLE_SetDefault[] =
{
   M_UMTS_ETM_TX_EVENT(UMTSBandNone,SetDefault),      /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_EVENT(UMTSBandNone,SetDefault),      /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_EVENT(UMTSBandNone,SetDefault),      /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_EVENT(UMTSBandNone,SetDefault),      /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_EVENT(UMTSBandNone,SetDefault),      /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_EVENT(UMTSBandNone,SetDefault),      /*UMTSUMTSBandNone*/
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_ETM_TX_DATA_TABLE_SetDefault[] = 
{
   M_UMTS_ETM_TX_DATA(UMTSBandNone,SetDefault),       /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_DATA(UMTSBandNone,SetDefault),       /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_DATA(UMTSBandNone,SetDefault),       /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_DATA(UMTSBandNone,SetDefault),       /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_DATA(UMTSBandNone,SetDefault),       /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TX_DATA(UMTSBandNone,SetDefault),       /*UMTSUMTSBandNone*/
};

const UL1_MIPI_SIMPLE_EVENT_TABLE_T* const UMTS_MIPI_ETM_TPC_EVENT_TABLE_SetDefault[] =
{
   M_UMTS_ETM_TPC_EVENT(UMTSBandNone,SetDefault),     /*UMTSUMTSBandNone*/          
   M_UMTS_ETM_TPC_EVENT(UMTSBandNone,SetDefault),     /*RX_BAND_INDICATOR_0_SetDefault*/
   M_UMTS_ETM_TPC_EVENT(UMTSBandNone,SetDefault),     /*RX_BAND_INDICATOR_1_SetDefault*/
   M_UMTS_ETM_TPC_EVENT(UMTSBandNone,SetDefault),     /*RX_BAND_INDICATOR_2_SetDefault*/
   M_UMTS_ETM_TPC_EVENT(UMTSBandNone,SetDefault),     /*RX_BAND_INDICATOR_3_SetDefault*/ 
   M_UMTS_ETM_TPC_EVENT(UMTSBandNone,SetDefault),     /*RX_BAND_INDICATOR_4_SetDefault*/ 
};

const UL1_MIPI_SIMPLE_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_ETM_TPC_DATA_TABLE_SetDefault[] = 
{
   M_UMTS_ETM_TPC_DATA(UMTSBandNone,SetDefault),   /*UMTSUMTSBandNone*/
   M_UMTS_ETM_TPC_DATA(UMTSBandNone,SetDefault),   /*RX_BAND_INDICATOR_0_SetDefault*/
   M_UMTS_ETM_TPC_DATA(UMTSBandNone,SetDefault),   /*RX_BAND_INDICATOR_1_SetDefault*/
   M_UMTS_ETM_TPC_DATA(UMTSBandNone,SetDefault),   /*RX_BAND_INDICATOR_2_SetDefault*/
   M_UMTS_ETM_TPC_DATA(UMTSBandNone,SetDefault),   /*RX_BAND_INDICATOR_3_SetDefault*/
   M_UMTS_ETM_TPC_DATA(UMTSBandNone,SetDefault),   /*RX_BAND_INDICATOR_4_SetDefault*/
};

#endif   // #if IS_UMTS_ETM_FRONT_END_ENABLE_SetDefault

#endif   // #if __IS_UL1D_ETM_SUPPORT__

#endif   // #if (IS_3G_MIPI_SUPPORT)

