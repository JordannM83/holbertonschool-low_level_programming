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
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			str[i] == (char)34 || str[i] == (char)40 || str[i] == (char)41 ||
			str[i] == '{' || str[i] == '}')
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
		else if (str[i] >= 'A' && str[i] <= 'Z')
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
