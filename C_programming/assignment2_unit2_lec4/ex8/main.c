/*
 * main.c
 *
 *  Created on: Aug 31, 2021
 *      Author: shrouk
 */
#include "stdio.h"
void main ()
{
	int i;
	char text[100];
	printf("Enter the string:");
	fflush(stdout); fflush(stdin);
	scanf("%s",text);
	int x=strlen(text);
	char arr[x];
	int y=x-1;
	for(i=0;i<x;i++){
		arr[i]=text[y];
		y--;
	}
	printf("reverse string is:%s",arr);

}

