#include <stdio.h>
/**
 * main - Function that prints out single digit numbers in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 9; i >= 0; --i)
	{
		putchar('9' - i);
	}

	putchar('\n');

	return (0);
}
