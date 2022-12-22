#include "main.h"

/**
 * reverse_array - Function to reverse the characters of two strings
 * @a: Pointer to the array
 * @n: The number of elements to swap
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int x = 0, t;

	n = n - 1;
	while (x < n)
	{
		t = *(a + x);
		*(a + x) = *(a + n);
		*(a + n) = t;
		x++;
		n--;
	}
}
