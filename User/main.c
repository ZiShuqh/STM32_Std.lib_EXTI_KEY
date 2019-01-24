#include "stm32f10x.h"
#include "led.h"
#include "system.h"
#include "SysTick.h"
#include "key.h"
#include "exti.h"



int main()
{
  u8 i=0;
	SysTick_Init(72);
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	LED_Init();
	KEY_Init();
	My_EXTI_Init();
	
	while(1)
	{
		i++;
		if(i%20==0)
		{
			led1=!led1;  //表示正常工作
		}
		delay_ms(10);
	}

}

