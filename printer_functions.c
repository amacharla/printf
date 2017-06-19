#include "holberton.h"
/**
 * print_percent - print percent
 * Return: count
 */
int print_percent()
{
	_putchar('%');
	return (1);
}
/**
** print_c - prints character
** @arg - char to print
** Return: 0 success
**/
int print_char(va_list arg)
{
	char i;

	i = va_arg(arg, int);
	_putchar(i);

	return (1);
}

/**
** print_string - prints string
** @arg: string to print
** Prints string
** Return: string length
**/
int print_string(va_list arg)
{
	unsigned int i;
	char *str;

	str = va_arg(arg, char *);
	
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
/**
 * print_number - print numbers
 * @arg: va_list of arguments
 * Return: number count
 */
int print_number(va_list arg)
{
	unsigned int i, j;
	unsigned int digit = 0;
	int number = va_arg(arg, int);
	
	/*if negative number put negative sign*/
	if (number < 0)
		_putchar('-');
	/*get int length */	
	for (i = 1; number/10 == 0; i++)
		;
	/*print all the digits except ones place*/
	for (j = i; j > 0; j--)
	{
		digit = number / (10 ^ j);
		_putchar(digit + '0');

	}
	/*print ones place*/
	if (j == 0)
	{	digit = number % 10;
		_putchar(digit + '0');
	}

	return (i);

}
