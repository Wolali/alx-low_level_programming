#include <stdio.h>

/**
 * main - Prints in lowercase
 * followed by a new line, except e and q
 * Return: 0 (Success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar ('\n');

	return (0);
}
