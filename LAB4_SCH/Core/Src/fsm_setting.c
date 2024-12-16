/*
 * fsm_setting.c
 *
 *  Created on: Nov 28, 2024
 *      Author: ADMIN
 */

#include "fsm_setting.h"

void fsm_setting_run() {
	switch (status) {
	case SET_RED_GREEN:
		setLedRed1_Green2();
		if (timer3_flag == 1) {
			update7SEG1(setTimeRed1);
			update7SEG2(setTimeGreen2);
			setTimer3(250);
		}
		if (timer1_flag == 1) {
			timeGreen2 = 3;
			timeYellow2 = 2;
			status = AUTO_RED_GREEN;
			setTimer1(3000);
			setTimer2(100);
		}
		if (isButton1Pressed() == 1) {
			status = SET_RED_YELLOW;
			setTimer1(10000);
		}
		if (isButton2Pressed() == 1) {
			setTimeGreen2++;
			setTimeRed1 = setTimeGreen2 + setTimeYellow2;
			update7SEG1(setTimeRed1);
			update7SEG2(setTimeGreen2);
		}
		if (isButton3Pressed() == 1) {
			timeGreen2 = setTimeGreen2;
			timeYellow2 = setTimeYellow2;
			timeGreen1 = setTimeGreen1;
			timeYellow1 = setTimeYellow1;
			status = AUTO_RED_GREEN;
			setTimer1(setTimeGreen2 * 1000);
			setTimer2(100);
		}
		break;
	case SET_RED_YELLOW:
		setLedRed1_Yellow2();
		if (timer3_flag == 1) {
			update7SEG1(setTimeRed1);
			update7SEG2(setTimeYellow2);
			setTimer3(250);
		}
		if (timer1_flag == 1) {
			timeGreen2 = 3;
			timeYellow2 = 2;
			status = AUTO_RED_YELLOW;
			setTimer1(2000);
			setTimer2(100);
		}
		if (isButton1Pressed() == 1) {
			status = SET_GREEN_RED;
			setTimer1(10000);
		}
		if (isButton2Pressed() == 1) {
			setTimeYellow2++;
			setTimeRed1 = setTimeGreen2 + setTimeYellow2;
			update7SEG1(setTimeRed1);
			update7SEG2(setTimeYellow2);
		}
		if (isButton3Pressed() == 1) {
			timeGreen2 = setTimeGreen2;
			timeYellow2 = setTimeYellow2;
			timeGreen1 = setTimeGreen1;
			timeYellow1 = setTimeYellow1;
			status = AUTO_RED_YELLOW;
			setTimer1(setTimeYellow2 * 1000);
			setTimer2(100);
		}
		break;
	case SET_GREEN_RED:
		setLedGreen1_Red2();
		if (timer3_flag == 1) {
			update7SEG1(setTimeGreen1);
			update7SEG2(setTimeRed2);
			setTimer3(250);
		}
		if (timer1_flag == 1) {
			timeGreen2 = 3;
			timeYellow2 = 2;
			status = AUTO_GREEN_RED;
			setTimer1(3000);
			setTimer2(100);
		}
		if (isButton1Pressed() == 1) {
			status = SET_YELLOW_RED;
			setTimer1(10000);
		}
		if (isButton2Pressed() == 1) {
			setTimeGreen1++;
			setTimeRed2 = setTimeGreen1 + setTimeYellow1;
			update7SEG1(setTimeGreen1);
			update7SEG2(setTimeRed2);
		}
		if (isButton3Pressed() == 1) {
			timeGreen2 = setTimeGreen2;
			timeYellow2 = setTimeYellow2;
			timeGreen1 = setTimeGreen1;
			timeYellow1 = setTimeYellow1;
			status = AUTO_GREEN_RED;
			setTimer1(setTimeGreen1 * 1000);
			setTimer2(100);
		}
		break;
	case SET_YELLOW_RED:
		setLedYellow1_Red2();
		if (timer3_flag == 1) {
			update7SEG1(setTimeYellow1);
			update7SEG2(setTimeRed2);
			setTimer3(250);
		}
		if (timer1_flag == 1) {
			timeGreen2 = 3;
			timeYellow2 = 2;
			status = AUTO_YELLOW_RED;
			setTimer1(3000);
			setTimer2(100);
		}
		if (isButton1Pressed() == 1) {
			status = SET_RED_GREEN;
			setTimer1(10000);
		}
		if (isButton2Pressed() == 1) {
			setTimeYellow1++;
			setTimeRed2 = setTimeGreen1 + setTimeYellow1;
			update7SEG1(setTimeYellow1);
			update7SEG2(setTimeRed2);
		}
		if (isButton3Pressed() == 1) {
			timeGreen2 = setTimeGreen2;
			timeYellow2 = setTimeYellow2;
			timeGreen1 = setTimeGreen1;
			timeYellow1 = setTimeYellow1;
			status = AUTO_GREEN_RED;
			setTimer1(setTimeYellow1 * 1000);
			setTimer2(100);
		}
		break;
	default:
		break;
	}
}

