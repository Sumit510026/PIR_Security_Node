/*
 * Application.c
 *
 *  Created on: Aug 11, 2026
 *      Author: sumit
 */
#include"pir.h"
#include"LED.h"

void Application_Init(void)
{
	LED_Init();
	PIR_Init();
}

void Application_Run(void)
{
	if(PIR_IsMotionDetected())
	{
		LED_On();
	}
	else
	{
		LED_Off();
	}
}

