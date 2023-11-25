#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that shows binary representation of a number.
 * @n: input.
 */

void print_binary(unsigned long int n)
{
	int i = 31;

	while (i >= 0)
	{
	if (n & (1 << i))
	{
		printf("1");
	}
	else
	{
		print("0");
	}
	i--;
	}
}
