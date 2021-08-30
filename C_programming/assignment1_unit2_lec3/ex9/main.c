/*
 * main.c
 *
 *  Created on: Aug 29, 2021
 *      Author: shrouk
 */
#include "stdio.h"
void main ()
{
	char x;
	printf("Enter an alphabet:");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	if(x=='i'||x=='e'||x=='u'||x=='a'||x=='o'){
		printf("%c is a vowel.",x);
	}
	else{
		printf("%c is consonant.",x);
	}
}

