#ifndef __SYS_H
#define __SYS_H

#include <stdint.h>

#define	 FREQ_SYS       16000000	        //系统主频16MHz，24M跑不上去？
#define  OSC_EN_XT      0                   //外部晶振使能，默认开启内部晶振

void	sysClockConfig();                   //时钟选择和配置
void	delay_us(uint16_t n);               //以uS为单位延时
void	delay(uint16_t n);                  //以mS为单位延时

void    sysTickConfig();
void    wait(uint16_t n);

#endif
