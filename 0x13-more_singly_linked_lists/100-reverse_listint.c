#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 * @head: Pointer to the list
 *
 *
 * Return: pointer to the reversed list if successful, NULL if failed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = prev;
		prev = temp;
	}
	*head = temp;
	return (*head);
}
