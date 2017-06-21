#include "holberton.h"
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
	char i;

	i = va_arg(arg, int);

	if (i == '\0')
		return (0);

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
	char *s;
	char *temp;
	int i, j;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(ahyy)";
	temp = malloc(52 * sizeof(char));
	if (temp == NULL)
		return (0);

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
			temp[i] = s[i] + 13;
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			temp[i] = s[i] - 13;
		else
			temp[i] = s[i];
	}

	for (j = 0; j < i; j++)
		_putchar(temp[j]);
	free(temp);
	return (j);
}
/**
 * print_reverse - print string in reverse
 * @arg: arguments list
 * Return: count
 */
int print_reverse(va_list arg)
{
	int i, j;
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
		s = ")llun(";
	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = (i - 1); j >= 0; j--)
		_putchar(s[j]);
	return (i);
}
