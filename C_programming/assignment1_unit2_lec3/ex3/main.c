/*
 * main.c
 *
 *  Created on: Aug 29, 2021
 *      Author: DELL
 */

#include "stdio.h"
void main ()
{
	int n1,n2,sum;
	printf("Enter two integers:");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&n1,&n2);
	sum=n1+n2;
	printf("Sum:%d",sum);
}
