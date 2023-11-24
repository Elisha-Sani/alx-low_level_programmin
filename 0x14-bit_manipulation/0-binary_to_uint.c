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
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
	if (*b == '0' || *b == '1')
	{
		num = (num << 1) + (*b - 0);
		b++;
	}
	else
	{
		return (0);
	}
	}
	return (num);

}
