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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   audio_enum.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   audio common enum
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef _L1AUDIO_COMMON_ENUM_H
#define _L1AUDIO_COMMON_ENUM_H


typedef enum {
    SPC_ID_AUDIO_A2M_CCCI = 0, //MSG_ID_AUDIO_MSG_CODE_BEGIN,
    SPC_ID_AUDIO_M2A_CCCI,
    SPC_ID_AUDIO_STRM_PCM4WAY_DATA,
    SPC_ID_AUDIO_STRM_PNW_UL_DATA_NOTIFY,
    SPC_ID_AUDIO_STRM_PNW_DL_DATA_REQUEST,
    SPC_ID_AUDIO_STRM_BGSND_DATA_REQUEST,
    SPC_ID_AUDIO_STRM_VM_DATA_REQUEST,
    SPC_ID_AUDIO_STRM_PCM_DATA_REQUEST,
    SPC_ID_SPEECH_CUSTOM_DATA_REQUEST,

	 // SPC_ID_AUDIO_STRM_PCMREC_DATA_NOTIFY,  removed after 93md
	 SPC_ID_AUDIO_STRM_VMREC_DATA_NOTIFY,
	 SPC_ID_AUDIO_STRM_CTM_DUMP_DATA_NOTIFY,

	 SPC_ID_AUDIO_STRM_DACA_DL_DATA_NOTIFY, 
	 SPC_ID_AUDIO_STRM_DACA_UL_DATA_REQUEST,
	 
	 SPC_ID_AUDIO_CONTROL_BGSND_CLOSE,
	 SPC_ID_NETWORK_STATUS_NOTIFY,

   SPC_ID_AUDIO_STRM_RAWPCMREC_DATA_NOTIFY,
   SPC_ID_AUDIO_CONTROL_CTM_CLOSE,

	 SPC_ID_AUDIO_PCMMIXER3_UL_DATA_REQUEST,
	 
   SPC_ID_AUDIO_MAX
} SPC_MSG_ID_T; 

typedef enum {
	SPC_MSG_FROM_CCCI = 0,
	SPC_MSG_FROM_MED, 
	SPC_MSG_FROM_AUDHISR, 
	SPC_MSG_FROM_CCCI_STREAM,  
	SPC_MSG_FROM_CCCI_STREAM_AND_SHM,
} SPC_MSG_FROM_T;

#define CCCIMSG_A2M_BASE 0x2F00
#define CCCIMSG_M2A_BASE 0xAF00

