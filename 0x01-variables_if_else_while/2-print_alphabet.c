#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets A-Z, probably in series
 * Return: ends the main function
 */
int main(void)
{
	char c1;

	for (c1 = 'a'; c1 <= 'z'; c1++)
	{
		putchar (c1);
	}
		putchar ('\n');
	return (0);
}
