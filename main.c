#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int count = 0;
	
	count = _printf("%i %d %c", -11, 12, 'h');
	printf("%i %d %c\n", -11, 12, 'h');
	return (count);
}
