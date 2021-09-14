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
	struct Sstudent arr[10];
	int i,k;
	printf("Enter information of students:\n");
	for(i=0;i<10;i++){
		k=i+1;
		printf("For roll number %d\n",k);
		printf("Enter name:");
		fflush(stdout); fflush(stdin);
		scanf("%s",&arr[i].name);
		printf("Enter mark:");
		fflush(stdout); fflush(stdin);
		scanf("%f",&arr[i].mark);
	}
	printf("displaying information of students:\n");
	for(i=0;i<10;i++){
		k=i+1;
		printf("Information for roll number %d:\n",k);
		printf("Name:%s\n",arr[i].name);
		printf("Mark:%.2f\n",arr[i].mark);
	}
}

