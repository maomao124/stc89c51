
//ͷ�ļ��а���һЩ��Ҫ��Ϣ
#include <reg51.h>
#include <intrins.h>

//1.ͷ�ļ� stdio.h math.h unistd.h  time.h fork.h string
// stdlib.h stdtool.h

//2.�������� ȫ�ֱ������� ��������  ���ų�������  ��չ����������

//3.������������  �Ӻ��� 

//���������� �п�����������ɣ����ƶ���
sbit LED1 = P1 ^ 0;//�൱�ڸ�P1.0�������ȡ��һ��С��
sbit LED2 = P1 ^ 1;
sbit LED3 = P1 ^ 2;
sbit LED4 = P1 ^ 3;

sbit key_s2 = P3 ^ 0;
sbit key_s3 = P3 ^ 1;
sbit key_s4 = P3 ^ 2;
sbit key_s5 = P3 ^ 3;

sbit BEEP = P2 ^ 3;

sbit wela = P2 ^ 7;
//------------LED------------//
void Openled4();
void SHINE_LED();
void FLOW_LED();
void Turnonled(unsigned int num);
void Turnoffled(unsigned int num);
void FLOW_LED2();
void FLOW_LED3();
//---------------------------//
//------------beep------------//
void openbeep();
void closebeep();
void alarmBeep();
void led_beep();
void led_beep2();
void led_beep3();
//----------------------------//
//------------key------------//
void s2();
void s3();
void s4();
void s5();
unsigned char MatrixKey();
void MatrixKey_beep_lock();
//----------------------------//
//------------led_code------------//
void showHello();
void showBirthday();
void showBirthday1();
void led_stop();
void showStudentId();
//----------------------------//
//------------moto----------------//
void car_test();
void car_test2();
void car_forward();
void car_return();
void car_left();
void car_right();
void car_right();
void car_stop();
void car_show_lock();
//----------------------------//
//-----------interrupt-----------//
void init_time0();
//------------URRT---------------//
void init_UART();
int getUARTStatus();
void init_UART_main_lock();
//----------------------------//
//------------led_1602-----------//
typedef unsigned char uchar;
typedef unsigned int uint;
void led_1602_show(uchar* str);
//----------------------------//
//------------music-------------//
void Time0_Init();
void music1();
void music2_init();
void music2();
//----------------------------//

void mydelay()
{
	unsigned int z = 1000000;
	while (z--);
}


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





void main(void)
{

	/*
	while(1)
	{
	car_forward();
	  delay_ms(1000);
	   //car_stop();
	   //delay_ms(500);

		car_right();
	   delay_ms(1000);
	   //car_stop();
	   //delay_ms(500);

	   car_return();
	   delay_ms(1000);
	   //car_stop();
	   //delay_ms(500);

	   car_left();
	   delay_ms(1000);
	   car_stop();
	   delay_ms(5000);



	}

	*/

	/*



	*/




	init_UART();

	init_UART_main_lock();

	/*
	Time0_Init();			//��ʱ��0�жϳ�ʼ��
	while(1)
	{
		music1();		//����
	}

	*/

	/*
	music2_init();			//��ʱ��0�жϳ�ʼ��
	while(1)
	{
		music2();		//����
	}
	*/

	//uchar *str="123";
	//led_1602_show(str);
	while (1);

}