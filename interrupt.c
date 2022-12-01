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

int cnt = 0;

void delay_ms(u16 n);

//�ж��¼�b
//0:�ⲿ�ж�0
//1:��ʱ���ж�0
//2:�ⲿ�ж�1
//3:��ʱ���ж�1
//4:�����ж�



void init_time0()
{

	//1. ���ö�ʱ��0����ģʽλ16λ��ʱ
	TMOD = 0x01;
	//2. ����ֵ����һ��10ms����
	TL0 = 0x00;
	TH0 = 0xDC;
	//3. ��ʼ��ʱ
	TR0 = 1;
	TF0 = 0;
	//4. �򿪶�ʱ��0�ж�
	ET0 = 1;
	//5. �����ж�EA
	EA = 1;

}


/*

void  interrupt_beep() interrupt 2
{
	led_stop();
	car_forward();
	delay_ms(3000);
	car_stop();
	howStudentId();

}




int s = 0;


void Time0Handler_1s() interrupt 1
{
	cnt++;
	//ͳ�Ʊ���Ĵ���
	//���¸���ֵ
	TL0 = 0x00;
	TH0 = 0xDC;
	if (cnt == 100)
	{
		//����100�Σ�������1s
		cnt = 0;  //��100�α�ʾ1s��������cnt��0��ʼ��������һ�ε�1s

		if (s == 0)
		{
			P1 = 0X08;
			s = 1;
		}
		else if (s == 1)
		{
			P1 = 0Xf7;
			s = 0;
		}



	}

}





void Time0Handler_560s() interrupt 1
{
	cnt++;  //ͳ�Ʊ���Ĵ���
	//���¸���ֵ
	TL0 = 0x00;
	TH0 = 0xDC;
	if (cnt == 56)
	{//����100�Σ�������1s
		cnt = 0;  //��100�α�ʾ1s��������cnt��0��ʼ��������һ�ε�1s

		if (s == 0)
		{
			P1 = 0X00;
			s = 1;
		}
		else if (s == 1)
		{
			P1 = 0Xff;
			s = 0;
		}



	}

}




void Time0Handler_2s() interrupt 1
{
	cnt++;  //ͳ�Ʊ���Ĵ���
	//���¸���ֵ
	TL0 = 0x00;
	TH0 = 0xDC;
	if (cnt == 200)
	{//����100�Σ�������1s
		cnt = 0;  //��100�α�ʾ1s��������cnt��0��ʼ��������һ�ε�1s

		if (s == 0)
		{
			P1 = 0X00;
			car_forward();
			s = 1;
		}
		else if (s == 1)
		{
			car_stop();
			P1 = 0Xff;
			s = 0;
		}



	}

}

*/
