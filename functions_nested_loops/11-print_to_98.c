#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The starting integer to print from.
 * Description: Prints numbers in order, incrementing or decrementing by 1,
 * until 98 is reached. Numbers are separated by a comma and a space.
 */

void print_to_98(int n)
{
if (n < 98)
{
	for (; n <= 98; n++)
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		printf("%d, ", n);
	}
}
else
{
	for (; n >= 98; n--)
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		printf("%d, ", n);
	}
}
}
