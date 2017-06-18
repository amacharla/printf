#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
** print_c - prints char
** @arg - char to print
** Return: char amount
**/
int print_char(va_list arg)
{
	char i;

	i = va_arg(arg, int);
	
	_putchar (i);

	return (1);
}

/**
** printf_s - prints string
** @arg: string to print
** Return: string
**/
int printf_str(va_list arg)
{
	unsigned int i;
	char *str;

	str = va_arg(arg, char *);
	
	if (str == NULL)
		str = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar (s[i]);
	}
	return (i);
}
