#include "stm32f0xx.h"
#include "hal_GPIO.h"
#include "hal_sys.h"
#include "hal_pwm.h"


int main(void)
{
	uint16_t pulse = 0;
	Delay_Init(); 
	TIM14_PWM_Config();
	while(1)
	{
//		PWM_OutputVlot(TIM14,pulse);
//		pulse +=100;
//		pulse %=3300;
//		delay_ms(500);
		delay_ms(1000);
		TIM14->CCR1 = 195;//0бу
		delay_ms(1000);
		TIM14->CCR1 = 190;//45бу
		delay_ms(1000);
		TIM14->CCR1 = 185;//90бу
		delay_ms(1000);
		TIM14->CCR1 = 180;//135бу
		delay_ms(1000);
		TIM14->CCR1 = 175;//180бу
		delay_ms(1000);
	}
}

