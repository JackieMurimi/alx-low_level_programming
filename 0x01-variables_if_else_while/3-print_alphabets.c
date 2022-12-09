#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints in lower and upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
			putchar(c);
	for (d = 'A'; d <= 'Z'; d++)
			putchar(d);

	putchar('\n');
	return (0);
}
