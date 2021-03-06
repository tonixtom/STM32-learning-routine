/*********************************************************************
**文 件 名：system.h
**版本信息：
**创 建 人：思良月
**完成时间：2013年7月3日
**摘    要：
*********************************************************************/

#ifndef __SYSTEM_H
#define __SYSTEM_H

#include<stm32f10x.h>
#define STM32F10X_MD

/**********寄存器参数定义***************/
/*-----------RCC_CR寄存器--------------*/
#define RCC_CR_RESET    ((uint32_t)0x00000083) //RCC_CR 复位

/**********声明函数*********************/
void Set_SysClockTo72M(void);

#endif
