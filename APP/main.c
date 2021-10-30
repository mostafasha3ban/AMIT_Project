
#include "STD_TYPES.h"
#include "LCD.h"
#include "BUZZER.h"
#include "LED.h"
#include "EX_INT.h"
#include "REG.h"
#include <avr/interrupt.h>
#define  F_CPU 16000000UL
#include "util/delay.h"


int main(void)
{	
//******** Initialize modules used *************
	EXTERNAL_INT_0_INIT();
	LED_INIT(M_LED);
	LCD_INIT();
	BUZZER_INIT();
	u32 i = 0;
    while(1)
    {		if(i%10==0)
			BUZZER_ONCE(); /// turn on buzzer once if 10 seconds pass
		LCD_WRITE_INT(i);
		_delay_ms(1000);
		LCD_CLR();
		i++;
	}
}

ISR(INT0_vect).   // Interrupt to toggle middle LED
{
	LED_TOGGLE(M_LED);
}