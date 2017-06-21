#include "holberton.h"
#include <unistd.h>
/**
** _putchar - writes the character c to stdout
** @c: The character to print
**
** Return: On success 1.
** On error, -1 is returned
**/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_percent - print percent
 * Return: count
 */
int print_percent(void)
{
	_putchar('%');
	return (1);
}
/**
** print_char - prints character
** @arg: char to print
** Return: 0 success
**/
int print_char(va_list arg)
{
	char i = va_arg(arg, int);

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
 *print_rot13 - makes string to ROT13
 *@arg: arg list put in
 *Return: conversion
 */
int print_rot13(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i;
	int j;
	char *ara;
	char *arb;

	ara = "ABCDEFGHIJKLMabcdefghijklm";
	arb = "NOPQRSTUVWXYZnopqrstuvwxyz";

	i = 0; j = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == ara[j])
			{
				_putchar(arb[j]);
				break;
			}
			if (s[i] == arb[j])
			{
				_putchar(ara[j]);
				break;
			}
		}
		i++;
		if (j == 52)
			_putchar(s[i]);

	}
	return (i);
}

