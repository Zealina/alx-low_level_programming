#include "main.h"

/**
 * print_times_table - Function to print any multiplication
 * cont-d - ...table lower than times 15
 * @n: The argument
 * Return: Always zero
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n < 16 && n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (c >= 100 && c < 1000)
					{
						_putchar((c / 100) + 48);
						_putchar(((c / 10) % 10) + 48);
						_putchar((c % 10) + 48);
					}
					else if (c < 100 && c >= 10)
					{
						_putchar(' ');
						_putchar((c / 10) + 48);
						_putchar((c % 10) + 48);
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(c + 48);
					}
				}
				else
				{
					_putchar(c + 48);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
