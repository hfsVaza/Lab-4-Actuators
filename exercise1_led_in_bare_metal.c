#define F_CPU 16000000UL        // 16MHz on the CPU
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // Set PB5 as output (DDB5 bit in DDRB = 1)
    DDRB |= (1 << DDB5);

    while (1)
    {
        // LED ON for 3 seconds
        PORTB |= (1 << PORTB5);   // PB5 oon high
        _delay_ms(3000);

        // LED OFF for 1 second
        PORTB &= ~(1 << PORTB5);  // PB5 on low
        _delay_ms(1000);
    }
}
