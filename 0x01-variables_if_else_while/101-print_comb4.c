#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * Description: Print unique combinations of triple digit numbers
 * Return: zero and end the program
 */
int main(void)
{
	int c;
	int d;
	int e;

	for (c = 0; c <= 9; c++)
	{
		for (d = c + 1; d <= 9; d++)
		{
			for (e = d + 1; e <= 9; e++)
			{
				putchar ('0' + c);
				putchar ('0' + d);
				putchar ('0' + e);
				if ((c != 7) || (d != 8) || (e != 9))
				{
					putchar (',');
					putchar (' ');
				};
			};
		};
	};
	putchar ('\n');
	return (0);
}
