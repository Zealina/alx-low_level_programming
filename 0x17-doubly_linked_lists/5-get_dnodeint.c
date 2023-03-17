#include "lists.h"

/**
 * get_dnodeint_at_index - as the name implies
 * @head: Pointer to the head of the list
 * @index: The index to get the node
 *
 * Return: The address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	node = head;
	while (node != NULL && index)
	{
		node = node->next;
		index--;
	}
	if (node == NULL)
		return (NULL);
	return (node);
}
