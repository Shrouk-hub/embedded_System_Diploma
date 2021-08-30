/*
 * main.c
 *
 *  Created on: Aug 29, 2021
 *      Author: DELL
 */

#include "stdio.h"
void main ()
{
	float n1,n2,product;
	printf("Enter two numbers:");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&n1,&n2);
	product=n1*n2;
	printf("Product:%f",product);
}
