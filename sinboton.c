#include <avr/io.h>
#include <util/delay.h>


const int demora = 1000; 
char num[10] = {0B111111,0B001100,0B011011,0B11110,0B101100,0B110110,0B110111,0B011100,0B111111,0B111110};
int g = PD6;
int main()
{ 
 DDRB = 0B11111111;
 DDRD = 1<<6;
	while (1)
      {
	    PORTB = num[0];
		PORTD &= ~(1<<g);
		_delay_ms(demora);
	        PORTB = num[1];
		PORTD &= ~ (1<<g);
		_delay_ms(demora);
	        PORTB = num[2];
		PORTD = (1<<g);
		_delay_ms(demora);
	        PORTB = num[3];
		PORTD = (1<<g);
		_delay_ms(demora);
		PORTB = num[4];
		PORTD = (1<<g);
		_delay_ms(demora);
		PORTB = num[5];
		PORTD = (1<<g);
		_delay_ms(demora);
	        PORTB = num[6];
		PORTD = (1<<g);
		_delay_ms(demora);
		PORTB = num[7];
		PORTD &= ~(1<<g);
		_delay_ms(demora);
		PORTB = num[8];
		PORTD = (1<<g);
		_delay_ms(demora);
		PORTB = num[9];
		PORTD = (1<<g);
		_delay_ms(demora);

      }     
}
