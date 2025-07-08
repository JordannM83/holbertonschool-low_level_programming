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

	grid = malloc(nmemb * sizeof(int));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		grid[i] = 0;
	}
	return (grid);
}
