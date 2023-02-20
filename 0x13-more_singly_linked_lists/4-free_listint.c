#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint - frees a singly linked list
 * @head: Pointer to the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *trav;

	while (head != NULL)
	{
		trav = head;
		head = head->next;
		free(trav);
	}
}
