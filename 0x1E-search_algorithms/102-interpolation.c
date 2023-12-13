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
	size_t lo = 0, hi = size - 1, pos;

	if (!array)
		return (-1);
	while (hi != lo)
	{
		pos = lo + ((hi - lo) * (value - array[lo]) / (array[hi] - array[lo]));
		if (pos > hi)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	if (value == array[lo])
		return (lo);
	return (-1);
}
