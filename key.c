#include <REGX52.H>
#include <intrins.h>


sbit key_s2 = P3 ^ 0;
sbit key_s3 = P3 ^ 1;
sbit key_s4 = P3 ^ 2;
sbit key_s5 = P3 ^ 3;

sbit BEEP = P2 ^ 3;

typedef unsigned int u16;
typedef unsigned char u8;


void delay_ms(u16 n);

void s2()
{
	delay_ms(5);//œ˚∂∂
	if (key_s2 == 0)
	{

		P1 = 0x55;

	}
	while (!key_s2)//À… ÷ºÏ≤‚
	{

	}


}



void s3()
{
	delay_ms(5);
	if (key_s3 == 0)
	{

		BEEP = 0;

	}
	while (!key_s3)
	{

	}
}



void s4()
{
	delay_ms(5);
	if (key_s4 == 0)
	{

		BEEP = 1;

	}
	while (!key_s4)
	{

	}
}



void s5()
{
	delay_ms(5);
	if (key_s5 == 0)
	{
		//BEEP=0;
		//FLOW_LED2();
		P1 = 0xFF;

	}
	while (!key_s5)
	{
		//BEEP=0;
		 //P1=0xFF;
		//FLOW_LED2();
	}
	//BEEP=1;
	//P1=0xff;
}












unsigned char MatrixKey()
{
	unsigned char KeyNumber = 0;

	P3 = 0xFF;
	P3_3 = 0;
	if (P3_7 == 0)
	{
		delay_ms(20);
		while (P3_7 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 16;
	}
	if (P3_6 == 0)
	{
		delay_ms(20);
		while (P3_6 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 15;
	}
	if (P3_5 == 0)
	{
		delay_ms(20);
		while (P3_5 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 14;
	}
	if (P3_4 == 0)
	{
		delay_ms(20);
		while (P3_4 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 13;
	}





	P3 = 0xFF;
	P3_2 = 0;
	if (P3_7 == 0)
	{
		delay_ms(20);
		while (P3_7 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 12;
	}
	if (P3_6 == 0)
	{
		delay_ms(20);
		while (P3_6 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 11;
	}
	if (P3_5 == 0)
	{
		delay_ms(20);
		while (P3_5 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 10;
	}
	if (P3_4 == 0)
	{
		delay_ms(20);
		while (P3_4 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 9;
	}


	P3 = 0xFF;
	P3_1 = 0;
	if (P3_7 == 0)
	{
		delay_ms(20);
		while (P3_7 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 8;
	}
	if (P3_6 == 0)
	{
		delay_ms(20);
		while (P3_6 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 7;
	}
	if (P3_5 == 0)
	{
		delay_ms(20);
		while (P3_5 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 6;
	}
	if (P3_4 == 0)
	{
		delay_ms(20);
		while (P3_4 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 5;
	}


	P3 = 0xFF;
	P3_0 = 0;
	if (P3_7 == 0)
	{
		delay_ms(20);
		while (P3_7 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 4;
	}
	if (P3_6 == 0)
	{
		delay_ms(20);
		while (P3_6 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 3;
	}
	if (P3_5 == 0)
	{
		delay_ms(20);
		while (P3_5 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 2;
	}
	if (P3_4 == 0)
	{
		delay_ms(20);
		while (P3_4 == 0);//ºÏ≤‚À… ÷
		delay_ms(20);
		KeyNumber = 1;

	}
	return KeyNumber;
}


void MatrixKey_beep_lock()
{
	int i = 0;

	while (1)
	{
		int keynum = MatrixKey();

		if (keynum == 1)
		{
			BEEP = 0;
			delay_ms(300);
			BEEP = 1;
			delay_ms(300);
		}
		else if (keynum == 2)
		{
			for (i = 0; i < 2; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}
		else if (keynum == 3)
		{
			for (i = 0; i < 3; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}
		else if (keynum == 4)
		{
			for (i = 0; i < 4; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 5)
		{
			for (i = 0; i < 5; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 6)
		{
			for (i = 0; i < 6; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 7)
		{
			for (i = 0; i < 7; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 8)
		{
			for (i = 0; i < 8; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 9)
		{
			for (i = 0; i < 9; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 10)
		{
			for (i = 0; i < 10; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 11)
		{
			for (i = 0; i < 11; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 12)
		{
			for (i = 0; i < 12; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 13)
		{
			for (i = 0; i < 13; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 14)
		{
			for (i = 0; i < 14; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 15)
		{
			for (i = 0; i < 15; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}

		else if (keynum == 16)
		{
			for (i = 0; i < 16; i++)
			{
				BEEP = 0;
				delay_ms(300);
				BEEP = 1;
				delay_ms(300);
			}
		}
	}
}


