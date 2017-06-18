#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
/**
** struct printf_func - struct
** @input: input to determine type of printf function
** @f: specific printf function
**
** Description: the the correct copy function to use
**/
typedef struct printf_func
{
	char input;
	int (*f)();
} printf_func;
int _putchar(char c);
int print_char(va_list arg);
int printf_str(va_list arg);


