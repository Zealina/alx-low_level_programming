#include <stdio.h>

/**
 * print_alphabet - the entry point
 * Description: Print the Alphabets usng two _putchar
 * Return: Integer zero, End of program
*/
#include "main.h"
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
