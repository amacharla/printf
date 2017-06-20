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
