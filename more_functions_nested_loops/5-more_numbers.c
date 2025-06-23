#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 * followed by a new line
 *
 * Numbers are separated by a space.
 * If the number is greater than 9, it is printed with its tens digit.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
