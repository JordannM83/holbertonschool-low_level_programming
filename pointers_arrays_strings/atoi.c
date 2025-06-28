#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int number = 0;
	double result = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = 1;
			result = result * 10 + (s[i] - '0');
		}
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (number == 1 && (s[i + 1] < '0' || s[i + 1] > '9'))
		{
			break;
		}
		i++;
	}
	return(result * sign);
}