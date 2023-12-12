#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10times
 */
void print_alphabet(void)
{
	int i;
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
