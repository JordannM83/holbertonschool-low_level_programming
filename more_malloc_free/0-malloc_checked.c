#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 * * Return: a pointer to the allocated memory, or exits with status 98
 * if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	int *i = malloc(sizeof(b));
	if (b == NULL)
	{
		exit(98);
	}
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
