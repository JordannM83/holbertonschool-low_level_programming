#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints the lowercase alphabet
 * and in uppercase followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
