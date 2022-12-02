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
//------------led_1602-----------//
typedef unsigned char uchar;
typedef unsigned int uint;
void led_1602_show(uchar *str);
//----------------------------//
//------------music-------------//
void Time0_Init();
void music1();
void music2_init();
void music2();
//----------------------------//


typedef unsigned int u16;
typedef unsigned char u8;


void delay_ms(u16 n);


sbit BEEP = P2 ^ 3;






//主要时间a
void init_UART()
{
	//1.打开总开关
	EA = 1;
	//2.串口中断电路独有开关
	ES = 1;
	//3.串口工作方式:8位波特率可变
	SM0 = 0;
	SM1 = 1;
	//4.打开串口允许接受数据控制位
	REN = 1;
	//5.定时器1作为串口的波特率发生器
	TMOD = 0X20;     //0010 0000
	//6.装载初值
	TH1 = 0XFD;
	TL1 = 0XFD;
	//7.开始计时！！
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
		if (getUARTStatus() == 22)
		{
			uchar *str="1";
	        led_1602_show(str);
			delay_ms(500);
			str="2";
	        led_1602_show(str);
			delay_ms(500);
			str="3";
	        led_1602_show(str);
			delay_ms(500);
			str="4";
	        led_1602_show(str);
			delay_ms(500);
			str="5";
	        led_1602_show(str);
			delay_ms(500);
			str="6";
	        led_1602_show(str);
			delay_ms(500);
			str="7";
	        led_1602_show(str);
			delay_ms(500);
			str="8";
	        led_1602_show(str);
			delay_ms(500);
			str="9";
	        led_1602_show(str);
			delay_ms(500);
			str="0";
	        led_1602_show(str);
			delay_ms(500);
		}

		else if (getUARTStatus() == 0)
		{
			P1 = 0xff;
			P2_3=1;
			led_stop();
		}
		else if (getUARTStatus() == 23)
		{
			Time0_Init();
            music1();
		}

		else if (getUARTStatus() == 24)
		{
			music2_init();			//定时器0中断初始化
	    	music2();	         	//播放
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
		//接收数据
		temp = SBUF;
		//清空接受数据标志位

		//接受数值	 
		if (temp == 1)
		{
			BEEP = 0;
		}
		//接受字符
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
			uchar *str="HELLO";
	        led_1602_show(str);
		}

		else if (temp == 17)
		{
			uchar *str="123456";
	        led_1602_show(str);
		}

		else if (temp == 18)
		{
			uchar *str="0234";
	        led_1602_show(str);
		}
		
		else if (temp == 19)
		{
			uchar *str="china";
	        led_1602_show(str);
		}

		else if (temp == 20)
		{
			
			uchar *str="github:maomao124";
	        led_1602_show(str);
		}

		else if (temp == 21)
		{
			uchar *str="QQ:1296193245";
	        led_1602_show(str);
		}

		else if (temp == 22)
		{
			UARTStatus = temp;
		}

		else if (temp == 25)
		{
			UARTStatus = 0;
		}


		  UARTStatus = temp;

		//数据传送回去
		temp++;
		SBUF = temp;

	}
	if (TI)
		TI = 0;

}