#ifndef _beep_H
#define _beep_H


#include "system.h"

#define BEEP_PORT_RCC  	 RCC_APB2Periph_GPIOB
#define BEEP_PIN     	   GPIO_Pin_5	   
#define BEEP_PORT				 GPIOB

void BEEP_Init(void);

#define BEEP   PBout(5)
	


#endif

