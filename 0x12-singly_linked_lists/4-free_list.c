#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a singly linked list
 * @head: Pointer to the first element
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
