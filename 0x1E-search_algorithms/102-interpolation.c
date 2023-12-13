#include "search_algos.h"
/**
 * interpolation_search - Search for a value in an array
 * @array: The array to be searched
 * @size the size of the array
 * @value: The value to search for
 *
 * Return: The index of value if found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);
	while (high != low)
	{
		pos = low + ((high - low) * (value - array[low]) / (array[high] - array[low]));
		if (pos > high)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	if (value == array[low])
		return (low);
	return (-1);
}
