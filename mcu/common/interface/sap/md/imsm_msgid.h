/*******************************************************************************
* Filename:
* ---------
*   imsm_msgid.h
*
* Project:
* --------
*
*
* Description:
* ------------
*
*
* Author:
* -------
*
*
*
* ==========================================================================
* $Log$
*
* 06 28 2017 chang-yen.chih
* [MOLY00260272] Sync code from LR12A.MP1 to LR12A.MP1.5.RDIT.DEV
* 	
* 	code sync + CL already on LR12A.MP1.5.RDIT.DEV
*
*
****************************************************************************/
#include "module_msg_range.h"

#ifndef _IMSM_MSGID_H
#define _IMSM_MSGID_H

MODULE_MSG_BEGIN( MSG_ID_IMSM_CODE_BEGIN )
    //From users to IMSM
    MSG_ID_IMSM_FROM_USER_BEGIN = MSG_ID_IMSM_CODE_BEGIN,
        MSG_ID_IMSM_SET_ROUTE_DNS_REQ,
        MSG_ID_IMSM_IMC_IMS_DEREG_CNF,
        MSG_ID_IMSM_IMC_IMS_CALL_STATUS_IND,
        MSG_ID_IMSM_IMSM_GET_VERSION_REQ,
    MSG_ID_IMSM_FROM_USER_END,

    //IMSM to Users
    MSG_ID_IMSM_TO_USER_BEGIN,
        MSG_ID_IMSM_SET_ROUTE_DNS_CNF,
        MSG_ID_IMSM_WFC_IND,
        MSG_ID_IMSM_IMSM_GET_VERSION_CNF,
    MSG_ID_IMSM_TO_USER_END,

MODULE_MSG_END( MSG_ID_IMSM_CODE_TAIL )

#endif /* _IMSM_MSGID_H */
