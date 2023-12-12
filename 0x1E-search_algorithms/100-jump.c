#include "search_algos.h"
/**
 * jump_search - Using Jumpsearch to search for value on ordered array
 * @array: The array to be searched
 * @size: The size of the array
 * @value: Thw search value
 * Return: The index of first value if successful, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jfactor = sqrt(size), i, j;

	if (!array)
		return (-1);
	for (i = 0; i < size && value > array[i]; i += jfactor)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if ((i + jfactor) > size)
			jfactor = 1;
	}
	if (i == size)
		return (-1);
	printf("Value found between indexes [%d] and [%d]\n", i - jfactor, i);
	for (j = i - jfactor; j <= i; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
			if (array[j] == value)
				return (j);
	}
	return (-1);
}
