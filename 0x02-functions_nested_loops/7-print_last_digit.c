#include "main.h"

/**
 * print_last_digit - the point of entry
 * Description: Print the last digits of nubmers entered
 * @c: the argunemt
 * Return: return the last digit
 */
int print_last_digit(int c)
{
	if (c >= 0)
	{
	}
	else
	{
		c = c * (-1);
	};
	c = c % 10;
	_putchar('0' + c);
	return (c);
}
