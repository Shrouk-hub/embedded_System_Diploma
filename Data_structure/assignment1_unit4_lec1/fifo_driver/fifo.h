/*
 * fifo.h
 *
 *  Created on: Oct 27, 2021
 *      Author: DELL
 */

#ifndef FIFO_H_
#define FIFO_H_
#include"stdio.h"

#define width 5
#define element_type unsigned char

element_type arr[width];


typedef struct{
	element_type* head;
	element_type* tail;
	unsigned int length;
	unsigned int count;
	element_type* base;
}FIFO_t;

typedef enum {
	fifo_no_error,
	fifo_full,
	fifo_empty,
	fifo_null
}FIFO_Status;

FIFO_Status fifo_init(FIFO_t* fifo,element_type* buf,unsigned int length);
FIFO_Status fifo_enqueue(FIFO_t* fifo,element_type item);
FIFO_Status fifo_dequeue(FIFO_t* fifo,element_type* item);
FIFO_Status fifo_is_full(FIFO_t* fifo);
void fifo_print(FIFO_t* fifo);


#endif /* FIFO_H_ */
