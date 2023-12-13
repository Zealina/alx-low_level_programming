#include "search_algos.h"
/**
 * exponential_search - Search for value in the array
 * @array: The array to be searched
 * @value: The value to search for
 * @size: The size of the array
 *
 * Return: the index of value if successful, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t u_bound = 1, l_bound, i;

	if (!array)
		return (-1);
	while (u_bound < size && array[u_bound] < value)
		u_bound *= 2;
	l_bound = u_bound / 2;
	if (u_bound > size)
		u_bound = size - 1;
	for (i = l_bound; i <=  u_bound; i = (u_bound + l_bound) / 2)
	{
		if (array[i] == value)
			return (i);
		else if (value < array[i])
			u_bound = i - 1;
		else if (value > array[i])
			l_bound = i + 1;
	}
	return (-1);
}
