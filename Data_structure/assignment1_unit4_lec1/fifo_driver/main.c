/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: DELL
 */

#include "stdio.h"
#include "stdlib.h"
#include "fifo.h"

void main()
{
	element_type i,temp=0;
	FIFO_t fifo_1;
	if(fifo_init(&fifo_1,arr,5)==fifo_no_error)
		printf("done\n");

	for(i=0;i<7;i++){
		if(fifo_enqueue(&fifo_1,i)==fifo_no_error)
			printf("added=%d\n",i);
		else
			printf("failed\n");
	}
	fifo_print(&fifo_1);
	if(fifo_dequeue(&fifo_1,&temp)==fifo_no_error)
				printf("removed=%d\n",temp);
	if(fifo_dequeue(&fifo_1,&temp)==fifo_no_error)
				printf("removed=%d\n",temp);
	fifo_print(&fifo_1);
}
