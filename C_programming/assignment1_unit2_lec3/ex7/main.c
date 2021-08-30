/*
 * main.c
 *
 *  Created on: Aug 29, 2021
 *      Author: shrouk
 */
#include "stdio.h"
void main ()
{
	int n1,n2;
	printf("Enter value of a:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n1);
	printf("Enter value of b:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n2);
	n1=n1^n2; n2=n1^n2; n1=n1^n2;
	printf("After swapping, value of a =%d",n1);
	printf("\nAfter swapping, value of b =%d",n2);
}

