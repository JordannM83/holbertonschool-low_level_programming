#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for the FizzBuzz program.
 *
 * Description: Prints the numbers from 1 to 100, followed by a new line.
 * For multiples of three, prints "Fizz" instead of the number.
 * For multiples of five, prints "Buzz" instead of the number.
 * For numbers which are multiples of both three and five, prints "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", i);
	}
	if (i < 100)
	{
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
