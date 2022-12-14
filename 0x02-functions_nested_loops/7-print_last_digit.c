#include "main.h"

/**
 * print_last_digit - the point of entry
 * Description: Print the last digits of nubmers entered
 * @c: the argunemt
 * Return: return the last digit
 */
int print_last_digit(int c)
{
	int n;
	
	if (c < 0)
		c = c * (-1);
	n = c % 10;
	_putchar('0' + n);
	return (n);
}
