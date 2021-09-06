/*
 * main.c
 *
 *  Created on: Sep 6, 2021
 *      Author: shrouk
 */

#include "stdio.h"
void prime_numbers (int a,int b){
	int i,j;
	for(i=a;i<b;i++){
		for(j=2;j<11;j++){
			if(i%j==0){
				break;
			}
			if(j==10){
				printf("%d\t",i);
			}
		}
	}
}
void main ()
{
	int n1,n2;
	printf("Enter two numbers(intervals):");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&n1,&n2);
	printf("Prime numbers between %d and %d are:\t",n1,n2);
	prime_numbers(n1,n2);
}

