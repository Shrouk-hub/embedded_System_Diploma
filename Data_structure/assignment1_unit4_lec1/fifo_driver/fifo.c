/*
 * fifo.c
 *
 *  Created on: Oct 27, 2021
 *      Author: DELL
 */
#include"stdio.h"
#include"fifo.h"

FIFO_Status fifo_init(FIFO_t* fifo,element_type* buf,unsigned int length)
{
	if(buf== NULL)
		return fifo_null;

	fifo->base=buf;
	fifo->head=buf;
	fifo->tail=buf;
	fifo->length=length;
	fifo->count=0;

	return fifo_no_error;
}
FIFO_Status fifo_enqueue(FIFO_t* fifo,element_type item)
{
	if(!fifo->base||!fifo->head||!fifo->tail)
		return fifo_null;

	if(fifo->count == fifo->length)
			return fifo_full;

	*(fifo->head)=item;
	fifo->count++;
	fifo->head++;

	return fifo_no_error;
}
FIFO_Status fifo_dequeue(FIFO_t* fifo,element_type* item)
{
	if(!fifo->base||!fifo->head||!fifo->tail)
				return fifo_null;

	if(fifo->count==0)
		return fifo_empty;

	*item=*(fifo->tail);
	fifo->count--;
	fifo->tail++;

		return fifo_no_error;
}
FIFO_Status fifo_is_full(FIFO_t* fifo)
{
	if(!fifo->base||!fifo->head||!fifo->tail)
			return fifo_null;
	if(fifo->count == fifo->length)
		return fifo_full;

	return fifo_no_error;
}
void fifo_print(FIFO_t* fifo)
{
	element_type* temp;
	int i;
	if(fifo->count==0){
		printf("fifo is empty");
	}
	else
	{
		temp=fifo->tail;
		for(i=0;i<fifo->count;i++){
			printf("%x \n",*temp);
			temp++;
		}
	}
}

