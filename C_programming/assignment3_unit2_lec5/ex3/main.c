/*
 * main.c
 *
 *  Created on: Sep 6, 2021
 *      Author: shrouk
 */

#include "stdio.h"
void rev_sen (char arr[],int n){
	if(n!=-1){
		printf("%c",arr[n]);
		n--;
		rev_sen(arr,n);
	}
}
void main ()
{
	int n;
	char arr[100];
	printf("Enter a sentence:");
	fflush(stdout); fflush(stdin);
	gets(arr);
	n=strlen(arr);
	n=n-1;
	rev_sen(arr,n);
}
