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
		{'c', print_char}, {'s', print_string}, {'i', print_number},
		{'R', print_rot13}, {'d', print_number}, {'b', print_binary},
		{'r', print_reverse}, {'%', print_percent}, {'\0', NULL}
	};
	va_start(arguments, format);
	i = 0, j = 0, count = 0;
	if (format == NULL)
		return (0);
	while (format && format[i])
	{
		if (!(format[i] == '%' && format[i + 1]))
			{_putchar(format[i]); count++; i++; continue; } /*move to next argument*/
		mod = format[i + 1];
		while (print_func[j].type)
		{
			if (print_func[j].type == mod)
			{
				count += print_func[j].printer(arguments);
				i++;
				break;
			}
			j++;
		}
		if (print_func[j].type == '\0')
		{
			_putchar('%');
			_putchar(mod);
			count += 2;
			i++; /*move past %*/
		}
		j = 0; /*reset transverse for type if matched or hits null*/
		i++; /*move past mod*/
	}
	va_end(arguments);
	return (count);
}
