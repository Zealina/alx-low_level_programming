#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - count the contents of the linked list
 * @h: pointer to the list
 *
 * Return: Number of nodes counted
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t node = 0;

	temp = h;
	while (temp != NULL)
	{
		node++;
		temp = temp->next;
	}
	return (node);
}
