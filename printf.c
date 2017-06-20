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

	pstruct print_func [] = {
		{'c', print_char}, {'s', print_string}, {'i', print_integer},
		{'d', print_digit}, {'b', print_binary}, {'%', print_percent}, {'\0', NULL}
	};
	/* initialize va list and transvers and count */
	va_start(arguments, format);
	i = 0, j = 0, count = 0;

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			mod = format[i + 1];
			while (print_func[j].type)
			{
				if (print_func[j].type == mod)
					{ count += print_func[j].printer(arguments); i++; break; }
				j++;
			}
			if (print_func[j].type == '\0')
			{
				_putchar('%'); _putchar(mod);
				count += 2; i++; /*move past %*/
			}
			j = 0; /*reset transverse for type if matched or hits null*/
			i++; /*move past mod*/
		}
		else
			{_putchar(format[i]); count++; i++; } /*move to next argument*/
	}
	va_end(arguments);
	return (count);
}
