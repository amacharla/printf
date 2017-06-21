#include "holberton.h"
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
	/* if negative and not max min int */
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
	if (number == minint) /* cut off lass number then convert to positive */
	{
		number = (number % (maxint / 10)) * -1;
		_putchar('-');
		count++;
		trigger = 1;
	}
	for (i = 0; i < 10; i++) /* print digit by digit */
	{
		if (number / maxint != 0) /* loop till find left more digit */
		{
			_putchar(((number / maxint) % 10) + '0'); /* print digit*/
			count++;
		}
		maxint /= 10; /* lower the divisior or go through the digits left to right*/
	}
	if (trigger == 1) /* if max min digt put back the last digit */
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
