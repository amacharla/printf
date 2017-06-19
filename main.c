#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int count = 0;
	
	count = _printf("%c %i", 'h', 11);
	printf("%c %i\n", 'h', -11);
	return (count);
}
