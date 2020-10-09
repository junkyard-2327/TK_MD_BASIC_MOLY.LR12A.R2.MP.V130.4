/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 1999-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*************************************************************************
 *
 * File Name:       fsm.h
 * Project:         ISOLIB C Library
 * Original Author: Dale Ehman
 * Creation Date:   Aug. 26, 1997
 *
 * Description:     Header for Generic FSM C Language implementation.
 *
 * Restrictions:    
 *
 * Dependencies:    
 *
 ****************************************************************************
 ****************************************************************************
 *
 * RCS Log Information
 *
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
 *
 * removed!
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
 *
 ************************************************************************/

#ifndef __FSM_H_
#define __FSM_H_

#include "ottsdefs.h"
#include "sysdefs.h"




/* Constants */
/* <TBD: Due to a GNU compiler-bug, the MAX_PARM_STRUCT_SIZE must be set
         to: ((a multiple of 4) - 1).> */
#define MAX_PARM_STRUCT_SIZE 39

#define EVENTQ_SIZE           5

#define UNEXPECTED_EVENT_AC  0xFE
#define NO_EVENT             0xFF
#define NO_ACTION            0

#ifndef FSM_COND_ST
#define FSM_COND_ST          1
#endif

#ifdef FSM_COND_ST
#define CONDITIONAL_STATE    0x7F
#define CHANGE_STATE_ALWAYS  TRUE
#define ACTION_DRIVES_CHANGE FALSE
#endif

/* Define FSM Base Elements */
typedef kal_uint8 FSMState;
typedef kal_uint8 FSMEvent;
typedef kal_uint8 FSMAction; 

/* <TBD: Due to a GNU compiler-bug, 'plist' must be the first entry in this structure.> */
typedef struct 
{
  kal_uint8 plist[ MAX_PARM_STRUCT_SIZE ];
  FSMEvent  event;
} FSMTBLEvent;

typedef kal_uint8 ProtocolEngineID;

/* Define FSM Descriptor Structure */

struct FSMDescriptorStruct
{
  FSMTBLEvent eventQ[EVENTQ_SIZE]; /* Event Queue        */
  kal_uint8   put_index;           /* Put Index for Q    */
  kal_uint8   get_index;           /* Get Index for Q    */
  kal_uint8   num_in_queue;        /* Current number of entries in the queue */

  FSMState  state;                 /* Current State      */

#ifdef FSM_COND_ST
  FSMState  conditional_state;     /* Conditional State  */
  kal_bool  change_flag;           /* If TRUE, always change state */
#endif

  FSMState  num_state;             /* Number of States   */
  FSMEvent  num_event;             /* Number of Events   */
  FSMAction num_action;            /* Number of Actions  */

  FSMState*   state_table;         /* State Table        */
  kal_uint16  state_size;          /* State Entry Size   */
  kal_uint16  event_size;          /* Event Entry Size   */

  /* Ptr to Action Handler Function */
  kal_bool ( *action_handler )( struct FSMDescriptorStruct* fsm, FSMAction action );

  /* Instance Related User Parameters */
  void*       user_parms;

  kal_uint8   id;
  ProtocolEngineID engineId;
  kal_bool    extendedTracing;

#if (ITRACE_TYPE == TOKEN_TRACING)
  kal_uint8   fsmNameTableId;
  kal_uint8   stateNameTableId;
  kal_uint8   eventNameTableId;

#else   /* !TOKEN_TRACING */
  const kal_char** fsmNameTable;
  const kal_char** stateNameTable;
  const kal_char** eventNameTable;
#endif  /* ITRACE_TYPE */
};

/* Useful Typedefs */
typedef struct FSMDescriptorStruct FSMDescriptor;
typedef FSMDescriptor* FSMPtr;
typedef kal_bool (*FSMActionFuncPtr) (FSMPtr fsm, FSMAction action);


