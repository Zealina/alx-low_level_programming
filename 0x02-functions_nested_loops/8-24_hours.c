#include "main.h"

/**
 * jack_bauer - the entry point
 * Description: Prints all the minutes of the day
 * Return: the end of the function
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(':');
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar('\n');
		}
	}
}
