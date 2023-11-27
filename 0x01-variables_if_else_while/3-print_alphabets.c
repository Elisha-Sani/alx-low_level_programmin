#include <stdio.h>
/**
 * main - Function that outputs alphabets in both upper and lower cases
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; ++i)
	{
		putchar('a' + i);
	}
	for (i = 0; i < 26; ++i)
	{
		putchar('A' + i);
	}

	putchar('\n');

	return (0);
}
