#include "main.h"

/**
 * times_table - Print the multiplication table of 9
 * Description: Stated above
 * Return: Always zero
 */
void times_table(void)
{
	int a, b, n;

	n = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			n = a * b;
			if (b > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (n >= 10 && n < 100)
				{
					_putchar('0' + (n / 10));
					_putchar('0' + (n % 10));
				}
				else if (n < 10)
				{
					_putchar(' ');
					_putchar('0' + n);
				}
			}
			else
			{
				_putchar(n + '0');
			}

		}
	_putchar('\n');
	}
}