typedef enum {

	//------------------ A2M -----------------------
	MSG_A2M_SPH_DL_DIGIT_VOLUME = CCCIMSG_A2M_BASE,
	MSG_A2M_SPH_UL_DIGIT_VOLUME,
	MSG_A2M_MUTE_SPH_UL,
	MSG_A2M_MUTE_SPH_DL,
	MSG_A2M_SIDETONE_VOLUME, // remove from 93
	MSG_A2M_SPH_DL_ENH_REF_DIGIT_VOLUME, 
	MSG_A2M_SIDETONE_CONFIG, // remove from 93
	MSG_A2M_MUTE_SPH_UL_ENH_RESULT,	
	MSG_A2M_MUTE_SPH_UL_SOURCE,
	
	MSG_A2M_SET_SAMPLE_RATE = CCCIMSG_A2M_BASE + 0x10, // 
	MSG_A2M_SET_DUAL_MIC, // remove from 93	
	MSG_A2M_SET_BT_DELAY_TIME,	
	MSG_A2M_SET_LPBK_POINT_DVT = CCCIMSG_A2M_BASE + 0x13,

	MSG_A2M_SPH_ON = CCCIMSG_A2M_BASE + 0x20,
	MSG_A2M_SPH_OFF,
	MSG_A2M_SET_SPH_MODE, // remove from 93, but may comeback with customize 
	MSG_A2M_CTRL_SPH_ENH, 
	MSG_A2M_CONFIG_SPH_ENH, 
	MSG_A2M_SET_ACOUSTIC_LOOPBACK,
	MSG_A2M_PRINT_SPH_COEFF, // remove from 93 
	MSG_A2M_SPH_ON_FOR_HOLD_CALL, // [Special] speech on with mute, for call hold use, no any other application can be turn on
	MSG_A2M_SPH_ON_FOR_DACA, 
	MSG_A2M_SPH_ROUTER_ON, // PCM wrouter on for enhancement and other application path. 	
	MSG_A2M_SET_VOICE_ENCRYPTION, // +0x2a
	MSG_A2M_SPH_DEV_CHANGE, // + 0x2b
	MSG_A2M_ENH_CTRL_SUPPORT, // + 0x2C
	
	MSG_A2M_PNW_ON = CCCIMSG_A2M_BASE + 0x30,
	MSG_A2M_PNW_OFF,
	MSG_A2M_RECORD_ON, // removed from 93md
	MSG_A2M_RECORD_OFF, // removed from 93md
	MSG_A2M_DMNR_RECPLAY_ON, // not use in MT6582, removed from 93md
	MSG_A2M_DMNR_RECPLAY_OFF, // not use in MT6582, removed from 93md
	MSG_A2M_DMNR_REC_ONLY_ON, // not use in MT6582, removed from 93md
	MSG_A2M_DMNR_REC_ONLY_OFF, // not use in MT6582, removed from 93md
	MSG_A2M_PCM_REC_ON, // removed from 93md
	MSG_A2M_PCM_REC_OFF, // removed from 93md
	MSG_A2M_VM_REC_ON,
	MSG_A2M_VM_REC_OFF,
	MSG_A2M_RECORD_RAW_PCM_ON,  //CCCIMSG_A2M_BASE + 0x30 + 0xC
	MSG_A2M_RECORD_RAW_PCM_OFF, //CCCIMSG_A2M_BASE + 0x30 + 0xD
	
	
	MSG_A2M_CTM_ON = CCCIMSG_A2M_BASE + 0x40,
	MSG_A2M_CTM_OFF,	
	MSG_A2M_CTM_DUMP_DEBUG_FILE,
	MSG_A2M_BGSND_ON,
	MSG_A2M_BGSND_OFF,
	MSG_A2M_BGSND_CONFIG,
	MSG_A2M_TELEPHONY_TX_ON = CCCIMSG_A2M_BASE + 0x48,
	MSG_A2M_TELEPHONY_TX_OFF,
	MSG_A2M_TELEPHONY_TX_CONFIG,
		
	MSG_A2M_PNW_DLDATA_NOTIFY = CCCIMSG_A2M_BASE + 0x50,
	MSG_A2M_BGSND_DATA_NOTIFY,
	MSG_A2M_CTM_DATA_NOTIFY,	
	MSG_A2M_DACA_UL_DATA_NOTIFY,	
	MSG_A2M_ECALL_MSD, 
	MSG_A2M_SPC_UL_ENC, 
	MSG_A2M_SPC_DL_DEC, 
  MSG_A2M_TELEPHONY_TX_ULDATA_NOTIFY = CCCIMSG_A2M_BASE + 0x59,
  
	MSG_A2M_PNW_ULDATA_READ_ACK = CCCIMSG_A2M_BASE + 0x60,
	MSG_A2M_REC_DATA_READ_ACK, // removed from 93md
	MSG_A2M_CTM_DEBUG_DATA_READ_ACK,
	MSG_A2M_PCM_REC_DATA_READ_ACK,// removed from 93md
	MSG_A2M_VM_REC_DATA_READ_ACK,
	MSG_A2M_DACA_DL_DATA_READ_ACK,
	MSG_A2M_RAW_PCM_REC_DATA_READ_ACK, //CCCIMSG_A2M_BASE + 0x60 +0x6
	MSG_A2B_CUST_DUMP_READ_ACK,

	MSG_A2M_EM_DATA_REQUEST_ACK = CCCIMSG_A2M_BASE + 0x70, // not use
	MSG_A2M_EM_INCALL, // not use after 91md
	MSG_A2M_EM_DMNR, // not use after 91md
	MSG_A2M_EM_WB, // not use after 91md
	MSG_A2M_EM_MAGICON, // not use after 91md
	MSG_A2M_NETWORK_STATUS_ACK,	
	MSG_A2M_QUERY_RF_INFO, // remove from 93md
	MSG_A2M_EM_HAC, // not use after 91md
	MSG_A2M_EPOF_ACK, 
	MSG_A2M_DYNAMIC_PAR, 
	MSG_A2M_SPH_ENH_CORE, // for open dsp, not used in 93md 
	MSG_A2M_DYNAMIC_PAR_IN_STRUCT_SHM, // + 0xb
	
	MSG_A2M_VIBSPK_PARAMETER = CCCIMSG_A2M_BASE + 0x80,
	MSG_A2M_NXP_SMARTPA_PARAMETER, 

	MSG_A2M_NW_CODEC_INFO_READ_ACK = CCCIMSG_A2M_BASE + 0x90,

	MSG_A2M_AUD_ALIVE_READ_ACK = CCCIMSG_A2M_BASE + 0xa0,
	
	//------------------- M2A ----------------------
	MSG_M2A_SPH_DL_DIGIT_VOLUME_ACK = CCCIMSG_M2A_BASE,
	MSG_M2A_SPH_UL_DIGIT_VOLUME_ACK,
	MSG_M2A_MUTE_SPH_UL_ACK,
	MSG_M2A_MUTE_SPH_DL_ACK,
	MSG_M2A_SIDETONE_VOLUME_ACK,
	MSG_M2A_SPH_DL_ENH_REF_DIGIT_VOLUME_ACK,
	MSG_M2A_SIDETONE_CONFIG_ACK,
	MSG_M2A_MUTE_SPH_UL_ENH_RESULT_ACK,
	MSG_M2A_MUTE_SPH_UL_SOURCE_ACK,
	
	MSG_M2A_SET_SAMPLE_RATE_ACK = CCCIMSG_M2A_BASE + 0x10,
	MSG_M2A_SET_DUAL_MIC_ACK,
	MSG_M2A_SET_BT_DELAY_TIME_ACK,
	MSG_M2A_SET_LPBK_POINT_DVT,
	
	MSG_M2A_SPH_ON_ACK = CCCIMSG_M2A_BASE + 0x20,
	MSG_M2A_SPH_OFF_ACK,
	MSG_M2A_SET_SPH_MODE_ACK,
	MSG_M2A_CTRL_SPH_ENH_ACK,
	MSG_M2A_CONFIG_SPH_ENH_ACK,
	MSG_M2A_SET_ACOUSTIC_LOOPBACK_ACK,
	MSG_M2A_PRINT_SPH_COEFF_ACK,
	MSG_M2A_SPH_ON_FOR_HOLD_CALL_ACK, 
	MSG_M2A_SPH_ON_FOR_DACA_ACK,
	MSG_M2A_SPH_ROUTER_ON_ACK,
	MSG_M2A_SET_VOICE_ENCRYPTION_ACK, // + 0x2a
	MSG_M2A_SPH_DEV_CHANGE_ACK, // + 0x2b
	MSG_M2A_ENH_CTRL_SUPPORT_ACK, // + 0x2C
	
	MSG_M2A_PNW_ON_ACK = CCCIMSG_M2A_BASE + 0x30,
	MSG_M2A_PNW_OFF_ACK,
	MSG_M2A_RECORD_ON_ACK,
	MSG_M2A_RECORD_OFF_ACK,
	MSG_M2A_DMNR_RECPLAY_ON_ACK, // not use in MT6582
	MSG_M2A_DMNR_RECPLAY_OFF_ACK, // not use in MT6582
	MSG_M2A_DMNR_REC_ONLY_ON_ACK, // not use in MT6582
	MSG_M2A_DMNR_REC_ONLY_OFF_ACK, // not use in MT6582
	MSG_M2A_PCM_REC_ON_ACK,
	MSG_M2A_PCM_REC_OFF_ACK,
	MSG_M2A_VM_REC_ON_ACK,
	MSG_M2A_VM_REC_OFF_ACK,
	MSG_M2A_RECORD_RAW_PCM_ON_ACK,  //CCCIMSG_M2A_BASE + 0x30 + 0xC
	MSG_M2A_RECORD_RAW_PCM_OFF_ACK, //CCCIMSG_M2A_BASE + 0x30 + 0xD
	
	
	MSG_M2A_CTM_ON_ACK = CCCIMSG_M2A_BASE + 0x40,
	MSG_M2A_CTM_OFF_ACK,
	MSG_M2A_CTM_DUMP_DEBUG_FILE_ACK,
	MSG_M2A_BGSND_ON_ACK,
	MSG_M2A_BGSND_OFF_ACK,
	MSG_M2A_BGSND_CONFIG_ACK,
	MSG_M2A_TELEPHONY_TX_ON_ACK = CCCIMSG_M2A_BASE + 0x48,
	MSG_M2A_TELEPHONY_TX_OFF_ACK,
	MSG_M2A_TELEPHONY_TX_CONFIG_ACK,	
	
	MSG_M2A_PNW_DL_DATA_REQUEST = CCCIMSG_M2A_BASE + 0x50,
	MSG_M2A_BGSND_DATA_REQUEST,
	MSG_M2A_CTM_DATA_REQUEST,	
	MSG_M2A_DACA_UL_DATA_REQUEST, 
	MSG_M2A_ECALL_MSD_NOTIFY, 
	MSG_M2A_SPC_UL_ENC_NOTIFY, 
	MSG_M2A_SPC_DL_DEC_REQUEST,
	MSG_M2A_TELEPHONY_TX_UL_DATA_REQUEST = CCCIMSG_M2A_BASE + 0x59,
	
	MSG_M2A_PNW_UL_DATA_NOTIFY = CCCIMSG_M2A_BASE + 0x60,
	MSG_M2A_REC_DATA_NOTIFY, // removed from 93md
	MSG_M2A_CTM_DEBUG_DATA_NOTIFY,
	MSG_M2A_PCM_REC_DATA_NOTIFY, // removed from 93md
	MSG_M2A_VM_REC_DATA_NOTIFY,	
	MSG_A2M_DACA_DL_DATA_NOTIFY, 
	MSG_M2A_RAW_PCM_REC_DATA_NOTIFY, //CCCIMSG_M2A_BASE + 0x60 + 0x6
	MSG_M2A_CUST_DUMP_NOTIFY,

	MSG_M2A_EM_DATA_REQUEST = CCCIMSG_M2A_BASE + 0x70,
	MSG_M2A_EM_INCALL_ACK, // not use after 91md
	MSG_M2A_EM_DMNR_ACK, // not use after 91md
	MSG_M2A_EM_WB_ACK, // not use after 91md
	MSG_M2A_EM_MAGICON_ACK, // not use after 91md
	MSG_M2A_NETWORK_STATUS_NOTIFY,	
	MSG_M2A_RF_INFO_NOTIFY,	// remove from 93md
	MSG_M2A_EM_HAC_ACK, // not use after 91md
	MSG_M2A_EPOF_NOTIFY,
	MSG_M2A_DYNAMIC_PAR,	
	MSG_M2A_SPH_ENH_CORE_ACK, // for open dsp, not used in 93md 
	MSG_M2A_DYNAMIC_PAR_IN_STRUCT_SHM_ACK,  // + 0x7b

	MSG_M2A_VIBSPK_PARAMETER_ACK = CCCIMSG_M2A_BASE + 0x80,
	MSG_M2A_NXP_SMARTPA_PARAMETER_ACK,

	MSG_M2A_NW_CODEC_INFO_NOTIFY = CCCIMSG_M2A_BASE + 0x90,

	MSG_M2A_AUD_ALIVE_NOTIFY = CCCIMSG_M2A_BASE + 0xa0,

	
} AUD_CCCI_MSG_T;

