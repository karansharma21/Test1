#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
#include<stdio.h>
#include<iot.h>

void main()
{
	
	DDRB=0b11111111;
	PORTB=0b00000000;
	unsigned char HR[5]={80,86,73,72,65,76};
	unsigned char BP[5]={80,86,73,72,120,75};
	unsigned char PR[5]={80,86,73,72,65,86};
	unsigned char XY[5]={80,86,73,72,65,76};
	for(int i=0;i<5;i++)
	{

		_delay_ms(1000);
		if(HR[i]<72)
		{
			printf("Heart Rate is Very much Low, Please Report in room.");
			PORTB=0b00000011;
		}
		else if(HR[i]>100)
		{
			printf("Heart Rate is Very much High, Please Report in room.");
			PORTB=0b00000011;
		}
		else
		{
			PORTB=0b00000010;
		}
	}
	
	for(int i=0;i<5;i++)
	{

		_delay_ms(1000);
		if(BP[i]<72)
		{
			printf("Blood Pressure is Very much Low, Please Report in room.");
			PORTB=0b00000001;
		}
		else if(BP[i]>120)
		{
			printf("Blood Pressure is Very much High, Please Report in room.");
			PORTB=0b00000001;
		}
		else
		{
			PORTB=0b00000010;
		}
	}
	
	for(int i=0;i<5;i++)
	{

		_delay_ms(1000);
		if(PR[i]<60)
		{
			printf("Pulse Rate is Very much Low, Please Report in room.");
			PORTB=0b00000101;
		}
		else if(PR[i]>100)
		{
			printf("Pulse Rate is Very much High, Please Report in room.");
			PORTB=0b00000101;
		}
		else
		{
			PORTB=0b00000010;
		}
	}
	
	for(int i=0;i<5;i++)
	{

		_delay_ms(1000);
		if(XY[i]<72)
		{
			printf("XY is Very much Low, Please Report in room.");
			PORTB=0b00001101;
		}
		else
		{
			PORTB=0b00000010;
		}
	}

}
