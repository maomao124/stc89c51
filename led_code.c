#include <REGX52.H>
#include <intrins.h>


#define uchar unsigned char
#define uint unsigned int

typedef unsigned int u16;
typedef unsigned char u8;
void delay_ms(u16 n);

sbit dula = P2 ^ 6;                           //����U1�������������
sbit wela = P2 ^ 7;                           //����U2�������������



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
	0x00  //Ϩ��
};




void showHello()
{


	dula = 1;
	P0 = 0x76;               //�Ͷ�ѡ����,��ʾH
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfe;               //��λѡ����
	wela = 0;
	delay_ms(1);            //��ʱ

	dula = 1;
	P0 = 0x79;              //�Ͷ�ѡ���ݣ���ʾE
	dula = 0;
	P0 = 0xff;
	wela = 1;
	P0 = 0xfd;
	wela = 0;
	delay_ms(1);

	dula = 1;
	P0 = 0x38;              //�Ͷ�ѡ����,��ʾL
	dula = 0;
	P0 = 0xff;
	wela = 1;
	P0 = 0xfb;
	wela = 0;
	delay_ms(1);

	dula = 1;
	P0 = 0x38;               //�Ͷ�ѡ����,��ʾL
	dula = 0;
	P0 = 0xff;
	wela = 1;
	P0 = 0xf7;
	wela = 0;
	delay_ms(1);

	dula = 1;
	P0 = 0x3f;               //�Ͷ�ѡ����,��ʾ0
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
	P0 = leddata[2];               //�Ͷ�ѡ����,��ʾ2
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfe;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfd;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfb;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[1];               //�Ͷ�ѡ����,��ʾ1
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xf7;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[0];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xef;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[7];               //�Ͷ�ѡ����,��ʾ7
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xdf;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[1];               //�Ͷ�ѡ����,��ʾ1
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xbf;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[3];               //�Ͷ�ѡ����,��ʾ3
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0x7f;               //��λѡ����
	wela = 0;
	delay_ms(1);
}







void showBirthday1()
{
	dula = 1;
	P0 = leddata[2];               //�Ͷ�ѡ����,��ʾ2
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfe;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfd;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfb;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //�Ͷ�ѡ����,��ʾ1
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xf7;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[0];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xef;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[2];               //�Ͷ�ѡ����,��ʾ7
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xdf;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[1];               //�Ͷ�ѡ����,��ʾ1
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xbf;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[0];               //�Ͷ�ѡ����,��ʾ3
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0x7f;               //��λѡ����
	wela = 0;
	delay_ms(1);
}





void showStudentId()
{
	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ2
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfe;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfd;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfb;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ1
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xf7;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[0];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xef;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[2];               //�Ͷ�ѡ����,��ʾ7
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xdf;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[3];               //�Ͷ�ѡ����,��ʾ1
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xbf;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[4];               //�Ͷ�ѡ����,��ʾ3
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0x7f;               //��λѡ����
	wela = 0;
	delay_ms(1);
}





void led_stop()
{
	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ2
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfe;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfd;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xfb;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ1
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xf7;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ0
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xef;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ7
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xdf;               //��λѡ����
	wela = 0;
	delay_ms(1);


	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ1
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0xbf;               //��λѡ����
	wela = 0;
	delay_ms(1);



	dula = 1;
	P0 = leddata[23];               //�Ͷ�ѡ����,��ʾ3
	dula = 0;
	P0 = 0xff;               //ԭ����ѡ����ͨ��λѡ��������ɻ��ң�רҵ�����"��Ӱ"
	wela = 1;
	P0 = 0x7f;               //��λѡ����
	wela = 0;
	delay_ms(1);
}