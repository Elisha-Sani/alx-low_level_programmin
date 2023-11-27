#include <stdio.h>
/**
 * main - Function that prints alphabets in lower cases
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
