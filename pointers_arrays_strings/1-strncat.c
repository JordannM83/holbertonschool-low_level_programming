#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings up to n bytes from src.
 * @dest: The destination string to which src is appended.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to append from src.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n-- > 0 && *src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
