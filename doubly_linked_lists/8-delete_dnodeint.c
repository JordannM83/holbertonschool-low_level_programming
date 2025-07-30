#include"lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (index == 0)
		return (add_dnodeint(h, n));

	current = *head;
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL && i == idx)
		return (add_dnodeint_end(h, n));

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = current;
	new_node->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}
}
