/*
 * linked.c
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

Student_t* first_node=NULL;
void Add_student()
{
	Student_t* new_student;
	Student_t* prev_student;
	char text[40];
	if(first_node==NULL){
		new_student=(Student_t*) malloc (sizeof(Student_t));
		first_node=new_student;
	}
	else{
		prev_student=first_node;
		while(prev_student->next)
		{
			prev_student=prev_student->next;
		}
		new_student=(Student_t*) malloc (sizeof(Student_t));
		prev_student->next=new_student;
	}
	Dprintf("\nEnter the ID: ");
	gets(text);
	new_student->student.id=atoi(text);

	Dprintf("\nEnter student full name: ");
	gets(new_student->student.name);

	Dprintf("\nEnter the height: ");
	gets(text);
	new_student->student.height=atof(text);

	new_student->next=NULL;
}
void Delete_student()
{
	char text[40];
	unsigned int id;

	Dprintf("\nEnter student_id to be deleted :");
	gets(text);
	id=atoi(text);

	if(first_node){
		Student_t* selected_student;
		Student_t* prev_student=NULL;
		selected_student=first_node;
		while(selected_student)
		{
			if(selected_student->student.id==id){
				if(prev_student)
					prev_student->next=selected_student->next;
				else
					first_node=selected_student->next;
				free(selected_student);
				return ;
			}
			prev_student=selected_student;
			selected_student=selected_student->next;
		}
		Dprintf("cannot find this id");
	}
	else
		Dprintf("list is empty");
}
void Print_all()
{
	if(first_node==NULL){
		Dprintf("list is empty");
	}
	else{
		Student_t* current_student=first_node;
		int index=0;
		while(current_student){
			Dprintf("\n Record Number %d",++index);
			Dprintf("\n ID: %d",current_student->student.id);
			Dprintf("\n Name: %s",current_student->student.name);
			Dprintf("\n Height:%.2f",current_student->student.height);
			current_student=current_student->next;
		}
	}
}
void Delete_all()
{
	if(first_node==NULL){
		Dprintf("list is empty");
	}
	else{
		Student_t* current_student=first_node;
		while(current_student){
			Student_t* temp_student=current_student;
			current_student=current_student->next;
			free(temp_student);
		}
	}
	first_node=NULL;
}
void Reverse_list()
{
	if(first_node==NULL){
		Dprintf("list is empty");
	}
	else{
		Student_t* last_last_student=NULL;
		Student_t* current_student=first_node;
		Student_t* prev_student=NULL;
		while(current_student)
		{
			if(current_student!=first_node){
				prev_student->next=last_last_student;
			}
			last_last_student=prev_student;
			prev_student=current_student;
			current_student=current_student->next;
		}
		prev_student->next=last_last_student;
		first_node=prev_student;
		Print_all();
	}
}
void nth_index()
{
	int count=0;
	if(first_node==NULL){
		Dprintf("list is empty");
	}
	else{
		if(first_node->next)
		{
			int i=0;
			char text[40];
			Dprintf("\nEnter the Index: ");
			gets(text);
			i=atoi(text);
			Student_t* current_student=first_node;
			while(count<i)
			{
				if(current_student->next==NULL){
					Dprintf("\n wrong index");
					return;
				}
				current_student=current_student->next;
				count++;
			}
			Dprintf("\n ID: %d",current_student->student.id);
			Dprintf("\n Name: %s",current_student->student.name);
			Dprintf("\n Height:%.2f",current_student->student.height);
		}
	}
}
void middle_list()
{
	if(first_node==NULL){
		Dprintf("list is empty");
	}
	else{
		int num=1;
		Student_t* student=first_node;
		while(student->next){
			student=student->next;
			num++;
		}
		if(num%2==0)
		{
			num=num/2;
		}
		else
		{
			num=num/2;
		}
		Student_t* current_student=first_node;
		int count=0;
		while(count<num)
		{
			current_student=current_student->next;
			count++;
		}
		Dprintf("\n ID: %d",current_student->student.id);
		Dprintf("\n Name: %s",current_student->student.name);
		Dprintf("\n Height:%.2f",current_student->student.height);

	}
}

