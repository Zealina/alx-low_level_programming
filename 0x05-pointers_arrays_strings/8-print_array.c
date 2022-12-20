#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print members of array
 * @a: The array
 * @n: index to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
		x++;
	}
	printf("\n");
}
