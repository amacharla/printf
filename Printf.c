#include "holberton.h"

/**
** _printf - gives output
** @format: char 
** Return: num of chars 
**/

int _printf(const char *format, ...)
{
	va_list arguments;
	unsigned int i, j index;
	unsigned int len = 0;

	struct printf [] {
		{ 'c', print_c}, {'s', print_s}, {NULL, NULL}
	};

	/* initialize va list */
	va_start(arguments, format);

	i = 0;

	if (format == NULL)
		return (0);

	/* prints char before % and copies after % */

	while (format && format[i] !=  '\0')
	{
		if (format[i] != '%')
			index = format[i];
		else
		{
			i++;
			j = 0;
			while (printf[j].input != '\0')
			{
				if (printf[j].input == format[i])
				{
				index = printf[j].f(arg, index);
				}
				j++;
			}
		}
		i++;
		index;
	}
	va_end(arg);
	return (index);
}
			

	

	
