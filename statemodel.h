//-----------------------------------------------------------------------------------
// Assignment : Lab-02 OpeningSource
// Date       : 09/11/2016
//
// Author     : Holly Davies davieshf@dukes.jmu.edu, Justin Hux huxdr@dukes.jmu.edu
//
// File Name  : statemodel.c 
// ---------------------------------------------------------------------------------- 

#ifndef statemodel_h
#define statemodel_h

#include <stdlib.h>
#include "hardware.h"
#include "state.h"

// Declare all of the states used in the state model.
// They are extern because they are defined (i.e., the  memory is 
// actually allocated) elsewhere (i.e., in the .c files for the 
// individual states).

extern state_t closed;
extern state_t closing;
extern state_t opened;
extern state_t opening;

// Declare all of the functions.

void handle_event( event current_event );

void printStateName(void);

#endif


