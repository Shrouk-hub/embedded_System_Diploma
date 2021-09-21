/*
 * main.c
 *
 *  Created on: Sep 20, 2021
 *      Author: DELL
 */
#include "stdio.h"
#include "string.h"
struct SEmployee{
	char name[50];
	int id;
};
int main()
{
	struct SEmployee x1,x2;
	x1.id=1002;
        strcpy(x1.name,"Alex");
        x2.id=2001;
	strcpy(x2.name,"shrouk");
        struct SEmployee *arr[]={&x1,&x2};
        struct SEmployee (*(*ptr)[2])=&arr;
        printf("Employee Name :%s\n",(**ptr)->name);
        printf("Employee ID : %d",(**ptr)->id);
	return 0;
}

