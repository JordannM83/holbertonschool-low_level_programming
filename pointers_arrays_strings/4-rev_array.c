#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = 0;
	int temp;

	for (end = n - 1; end > start; end--, start++)
	{
		if (end == start)
			break;
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}
