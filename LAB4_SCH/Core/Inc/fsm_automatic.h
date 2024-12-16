/*
 * fsm_automatic.h
 *
 *  Created on: Nov 28, 2024
 *      Author: ADMIN
 */

#ifndef INC_FSM_AUTOMATIC_H_
#define INC_FSM_AUTOMATIC_H_

#include "global.h"
#include "fsm_setting.h"

int timeRed1;
int timeGreen2;
int timeYellow2;

int timeGreen1;
int timeYellow1;
int timeRed2;

int curTimeGreen2;
int curTimeYellow2;

int curTimeGreen1;
int curTimeYellow1;

void fsm_automatic_run();

#endif /* INC_FSM_AUTOMATIC_H_ */
