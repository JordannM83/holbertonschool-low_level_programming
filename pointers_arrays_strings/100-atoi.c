#include "main.h"
#include <stdio.h>
#include <limits.h>


/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the string, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, started = 0;
	double result = 0;


	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
		if (s[i] >= '0' && s[i] <= '9')
		break;
	}
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] && (s[i] >= '0' && s[i] <= '9'))
		{
			started = 1;

			result = result * 10 + (s[i] - '0');
		}

		if (started == 1 && (s[i + 1] < '0' || s[i + 1] > '9'))
		{
			break;
		}
		i++;
	}	
	if (!started)
		return (0);
	return (result * sign);
}
