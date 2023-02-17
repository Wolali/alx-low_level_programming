#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)

{
	long long int a;
	char b;
	int c;
	long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
