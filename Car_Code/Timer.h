#ifndef __Timer_H_
#define __Timer_H_
#include "60s2.h"

#define uchar unsigned char
#define uint unsigned int
	
extern uchar time_TH0;	
extern uchar time_TL0;

extern uchar time_TH1;	
extern uchar time_TL1;

extern void Timer0_init();//定时器0的初始化
extern void Timer1_init();//定时器1的初始化
extern void Set_time0(uint t);//定时器0设定定时值
extern void Set_time1(uint t);//定时器1设定定时值

#endif
