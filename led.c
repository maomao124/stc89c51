#include <REGX52.H>

#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4
#define LED5 5
#define LED6 6
#define LED7 7
#define LED8 8

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

void mydelay();

void delay_ms(u16 n);



//1.点亮四个灯函数
void Openled4()
{
	P1 = 0X55;    // 0101 0101
}
//2.四个灯闪烁函数
void SHINE_LED()
{
	//
	P1 = 0X55;
	mydelay();
	P1 = 0XFF;
	mydelay();
}
//3.流水灯
void FLOW_LED()
{
	P1 = 0X7E;
	mydelay();
	P1 = 0XC3;
	mydelay();
	P1 = 0XE7;
	mydelay();
	P1 = 0X00;
	mydelay();
}

//4.点亮某个灯
void Turnonled(unsigned int num)
{
	if (num == LED1)
		P1 &= 0XFE;// 1111 1111  & 1111 1110 = 1111 1110
	if (num == LED2)
		P1 &= 0XFD;     // 1111 1111 & 1111 1101 =1111 1101
	if (num == LED3)
		P1 &= 0XFB;     // 1111 1111 & 1111 10111 =1111 1011
	if (num == LED4)
		P1 &= 0XF7;     // 1111 1111 & 1111 1101
	if (num == LED5)
		P1 &= 0XEF;     // 1111 1111 & 1111 1101
	if (num == LED6)
		P1 &= 0XDF;     // 1111 1111 & 1111 1101
	if (num == LED7)
		P1 &= 0XBF;     // 1111 1111 & 1111 1101
	if (num == LED8)
		P1 &= 0X7F;     // 11111 1111 & 1111 1101





}

//5.关闭某个灯
void Turnoffled(unsigned int num)
{

	switch (num)
	{										 //1010 1111
	case LED1: P1 |= 0X01; break;	 //1010 1110 | 0000 0001= 
	case LED2: P1 |= 0x02;  break;  //0000 0010b        
	case LED3: P1 |= 0X04; break;	 //1010 1110 | 0000 0001= 
	case LED4: P1 |= 0x08;  break;  //0000 0010b   
	case LED5: P1 |= 0X10; break;	 //1010 1110 | 0000 0001= 
	case LED6: P1 |= 0x20;  break;  //0000 0010b   case LED1: P1 |=  0X01;break;	 //1010 1110 | 0000 0001= 
	case LED7: P1 |= 0x40;  break;  //0000 0010b   case LED1: P1 |=  0X01;break;	 //1010 1110 | 0000 0001= 
	case LED8: P1 |= 0x80;  break;  //0000 0010b   

	}




}

//流水灯
void FLOW_LED2()
{



	int i;

	for (i = 0; i < 5; i++)
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


	for (i = 0; i < 2; i++)
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

}











void FLOW_LED3()
{
	int i = 0;

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
		LED5a = 1;
		LED6a = 1;
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

