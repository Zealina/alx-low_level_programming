#include "lists.h"

/**
 * sum_dlistint - Print elements of a doubly linked list
 *
 * @head: Pointer to the headet file
 *
 * Return: The number of elements printed
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *forward, *backward;

	forward = head;
	while (forward != NULL)
	{
		backward = forward;
		while (backward->prev != NULL)
		{
			backward = backward->prev;
			if (backward == forward)
				return (sum);
		}
		sum += forward->n;
		forward = forward->next;
	}
	return (sum);
}
