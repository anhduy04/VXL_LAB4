/*
 * button.c
 *
 *  Created on: Nov 28, 2024
 *      Author: ADMIN
 */

#include "button.h"

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;

int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;

int TimerForKey1Press = 200;
int TimerForKey2Press = 200;
int TimerForKey3Press = 200;
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int isButton1Pressed() {
	if (button1_flag == 1) {
		button1_flag = 0;
		return 1;
	}
	return 0;
}

int isButton2Pressed() {
	if (button2_flag == 1) {
		button2_flag = 0;
		return 1;
	}
	return 0;
}

int isButton3Pressed() {
	if (button3_flag == 1) {
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKey1Process() {
	button1_flag = 1;
}

void subKey2Process() {
	button2_flag = 1;
}

void subKey3Process() {
	button3_flag = 1;
}

void getKey1Input() {
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)) {
		if (KeyReg3 != KeyReg2) {
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE) {
				subKey1Process();
				TimerForKey1Press = 200;
			}
		} else {
			TimerForKey1Press--;
			if (TimerForKey1Press == 0) {
				KeyReg3 = NORMAL_STATE;
			}
		}
	}
}

void getKey2Input() {
	KeyReg4 = KeyReg5;
	KeyReg5 = KeyReg6;
	KeyReg6 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	if ((KeyReg4 == KeyReg5) && (KeyReg5 == KeyReg6)) {
		if (KeyReg7 != KeyReg6) {
			KeyReg7 = KeyReg6;
			if (KeyReg6 == PRESSED_STATE) {
				subKey2Process();
				TimerForKey2Press = 200;
			}
		} else {
			TimerForKey2Press--;
			if (TimerForKey2Press == 0) {
				KeyReg7 = NORMAL_STATE;
			}
		}
	}
}

void getKey3Input() {
	KeyReg8 = KeyReg9;
	KeyReg9 = KeyReg10;
	KeyReg10 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	if ((KeyReg8 == KeyReg9) && (KeyReg9 == KeyReg10)) {
		if (KeyReg11 != KeyReg10) {
			KeyReg11 = KeyReg10;
			if (KeyReg10 == PRESSED_STATE) {
				subKey3Process();
				TimerForKey3Press = 200;
			}
		} else {
			TimerForKey3Press--;
			if (TimerForKey3Press == 0) {
				KeyReg11 = NORMAL_STATE;
			}
		}
	}
}


