/*
 * main.c
 *
 *  Created on: Aug 30, 2021
 *      Author: DELL
 */
#include "stdio.h"
void main ()
{
	char x;
	float n1,n2,res;
	printf("enter operator either + or - or * or /:");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	printf("enter two operands:");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&n1,&n2);
	switch(x){
	case'+':{
		res=n1+n2;
		printf("%f+%f=%f",n1,n2,res);
	}
	break;
	case'-':{
		res=n1-n2;
		printf("%f-%f=%f",n1,n2,res);
	}
	break;
	case'*':{
		res=n1*n2;
		printf("%f*%f=%f",n1,n2,res);
	}
	break;
	case'/':{
		res=n1/n2;
		printf("%f/%f=%f",n1,n2,res);
	}
	break;
	}
}
