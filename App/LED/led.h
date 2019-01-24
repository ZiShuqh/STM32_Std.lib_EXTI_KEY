#ifndef _led_H
#define _led_H


#include "stm32f10x.h"


#define LED_PORT_RCC  RCC_APB2Periph_GPIOC
#define LED_PIN       GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7
#define LED_PORT      GPIOC

void LED_Init(void);


#define led1 PCout(0)
#define led2 PCout(1)
#define led3 PCout(2)
#define led4 PCout(3)
#define led5 PCout(4)
#define led6 PCout(5)
#define led7 PCout(6)
#define led8 PCout(7)

#endif


