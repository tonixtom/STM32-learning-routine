#include "stm32f4xx.h"
void LED_Initialize (void)
{
	RCC->AHB1ENR |=  (1ul << 0);                  /* Enable GPIOA clock         */
	/* Configure LED (PA.5) pins as push-pull outputs, No pull-up, pull-down */
	GPIOA->MODER   &= ~((3ul << 2*5));
	GPIOA->MODER   |=  ((1ul << 2*5));
	GPIOA->OTYPER  &= ~((1ul <<   5));
	GPIOA->OSPEEDR &= ~((3ul << 2*5));
	GPIOA->OSPEEDR |=  ((1ul << 2*5));
	GPIOA->PUPDR   &= ~((3ul << 2*5));
}

void LED_On()
{
	GPIOA->BSRRL |= 1ul << 5;
}
int main()
{
	LED_Initialize();//
//     GPIO_Iint();
//     GPIO_ResetBits(GPIOA,GPIO_Pin_5);

	while(1)
	{
	//            GPIO_SetBits(GPIOA,GPIO_Pin_5);
	LED_On();//
	}
}
