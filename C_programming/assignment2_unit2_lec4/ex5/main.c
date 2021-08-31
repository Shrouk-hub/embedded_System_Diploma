/*
 * main.c
 *
 *  Created on: Aug 31, 2021
 *      Author: shrouk
 */
#include "stdio.h"
void main ()
{
	int n1,i,j;
	printf("Enter no of elements:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n1);
	int a[n1];
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&j);
	for(i=0;i<n1;i++){
		if(a[i]==j){
			printf("Number found at the location:%d",++i);
			break;
		}
		if(i==n1-1)
			printf("number doesn't exist");
	}
}




