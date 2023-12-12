#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10times
 */
void print_alphabet_x10(void)
{
	int i, j;
	char l;

	for (i = 0; i < 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}

		_putchar('\n');
	}
}
