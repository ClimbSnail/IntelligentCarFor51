/*STC12C5A60S2单片机控制智能车
功能：红外壁循迹/超声波壁障/手机遥感
*/
			
#include "60s2.h"
#include "UART.h"
#include "298N.h"
#include "Timer.h"

#define uint unsigned int
#define uchar unsigned char

uchar order;
uint speed[7] = {3,4,5,6,7,8,9};
uint i=0;
uint count = 0;
uint task_flag = 0;

void my_init();
void main(void)
{
	my_init();
	while(1)
	{
		
	}
}

//初始化函数
void my_init()
{
	init_298N();
	UartInit(9600);
	Timer0_init();
}

//定时器0中断函数
void timer0(void) interrupt 1
{
	TH0 = time_TH0;
	TL0 = time_TL0;
	count++;
	if( count == speed[i] )
	{
		P2 = 0x00;
	}
	else 
		if( count == 10 )
		{
			count = 0;
			P2 = now_status;
		}
}

//串口中断函数
void Uart0(void) interrupt 4
{
	if(RI)
	{
		order = SBUF;
		RI = 0;
		switch(order)
		{
		case 0x74:init_298N();break;
		case 0x71:turn_forward();i=0;break;
		case 0x68:turn_backdown();i=0;break;
		case 0x7A:turn_left();i=0;break;
		case 0x79:turn_rigth();i=0;break;
		case 0x01:speed[i++];i%=3;break;
		default : break;
		}
	}
}