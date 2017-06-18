#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdlib.h> /*NULL*/
#include <stdarg.h> /*va_list*/

int _putchar(char c);
int _printf(const char *format, ...);

/**
* struct printf_functions - struct to match type with printer funcitons
* @type: input to determine type of printf function
* @printer: specific printf function
* Description: the the correct copy function to use
**/
typedef struct printf_functions
{
	char type;
	int (*printer)();
} print_func;

/* HELPER FUNCTIONS */
int print_char(va_list arg);
int print_string(va_list arg);

#endif /* _PRINTF_H_ */
