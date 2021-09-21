/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: DELL
 */
#include "stdio.h"
int main(){
	char arr[27];
	char *ptr=arr;
	int i,j;
	for(i=0;i<26;i++){
		arr[i]=i+'A';
	}
	for(j=0;j<26;j++){
		printf("%c \t",*ptr++);
	}
	return 0;
}

