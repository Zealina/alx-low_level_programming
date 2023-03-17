#include "lists.h"

/**
 * print_dlistint - Print elements of a doubly linked list
 *
 * @h: Pointer to the headet file
 *
 * Return: The number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", forward->n);
		nnodes++;
		forward = forward->next;
	}
	return (nnodes);
}
