#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		count++;
		current = current->next;

	}
	return (count);
}
