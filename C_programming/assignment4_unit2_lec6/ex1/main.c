/*
 * main.c
 *
 *  Created on: Sep 14, 2021
 *      Author: DELL
 */
#include "stdio.h"
struct Sstudent{
	char name[50];
	int roll_number;
	float mark;
};
void main(){
	struct Sstudent x;
	printf("Enter information of student:\n");
	printf("Enter name:");
	fflush(stdout); fflush(stdin);
	scanf("%s",&x.name);
	printf("Enter roll number:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x.roll_number);
	printf("Enter marks:");
	fflush(stdout); fflush(stdin);
	scanf("%f",&x.mark);
	printf("displaying information:\n");
	printf("Name:%s\n",x.name);
	printf("Roll:%d\n",x.roll_number);
	printf("Marks:%.3f\n",x.mark);
}

