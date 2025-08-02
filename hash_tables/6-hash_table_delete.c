#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 * Description: frees all memory allocated for the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current, *tmp;

	if (ht == NULL)
		return;
	while (index < ht->size)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			tmp = current->next;
			free(current->value);
			free(current->key);
			free(current);
			current = tmp;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
