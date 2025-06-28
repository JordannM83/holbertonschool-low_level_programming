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

	srand(time(NULL));

	/* Generate random characters for 83 positions */
	for (index = 0; index < 83; index++)
	{
		password[index] = (rand() % 94) + 33;
		sum += password[index];
	}

	/* Set the last character to reach target sum */
	password[83] = (target - sum);
	
	/* Make sure it's printable */
	if (password[83] < 33 || password[83] > 126)
		password[83] = ((target - sum) % 94) + 33;

	password[84] = '\0';
	printf("%s\n", password);
	return (0);
}
