#include<reg51.h>
#include<intrins.h>

sbit LED0 = P1 ^ 0;
sbit LED2 = P1 ^ 2;
sbit LED4 = P1 ^ 4;
sbit LED6 = P1 ^ 6;
sbit LED1 = P1 ^ 1;
sbit LED3 = P1 ^ 3;
sbit LED5 = P1 ^ 5;
sbit LED7 = P1 ^ 7;

typedef unsigned int u16;
typedef unsigned char u8;
void delay_ms(u16 n)
{
	u8 i;
	while (n--)
	{
		i = 111;
		while (i--);
	}
}




void main()
{
	int i;

	while (1)
	{
		LED0 = 1;
		LED1 = 0;
		LED2 = 1;
		LED3 = 0;
		LED4 = 1;
		LED5 = 0;
		LED6 = 1;
		LED7 = 0;

		delay_ms(100);

		LED0 = 1;
		LED1 = 1;
		LED2 = 1;
		LED3 = 1;
		LED4 = 1;
		LED5 = 1;
		LED6 = 1;
		LED7 = 1;

		delay_ms(100);

	}

	while (1);

}
