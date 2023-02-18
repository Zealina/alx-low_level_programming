#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -add elements to the end of the list
 * @str: The stirng to add to the end of the list
 * @head: Pointer to the head of the list
 *
 * Return: NULL if failed and pointer to the address of the
 *	new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *trav;
	size_t length;

	for (length = 0; str[length]; length++)
		;
	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = length;
		(*head)->next = NULL;
		trav = *head;
	}
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = length;
	temp->next = NULL;
	trav->next = temp;
	trav = temp;
	return (trav);
}
