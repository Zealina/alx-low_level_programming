#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a node to the beginning of the list
 * @str: String to add to the list
 * @head: Pointer to the beginning of the list
 *
 * Return: NULL if failed and address of new addition
 *	if successful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t length;

	for (length = 0; str[length] != '\0'; length++)
		;
	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = length;
		(*head)->next = NULL;
	}
	else
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = length;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
