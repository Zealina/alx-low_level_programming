#include <stdio.h>

/**
 * print_alphabet_x10 - the entry point
 * Description: Print the Alphabets usng two _putchar
 * Return: Integer zero, End of program
*/
#include "main.h"
void print_alphabet_x10(void)
{
	char i;
	int n;

	for (n = 0; n < 10; n++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
