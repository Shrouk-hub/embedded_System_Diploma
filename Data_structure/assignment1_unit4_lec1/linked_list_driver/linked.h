/*
 * linked.h
 *
 *  Created on: Nov 1, 2021
 *      Author: DELL
 */

#ifndef LINKED_H_
#define LINKED_H_

#include"stdio.h"
#include"stdlib.h"

typedef struct{
		unsigned int id;
		char name[40];
		float height;
}Data_t;

typedef struct{
Data_t student;
Data_t* next;
}Student_t;



void Add_student();
void Delete_student();
void Print_all();
void Delete_all();
void Reverse_list();
void nth_index();
void middle_list();

#endif /* LINKED_H_ */
