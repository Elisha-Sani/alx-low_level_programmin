#include <stdio.h>
/**
 * main - function that omits q and e from the alphabets
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; ++i)
	{
		char c = 'a' + i;

		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
