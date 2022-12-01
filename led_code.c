#include <REGX52.H>
#include <intrins.h>


#define uchar unsigned char
#define uint unsigned int

typedef unsigned int u16;
typedef unsigned char u8;
void delay_ms(u16 n);

sbit dula = P2 ^ 6;                           //申明U1锁存器的锁存端
sbit wela = P2 ^ 7;                           //申明U2锁存器的锁存端



uchar code leddata[] = {
	0x3F,  //"0"
	0x06,  //"1"
	0x5B,  //"2"
	0x4F,  //"3"
	0x66,  //"4"
	0x6D,  //"5"
	0x7D,  //"6"
	0x07,  //"7"
	0x7F,  //"8"
	0x6F,  //"9"
	0x77,  //"A"
	0x7C,  //"B"
	0x39,  //"C"
	0x5E,  //"D"
	0x79,  //"E"
	0x71,  //"F"
	0x76,  //"H"
	0x38,  //"L"
	0x37,  //"n"
	0x3E,  //"u"
	0x73,  //"P"
	0x5C,  //"o"
	0x40,  //"-"
	0x00  //熄灭
};




void showHello()
{


	dula = 1;
	P0 = 0x76;               //送段选数据,显示H
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfe;               //送位选数据
	wela = 0;
	delay_ms(1);            //延时

	dula = 1;
	P0 = 0x79;              //送段选数据，显示E
	dula = 0;
	P0 = 0xff;
	wela = 1;
	P0 = 0xfd;
	wela = 0;
	delay_ms(1);

	dula = 1;
	P0 = 0x38;              //送段选数据,显示L
	dula = 0;
	P0 = 0xff;
	wela = 1;
	P0 = 0xfb;
	wela = 0;
	delay_ms(1);

	dula = 1;
	P0 = 0x38;               //送段选数据,显示L
	dula = 0;
	P0 = 0xff;
	wela = 1;
	P0 = 0xf7;
	wela = 0;
	delay_ms(1);

	dula = 1;
	P0 = 0x3f;               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;
	wela = 1;
	P0 = 0xef;
	wela = 0;
	delay_ms(1);


}





void showBirthday()
{
	dula = 1;
	P0 = leddata[2];               //送段选数据,显示2
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfe;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfd;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfb;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[1];               //送段选数据,显示1
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xf7;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[0];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xef;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[7];               //送段选数据,显示7
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xdf;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[1];               //送段选数据,显示1
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xbf;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[3];               //送段选数据,显示3
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0x7f;               //送位选数据
	wela = 0;
	delay_ms(1);
}







void showBirthday1()
{
	dula = 1;
	P0 = leddata[2];               //送段选数据,显示2
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfe;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfd;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfb;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //送段选数据,显示1
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xf7;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[0];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xef;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[2];               //送段选数据,显示7
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xdf;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[1];               //送段选数据,显示1
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xbf;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //送段选数据,显示3
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0x7f;               //送位选数据
	wela = 0;
	delay_ms(1);
}





void showStudentId()
{
	dula = 1;
	P0 = leddata[23];               //送段选数据,显示2
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfe;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfd;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfb;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //送段选数据,显示1
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xf7;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[0];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xef;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[2];               //送段选数据,显示7
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xdf;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[3];               //送段选数据,显示1
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xbf;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[4];               //送段选数据,显示3
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0x7f;               //送位选数据
	wela = 0;
	delay_ms(1);
}





void led_stop()
{
	dula = 1;
	P0 = leddata[23];               //送段选数据,显示2
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfe;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfd;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xfb;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //送段选数据,显示1
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xf7;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[23];               //送段选数据,显示0
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xef;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[23];               //送段选数据,显示7
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xdf;               //送位选数据
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[23];               //送段选数据,显示1
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0xbf;               //送位选数据
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //送段选数据,显示3
	dula = 0;
	P0 = 0xff;               //原来段选数据通过位选锁存器造成混乱，专业术语叫"消影"
	wela = 1;
	P0 = 0x7f;               //送位选数据
	wela = 0;
	delay_ms(1);
}