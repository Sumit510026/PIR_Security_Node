/*
 * Application.h
 *
 *  Created on: Aug 11, 2026
 *      Author: sumit
 */

#ifndef INC_APPLICATION_H_
#define INC_APPLICATION_H_

void Application_Init(void);
void Application_Run(void);

typedef enum
{
	SYSTEM_DISARMED,
	SYSTEM_ARMED
}SystemState_t;

#endif /* INC_APPLICATION_H_ */