typedef enum
{
    AUD_CCCI_STRMBUF_TYPE_PCM_FillSE = 0,
    AUD_CCCI_STRMBUF_TYPE_PCM_FillSpk,
    AUD_CCCI_STRMBUF_TYPE_PCM_GetFromMic,
    AUD_CCCI_STRMBUF_TYPE_PCM_GetfromSD,
    AUD_CCCI_STRMBUF_TYPE_VM_TYPE,
    AUD_CCCI_STRMBUF_TYPE_PCM_TYPE,
    AUD_CCCI_STRMBUF_TYPE_BGS_TYPE,
    AUD_CCCI_STRMBUF_TYPE_EM_PARAM, //  7

	AUD_CCCI_STRMBUF_TYPE_CTM_UL_IN, // 8
    AUD_CCCI_STRMBUF_TYPE_CTM_DL_IN,
    AUD_CCCI_STRMBUF_TYPE_CTM_UL_OUT,
    AUD_CCCI_STRMBUF_TYPE_CTM_DL_OUT,
    AUD_CCCI_STRMBUF_TYPE_VIBSPK_PARAM, // 12, for viberation speaker 
    
	AUD_CCCI_STRMBUF_TYPE_DACA_GetSpk, // 13
	AUD_CCCI_STRMBUF_TYPE_DACA_FillMic,
    AUD_CCCI_STRMBUF_TYPE_NXP_SMARTPA_PARAM, // 15

	AUD_CCCI_STRMBUF_TYPE_MAGI_CONFERENCE_PARAM, // 16
    AUD_CCCI_STRMBUF_TYPE_HAC_PARAM, 
    AUD_CCCI_STRMBUF_TYPE_RAW_PCM_TYPE, //18
    AUD_CCCI_STRMBUF_TYPE_DYNAMCI_PAR_TYPE,

	AUD_CCCI_STRMBUF_TYPE_NW_CODEC_INFO, // 20

	AUD_CCCI_STRMBUF_TYPE_CUST_DUMP,	

	AUD_CCCI_STRMBUF_TYPE_UL_ENC,//22 
	AUD_CCCI_STRMBUF_TYPE_DL_DEC,//23 
	AUD_CCCI_ECALL_MSD_TYPE, //24
	AUD_CCCI_STRMBUF_TYPE_SPH_INFO, // 25
  
  AUD_CCCI_STRMBUF_TYPE_TELEPHONYTX_UL=28, //28  
  AUD_CCCI_STRMBUF_TYPE_MAX_TYPE=29
    
}AUD_CCCI_STRMBUF_TYPE_T;

typedef enum
{

    Vol_de_speech_unit = 0xaa01, // volume dependent speech unit 
	Vol_in_general_unit = 0xaa02, //volume independent general unot
	Vol_in_DMNR = 0xaa03, //DMNR
	Vol_in_MagiClarity = 0xaa04, //MagiClarity
	
	Vol_in_echoRefforUsbAudio = 0xaa06, // USB audio echo reference path 
} AUD_SPC_DYNAMIC_PARAM_MAGICNUM_T; 

#endif
