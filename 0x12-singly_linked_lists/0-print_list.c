#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print all the contents of the linked list
 * @h: pointer to the struct of the list
 *
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t node = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		node++;
		temp = temp->next;
	}
	return (node);
}
