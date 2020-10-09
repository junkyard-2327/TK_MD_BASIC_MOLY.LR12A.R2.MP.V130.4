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
*  LAWS PRINIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   custom_emm_config.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file is used to define the EMM configuration.
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
 * removed!
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

#include "custom_emm_config.h"

/* Define the PLMN ID that applies SBP_EMM_PROC_FAIL_HANDLING
 * Need to enable SBP_EMM_PROC_FAIL_HANDLING_BY_OP
 */ 
const kal_char* emm_proc_fail_handling_op_list[] = 
{
//CMCC
"46000F", "46002F", "46004F", "46007F", "46008F",
//CU
"46001F", "46006F",
//CT
"46003F", "46011F"
};

const kal_char* emm_custom_get_short_t3417ext_op_list[] = 
{
//Vodafone India
"40401F", "40405F", "40411F", "40413F", "40415F", "40420F", "40427F", "40430F", "40443F", 
"40446F", "40460F", "40484F", "40486F", "40488F", "40566F", "40567F", "405750", "405751", 
"405752", "405753", "405754", "405755", "405756", 

//CU
"46001F", "46006F",

//Telcel(Mexico)
"334020",

};

const kal_char* emm_custom_get_queue_ps_paging_op_list[] = 
{
//CMCC
"46000F", "46002F", "46004F", "46007F", "46008F"

};

const kal_uint8 EMM_PROC_FAIL_HANDLING_OP_NUM = sizeof(emm_proc_fail_handling_op_list)/sizeof(kal_char*);
const kal_uint16 EMM_CUSTOM_GET_SHORT_T3417EXT_OP_NUM = sizeof(emm_custom_get_short_t3417ext_op_list)/sizeof(kal_char*);
const kal_uint16 EMM_CUSTOM_GET_QUEUE_PS_PAGING_OP_NUM = sizeof(emm_custom_get_queue_ps_paging_op_list)/sizeof(kal_char*);

/**
 *  @brief  This function is used to obtain the period of erasing forbbiden TAI list 
 *
 *
 * @return    kal_uint32
 * @retval    the period to clear forbidden TAI list (in seconds)
 * 
 */
kal_uint32 emm_custom_get_ftai_timer_length()
{
    return DEFAULT_FTAI_EXPR_TIME;
}

/**
 *  @brief  This function is used to modify the detach retry max counter.
 *          Also, this counter may vary depends on country or operator(PLMN id).
 *          The default value is 5 according to TS 24.301 5.5.2.2.4 abnormal
 *          case (c). As long as the detach retry max counter is meet, UE will
 *          give up air detach and local detach. The detacg procedure will last
 *          5*15 = 75 seconds if network does not respond UE in the worst case. 
 *          Thus, if you want to decrease the detach finish time, you can modify
 *          this function and return a value between 1 and 4. More than 5 or less
 *          than 1 is not allowed. We will consider it as invalid setting. 
 *          Also, to avoid this modification causing GCF verification or any kind
 *          of test cases failure, it will not applied for test sim.
 *
 * @param[in] mccmnc       Current camping plmn id. You can adjust the counter
 *                         depends on the plmn id or not.
 *
 * @return    kal_uint32
 * @retval    the detach retry max counter
 * 
 */
kal_uint32 emm_custom_get_detach_retry_max_counter(kal_uint8 *mccmnc)
{
#define DETACH_MAX_RETRY_1_TIMES    1
#define DETACH_MAX_RETRY_2_TIMES    2
#define DETACH_MAX_RETRY_3_TIMES    3
#define DETACH_MAX_RETRY_4_TIMES    4

    /* mccmnc[0] --> mcc1, mccmnc[1] --> mcc2, mccmnc[2] --> mcc3, 
     * mccmnc[3] --> mnc1, mccmnc[4] --> mnc2, mccmnc[5] --> mnc3, 
     */

    /* example: the max retry counter is 3 in plmn 46692f
    if((mccmnc[0] == 0x04 && mccmnc[1] == 0x06 && mccmnc[2] == 0x06 && mccmnc[3] == 0x09 && mccmnc[4] == 0x02 && mccmnc[5] == 0x0f))
    { 
        return DETACH_MAX_RETRY_3_TIMES;
    }
    */

    return DEFAULT_DETACH_RETRY_MAX_COUNTER;
        
#undef DETACH_MAX_RETRY_1_TIMES
#undef DETACH_MAX_RETRY_2_TIMES
#undef DETACH_MAX_RETRY_3_TIMES
#undef DETACH_MAX_RETRY_4_TIMES
}

/**
 * @brief  This function is used to map air emm cause to custom emm cause.
 *         Note that as UE will behave as custom emm cause, NW behavior is not
 *         predictable
 *
 * @param[in] emm_msg: air emm cause (24.301 Section 8.2 EPS mobility management messages)
 * @param[in] emm_cause: 24.301 Annex A Cause values for EPS mobility management
 * @param[in] is_hplmn: KAL_TRUE for hplmn
 * @param[in] is_test_sim: KAL_TRUE for test SIM
 *
 * @return    emm_cause_enum: custom emm cause (24.301 Section 8.2 EPS mobility management messages)
 */
