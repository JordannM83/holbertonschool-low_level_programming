#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int search = 0;

	if (key == NULL)
		return (0);

	if (size == 0)
		return (0);

	search = hash_djb2((unsigned char *)key);
	search = search % size;
	return (search);
}
