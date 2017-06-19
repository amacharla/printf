#include "holberton.h"

/**
** _printf - gives output
** @format: char 
** Return: num of chars 
**/

int _printf(const char *format, ...)
{
	unsigned int i, j, count;
	char mod;
	va_list arguments;

	pstruct print_func [] =
	{
		{'c', print_char},
		{'s', print_string},
		{'i', print_number},
		{'d', print_number},
		{'%', print_percent},
		{'\0', NULL}
	};

	/* initialize va list and transvers and count */
	va_start(arguments, format);
	i = 0;
	j = 0;
	count = 0;

	while (format && format[i])
	{	
		if (format[i] == '%' && format[i + 1])
		{	
			mod = format[i + 1];
			/*loop through type till null */
			while (print_func[j].type)
			{	/* go through type till it matches format character */
				if (print_func[j].type == mod)
					count += print_func[j].printer(arguments);
				j++; /*transverse through type*/
			}
			j = 0; /*reset transverse for type if matched or hits null*/
			i++;
		}
		else
		{	
			_putchar(format[i]);
			count++;
		}
		i++; /*transverse through format*/
	}
	_putchar('\n');
	va_end(arguments);
	return (count);
}
