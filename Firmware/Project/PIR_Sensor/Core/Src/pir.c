/*
 * pir.c
 *
 *  Created on: Aug 11, 2026
 *      Author: sumit
 */
#include"stm32f1xx.h"
#include"pir.h"

void PIR_Init(void)
{
RCC->APB2ENR |= (1 << 2);
GPIOA->CRL  &= ~(0xfU << 0);
GPIOA->CRL  |=  (0x8U << 0);
}

bool PIR_IsMotionDetected(void)
{

return (GPIOA->IDR & (1U << 0)) != 0U; // U means Unsigned

}



