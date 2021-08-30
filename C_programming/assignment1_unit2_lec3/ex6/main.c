/*
 * main.c
 *
 *  Created on: Aug 29, 2021
 *      Author: shrouk
 */
#include "stdio.h"
void main ()
{
	float n1,n2,temp;
	printf("Enter value of a:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&n1);
	printf("Enter value of b:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&n2);
	temp=n1; n1=n2; n2=temp;
	printf("After swapping, value of a =%f",n1);
	printf("\nAfter swapping, value of b =%f",n2);
}

