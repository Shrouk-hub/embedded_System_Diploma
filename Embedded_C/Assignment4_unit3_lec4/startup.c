#include "Platform_types.h"
extern int main (void);
void reset_handler(void);
void Default_handler(){
	reset_handler();
}
void NMI_handler(void)__attribute__((weak, alias("Default_handler")));
void H_Fault_handler(void)__attribute__((weak, alias("Default_handler")));
void MM_Fault_handler(void)__attribute__((weak, alias("Default_handler")));
void Bus_Fault_handler(void)__attribute__((weak, alias("Default_handler")));
void Usage_Fault_handler(void)__attribute__((weak, alias("Default_handler")));
static unsigned long _stack_top[256];
void(* const array[])()__attribute__((section(".vectors")))={
	(void(*)()) ((unsigned long)_stack_top+sizeof(_stack_top)),
	 &reset_handler,
	 &NMI_handler,
	 &H_Fault_handler,
	 &MM_Fault_handler,
	 &Bus_Fault_handler,
	 &Usage_Fault_handler
};
extern uint32_t _S_data;
extern uint32_t _E_data;
extern uint32_t _S_bss;
extern uint32_t _E_bss;
extern uint32_t _E_text;
void reset_handler(void){
	uint32_t Data_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data;
	unsigned char* P_src = (unsigned char*)&_E_text;
	unsigned char* P_dst = (unsigned char*)&_S_data;
	for (int i=0 ; i<Data_size ; i++){
		*((unsigned char*)P_dst++) = *((unsigned char*)P_src++);
	}
	uint32_t bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	unsigned char* p_dst = (unsigned char*)&_S_bss;
	for (int i=0 ; i<bss_size ; i++){
		*((unsigned char*)p_dst++) = (unsigned char)0;
	}
	main();
}