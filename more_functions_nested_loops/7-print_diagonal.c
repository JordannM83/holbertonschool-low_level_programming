#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character '\' should be printed
 *
 * If n is 0 or less, the function does not print anything.
 */

void print_diagonal(int n)
{
int i;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
}
