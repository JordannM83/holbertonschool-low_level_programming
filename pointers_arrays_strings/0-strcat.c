#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which src is appended.
 * @src: The source string to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
