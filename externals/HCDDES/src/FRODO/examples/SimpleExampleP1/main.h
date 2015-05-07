/*** Generated by the FRODO code generator -- DO NOT HAND EDIT ***/


#ifndef __FRODO_GENERATED_MAIN_H__
#define __FRODO_GENERATED_MAIN_H__


/*** Included Header Files ***/
#include "frodo.h"


/*****************************************************************************/


/*** Message Structures ***/

// Message struct for message type ...
typedef struct {
	pfloat_t value;
} data_t;


// Global Context
typedef struct {
	// Schedulable instances
	SchedSchedulable*			task1;
	// Peripheral instances
	UDPChannel*					udpChannel;
	// Message ports
	PortId_t					msgPort;
} Context_t;


/*****************************************************************************/


#endif // __FRODO_GENERATED_MAIN_H__
