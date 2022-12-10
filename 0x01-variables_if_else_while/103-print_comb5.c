#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * Description: Print unique combinations of four digit numbers
 * Return: zero and end the program
 */
int main(void)
{
	int c;
	int d;

	for (c = 0; c <= 99; c++)
	{
		for (d = 0; d <= 99; d++)
		{
			if (c < d)
			{
				putchar ((c / 10) + 48);
				putchar ((c % 10) + 48);
				putchar (' ');
				putchar ((d / 10) + 48);
				putchar ((d % 10) + 48);
				if ((c != 98) || (d != 99))
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
