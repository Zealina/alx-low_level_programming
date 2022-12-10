#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * Description: Print unique combinations of double digit numbers
 * Return: zero and end the program
 */
int main(void)
{
	int c;
	int d;

	for (c = 0; c <= 9; c++)
	{
		for (d = c + 1; d <= 9; d++)
		{
			putchar ('0' + c);
			putchar ('0' + d);
			if ((c != 8) || (d != 9))
			{
				putchar (',');
				putchar (' ');
			};
		};
	};
	putchar ('\n');
	return (0);
}
