#include <stdio.h>
/**
 * main - Functions all possible combinations of single digit numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		putchar('0' + i);

		char a = ',' + i;

		putchar(a);
	}

	putchar('\n');

	return (0);
}
