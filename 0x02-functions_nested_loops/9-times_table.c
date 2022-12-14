#include "main.h"

/**
 * times_table - the entry point
 * Description: Print out the nine times table
 * Return: Always zero, End of program
 */
void times_table(void)
{
	int a;
	int b;
	int n;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			n = a * b;
			if (n <= 9)
			{
				_putchar('0' + n);
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((n / 10) + 48);
				_putchar('0' + (n % 10));
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}
