#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head and returns the data
 * @head: Pointer to the list
 *
 * Return: The data contained in the head
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
