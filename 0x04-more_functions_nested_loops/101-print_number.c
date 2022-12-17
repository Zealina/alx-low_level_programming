#include "main.h"

/**
 * print_number - print an integer
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int a, b, d = n;
	double c = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			d = n * -1;
			_putchar('-');
		}

		while (c <= d)
			c *= 10;
		a = c / 10;

		while (a >= 1)
		{
			b = d / a;
			_putchar(b + '0');
			d = (d - (a * b));
			a /= 10;

		}
	}
}
