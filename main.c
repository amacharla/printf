#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%i %i\n", 2147483647, -2147483648);
    printf("%i %i\n", 2147483647, -2147483648);
	return (0);
}
