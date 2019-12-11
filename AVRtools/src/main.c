#include "settings.h"//moje vlastní  hlavičkový soubory
#include <avr/io.h> //systémovy hlavičkový soubory
#include <util/delay.h>

void setup(void) {
   DDRB |= (1 << PB5);
   PORTB |= (1 << PB4); //PŘIPOJ PULL - UP REZISTOR
}


int main(void)
{
  setup();

    while (1)
    {
        PORTB |= (1 << PB5);//nastavím jedničku a bude svítit(|=); bude blíkat (^=)
        _delay_ms(300);
        PORTB &= ~(1 << PB5);//nastaví na 0 NESVÍTÍ
        _delay_ms(700);

        PORTB ^= (1 << PB5);//negace příslušného bitu
        _delay_ms(100);
        PORTB ^= (1 << PB5);//negace příslušného bitu
        _delay_ms(100);

        //---Přečteni obsahu nějákého pinu
    }

    return 0;
} /* main */
