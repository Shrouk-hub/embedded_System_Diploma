/*
 * main.c
 *
 *  Created on: Aug 29, 2021
 *      Author: shrouk
 */

#include "stdio.h"
void main ()
{
	int x;
	printf("Enter a integer:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	printf("You entered:%d",x);
}
