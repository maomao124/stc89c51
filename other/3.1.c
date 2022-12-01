#include<reg51.h>
#include<intrins.h>

sbit LED0a = P1 ^ 0;
sbit LED2a = P1 ^ 2;
sbit LED4a = P1 ^ 4;
sbit LED6a = P1 ^ 6;
sbit LED1a = P1 ^ 1;
sbit LED3a = P1 ^ 3;
sbit LED5a = P1 ^ 5;
sbit LED7a = P1 ^ 7;

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

		for (i = 0; i < 15; i++)
		{
			LED0a = 0;
			LED1a = 1;
			LED2a = 1;
			LED3a = 1;
			LED4a = 1;
			LED5a = 1;
			LED6a = 1;
			LED7a = 1;
			delay_ms(30);
			LED0a = 1;
			LED1a = 0;
			LED2a = 1;
			LED3a = 1;
			LED4a = 1;
			LED5a = 1;
			LED6a = 1;
			LED7a = 1;
			delay_ms(30);
			LED0a = 1;
			LED1a = 1;
			LED2a = 0;
			LED3a = 1;
			LED4a = 1;
			LED5a = 1;
			LED6a = 1;
			LED7a = 1;
			delay_ms(30);
			LED0a = 1;
			LED1a = 1;
			LED2a = 1;
			LED3a = 0;
			LED4a = 1;
			LED5a = 1;
			LED6a = 1;
			LED7a = 1;
			delay_ms(30);
			LED0a = 1;
			LED1a = 1;
			LED2a = 1;
			LED3a = 1;
			LED4a = 0;
			LED5a = 1;
			LED6a = 1;
			LED7a = 1;
			delay_ms(30);
			LED0a = 1;
			LED1a = 1;
			LED2a = 1;
			LED3a = 1;
			LED4a = 1;
			LED5a = 0;
			LED6a = 1;
			LED7a = 1;
			delay_ms(30);
			LED0a = 1;
			LED1a = 1;
			LED2a = 1;
			LED3a = 1;
			LED4a = 1;
			LED5a = 1;
			LED6a = 0;
			LED7a = 1;
			delay_ms(30);
			LED0a = 1;
			LED1a = 1;
			LED2a = 1;
			LED3a = 1;
			LED4a = 1;
			LED5a = 1;
			LED6a = 1;
			LED7a = 0;
			delay_ms(30);
		}


		for (i = 0; i < 5; i++)
		{
			LED0a = 1;
			LED1a = 1;
			LED2a = 1;
			LED3a = 1;
			LED4a = 1;
			LED5a = 1;
			LED6a = 1;
			LED7a = 1;
			delay_ms(200);
			LED0a = 0;
			LED1a = 0;
			LED2a = 0;
			LED3a = 0;
			LED4a = 0;
			LED5a = 0;
			LED6a = 0;
			LED7a = 0;
			delay_ms(200);
		}


		for (i = 0; i < 5; i++)
		{
			LED0a = 1;
			LED1a = 0;
			LED2a = 1;
			LED3a = 0;
			LED4a = 1;
			LED5a = 0;
			LED6a = 1;
			LED7a = 0;
			delay_ms(200);
			LED0a = 0;
			LED1a = 1;
			LED2a = 0;
			LED3a = 1;
			LED4a = 0;
			LED5a = 1;
			LED6a = 0;
			LED7a = 1;
			delay_ms(200);
		}


		for (i = 0; i < 5; i++)
		{
			LED0a = 0;
			LED1a = 1;
			LED2a = 1;
			LED3a = 1;
			LED4a = 1;
			LED5a = 1;
			LED6a = 1;
			LED7a = 0;
			delay_ms(100);
			LED0a = 1;
			LED1a = 0;
			LED2a = 1;
			LED3a = 1;
			LED4a = 1;
			LED5a = 1;
			LED6a = 0;
			LED7a = 1;
			delay_ms(100);
			LED0a = 1;
			LED1a = 1;
			LED2a = 0;
			LED3a = 1;
			LED4a = 1;
			LED5a = 0;
			LED6a = 1;
			LED7a = 1;
			delay_ms(100);
			LED0a = 1;
			LED1a = 1;
			LED2a = 1;
			LED3a = 0;
			LED4a = 0;
			LED5 = 1;
			LED6 = 1;
			LED7a = 1;
			delay_ms(100);
		}


		for (i = 0; i < 5; i++)
		{
			LED0a = 0;
			LED1a = 0;
			LED2a = 1;
			LED3a = 1;
			LED4a = 1;
			LED5a = 1;
			LED6a = 0;
			LED7a = 0;
			delay_ms(100);
			LED0a = 1;
			LED1a = 0;
			LED2a = 0;
			LED3a = 1;
			LED4a = 1;
			LED5a = 0;
			LED6a = 0;
			LED7a = 1;
			delay_ms(100);
			LED0a = 1;
			LED1a = 1;
			LED2a = 0;
			LED3a = 0;
			LED4a = 0;
			LED5a = 0;
			LED6a = 1;
			LED7a = 1;
			delay_ms(100);
			LED0a = 1;
			LED1a = 1;
			LED2a = 1;
			LED3a = 0;
			LED4a = 0;
			LED5a = 1;
			LED6a = 1;
			LED7a = 1;
			delay_ms(100);
		}

	}

	while (1);

}
