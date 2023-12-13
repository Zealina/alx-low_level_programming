#include "search_algos.h"
/**
 * advanced_binary - Search through an array for a value and return first index
 * @array: The array to be search
 * @size: the size of the array
 * @value: The value to search for
 *
 * Return: first index of value if successful, else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (advanced_binary_search(array, size - 1, 0, value));
}
/**
 * advanced_binary_search - Main function to do the work
 * @array: The array to be searched
 * @u_bound: The upper limit
 * @l_bound: The lower limit
 * @value: The value to saerch for
 *
 * Return: The first index of the value to be searched for
 */
int advanced_binary_search (int *array, size_t u_bound, size_t l_bound, int value)
{
	size_t mid = l_bound + (u_bound - l_bound) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_search(array, mid - 1, l_bound, value));
	}
	else if (value < array[mid])
			return (advanced_binary_search(array, mid - 1, l_bound, value));
	else if (value > array[mid])
		return (advanced_binary_search(array, u_bound, mid + 1, value));
	else if (mid == u_bound)
		return (-1);

	return (-1);
}
