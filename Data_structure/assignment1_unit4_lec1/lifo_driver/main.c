/*
 * main.c
 *
 *  Created on: Oct 26, 2021
 *      Author: DELL
 */
#include "stdio.h"
#include "stdlib.h"
#include "lifo.h"

unsigned int buf[5];

void main(){
	unsigned int i,temp=0;
	LIFO_t lifo1,lifo2;

	//init first lifo
	Lifo_init(&lifo1,buf,5);

	//dynamic allocation
	unsigned int* buf2=(unsigned int*) malloc(5*sizeof(unsigned int));

	//init second lifo
	Lifo_init(&lifo2,buf2,5);

	for(i=0;i<5;i++){
		if(Add_item(&lifo1,i)==lifo_no_error)
		    printf("add_item=%d\n",i);
	}
	for(i=0;i<5;i++){
			if(Get_item(&lifo1,&temp)==lifo_no_error)
				printf("get_item=%d\n",temp);
		}


}

