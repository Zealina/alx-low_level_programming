#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all the elements of the listint
 * @h: Pointer to the list
 *
 * Return: The number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	const listint_t *trav;

	trav = h;
	while (trav != NULL)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
		node++;
	}
	return (node);
}
