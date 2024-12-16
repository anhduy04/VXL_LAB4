/*
 * scheduler.h
 *
 *  Created on: Nov 28, 2024
 *      Author: ADMIN
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

typedef struct {
	void (*pTask)(void); // Pointer to the task (must be a 'void ( void )' function)
	uint32_t Delay;	// Delay (ticks) until the function will (next) be run
	uint32_t Period;	// Interval (ticks) between subsequent runs.
	uint8_t RunMe;	// Incremented (by scheduler) when task is due to execute

	uint32_t TaskID;	// This is a hint to solve the question below.
} sTask;

#define SCH_MAX_TASKS	40

void SCH_Init(void);

void SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);

void SCH_Update(void);

void SCH_Dispatch_Tasks(void);

#endif /* INC_SCHEDULER_H_ */
