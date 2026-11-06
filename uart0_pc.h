
#ifndef _UART0_PC_H_
#define _UART0_PC_H_

void UART0_Init(void);
void UART0_SendChar(char c);
void UART0_SendString(const char *str);

int  UART0_ReceiveString(char *buf, int buf_size, unsigned long timeout_loops);

#endif
