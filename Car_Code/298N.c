#include "298N.h"

uchar now_status = 0x00;
//
void init_298N()
{
//	 A_IN1 = 0;
//	 A_IN2 = 0;
//	 A_IN3 = 0;
//	 A_IN4 = 0;
//	 B_IN1 = 0;
//	 B_IN2 = 0;
//	 B_IN3 = 0;
//	 B_IN4 = 0;
	 now_status = 0x00;
}

//
void turn_rigth()
{
//	 A_IN1 = 1;
//	 A_IN2 = 0;
//	 A_IN3 = 1;
//	 A_IN4 = 0;
//	 B_IN1 = 0;
//	 B_IN2 = 1;
//	 B_IN3 = 0;
//	 B_IN4 = 1;
	 now_status = 0xA5;
}

//
void turn_left()
{
//	 A_IN1 = 0;
//	 A_IN2 = 1;
//	 A_IN3 = 0;
//	 A_IN4 = 1;
//	 B_IN1 = 1;
//	 B_IN2 = 0;
//	 B_IN3 = 1;
//	 B_IN4 = 0;
	 now_status = 0x5A;
}

//
void turn_backdown()
{
//	 A_IN1 = 0;
//	 A_IN2 = 1;
//	 A_IN3 = 0;
//	 A_IN4 = 1;
//	 B_IN1 = 0;
//	 B_IN2 = 1;
//	 B_IN3 = 0;
//	 B_IN4 = 1;
	 now_status = 0xAA;
}

//
void turn_forward()
{
//	 A_IN1 = 1;
//	 A_IN2 = 0;
//	 A_IN3 = 1;
//	 A_IN4 = 0;
//	 B_IN1 = 1;
//	 B_IN2 = 0;
//	 B_IN3 = 1;
//	 B_IN4 = 0;
	 now_status = 0x55;
}