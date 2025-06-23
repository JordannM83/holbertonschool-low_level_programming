#include "main.h"
#include <stdio.h>
/**
 * print_square - Prints a square using the character '#'
 * @size: The size of the square to be printed
 *
 * Description: This function prints a square of size 'size' standard output,
 * using the '#' character. If size is 0 or less, only a new line is printed.
 */

void print_square(int size)
{
int i, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
	{
		_putchar('#');
	}
}
_putchar('\n');
}
_putchar ('\n');
}
