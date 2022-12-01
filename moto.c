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

//ר�Ų��Գ�������
void car_test()
{
	//���󿪹�
	EN1 = 1;
	//IN1�� IN2	��ƽ�෴����
	IN1 = 0;
	IN2 = 1; //10 :  ��    01��ǰ


}

void car_test2()
{

	EN2 = 1;
	IN3 = 1;
	IN4 = 0;


}


//1����ǰ
void car_forward()
{
	//���󿪹�
	EN1 = 1;
	//IN1�� IN2	��ƽ�෴����
	IN1 = 0;
	IN2 = 1; //10 :  ��    01��ǰ
	EN2 = 1;
	IN3 = 1;
	IN4 = 0;
}
//2�����

void car_return()
{
	//���󿪹�
	EN1 = 1;
	//IN1�� IN2	��ƽ�෴����
	IN1 = 1;
	IN2 = 0; //10 :  ��    01��ǰ
	EN2 = 1;
	IN3 = 0;
	IN4 = 1;
}

//3������

void car_left()
{
	//���󿪹�
	EN1 = 1;
	//IN1�� IN2	��ƽ�෴����
	IN1 = 0;
	IN2 = 0; //10 :  ��    01��ǰ
	EN2 = 1;
	IN3 = 1;
	IN4 = 0;
}

//4������

void car_right()
{
	//���󿪹�
	EN1 = 1;
	//IN1�� IN2	��ƽ�෴����
	IN1 = 0;
	IN2 = 1; //10 :  ��    01��ǰ
	EN2 = 1;
	IN3 = 0;
	IN4 = 0;
}
//5��ֹͣ


void car_stop()
{
	//���󿪹�
	EN1 = 1;
	//IN1�� IN2	��ƽ�෴����
	IN1 = 0;
	IN2 = 0; //10 :  ��    01��ǰ
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

			delay_ms(5);//����
			if (key_s2 == 0)
			{
				car_forward();
				Openled4();

			}
			while (!key_s2)//���ּ��
			{

			}

		}
		else if (key_s3 == 0)
		{

			delay_ms(5);//����
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
			while (!key_s3)//���ּ��
			{

			}


		}

		else if (key_s4 == 0)
		{

			delay_ms(5);//����
			if (key_s4 == 0)
			{
				c = 1;
			}
			while (!key_s4)//���ּ��
			{

			}


		}

		else if (key_s5 == 0)
		{

			delay_ms(5);//����
			if (key_s5 == 0)
			{
				c = 0;
				led_stop();
				car_stop();

				BEEP = 0;
				delay_ms(1000);
				BEEP = 1;

			}
			while (!key_s5)//���ּ��
			{

			}


		}

		if (c == 1)
		{

			showBirthday();
		}

	}

}