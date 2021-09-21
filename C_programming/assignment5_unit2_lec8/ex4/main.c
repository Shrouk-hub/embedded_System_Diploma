/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: DELL
 */
#include "stdio.h"
int main()
{
	int i,n,j,k=0,p=0;
	int arr[15];
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	printf("Input %d number of elements in the array :\n",n);
	for(i=0;i<n;i++){
		k=i+1;
		printf("element - %d :",k);
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
	}
	int *ptr=&arr[n-1];
	printf("The elements of array in reverse order are :\n");
	p=n;
	for(j=0;j<n;j++){
		printf("element - %d :%d\n",p,*ptr);
		p--;
		ptr--;
	}
	return 0;
}

