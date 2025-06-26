#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies up to n bytes from the source
 * string to the destination string.
 * @dest: The destination string where the content is copied.
 * @src: The source string from which content is copied.
 * @n: The maximum number of bytes to copy from src.
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr++ = src[i];
	}
	for (; i < n; i++)
	{
		*ptr++ = '\0';
	}

	return (dest);
}
