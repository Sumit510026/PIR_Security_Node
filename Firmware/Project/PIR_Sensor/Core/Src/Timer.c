/*
 * Timer.c
 *
 *  Created on: Aug 13, 2026
 *      Author: sumit
 */

#include"Timer.h"

static void Timer_Delay_1ms(void);
void Timer_Init(void)
{
	RCC->APB1ENR |= (1U << 0);
	TIM2->PSC = 71;
	TIM2->ARR = 999;
	TIM2->SR &= ~(1U << 0);
	TIM2->CR1 &= ~(1U << 0);
	TIM2->CR1 |= (1U << 0);

}

void Timer_Delay_ms(uint32_t ms)
{
	for(uint32_t i=0; i < ms; i++)
	{
		Timer_Delay_1ms();
	}
}

static void Timer_Delay_1ms(void)
{
	while(!(TIM2->SR & (1U << 0))){

	}
	TIM2->SR &= ~(1U << 0);
}


