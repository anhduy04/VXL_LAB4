/*
 * fsm_manual.c
 *
 *  Created on: Nov 28, 2024
 *      Author: ADMIN
 */

#include "fsm_manual.h"

void fsm_manual_run() {
	switch (status) {
	case MAN_RED_GREEN:
		setLedRed1_Green2();
		if (timer1_flag == 1) {
			timeGreen2 = setTimeGreen2;
			timeYellow2 = setTimeYellow2;
			status = AUTO_RED_GREEN;
			setTimer1(setTimeGreen2 * 1000);
			setTimer2(100);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_RED_YELLOW;
			setTimer1(5000);
		}
		break;
	case MAN_RED_YELLOW:
		setLedRed1_Yellow2();
		if (timer1_flag == 1) {
			timeGreen2 = setTimeGreen2;
			timeYellow2 = setTimeYellow2;
			status = AUTO_RED_YELLOW;
			setTimer1(setTimeYellow2 * 1000);
			setTimer2(10);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_GREEN_RED;
			setTimer1(5000);
		}
		break;
	case MAN_GREEN_RED:
		setLedGreen1_Red2();
		if (timer1_flag == 1) {
			timeGreen1 = setTimeGreen1;
			timeYellow1 = setTimeYellow1;
			status = AUTO_GREEN_RED;
			setTimer1(setTimeGreen1 * 1000);
			setTimer2(10);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_YELLOW_RED;
			setTimer1(5000);
		}
		break;
	case MAN_YELLOW_RED:
		setLedYellow1_Red2();
		if (timer1_flag == 1) {
			timeGreen1 = setTimeGreen1;
			timeYellow1 = setTimeYellow1;
			status = AUTO_YELLOW_RED;
			setTimer1(setTimeYellow1 * 1000);
			setTimer2(10);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_RED_GREEN;
			setTimer1(5000);
		}
		break;
	default:
		break;
	}
}

