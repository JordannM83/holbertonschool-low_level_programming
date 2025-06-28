#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ASCII_PRINTABLE_RANGE 94
#define ASCII_PRINTABLE_START 33

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char password[85];
	int index = 0, sum = 0, target = 2772;
	int needed;

	srand(time(NULL));

	/* Generate random characters for first 83 positions */
	for (index = 0; index < 83; index++)
	{
		password[index] = (rand() % 94) + 33; /* printable ASCII characters */
		sum += password[index];
	}

	/* Calculate what we need for the last character */
	needed = target - sum;

	/* Adjust to printable range if needed */
	if (needed < 33)
		needed = 33 + (needed % 94);
	else if (needed > 126)
		needed = 33 + (needed % 94);

	password[83] = needed;
	password[84] = '\0';
	printf("%s\n", password);
	return (0);
}
