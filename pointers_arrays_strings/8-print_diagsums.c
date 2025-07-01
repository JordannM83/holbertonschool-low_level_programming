#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows/columns)
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		j = i;
		sum += a[i * size + j];
	}
	printf("%d, ", sum);
	for (i = 0; i < size; i++)
	{
		j = size - 1 - i;
		sum2 += a[i * size + j];
	}
	printf("%d\n", sum2);
}
