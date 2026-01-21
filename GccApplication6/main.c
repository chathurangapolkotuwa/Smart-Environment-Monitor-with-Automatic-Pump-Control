#define F_CPU 16000000UL  // Define clock speed as 16 MHz
#include <avr/io.h>       // Include AVR register definitions
#include <util/delay.h>   // Include delay functions

int main(void)
{
	// Set PD5 (Pin 11 on ATmega328PB) as output
	DDRD |= (1 << PD5);

	while (1)
	{
		// Toggle PD5 (turn LED on/off)
		PORTD ^= (1 << PD5);

		// Wait for 500 milliseconds
		_delay_ms(500);
	}
}
