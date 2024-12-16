/*
 * fsm_automatic.c
 *
 *  Created on: Nov 28, 2024
 *      Author: ADMIN
 */

#include "fsm_automatic.h"

int timeGreen2 = 3;
int timeYellow2 = 2;
int timeGreen1 = 3;
int timeYellow1 = 2;

void fsm_automatic_run() {
	switch (status) {
	case INIT:
		clearAllLed();
		setTimeGreen2 = timeGreen2;
		setTimeYellow2 = timeYellow1;
		setTimeGreen1 = timeGreen1;
		setTimeYellow1 = timeYellow1;
		status = AUTO_RED_GREEN;
		setTimer1(3000);
		setTimer2(20);
		setTimer3(20);
		break;
	case AUTO_RED_GREEN:
		setLedRed1_Green2();
		if (timer2_flag == 1) {
			timeRed1 = timeGreen2 + timeYellow2;
			curTimeGreen2 = timeGreen2;
			timeGreen2--;
			setTimer2(1000);
		}
		if (timer3_flag == 1) {
			update7SEG1(timeRed1);
			update7SEG2(curTimeGreen2);
			setTimer3(250);
		}
		if (timer1_flag == 1) {
			timeYellow2 = setTimeYellow2;
			status = AUTO_RED_YELLOW;
			setTimer1(setTimeYellow2 * 1000);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_RED_GREEN;
			setTimer1(5000);
		}
		if (isButton3Pressed() == 1) {
			timeGreen2 = 3;
			timeYellow2 = 2;
			timeGreen1 = 3;
			timeYellow1 = 2;
			setTimeGreen2 = timeGreen2;
			setTimeYellow2 = timeYellow1;
			setTimeGreen1 = timeGreen1;
			setTimeYellow1 = timeYellow1;
			setTimeRed1 = setTimeGreen2 + setTimeYellow2;
			setTimeRed2 = setTimeGreen1 + setTimeYellow1;
			status = SET_RED_GREEN;
			setTimer1(10000);
		}
		break;
	case AUTO_RED_YELLOW:
		setLedRed1_Yellow2();
		if (timer2_flag == 1) {
			timeRed1 = timeYellow2;
			curTimeYellow2 = timeYellow2;
			timeYellow2--;
			setTimer2(1000);
		}
		if (timer3_flag == 1) {
			update7SEG1(timeRed1);
			update7SEG2(curTimeYellow2);
			setTimer3(250);
		}
		if (timer1_flag == 1) {
			timeGreen1 = setTimeGreen1;
			timeYellow1 = setTimeYellow1;
			status = AUTO_GREEN_RED;
			setTimer1(setTimeGreen1 * 1000);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_RED_YELLOW;
			setTimer1(5000);
		}
		if (isButton3Pressed() == 1) {
			timeGreen2 = 3;
			timeYellow2 = 2;
			timeGreen1 = 3;
			timeYellow1 = 2;
			setTimeGreen2 = timeGreen2;
			setTimeYellow2 = timeYellow2;
			setTimeGreen1 = timeGreen1;
			setTimeYellow1 = timeYellow1;
			setTimeRed1 = setTimeGreen2 + setTimeYellow2;
			setTimeRed2 = setTimeGreen1 + setTimeYellow1;
			status = SET_RED_YELLOW;
			setTimer1(5000);
		}
		break;
	case AUTO_GREEN_RED:
		setLedGreen1_Red2();
		if (timer2_flag == 1) {
			timeRed2 = timeGreen1 + timeYellow1;
			curTimeGreen1 = timeGreen1;
			timeGreen1--;
			setTimer2(1000);
		}
		if (timer3_flag == 1) {
			update7SEG1(curTimeGreen1);
			update7SEG2(timeRed2);
			setTimer3(250);
		}
		if (timer1_flag == 1) {
			timeYellow1 = setTimeYellow1;
			status = AUTO_YELLOW_RED;
			setTimer1(setTimeYellow1 * 1000);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_GREEN_RED;
			setTimer1(5000);
		}
		if (isButton3Pressed() == 1) {
			timeGreen2 = 3;
			timeYellow2 = 2;
			timeGreen1 = 3;
			timeYellow1 = 2;
			setTimeGreen2 = timeGreen2;
			setTimeYellow2 = timeYellow2;
			setTimeGreen1 = timeGreen1;
			setTimeYellow1 = timeYellow1;
			setTimeRed1 = setTimeGreen2 + setTimeYellow2;
			setTimeRed2 = setTimeGreen1 + setTimeYellow1;
			status = SET_GREEN_RED;
			setTimer1(5000);
		}
		break;
	case AUTO_YELLOW_RED:
		setLedYellow1_Red2();
		if (timer2_flag == 1) {
			timeRed2 = timeYellow1;
			curTimeYellow1 = timeYellow1;
			timeYellow1--;
			setTimer2(1000);
		}
		if (timer3_flag == 1) {
			update7SEG1(curTimeYellow1);
			update7SEG2(timeRed2);
			setTimer3(250);
		}
		if (timer1_flag == 1) {
			timeGreen2 = setTimeGreen2;
			timeYellow2 = setTimeYellow2;
			status = AUTO_RED_GREEN;
			setTimer1(setTimeGreen2 * 1000);
		}
		if (isButton1Pressed() == 1) {
			status = MAN_YELLOW_RED;
			setTimer1(5000);
		}
		if (isButton3Pressed() == 1) {
			timeGreen2 = 3;
			timeYellow2 = 2;
			timeGreen1 = 3;
			timeYellow1 = 2;
			setTimeGreen2 = timeGreen2;
			setTimeYellow2 = timeYellow2;
			setTimeGreen1 = timeGreen1;
			setTimeYellow1 = timeYellow1;
			setTimeRed1 = setTimeGreen2 + setTimeYellow2;
			setTimeRed2 = setTimeGreen1 + setTimeYellow1;
			status = SET_YELLOW_RED;
			setTimer1(5000);
			setTimer3(250);
		}
		break;
	default:
		break;
	}
}

