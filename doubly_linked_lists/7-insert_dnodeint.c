#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: data for the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (*h == NULL)
		return (NULL);

	current = *h;
	for (i = 0; i < idx && current != NULL; i++)
		current = current->next;

	if (current == NULL && i == idx)
		return (add_dnodeint_end(h, n));

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}
