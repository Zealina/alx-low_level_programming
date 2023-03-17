#include "lists.h"

/**
 * add_dnodeint - function to add node to the beginning of list
 * @head: points to the pointer of head of list
 * @n: element to add to list
 *
 * Return: The address of the new element of NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (*head);
}
