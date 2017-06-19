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
/**
 * print_binary - print in binary
 * @arg: int arguments
 * Return: number of arguments outputted
 */
int print_binary(va_list arg)
{
	unsigned int i = 0;
	unsigned int j;
	int number = va_arg(arg, int);
	int counter = number;
	int *remainder;

	/* count number of characters (1 or 0) */
	for (i = 1; counter != 0; i++)
		counter /= 2;
	
	/* allocating space to hold binary values + null check*/
	if ((remainder = malloc(i * sizeof(char))) == NULL)
			return (0);

	/* adding remainders (binary into array backwards) */
	for (i = 0; number != 0; i++)
	{
		remainder[i] = number % 2;
		number /= 2;
	}
	remainder[i] = number; /*last binary added*/
	/* printing remainders array starting from last number*/
	for (j = i - 1; j > 0; j--)
		_putchar(remainder[j] + '0');
	_putchar(remainder[j] + '0'); /*print remainder[0]*/
	free(remainder);
	return (i);
}
