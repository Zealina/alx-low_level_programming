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
	list_t *temp, *new;
	size_t length;

	for (length = 0; str[length]; length++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
