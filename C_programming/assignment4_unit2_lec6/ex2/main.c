/*
 * main.c
 *
 *  Created on: Sep 14, 2021
 *      Author: DELL
 */
#include "stdio.h"
struct Sdistance{
	int feet;
	float inch;
};
void main(){
	int sum1=0;
	float sum2=0;
	struct Sdistance d1,d2;
	printf("Enter information for 1st distance:\n");
	printf("Enter feet:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&d1.feet);
	printf("Enter inch:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&d1.inch);
	printf("Enter information for 2nd distance:\n");
	printf("Enter feet:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&d2.feet);
	printf("Enter inch:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&d2.inch);
	sum1=d1.feet+d2.feet;
	sum2=d1.inch+d2.inch;
	while(sum2>=12.5){
		sum1++;
		sum2-=12.0;
	}
	printf("Sum of distances='%d'%.2f",sum1,sum2);
}

