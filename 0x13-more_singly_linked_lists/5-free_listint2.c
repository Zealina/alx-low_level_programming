#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - frees a singly linked list and sets the head
 *	to NULL
 * @head: Pointer to the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
