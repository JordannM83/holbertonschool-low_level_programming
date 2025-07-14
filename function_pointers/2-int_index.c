#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which cmp does not return 0,
 *         or -1 if no element matches or size is less than or equal to 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
