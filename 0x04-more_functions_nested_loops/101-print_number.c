#include "main.h"

/**
 * print_number - Function to print integer
 * @n: The argument
 */
void print_number(int n)
{
	while (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	if ((n >= 0 && n < 10) || (n > -10 && n < 0))
	{
		_putchar('0' + n);
	}
	else if ((n >= 10 && n < 100) || (n > -100 && n <= -10))
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if ((n >= 100 && n < 1000) || (n > -1000 && n <= -100))
	{
		_putchar('0' + (n / 100));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if ((n >= 1000 && n < 10000) || (n > -10000 && n <= -1000))
	{
		_putchar('0' + (n / 1000));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if ((n >= 10000 && n < 100000) || (n > -100000 && n <= -10000))
	{
		_putchar('0' + (n / 10000));
		_putchar('0' + ((n / 1000) % 10));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
}
