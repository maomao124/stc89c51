#include <REGX52.H>
#include <intrins.h>


typedef unsigned int u16;
typedef unsigned char u8;


void FLOW_LED2();


void mydelay();

void delay_ms(u16 n);

void delay2_ms(u16 n)
{
	u8 i;
	while (n--)
	{
		i = 111;
		while (i--);
	}
}


sbit BEEP = P2 ^ 3;




void openbeep()
{
	BEEP = 0;
}



void closebeep()
{
	BEEP = 1;
}




void alarmBeep()
{
	BEEP = !BEEP;
}




void led_beep()
{
	BEEP = 0;
	P1 = 0x00;
	delay2_ms(200);
	BEEP = 1;
	P1 = 0xff;

}



void led_beep2()
{
	BEEP = 0;
	FLOW_LED2();
	BEEP = 1;
	P1 = 0xff;
	delay2_ms(1000);

}

int i = 0;

void led_beep3()
{

	P1 = 0x03;
	BEEP = 0;
	delay2_ms(200);

	for (i = 0; i < 7; i++)
	{
		P1 = _crol_(P1, 1);
		delay2_ms(200);
	}

	BEEP = 1;
	P1 = 0xff;
	delay2_ms(1000);
}

