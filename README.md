# avr-onboard-led-flash

Basic demonstration of flashing the onboard LED on PORTB and 4 LED's on PORTD, using the inefficient busy loop (`_delay_ms`) present in `avr-libc`.

Setup Data Direction Registers for PORTB and PORTD:

    DDRB = (1 << DDB5);
    DDRD = (1 << DDD2) | (1 << DDD3) | (1 << DDD4) | (1 << DDD5);

Toggle the LED's by toggling the appropriate register bits:

    PORTB ^= (1 << 5);
    PORTD ^= (1 << PD2) | (1 << PD3) | (1 << PD4) | (1 << PD5);
