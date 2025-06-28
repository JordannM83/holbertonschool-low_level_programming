#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char password[84];
	int index = 0;

	for (index = 0; index < 84; index++)
	{
		password[index] = rand();
	}
	for (index = 0; index < 84; index++)
	{
		printf("%c", password[index]);
	}
		printf("%c", password[index - 1]);
	printf("\n");
	return (0);
}
