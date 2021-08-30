/*
 * main.c
 *
 *  Created on: Aug 30, 2021
 *      Author: shrouk
 */

#include "stdio.h"
void main ()
{
	char x;
	printf("enter a character:");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	if((x>='a'&& x<='z')||(x>='A'&& x<='Z'))
	{
		printf("%c is an alphabet.",x);
	}
	else{
		printf("%c is not an alphabet.",x);
	}

}
