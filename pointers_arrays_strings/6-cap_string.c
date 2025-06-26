#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < (char)48 || str[i] > (char)122 ||
		(str[i] > (char)57 && str[i] < (char)65))
		{
			if ((str[i + 1] >= 'a' && str[i + 1] <= 'z') && i != 0)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		else if (i == 0 && (str[0] >= 'a' && str[0] <= 'z'))
		{
			str[0] = str[0] - 32;
		}
		i++;
	}
	return (str);
}
