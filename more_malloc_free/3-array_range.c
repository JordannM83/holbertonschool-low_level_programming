#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array, or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int len = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	for (; min <= max; min++)
	{
		arr[min] = min;
	}
	return (arr);
}
