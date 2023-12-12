#include "main.h"

/**
 * _isalpha - Function to check if capital
 * @c: character to be checked
 *
 * Return: 1 if uppercase and 0 if lower
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
