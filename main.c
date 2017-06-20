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
	_printf("String:[%R]\n", "hello");
    	printf("String:[%R]\n", "hello");
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");	
	return (0);
}
