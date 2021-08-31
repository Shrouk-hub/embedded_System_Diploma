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
	char text[100];
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	scanf("%s",text);
	for(i=0;i<100;i++){
		if(text[i]==0){
			break;
		}
		count++;
	}
	printf("Length of string:%d",count);

}
