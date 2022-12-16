#include "main.h"

/**
 * print_numbers - Print all digits from 0 to 9.
 * Return: void, end of program
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
