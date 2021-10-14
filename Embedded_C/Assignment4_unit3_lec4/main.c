#include "Platform_types.h"

#define SYSCTL_RCGC_R (*((volatile unsigned long *)(0x400FE000+0x108)))
#define GPIO_PORTF_DATA_R (*((volatile unsigned long *)(0x40025000+0x3FC)))
#define GPIO_PORTF_DIR_R (*((volatile unsigned long *)(0x40025000+0x400)))
#define GPIO_PORTF_DEN_R (*((volatile unsigned long *)(0x40025000+0x51C)))

int main(void)
{
	volatile unsigned long i;
	SYSCTL_RCGC_R=0x00000020;
	for(i=0;i<200;i++);
	GPIO_PORTF_DIR_R|=0x00000008;
	GPIO_PORTF_DEN_R|=0x00000008;
	while(1)
	{
		GPIO_PORTF_DATA_R|=0x00000008;
		for(i=0;i<2000;i++);
		GPIO_PORTF_DATA_R&=~(0x00000008);	
		for(i=0;i<2000;i++);
	}
	return 0;
}

