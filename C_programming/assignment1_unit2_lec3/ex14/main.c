/*
 * main.c
 *
 *  Created on: Aug 30, 2021
 *      Author: DELL
 */

#include "stdio.h"
void main ()
{
	int n1,i,fac=1;
	printf("enter an integer:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n1);
	if(n1>0)
	{
		for(i=1;i<=n1;i++){
			fac*=i;
		}
		printf("Factorial=%d",fac);
	}
	else if(n1<0)
	{
		printf("ERROR!!! Factorial of negative numbers doesn't exist");
	}
	else{
		printf("Factorial=zero");
	}

}
