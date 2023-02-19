#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * listint_len - Print the number of elements in the list
 * @h: Pointer to the list
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;
	const listint_t *trav;

	trav = h;
	while (trav != NULL)
	{
		node++;
		trav = trav->next;
	}
	return (node);
}
