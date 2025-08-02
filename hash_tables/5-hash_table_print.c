#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Description: prints the key/value pairs in the order they appear
 * in the array of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current;
	char *separator = "";

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			printf("%s", separator);
			printf("'%s': '%s'", current->key, current->value);
			separator = ", ";
			current = current->next;
		}
		index++;
	}
	printf("}\n");
}
