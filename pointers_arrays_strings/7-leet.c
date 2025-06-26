#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - Encodes a string into 1337 (leet) speak.
 * @str: The string to be encoded.
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char *leet_chars = "aeotlAEOTL";
	char *leet_replacements = "4307143071";

	while (str[i])
	{
		j = 0;
		while (leet_chars[j])
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
			j++;
		}
		i++;
	}
return (str);
}
