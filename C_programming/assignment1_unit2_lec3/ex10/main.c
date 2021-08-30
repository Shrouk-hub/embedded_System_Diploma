/*
 * main.c
 *
 *  Created on: Aug 28, 2021
 *      Author: DELL
 */
#include "stdio.h"
void main ()
{
	float n1,n2,n3;
	printf("enter three numbers:");
	fflush(stdout); fflush(stdin);
	scanf("%f %f %f",&n1,&n2,&n3);
	if(n1>n2)
	{
		if(n1>n3){
			printf("largest number= %f ",n1);
		}
		else{
			printf("largest number= %f",n3);
		}
	}
	else
	{
		if(n2>n3)
		{
					printf("largest number= %f",n2);
		}
		else
		{
					printf("largest number= %f",n3);
		}
	}

}

