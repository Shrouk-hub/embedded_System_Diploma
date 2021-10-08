/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include "Platform_types.h"
#define RCC_BASE 0X40021000
#define PORTA_BASE 0x40010800
#define RCC_APB2ENR *(volatile uint32_t*)(RCC_BASE+0X18)
#define portA_CRH *(volatile uint32_t*)(PORTA_BASE+0X04)
#define portA_ODR *(volatile uint32_t*)(PORTA_BASE+0X0C)
typedef union{
	struct{
		volatile uint32_t reserved:13;
		volatile uint32_t pin_13:1;
	}Pin;
}ODR_t;
volatile ODR_t* ODR=(volatile ODR_t*)(PORTA_BASE+0X0C);
unsigned char g_variables[3]={1,2,3};
unsigned char const const_variables[3]={1,2,3};

int main (void){
	int i;
	RCC_APB2ENR|=1<<2;
	portA_CRH&=0xFF0FFFFF;
	portA_CRH|=0X00200000;
	while(1){
		ODR->Pin.pin_13=1;
		for(i=0;i<5000;i++);
		ODR->Pin.pin_13=0;
		for(i=0;i<5000;i++);
	}
}