#ifndef __UART_H_
#define __UART_H_
#include "60s2.h"

#define uint unsigned int
#define uchar unsigned char

extern void UartInit(uint  baud_rate);//串口初始化 baud_rate为要设定的值
extern void UART_send_char(char *dat); //发送字符串
extern int UART_check(uchar dat);//奇校验

#endif