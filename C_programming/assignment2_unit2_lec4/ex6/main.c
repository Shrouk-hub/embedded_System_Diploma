/*
 * main.c
 *
 *  Created on: Aug 31, 2021
 *      Author: shrouk
 */
#include "stdio.h"
void main ()
{
	int i,count=0;
	char j;
	char text[100];
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	gets(text);
	printf("Enter a character to find frequency:");
	fflush(stdout); fflush(stdin);
	scanf("%c",&j);
	for(i=0;i<strlen(text);i++){
		if(text[i]==j){
			count++;
		}
	}
	printf("frequency of %c:%d",j,count);

}

