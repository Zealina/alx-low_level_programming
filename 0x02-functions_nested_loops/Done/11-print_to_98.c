#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function to print any natural number to 98
 * @n: The argument
 * Return: always zero
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 97)
		{
			printf("%d", n);
			if (n == 98)
			{
			}
			else
			{
				printf(", ");
			};
			n--;
		}
	}
	else
	{
		while (n < 99)
		{
			printf("%d", n);
			if (n == 98)
			{
			}
			else
			{
				printf(", ");
			};
			n++;
		}
	}
	printf("\n");
}
