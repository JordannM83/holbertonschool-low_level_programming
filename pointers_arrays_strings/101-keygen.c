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
	int index = 0;

	srand(time(NULL));
	for (index = 0; index < 84; index++)
	{
		password[index] = (rand() % ASCII_PRINTABLE_RANGE) + ASCII_PRINTABLE_START; /* printable ASCII characters */
		password[index] = (rand() % 94) + 33; /* printable ASCII characters */
	}
	password[index] = '\0';
	for (index = 0; index < 84; index++)
printf("%s\n", password);
return (0);
}
