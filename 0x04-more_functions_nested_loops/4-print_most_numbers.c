#include "main.h"

/**
 * print_most_numbers - Prints all single digits except 2 and 4
 * Return: End of program
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a == 2 || a == 4)
		{
		}
		else
		{
			_putchar(a + '0');
		};
		a++;
	}
	_putchar('\n');
}
