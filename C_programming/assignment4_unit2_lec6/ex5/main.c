/*
 * main.c
 *
 *  Created on: Sep 14, 2021
 *      Author: DELL
 */
#include "stdio.h"
#define AREA(r) 3.14*r*r
void main(){
	float r,area=0;
	printf("Enter the radius:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&r);
	area=AREA(r);
	printf("Area=%.2f",area);
}

