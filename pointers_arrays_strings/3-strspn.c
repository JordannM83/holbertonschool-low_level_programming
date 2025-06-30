#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string containing the characters to match
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */


unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
int counter = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (counter);
}
