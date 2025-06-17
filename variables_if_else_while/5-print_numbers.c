#include <stdio.h>

/**
 * main - Entry point
 * Description: print all single digit numbers
 * of base 10 starting form 0
 * Return: Always 0 (Success)
 */
int main(void)
{
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		printf("%c", number);
	}
	printf("\n");
	return (0);
}
}
