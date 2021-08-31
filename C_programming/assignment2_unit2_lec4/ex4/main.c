/*
 * main.c
 *
 *  Created on: Aug 31, 2021
 *      Author: shrouk
 */
#include "stdio.h"
void main ()
{
	int n1,n2,i,j,x,count=0;
	printf("Enter no of elements:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n1);
	int a[n1];
	n2=n1+1;
	int b[n2];
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be inserted:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&j);
	printf("Enter the location:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	x--;
	for(i=0;i<n2;i++){
		if(i==x){
			b[i]=j;
			continue;
		}
		if(count==n1){
			break;
		}
		b[i]=a[count];
		count++;
	}
	for(i=0;i<n2;i++){
		printf("%d\t",b[i]);
	}
}

