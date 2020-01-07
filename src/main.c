#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // make the LED pin an output for PORTB5
    // DDRB = (1 << 5) | (1 << 2);
    // DDRB = 0x00;

    DDRB = (1 << DDB5);
    DDRD = (1 << DDD2) | (1 << DDD3) | (1 << DDD4) | (1 << DDD5);

    while (1)
    {
        _delay_ms(200);

        // toggle the LED
        PORTB ^= (1 << 5);
        // PORTB = 0xFF;

        // PORTB ^= (1 << PB5) | (1 << PB2);
        // PORTB ^= (1 << PB2);

        PORTD ^= (1 << PD2) | (1 << PD3) | (1 << PD4) | (1 << PD5);
        
    }

    return 0;
}