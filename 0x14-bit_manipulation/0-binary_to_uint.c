#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: pointer to a string containing the binary number
 *
 * Return: unsigned int with decimal value or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	unsigned int num = 0;
	int i = 0

	while (*b)
	{
	if (*b != '0' && *b != '1')
		return (0);

	if (*b == '1')
	{
		num |= 1 << (31 - i);
	}

	i++;
	b++;

	}

	return (num);
}
