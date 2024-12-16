/*
 * fsm_setting.h
 *
 *  Created on: Nov 28, 2024
 *      Author: ADMIN
 */

#ifndef INC_FSM_SETTING_H_
#define INC_FSM_SETTING_H_

#include "global.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"

int setTimeRed1;
int setTimeGreen2;
int setTimeYellow2;

int setTimeGreen1;
int setTimeYellow1;
int setTimeRed2;

void fsm_setting_run();

#endif /* INC_FSM_SETTING_H_ */
