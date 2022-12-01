#include <REGX52.H>
#include <intrins.h>


#define uchar unsigned char
#define uint unsigned int

typedef unsigned int u16;
typedef unsigned char u8;
void delay_ms(u16 n);



/*
sbit IN1=P1^2;
sbit IN2=P1^3;
sbit IN3=P1^6;
sbit IN4=P1^7;
sbit EN1=P1^4;
sbit EN2=P1^5;
 */

sbit IN1 = P2 ^ 2;
sbit IN2 = P2 ^ 5;
sbit IN3 = P3 ^ 7;
sbit IN4 = P3 ^ 6;
sbit EN1 = P2 ^ 0;
sbit EN2 = P2 ^ 4;

sbit BEEP = P2 ^ 3;

sbit key_s2 = P3 ^ 0;
sbit key_s3 = P3 ^ 1;
sbit key_s4 = P3 ^ 2;
sbit key_s5 = P3 ^ 3;

//专门测试车的走向
void car_test()
{
	//打开左开关
	EN1 = 1;
	//IN1和 IN2	电平相反才行
	IN1 = 0;
	IN2 = 1; //10 :  后    01：前


}

void car_test2()
{

	EN2 = 1;
	IN3 = 1;
	IN4 = 0;


}


//1车向前
void car_forward()
{
	//打开左开关
	EN1 = 1;
	//IN1和 IN2	电平相反才行
	IN1 = 0;
	IN2 = 1; //10 :  后    01：前
	EN2 = 1;
	IN3 = 1;
	IN4 = 0;
}
//2车向后

void car_return()
{
	//打开左开关
	EN1 = 1;
	//IN1和 IN2	电平相反才行
	IN1 = 1;
	IN2 = 0; //10 :  后    01：前
	EN2 = 1;
	IN3 = 0;
	IN4 = 1;
}

//3车向左

void car_left()
{
	//打开左开关
	EN1 = 1;
	//IN1和 IN2	电平相反才行
	IN1 = 0;
	IN2 = 0; //10 :  后    01：前
	EN2 = 1;
	IN3 = 1;
	IN4 = 0;
}

//4车向右

void car_right()
{
	//打开左开关
	EN1 = 1;
	//IN1和 IN2	电平相反才行
	IN1 = 0;
	IN2 = 1; //10 :  后    01：前
	EN2 = 1;
	IN3 = 0;
	IN4 = 0;
}
//5车停止


void car_stop()
{
	//打开左开关
	EN1 = 1;
	//IN1和 IN2	电平相反才行
	IN1 = 0;
	IN2 = 0; //10 :  后    01：前
	EN2 = 1;
	IN3 = 0;
	IN4 = 0;
}



void car_show_lock()
{

	int c = 0;

	while (1)
	{

		if (key_s2 == 0)
		{

			delay_ms(5);//消抖
			if (key_s2 == 0)
			{
				car_forward();
				Openled4();

			}
			while (!key_s2)//松手检测
			{

			}

		}
		else if (key_s3 == 0)
		{

			delay_ms(5);//消抖
			if (key_s3 == 0)
			{
				car_return();
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);

			}
			while (!key_s3)//松手检测
			{

			}


		}

		else if (key_s4 == 0)
		{

			delay_ms(5);//消抖
			if (key_s4 == 0)
			{
				c = 1;
			}
			while (!key_s4)//松手检测
			{

			}


		}

		else if (key_s5 == 0)
		{

			delay_ms(5);//消抖
			if (key_s5 == 0)
			{
				c = 0;
				led_stop();
				car_stop();

				BEEP = 0;
				delay_ms(1000);
				BEEP = 1;

			}
			while (!key_s5)//松手检测
			{

			}


		}

		if (c == 1)
		{

			showBirthday();
		}

	}

}