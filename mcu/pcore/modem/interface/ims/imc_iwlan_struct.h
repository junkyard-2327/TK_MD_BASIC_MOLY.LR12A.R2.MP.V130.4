#ifndef _IMC_IWLAN_STRUCT_H
#define _IMC_IWLAN_STRUCT_H

#include "ps_public_enum.h"
#include "sim_public_enum.h"
#include "ims_common_def.h"
#include "ims_interface_md.h"
#include "codec_def.h"

typedef enum {
    IMC_IWLAN_MEDIA_UNSPEC = 0,
    IMC_IWLAN_MEDIA_NEW,
    IMC_IWLAN_MEDIA_UPDATE,
    IMC_IWLAN_MEDIA_DEL
} imc_iwlan_media_state_enum;

typedef enum {
    IMC_IWLAN_IMS_CALL_STATUS_UNSPEC = 0,
    IMC_IWLAN_IMS_CALL_STATUS_BEGIN,
    IMC_IWLAN_IMS_CALL_STATUS_CONNECTED,
    IMC_IWLAN_IMS_CALL_STATUS_END,
} imc_iwlan_ims_call_status_enum;

typedef enum
{
    IMS_STATE_IDLE = 0,
    IMS_STATE_ONCELL,
    IMS_STATE_ONWIFI,
    IMS_STATE_CNT,
}ims_state_enum;

typedef struct {  
    LOCAL_PARA_HDR
    kal_bool is_volte_enable;
    kal_bool is_wfc_enable;
    kal_bool is_ims_voice_capa_enable;
    kal_bool is_ims_video_capa_enable;
    kal_bool is_ims_sms_capa_enable;
    kal_bool is_eims_enable;
    kal_uint8 pvs_volte_enable;
    kal_uint8 pvs_wfc_enable;
    kal_uint8 pvs_ims_sms_enable;
    kal_uint8 pvs_vcc_enable;    
} imc_iwlan_ims_cfg_ind_struct;

/*
 * @brief IMS diable by IWLAN
 * @note MSG_ID_IMC_IWLAN_IMS_DEREG_IND/RSP
 *       AT+EIMSDEREG=4
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint32 dereg_cause; 
} imc_iwlan_ims_dereg_ind_struct,
  imc_iwlan_ims_dereg_rsp_struct;

typedef struct {
    LOCAL_PARA_HDR
    imc_acct_type_enum              acct_type; //defined in ims_interface_md.h
    kal_uint32                      call_id;
    ims_call_mode_enum              call_mode; //defined in ims_interface_md.h
    imc_iwlan_ims_call_status_enum  call_status;
} imc_iwlan_ims_call_status_req_struct;

typedef struct
{
    LOCAL_PARA_HDR    
    kal_bool    rat_avail[IMS_STATE_CNT];
}imc_iwlan_ims_availrat_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8                  call_id;
    voip_codec_enum            audio_codec;
    imc_iwlan_media_state_enum media_state;
} imc_iwlan_call_media_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
} imc_iwlan_wifi_service_fail_req_struct;

#endif /* _IMC_IWLAN_STRUCT_H */