/* Generic FSM Processing Functions */
void initializeFSM( FSMPtr fsm, FSMState* table,
                    kal_uint8 num_state, kal_uint8 num_event, kal_uint8 num_action,
                    FSMState initial_state, FSMActionFuncPtr action_handler, 
                    void* user_parms );

void processEventWithNoParms( FSMPtr fsm, FSMEvent event );
void processEventWithParmStruct( FSMPtr fsm, FSMEvent event, void* parm_struct, kal_uint8 size );

#ifdef FSM_COND_ST
void setConditionalState( FSMPtr fsm, FSMState cond_state );
void setChangeFlag( FSMPtr fsm, kal_bool change_always );
#endif

/* Event Parameter Query */
void* getEventParameters( FSMPtr fsm );
FSMEvent getCurrentEvent( FSMPtr fsm );

/* FSM Table Generation Macros */

/* The macro MAKEFSMTable creates a FSM table, just provide the name of the
 * table, the number of states, the number of events and the number of
 * actions that are to be executed to get to that state.
 */

/*
 * Example of make fsm table macro
 * Intialize table
 * MAKEFSMTable(callFSM,2,3,1) = {{1,b},{2,c},{3,d},{4,e},{5,f},{0,a}};
 *    where 0-5 represent the different states
 *    where a-e represent different actions
 * Note this assumes that the states and actions are the same size 
 * The + 1 is for the state entry
 */
#define MAKEFSMTable(tableName,numStates,numEvents,numActions) \
static CONST kal_uint8 ROM tableName[numStates][numEvents][numActions + 1]


/* The macro FSMTable is used to Instantiate a FSMTable
 * It just does the required type casting
 *
 * Example
 * Instantiate a FSMTBL with FSMTable callFSM
 * FSMTBL callFSMTable(FSMTable(callFSM),2,3,1,0);
 */
#define FSMTable(tableName) (FSMState*)&tableName

#ifdef TRACEON
void setFSMTraceInfo (FSMPtr fsm, kal_uint8 fsmId, ProtocolEngineID engineId);

#define FSMTRACE_INFO(fsm, id, engineId) setFSMTraceInfo(fsm, id, engineId)

#if (ITRACE_TYPE == TOKEN_TRACING)
void setFSMExtendedTraceInfo (FSMPtr fsm, kal_uint8 fsmNameTableId, kal_uint8 fsmId,
                              ProtocolEngineID engineId,
                              kal_uint8 stateTableId, kal_uint8 eventTableId);

#define FSMEXTTRACE_INFO(fsm, engineId, fsmNameTable, fsmNameTableId, fsmId, \
                         stateNameTable, stateNameTableId, \
                         eventNameTable, eventNameTableId) \
   setFSMExtendedTraceInfo(fsm, fsmNameTableId, fsmId, engineId, \
                           stateNameTableId, eventNameTableId)

#else   /* !TOKEN_TRACING */
void setFSMExtendedTraceInfo (FSMPtr fsm, const kal_char* fsmNameTable[],
                              kal_uint8 fsmId, ProtocolEngineID engineId,
                              const kal_char* stateTable[],
                              const kal_char* eventTable[]);

#define FSMEXTTRACE_INFO(fsm, engineId, fsmNameTable, fsmNameTableId, fsmId, \
                         stateNameTable, stateNameTableId, \
                         eventNameTable, eventNameTableId) \
   setFSMExtendedTraceInfo(fsm, fsmNameTable, fsmId, engineId, \
                           stateNameTable, eventNameTable)
#endif  /* ITRACE_TYPE */ 

#else   /* !TRACEON */
#define FSMTRACE_INFO(fsm, id, engineId)
#define FSMEXTTRACE_INFO(fsm, engineId, fsmNameTable, fsmNameTableId, fsmId, \
                         stateNameTable, stateNameTableId, \
                         eventNameTable, eventNameTableId) 
#endif  /* TRACEON */






#endif  /* __FSM_H_ */
