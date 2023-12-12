#include "search_algos.h"
/**
 * binary_search - Search through an array for a value
 * @array: The array to be search
 * @size: the size of the array
 * @value: The value to search for
 *
 * Return: first index of value if successful, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i;

	if(!array)
		return (-1);
	for(i = size / 2; left <= right; i = (left + right) / 2)
	{
		if (array[i] == value)
			return (i);
		else if (value < array[i])
			right = i - 1;
		else if (value > array[i])
			left = i + 1;
	}
	return (-1);
}
