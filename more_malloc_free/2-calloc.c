#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc and
 * initializes it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 * Return: pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *grid;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	grid = malloc(nmemb * size);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		grid[i] = 0;
	}
	return (grid);
}
