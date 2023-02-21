#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a particular index
 * @head: Pointer to the list
 * @idx: The index to insert the node
 * @n: The data to add at the node
 *
 * Return: if not possible to add the new node at index ids, do not add
 *	the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;

	temp = *head;
	while (idx--)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->n = n;
	new->next = temp;
