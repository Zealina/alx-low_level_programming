#include "main.h"

/**
 * print_last_digit - Prints the last digit.
 * @c: Argument passed.
 * Return: The value of last digit.
 */

int print_last_digit(int c)
{
	int las = c % 10;

	if (las  < 0)
		las *= -1;

	_putchar(las + '0');

	return (las);
}
