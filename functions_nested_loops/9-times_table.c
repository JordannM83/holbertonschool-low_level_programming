#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 * Description: This function prints the multiplication table for the number 9,
 * starting from 0 x 0 up to 9 x 9. Each row of the table represents the
 * multiples of a number from 0 to 9. The output is formatted so that numbers
 * are properly aligned in columns.
 * Return: void
 */

void times_table(void)
{
int n;
int m;
for (n = 0; n <= 9; n++)
{
	for (m = 0; m <= 9; m++)
	{
		int prod = n * m;

		if (m != 0)
		{
			_putchar(',');
			_putchar(' ');
			if (prod < 10)
				_putchar(' ');
		}
		if (prod >= 10)
		{
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		else
		{
			_putchar(prod + '0');
		}
	}
	_putchar('$');
	_putchar('\n');
}
}
