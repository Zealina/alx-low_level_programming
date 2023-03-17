#include "lists.h"

/**
 * dlistint_len - length of a doubly linked list
 *
 * @h: Pointer to the headet file
 *
 * Return: The number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nnodes = 0;
	const dlistint_t *forward, *backward;

	forward = h;
	while (forward != NULL)
	{
		backward = forward;
		while (backward->prev != NULL)
		{
			backward = backward->prev;
			if (backward == forward)
				return (nnodes);
		}
		nnodes++;
		forward = forward->next;
	}
	return (nnodes);
}
