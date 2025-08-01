#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat two strings up to n bytes of the second string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 * Return: pointer to the newly allocated space in memory containing the
 * concatenated string, or NULL if allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		concat = malloc((len1 + len2 + 1) * sizeof(char));
	}
	else
	{
		concat = malloc((len1 + n + 1) * sizeof(char));
		len2 = n;
	}
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[len1 + len2] = '\0';
	return (concat);
}
