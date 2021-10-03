#include "uart.h"
unsigned char arr[100]="learn-in-depth:<shrouk>";
void main(void){
	uart_send (arr);
}