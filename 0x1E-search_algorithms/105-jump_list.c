#include "search_algos.h"
/**
 * jump_list - Using Jumpsearch to search for value on ordered list
 * @list: The lis to be searched
 * @size: The size of the array
 * @value: Thw search value
 * Return: The pointer of first value if successful, -1 otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i, i_step = step;
	listint_t *temp = list;

	if (!list)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (i == i_step)
		{
			if (list->n >= value)
			{

