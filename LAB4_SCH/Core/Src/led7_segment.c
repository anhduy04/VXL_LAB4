/*
 * led7_segment.c
 *
 *  Created on: Nov 28, 2024
 *      Author: ADMIN
 */

#include "traffic_light.h"

void display7SEG1(int num1) {
	if (num1 < 0) {
		return;
	}
	switch (num1) {
	case 0:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, SET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, SET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, SET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, SET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, SET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, SET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, SET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, SET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, SET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, SET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, SET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, SET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG_A1_GPIO_Port, SEG_A1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B1_GPIO_Port, SEG_B1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C1_GPIO_Port, SEG_C1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D1_GPIO_Port, SEG_D1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E1_GPIO_Port, SEG_E1_Pin, SET);
		HAL_GPIO_WritePin(SEG_F1_GPIO_Port, SEG_F1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G1_GPIO_Port, SEG_G1_Pin, RESET);
		break;
	default:
		break;
	}
}

void display7SEG2(int num2) {
	if (num2 < 0) {
		return;
	}
	switch (num2) {
	case 0:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, SET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, SET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, SET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, SET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, SET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, SET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, SET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, SET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, SET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, SET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, SET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, SET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG_A2_GPIO_Port, SEG_A2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_B2_GPIO_Port, SEG_B2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_C2_GPIO_Port, SEG_C2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_D2_GPIO_Port, SEG_D2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_E2_GPIO_Port, SEG_E2_Pin, SET);
		HAL_GPIO_WritePin(SEG_F2_GPIO_Port, SEG_F2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_G2_GPIO_Port, SEG_G2_Pin, RESET);
		break;
	default:
		break;
	}
}

int index1 = 0;
int index2 = 0;
void update7SEG1(int time1) {
	int timeLed1 = time1 / 10;
	int timeLed2 = time1 % 10;
	switch (index1) {
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		display7SEG1(timeLed1);
		index1 = 1;
		break;
	case 1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		display7SEG1(timeLed2);
		index1 = 0;
		break;
	default:
		break;
	}
}

void update7SEG2(int time2) {
	int timeLed3 = time2 / 10;
	int timeLed4 = time2 % 10;
	switch (index2) {
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		display7SEG2(timeLed3);
		index2 = 1;
		break;
	case 1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		display7SEG2(timeLed4);
		index2 = 0;
		break;
	default:
		break;
	}
}

