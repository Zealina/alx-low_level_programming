#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a index
 * @head: Pointer to the list
 * @index: index to delete node at
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *new_temp;

	temp = *head;
	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		new_temp = temp->next;
		free(temp);
		*head = new_temp;
		return (1);
	}
	while (index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	new_temp = temp->next;
	(temp->prev)->next = new_temp;
	free(temp);
	return (1);
}
