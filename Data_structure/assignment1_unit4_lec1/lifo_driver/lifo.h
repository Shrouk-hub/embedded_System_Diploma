/*
 * lifo.h
 *
 *  Created on: Oct 24, 2021
 *      Author: DELL
 */

#ifndef LIFO_H_
#define LIFO_H_

typedef struct{
	unsigned int* head;
	unsigned int length;
	unsigned int count;
	unsigned int* base;
}LIFO_t;

typedef enum {
	lifo_no_error,
	lifo_full,
	lifo_empty,
	lifo_null
}LIFO_Status;

LIFO_Status Add_item(LIFO_t* buf,unsigned int item);
LIFO_Status Get_item(LIFO_t* buf,unsigned int* item);
LIFO_Status Lifo_init(LIFO_t* buf,unsigned int* arr,unsigned int length);

#endif /* LIFO_H_ */
