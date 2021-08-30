/*
 * main.c
 *
 *  Created on: Aug 29, 2021
 *      Author: shrouk
 */

#include "stdio.h"
void main ()
{
	char x;
	printf("Enter a character:");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	printf("ASCII value of %c=%d",x,x);
}
