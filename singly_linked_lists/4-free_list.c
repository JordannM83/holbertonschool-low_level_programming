#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	/* Déclarer un pointeur temporaire pour parcourir */
	list_t *temp;
	while (head != NULL)
	{
		temp = head->next;

		free(head->str);
		free(head);
		head = temp;

	}
}
