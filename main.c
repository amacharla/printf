#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int count = 0;
	
	count = _printf("%c %b %i", 'h', 22, 33);
	printf("%c %b %i \n", 'h', 23);
	return (count);
}