emm_cause_enum emm_custom_get_customize_cause(emm_msg_type_enum emm_msg, emm_cause_enum emm_cause, kal_bool is_hplmn, 
                                              kal_bool is_test_sim, protocol_id_enum protocol_id, kal_uint8 *mccmnc)
{
    emm_cause_enum cust_cause;
    
    // not applicable
    if (is_test_sim == KAL_TRUE)
    {
        return emm_cause;
    }

    switch (emm_msg)
    {
        case EMM_MSG_ATTACH_REJECT:

            switch (emm_cause)
            {
                // emm cause #14
                case EMM_CAUSE_EPS_NOT_ALLOWED_IN_PLMN:
                    if (mccmnc[0] == 0x04 && mccmnc[1] == 0x05 && mccmnc[2] == 0x02 && 
					    mccmnc[3] == 0x00 && mccmnc[4] == 0x01 && mccmnc[5] == 0x0f)
					{
                        /* mccmnc[0] --> mcc1, mccmnc[1] --> mcc2, mccmnc[2] --> mcc3, 
                         * mccmnc[3] --> mnc1, mccmnc[4] --> mnc2, mccmnc[5] --> mnc3, 
                         */
						 
						// no change in operator 45201f
                        cust_cause = emm_cause;
					}
					else
					{
						cust_cause = EMM_CAUSE_NO_SUITABLE_CELL_IN_TA;   // emm cause #15
					}
                    break;
			
				// AT&T dometsic roaming requirement: mapping emm cause #12 to #13
                case EMM_CAUSE_TA_NOT_ALLOWED:
                    if ((mccmnc[0] == 0x03 && mccmnc[1] == 0x03 && mccmnc[2] == 0x04 && 
					    mccmnc[3] == 0x00 && mccmnc[4] == 0x02 && mccmnc[5] == 0x00) ||
						(mccmnc[0] == 0x03 && mccmnc[1] == 0x03 && mccmnc[2] == 0x04 && 
					    mccmnc[3] == 0x00 && mccmnc[4] == 0x03 && mccmnc[5] == 0x0f))
					{
                        // change to cause 13 in operator 334020 / 33403f
                        cust_cause = EMM_CAUSE_ROAMING_NOT_ALLOWED_IN_TA;
					}
					else
					{
						cust_cause = emm_cause;   // no change
					}
                    break;

                default:
                    // no change
                    cust_cause = emm_cause;
                    break;
            }
            break;

        case EMM_MSG_TAU_REJECT:

            switch (emm_cause)
            {			
				// AT&T dometsic roaming requirement: mapping emm cause #12 to #13
                case EMM_CAUSE_TA_NOT_ALLOWED:
                    if ((mccmnc[0] == 0x03 && mccmnc[1] == 0x03 && mccmnc[2] == 0x04 && 
					    mccmnc[3] == 0x00 && mccmnc[4] == 0x02 && mccmnc[5] == 0x00) ||
						(mccmnc[0] == 0x03 && mccmnc[1] == 0x03 && mccmnc[2] == 0x04 && 
					    mccmnc[3] == 0x00 && mccmnc[4] == 0x03 && mccmnc[5] == 0x0f))
					{
                        // change to cause 13 in operator 334020 / 33403f
                        cust_cause = EMM_CAUSE_ROAMING_NOT_ALLOWED_IN_TA;
					}
					else
					{
						cust_cause = emm_cause;   // no change
					}
                    break;
					
                default:
                    // no change
                    cust_cause = emm_cause;
                    break;
            }
            break;

        case EMM_MSG_DETACH_REQUEST:

            switch (emm_cause)
            {
                default:
                    // no change
                    cust_cause = emm_cause;
                    break;
            }
            break;


        default:
            // no change
            cust_cause = emm_cause;
            break;
    }
    
    return cust_cause;
}
/**
 * @brief  This function is to get customized T3402 after a NW Deatch of type re-attach not required with some specific cause
 *
 * @param[in] emm_cause: 24.301 Annex A Cause values for EPS mobility management
 * @param[out] cust_t3402: the customized T3402 value
 *
 * @return	kal_bool
 * @retval  KAL_TRUE        Customized value is needed for this cause; cust_t3402 returns the value
 * @retval  KAL_FALSE      No customized value
 */
kal_bool emm_custom_get_t3402_nw_detach_other_cause(emm_cause_enum emm_cause, kal_uint32 *cust_t3402)
{
    switch (emm_cause)
    {
    case EMM_CAUSE_NO_EPS_CTXT_ACT:     // #40
        *cust_t3402 = CUSTOM_T3402_VALUE;
        return KAL_TRUE;
        break;

    default:
        break;
    }
    return KAL_FALSE;
}

/**
 *  @brief  This function is used to customize the length of local release timer for PLMN List in Connected Mode (EMM_T_PLMNLIST_REL)
 *
 *
 * @return    kal_uint32
 * @retval    the length of local release timer for PLMN List in Connected Mode (EMM_T_PLMNLIST_REL) in sec
 * 
 */
