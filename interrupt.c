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

//中断事件b
//0:外部中断0
//1:定时器中断0
//2:外部中断1
//3:定时器中断1
//4:串口中断



void init_time0()
{

	//1. 配置定时器0工作模式位16位计时
	TMOD = 0x01;
	//2. 给初值，定一个10ms出来
	TL0 = 0x00;
	TH0 = 0xDC;
	//3. 开始计时
	TR0 = 1;
	TF0 = 0;
	//4. 打开定时器0中断
	ET0 = 1;
	//5. 打开总中断EA
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
	//统计爆表的次数
	//重新给初值
	TL0 = 0x00;
	TH0 = 0xDC;
	if (cnt == 100)
	{
		//爆表100次，经过了1s
		cnt = 0;  //当100次表示1s，重新让cnt从0开始，计算下一次的1s

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
	cnt++;  //统计爆表的次数
	//重新给初值
	TL0 = 0x00;
	TH0 = 0xDC;
	if (cnt == 56)
	{//爆表100次，经过了1s
		cnt = 0;  //当100次表示1s，重新让cnt从0开始，计算下一次的1s

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
	cnt++;  //统计爆表的次数
	//重新给初值
	TL0 = 0x00;
	TH0 = 0xDC;
	if (cnt == 200)
	{//爆表100次，经过了1s
		cnt = 0;  //当100次表示1s，重新让cnt从0开始，计算下一次的1s

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
