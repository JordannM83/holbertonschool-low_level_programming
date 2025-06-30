#include "main.h"
#include <stdio.h>

/**
 * * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string containing the bytes to match
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
		{
			return (s + i);
		}
		j++;
		}
	i++;
	}
	if (*accept == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
