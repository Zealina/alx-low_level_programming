#include "main.h"
#include <stdio.h>

/**
 * print_array - Print the numbers in an array
 * @n: The number of characters to print
 * @a: Pointer to the array
 */
void print_array(int *a, int n)
{
	int ind1;

	for (ind1 = 0; ind1 < n; ind1++)
	{
		if (ind1 == 0)
		{
			printf("%d", a[ind1]);
		}
		else
		{
			printf(", %d", a[ind1]);
		}
	}
	printf("\n");
}
