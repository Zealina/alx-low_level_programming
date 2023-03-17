#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: points to the pointer to the head of list
 * @idx: The index to add node at
 * @n: element to add to node
 *
 * Return: Address of node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = (*head);
	while (temp != NULL && idx - 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;
	return (new);
}

