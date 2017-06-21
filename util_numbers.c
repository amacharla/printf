#include "holberton.h"
/**
 * _pow - returns value of x ^ y.
 * @x: int value
 * @y: power to be raised
 * Return: x * y-1 till y == 0 -> y = 1 and unwindes
 * thus causing x to multiply itself
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}

/**
 * print_number - print numbers
 * @arg: va_list of arguments
 * Return: number count
 */
int print_number(va_list arg)
{
	int maxint = 1000000000;
	int minint = INT_MIN;
	int number = va_arg(arg, int);
	int i, count = 0, trigger = 0;

	if (number < 0 && number > minint)
	{
		_putchar('-');
		count++;
		number *= -1;
	}
	if (number == 0)
	{
		_putchar('0');
		count++;
	}
	if (number == minint)
	{
		number = (number % (maxint / 10)) * -1;
		_putchar('-');
		count++;
		trigger = 1;
	}
	for (i = 0; i < 10; i++)
	{
		if (number / maxint != 0)
		{
			_putchar(((number / maxint) % 10) + '0');
			count++;
		}
		maxint /= 10;
	}
	if (trigger == 1)
	{
		_putchar('8');
		count++;
	}
	return (count);
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
	remainder = malloc(i * sizeof(int));
	if (remainder == NULL)
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