kal_uint32 emm_custom_get_plmn_list_local_release_timer_length()
{
    return CUSTOM_EMM_T_PLMNLIST_REL;
}

/**
 *  @brief  This function is used to obtain the period of ignore ps paging after data switch 
 *
 *
 * @return    kal_uint32
 * @retval    the period to ignore ps paging after data switch  (in seconds)
 * 
 */
kal_uint32 emm_custom_get_ignore_ps_paging_timer_length()
{
    return CUSTOM_EMM_T_IGNORE_PS_PAGING;
}

/**
 * @brief  This function is used to get the customized value of the counter for NW detach abnormal case b convert to re-attach
 *
 *
 * @return    kal_uint8
 * @retval    the customized value of the counter for NW detach abnormal case b convert to re-attach
 * 
 */
kal_uint8 emm_custom_get_nw_det_enh_max_counter()
{
	return CUSTOM_NW_DET_ENH_MAX_COUNTER;
}

/**
 * @brief  This function is used to get the customized interval time for NW detach abnormal case b convert to re-attach
 *
 *
 * @return    kal_uint8
 * @retval    the customized interval time for NW detach abnormal case b convert to re-attach
 * 
 */
kal_uint32 emm_custom_get_nw_det_enh_max_interval_time()
{
	return CUSTOM_NW_DET_ENH_MAX_INTERVAL_TIME;
}

/**
 * @brief  This function is to check if current EMM cause need to be treated in the feature of NW 
 *         detach abnormal case b convert to re-attach
 *
 * @param[in] emm_cause: 24.301 Annex A Cause values for EPS mobility management
 * @param[in] mccmnc:    Current camping plmn id. One can customize applied cause depending on the plmn id.
 *
 * @return	kal_bool
 * @retval  KAL_TRUE     current EMM cause need to be treated in the feature of NW detach abnormal 
 *                       case b convert to re-attach
 * @retval  KAL_FALSE    current EMM cause need NOT to be treated in the feature of NW detach abnormal 
 *                       case b convert to re-attach
 * 
 */
kal_bool emm_custom_is_nw_det_enh_cause(emm_cause_enum emm_cause, kal_uint8 *mccmnc)
{
	switch (emm_cause)
	{
        case EMM_CAUSE_NO_EPS_CTXT_ACT: // #40
	        return KAL_TRUE;
			break;
			
        default:
	        return KAL_FALSE;
			break;
	}
}
/**
 *  @brief  This function is used to obtain the period of queue ps paging after SR for ps paging
 *
 *
 * @return    kal_uint32
 * @retval    the period of queue ps paging after SR for ps paging  (in seconds)
 * 
 */
kal_uint32 emm_custom_get_queue_ps_paging_timer_length()
{
    return CUSTOM_EMM_T_QUEUE_PS_PAGING;
}
/**
 *  @brief  This function is used to obtain the period of active queue ps paging
 *
 *
 * @return    kal_uint32
 * @retval    the period of active queue ps paging  (in seconds)
 * 
 */
kal_uint32 emm_custom_get_active_queue_ps_paging_timer_length()
{
    return CUSTOM_EMM_T_ACTIVE_QUEUE_PS_PAGING;
}

/**
 *  @brief  This function is used to customize the timer length for releasing semaphore of ps paging (EMM_T_RELEASE_PAGING_SEMAPHORE)
 *
 *
 * @return    kal_uint32
 * @retval    the timer length for releasing semaphore of ps paging (EMM_T_RELEASE_PAGING_SEMAPHORE) in millisec
 * 
 */

kal_uint32 emm_custom_get_release_paging_semaphore_timer_length()
{
    return CUSTOM_EMM_T_RELEASE_PAGING_SEMAPHORE;
}


/**
 *  @brief  This function is used to customize the length of observation paging timer for ps paging (EMM_T_OBSERVATION_PAGING)
 *
 *
 * @return    kal_uint32
 * @retval    the length of observation paging timer for ps paging (EMM_T_OBSERVATION_PAGING) in sec
 * 
 */

kal_uint32 emm_custom_get_observation_paging_timer_length()
{
    return CUSTOM_EMM_T_OBSERVATION_PAGING;
}

/**
 *  @brief  This function is used to customize the max value of ps paging protect timer for ps paging (EMM_T_PS_PAGING_PROTECT)
 *
 *
 * @return    kal_uint32
 * @retval    the max value of ps paging protect timer for ps paging (EMM_T_PS_PAGING_PROTECT) in sec
 * 
 */

kal_uint32 emm_custom_get_ps_paging_protect_extend_max_value()
{
    return CUSTOM_EMM_T_PS_PAGING_PROTECT_EXTEND_MAX;
}

/**
 *  @brief This function is used to get the customized count for recovery sync TAU
 *
 *
 * @return 	kal_uint8
 * @retval 	the customized count for maximum number of recovery sync TAU done with NW
 *			Value 0 indicates No sync TAU done
 * 
 */
kal_uint8 emm_custom_get_nas_recovery_tau_max_counter()
{
	return CUSTOM_NAS_RECOVERY_TAU_MAX_COUNT;
}
