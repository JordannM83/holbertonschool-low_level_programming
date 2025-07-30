#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - calculates the sum of all the data (n) in a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n), or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
