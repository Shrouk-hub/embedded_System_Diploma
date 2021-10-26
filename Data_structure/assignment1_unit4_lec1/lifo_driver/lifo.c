/*
 * lifo.c
 *
 *  Created on: Oct 26, 2021
 *      Author: DELL
 */
#include"lifo.h"
#include"stdio.h"

LIFO_Status Add_item(LIFO_t* buf,unsigned int item)
{
	if(!buf->base|| !buf->head)
		return lifo_null;

	if(buf->count==buf->length)
		return lifo_full;

	*(buf->head)=item;
	buf->head++;
	buf->count++;

	return lifo_no_error;
}
LIFO_Status Get_item(LIFO_t* buf,unsigned int* item)
{
	if(!buf->base|| !buf->head)
			return lifo_null;

	if(buf->count==0)
		return lifo_empty;

	buf->head--;
	*item=*buf->head;
	buf->count--;

	return lifo_no_error;
}
LIFO_Status Lifo_init(LIFO_t* buf,unsigned int* arr,unsigned int length)
{
	if(arr == NULL )
		return lifo_null;

	buf->base=arr;
	buf->head=arr;
	buf->length=length;
	buf->count=0;

	return lifo_no_error;
}

