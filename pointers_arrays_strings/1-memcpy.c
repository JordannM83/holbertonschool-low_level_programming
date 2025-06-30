#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * * @n: The number of bytes to copy.
 * * Return: A pointer to the destination memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest++ = src[i];
	}
	for (; i < n; i++)
	{
		*dest++ = '\0';
	}
	return (dest);
}
