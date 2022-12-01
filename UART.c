#include <REGX52.H>








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


typedef unsigned int u16;
typedef unsigned char u8;


void delay_ms(u16 n);


sbit BEEP = P2 ^ 3;


//��Ҫʱ��a
void init_UART()
{
	//1.���ܿ���
	EA = 1;
	//2.�����жϵ�·���п���
	ES = 1;
	//3.���ڹ�����ʽ:8λ�����ʿɱ�
	SM0 = 0;
	SM1 = 1;
	//4.�򿪴�������������ݿ���λ
	REN = 1;
	//5.��ʱ��1��Ϊ���ڵĲ����ʷ�����
	TMOD = 0X20;     //0010 0000
	//6.װ�س�ֵ
	TH1 = 0XFD;
	TL1 = 0XFD;
	//7.��ʼ��ʱ����
	TR1 = 1;

}


int UARTStatus = 0;

int getUARTStatus()
{
	return UARTStatus;
}



void init_UART_main_lock()
{
	while (1)
	{

		if (getUARTStatus() == 10)
		{
			led_stop();
			showHello();
		}
		if (getUARTStatus() == 11)
		{
			led_stop();
			showBirthday();
		}
		if (getUARTStatus() == 12)
		{
			led_stop();
			showBirthday1();
		}
		if (getUARTStatus() == 13)
		{
			led_stop();
			showStudentId();
		}

		if (getUARTStatus() == 14)
		{
			led_stop();
			FLOW_LED2();
		}
		if (getUARTStatus() == 15)
		{
			led_stop();
			FLOW_LED3();
		}

		else if (getUARTStatus() == 0)
		{
			P1 = 0xff;
			led_stop();
		}

		delay_ms(5);
	}
}









void UART() interrupt 4
{
	unsigned char temp = 0;


	if (RI)
	{
		RI = 0;
		//��������
		temp = SBUF;
		//��ս������ݱ�־λ

		//������ֵ	 
		if (temp == 1)
		{
			BEEP = 0;
		}
		//�����ַ�
		else if (temp == 2)
		{
			closebeep();
		}

		else if (temp == 3)
		{
			Openled4();
		}
		else if (temp == 4)
		{
			P1 = 0xff;
		}
		else if (temp == 5)
		{
			car_forward();
		}
		else if (temp == 6)
		{
			car_return();
		}
		else if (temp == 7)
		{
			car_left();
		}
		else if (temp == 8)
		{
			car_right();
		}
		else if (temp == 9)
		{
			car_stop();
		}

		else if (temp >= 10 && temp <= 15)
		{
			UARTStatus = temp;
		}


		else if (temp == 16)
		{
			UARTStatus = 0;
		}

		//���ݴ��ͻ�ȥ
		temp++;
		SBUF = temp;

	}
	if (TI)
		TI = 0;

}