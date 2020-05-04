#ifndef __298N_H_
#define __298N_H_
#include "60s2.h"

#define uint unsigned int
#define uchar unsigned char

extern uchar now_status;

//第一个298的定义
sbit A_IN1 = P2^0;
sbit A_IN2 = P2^1;
sbit A_IN3 = P2^2;
sbit A_IN4 = P2^3;

//第二个298的定义
sbit B_IN1 = P2^4;
sbit B_IN2 = P2^5;
sbit B_IN3 = P2^6;
sbit B_IN4 = P2^7;

extern void init_298N();//初始化及停止
extern void turn_forward();//前进
extern void turn_backdown();//后退
extern void turn_rigth();//右转
extern void turn_left();//左转

#endif