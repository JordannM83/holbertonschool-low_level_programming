#include "main.h"
#include <stdio.h>



char *_strchr(char *s, char c)
{
	int i = 0;
	int j;
	char r;
	while (s[i])
	{
		if (s[i] == c)
		{
			for (j = i; s[i] != '\0'; j++)
			{
				r =+ s[i];
			}
		}
		i++;
	}
	if (r != '\0')
	{
		*s = r;
		return (s);
	}
	else 
	{
		return (NULL);
	}
}