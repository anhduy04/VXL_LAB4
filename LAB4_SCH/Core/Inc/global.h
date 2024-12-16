/*
 * global.h
 *
 *  Created on: Nov 28, 2024
 *      Author: ADMIN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "traffic_light.h"
#include "led7_segment.h"
#include "main.h"

#define INIT				1
#define AUTO_RED_GREEN		2
#define AUTO_RED_YELLOW		3
#define AUTO_GREEN_RED		4
#define AUTO_YELLOW_RED		5

#define MAN_RED_GREEN		12
#define MAN_RED_YELLOW		13
#define MAN_GREEN_RED		14
#define MAN_YELLOW_RED		15

#define SET_RED_GREEN		22
#define SET_RED_YELLOW		23
#define SET_GREEN_RED		24
#define SET_YELLOW_RED		25

extern int status;

#endif /* INC_GLOBAL_H_ */
