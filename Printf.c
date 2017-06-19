#include "holberton.h"

/**
** _printf - gives output
** @format: char 
** Return: num of chars 
**/

int _printf(const char *format, ...)
{
	va_list arguments;
	unsigned int i = 0, j = 0, index;
	unsigned int len = 0;

	struct print_func [] =
	{
		{ 'c', print_c},
		{'s', print_s},
		{NULL, NULL}
	};

	/* initialize va list */
	va_start(arguments, format);

	if (format == NULL)
		return (0);

	/* prints char before % and copies after % */
	while (format && format[i])
	{
		if (format[i] != '%')
			index = format[i];
		else
		{
			i++;
			j = 0;
			while (print_func[j].type != '\0')
			{
				if (print_func[j].type == format[i])
					index = print_func[j].printer(arg;
				j++;
			}
		}
		i++;
		index;
	}
	va_end(arg);
	return (index);
}
