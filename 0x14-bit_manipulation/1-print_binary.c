#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that shows binary representation of a number.
 * @n: input.
 */

void print_binary(unsigned long int n)
{
	int i = 31;

	while (i >= 0)
	{
	if (n & (1 << i))
	{
		printf("1");
	}
	else
	{
		print("0");
	}
	i--;
	}
}

/**
 * main - defines the entry point of the program
 * print_binary - defines each individual numbe
 * Return: 0 (successr)
 */

int main(void)
{
print_binary(0);
printf("\n");
print_binary(1);
printf("\n");
print_binary(98);
printf("\n");
print_binary(1024);
printf("\n");
print_binary((1 << 10) + 1);
printf("\n");
return (0);
