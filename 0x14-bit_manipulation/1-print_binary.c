#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that shows binary representation of a number.
 * @n: input.
 */

void print_binary(unsigned long int n)
{
	int i = 31;

	if (n >= 2)
	{
		print_binary(n >> 1);

	putchar((n & 1) + '0');
	}
}
