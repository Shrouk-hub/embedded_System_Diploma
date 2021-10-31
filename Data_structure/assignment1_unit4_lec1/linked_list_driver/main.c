/*
 * main.c
 *
 *  Created on: Nov 1, 2021
 *      Author: DELL
 */

#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"linked.h"
#define Dprintf(...) {fflush(stdout);\
					  fflush(stdin);\
                      printf(__VA_ARGS__);\
		              fflush(stdout);\
		              fflush(stdin);}
void main()
{
	char text[50];
	while(1)
	{
		Dprintf("\n\t Choose one of the following Options \n");
			Dprintf("\n 1:AddStudent");
			Dprintf("\n 2:DeleteStudent");
			Dprintf("\n 3:viewStudents");
			Dprintf("\n 4:DeleteAll");
			Dprintf("\n 5:Reverse_list");
			Dprintf("\n 6:nth_index");
			Dprintf("\n 7:middle_list");
			Dprintf("\n Enter Option Number:");
			gets(text);
			switch(atoi(text))
			{
			case 1:
				Add_student();
				break;
			case 2:
				Delete_student();
				break;
			case 3:
				Print_all();
				break;
			case 4:
				Delete_all();
				break;
			case 5:
				Reverse_list();
				break;
			case 6:
				nth_index();
				break;
			case 7:
				middle_list();
				break;
			default:
				Dprintf("\n wrong choice");
				break;
			}
	}
}
