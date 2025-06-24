#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 *
 * Description: This function takes a pointer to a string and reverses
 * the characters in the string in place, modifying the original string.
 */

void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (end = length - 1; end > start; end--, start++)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
	}
}
