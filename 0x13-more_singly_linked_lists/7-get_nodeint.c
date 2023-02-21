#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_nodeint_at_index - get the nth node in the  list
 * @index: The indext to get the node from
 * @head: Pointer to the list
 *
 * Return: Pointer to the node or NULL if the node doesn't
 *	exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	temp = head;
	while (index--)
	{
		if (temp == NULL)
			return (0);
		temp = temp->next;
	}
	return (temp);
}
