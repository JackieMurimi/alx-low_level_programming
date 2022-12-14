#include "main.h"

/**
 * print_last_digit - prints the last digit of n
 * @n: the number
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{

	int lastdig = n % 10;

	if (lastdig < 0)
		lastdig *= -1;

	_putchar(lastdig + '0');

	return (0);

}
