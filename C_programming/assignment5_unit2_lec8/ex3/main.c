/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
int main()
{
	int x,i;
	char arr[100];
	printf("Input a string :\n");
	fflush(stdout); fflush(stdin);
	scanf("%s",arr);
	x=strlen(arr);
	x--;
	char *ptr=&arr[x];
	for(i=0;i<=x;i++){
		printf("%c",*ptr);
		ptr--;
	}
	return 0;
}

