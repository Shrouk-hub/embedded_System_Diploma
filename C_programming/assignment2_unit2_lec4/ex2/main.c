/*
 * main.c
 *
 *  Created on: Aug 31, 2021
 *      Author: shrouk
 */
#include "stdio.h"
void main ()
{
	int n1,i;
	float average=0,sum=0;
	printf("Enter the numbers of data:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n1);
	float arr[n1];
	for(i=0;i<n1;i++){
		printf("%d.Enter number:",++i);
		--i;
		fflush(stdout); fflush(stdin);
		scanf("%f",&arr[i]);
		sum+=arr[i];
		if(i==n1-1){
			average=sum/n1;
			printf("Average:%.2f",average);
		}
	}
}

