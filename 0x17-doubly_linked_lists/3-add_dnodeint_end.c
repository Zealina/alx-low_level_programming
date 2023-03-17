#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of list
 * @head: Points to the pointer of head of list
 * @n: Element to add to list
 *
 * Return: the address of the new element of NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp, *trav;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		trav = temp;
		while (trav->prev != NULL)
		{
			trav = trav->prev;
			if (trav == temp)
			{
				free(new);
				free(new->next);
				return (NULL);
			}
		}
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);
}
