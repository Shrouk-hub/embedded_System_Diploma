/*
 * main.c
 *
 *  Created on: Sep 6, 2021
 *      Author: shrouk
 */

#include "stdio.h"
int m=1;
void Factorial (int a){
	m*=a;
	a--;
	if(a>1)
	Factorial(a);
	else
	printf("%d",m);
}
void main ()
{
	int n1;
	printf("Enter an positive integer:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n1);
	printf("Factorial of %d=\t",n1);
	Factorial(n1);
}

