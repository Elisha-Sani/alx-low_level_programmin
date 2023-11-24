#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
#ifdef __x86_64__
    printf("Running on 64-bit architecture\n");
  #else
    printf("Running on 32-bit architecture\n");
  #endif
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
