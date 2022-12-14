#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int ten;
	char ab;

	for (ten = 0; ten <= 9; ten++)
	{
		for (ab = 'a'; ab <= 'z'; ab++)
			_putchar(ab);
		_putchar('\n');
	}
}

