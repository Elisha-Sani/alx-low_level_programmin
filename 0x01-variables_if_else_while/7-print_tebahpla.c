#include <stdio.h>
/**
 * main - Function that prints out alphabets  numbers in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 25; i >= 0; --i)
	{
		char c = 'a' + i;

		putchar(c);
	}

	putchar('\n');

	return (0);
}
