/*
 * main.c
 *
 *  Created on: Sep 6, 2021
 *      Author: shrouk
 */

#include "stdio.h"
int m=1;
int pow (int n1,int n2){
	if(n2!=0){
		n2--;
		m*=n1;
		pow(n1,n2);
	}
	return m;
}
void main ()
{
	int n1,n2,m;
	printf("Enter base number:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n1);
	printf("Enter power number(positive integer):");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n2);
	m=pow(n1,n2);
	printf("%d^%d=%d",n1,n2,m);
}

