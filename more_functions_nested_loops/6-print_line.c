#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character '_' should be printed
 *
 * If n is 0 or less, the function does not print anything.
 */

void print_line(int n)
{
int i = 0;

if (i < n)
{
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
}
_putchar('\n');
}
