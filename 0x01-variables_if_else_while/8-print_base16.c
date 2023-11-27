#include <stdio.h>
/**
 * main - Function that outputs hexafecimal
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; ++i)
	{
		putchar('0' + i);
	}
	for (c = 'a'; c <= 'f'; i++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
