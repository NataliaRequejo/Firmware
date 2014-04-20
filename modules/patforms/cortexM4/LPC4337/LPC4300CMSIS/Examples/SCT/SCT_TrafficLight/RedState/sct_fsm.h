#ifndef __SCT_FSM_H__
#define __SCT_FSM_H__

/* Generated by fzmparser version 1.14 --- DO NOT EDIT! */

#include "sct_user.h"

extern void sct_fsm_init(void);

/* macros for defining the mapping between IRQ and events */
#define SCT_IRQ_EVENT_crossingTimeout (1)

/* Input assignments */
#define SCT_INPUT_CROSS_REQUEST (0)

/* Output assignments (and their defaults if specified) */
#define SCT_OUTPUT_AUTO_CROSS (6)
#define SCT_OUTPUT_BLUE_N (4)
#define SCT_OUTPUTPRELOAD_BLUE_N (1)
#define SCT_OUTPUT_GREEN_N (2)
#define SCT_OUTPUTPRELOAD_GREEN_N (0)
#define SCT_OUTPUT_RED_N (3)
#define SCT_OUTPUTPRELOAD_RED_N (1)
#define SCT_OUTPUT_REQUEST (5)
#define SCT_OUTPUTPRELOAD_REQUEST (0)


/* Match register reload macro definitions */
#define reload_cross_timeout(value) LPC_SCT->MATCHREL_H[0] = value;
#define reload_pedestrian_stop(value) LPC_SCT->MATCHREL_L[0] = value;
#define reload_pedestrian_walk(value) LPC_SCT->MATCHREL_L[1] = value;
#define reload_red_off(value) LPC_SCT->MATCHREL_L[2] = value;
#define reload_red_on(value) LPC_SCT->MATCHREL_L[3] = value;
#define reload_yellow_off(value) LPC_SCT->MATCHREL_L[4] = value;
#define reload_yellow_on(value) LPC_SCT->MATCHREL_L[5] = value;

#endif