#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 */

void print_alphabet(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		_putchar(lett);

	_putchar('\n');
}
