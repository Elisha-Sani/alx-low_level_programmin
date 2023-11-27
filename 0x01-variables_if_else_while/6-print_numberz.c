#include <stdio.h>
/**
 * main - Function that prints out single digit numbers without using char
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
