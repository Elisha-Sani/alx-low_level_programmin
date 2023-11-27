#include <stdio.h>
/**
 * main - Functions all possible combinations of single digit numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);

		putchar(',' + i);
	}

	putchar('\n');

	return (0);
}
