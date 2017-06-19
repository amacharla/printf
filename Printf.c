#include "holberton.h"

/**
** _printf - gives output
** @format: char 
** Return: num of chars 
**/

int _printf(const char *format, ...)
{
	
	unsigned int i, j, count;
	va_list arguments;

	pstruct print_func [] =
	{
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};

	/* initialize va list */
	va_start(arguments, format);
	i = 0;
	j = 0;
	count = 0;

	/* prints char before % and copies after % */
	while (format && format[i])
	{
		while (print_func[j].type)
		{
			if (print_func[j].type == format[i])
				count += print_func[j].printer(arguments);
			j++;
		}
		j = 0;
		i++;
	}
	_putchar('\n');
	va_end(arguments);
	return (count);
}
