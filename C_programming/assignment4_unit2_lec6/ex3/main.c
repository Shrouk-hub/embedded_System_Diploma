/*
 * main.c
 *
 *  Created on: Sep 14, 2021
 *      Author: DELL
 */
#include "stdio.h"
struct Scomplex{
	float real_num;
	float imj_num;
};
void add(struct Scomplex c1,struct Scomplex c2){
	float sum1=0.0,sum2=0.0;
	sum1=c1.real_num+c2.real_num;
	sum2=c1.imj_num+c2.imj_num;
	printf("Sum=%.2f+%.2fi",sum1,sum2);
}
void main(){
	struct Scomplex c1,c2;
	printf("For 1st complex number:\n");
	printf("Enter real and imaginary respectively:");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&c1.real_num,&c1.imj_num);
	printf("For 2nd complex number:\n");
	printf("Enter real and imaginary respectively:");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&c2.real_num,&c2.imj_num);
	add(c1,c2);
}

