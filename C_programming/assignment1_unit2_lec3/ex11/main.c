/*
 * main.c
 *
 *  Created on: Aug 29, 2021
 *      Author: shrouk
 */
#include "stdio.h"
void main ()
{
	float n1;
	printf("enter a number:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&n1);
	if(n1>0)
	{
		printf("%f is positive.",n1);
	}
	else if(n1<0)
	{
		printf("%f is negative.",n1);
	}
	else{
		printf("you entered zero.");
	}

}

