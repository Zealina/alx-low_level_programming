#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - add all the data in the list
 * @head: Pointer to the list
 *
 * Return: 0 if the list is empty or the sum of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
