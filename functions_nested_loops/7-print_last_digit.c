#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
	n = -n;
_putchar('0' + n);
return (n);
}
