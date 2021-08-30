/*
 * main.c
 *
 *  Created on: Aug 29, 2021
 *      Author: shrouk
 */

#include "stdio.h"
void main ()
{
	int n1;
	printf("Enter an integer you want to check:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n1);
	if(n1%2==0){
		printf("%d is even",n1);
	}
	else{
		printf("%d is odd",n1);
	}
}

