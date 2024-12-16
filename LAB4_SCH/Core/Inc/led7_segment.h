/*
 * led7_segment.h
 *
 *  Created on: Nov 28, 2024
 *      Author: ADMIN
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_

#include "main.h"
#include "global.h"

extern int index1;
extern int index2;

void display7SEG1(int num1);
void display7SEG2(int num2);

void update7SEG1(int time);
void update7SEG2(int time);

#endif /* INC_LED7_SEGMENT_H_ */
