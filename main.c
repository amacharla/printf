#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int count = 0;
	
	count = _printf("%cs %i", 'h', -23);
	printf("%cs %i \n", 'h', -23);
	return (count);
}
