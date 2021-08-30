/*
 * main.c
 *
 *  Created on: Aug 30, 2021
 *      Author: shrouk
 */

#include "stdio.h"
void main ()
{
	int x,i,sum=0;
	printf("enter an integer:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		sum+=i;
	}
	printf("Sum=%d",sum);
}
