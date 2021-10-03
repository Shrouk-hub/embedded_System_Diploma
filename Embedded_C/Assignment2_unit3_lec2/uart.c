#include "uart.h"
#define UARTDR *((volatile unsigned int*const)((unsigned int*)0x101f1000))
void uart_send (unsigned char* str)
{
	while(*str!='\0')
	{
		UARTDR=(unsigned int)(*str);
		str++;
	}
}