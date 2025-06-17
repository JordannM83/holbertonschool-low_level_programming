#include <stdio.h>
/**
 * main - Entry point
 * Description: print all single digit numbers
 * of base 16 starting form 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)
		{
			putchar('0' + number);
		}
		else
		{
			putchar('a' + (number - 10));
		}
	}
	putchar('\n');
	return (0);
}
