#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of the list
 * @head: Pointer to the list
 * @n: The element to add
 *
 * Return: NULL if failed, pointer to the new element if
 *	successful
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
	}
	else
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
