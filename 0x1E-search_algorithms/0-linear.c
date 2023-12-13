#include "search_algos.h"
/**
 * linear_search - Searches for a value in array
 *
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to serach for
 *
 * Return: The index of the value if present, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array");
		printf("[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
