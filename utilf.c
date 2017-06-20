#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
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
 * print_percent - print percent
 * Return: count
 */
int print_percent(void)
{
	_putchar('%');
	return (1);
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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == ara[j])
			{
				_putchar(arb[j]);
				break;
			}
		
		}
		if (j == 52)
			_putchar(s[i]);

	}
	return (i);	
}

