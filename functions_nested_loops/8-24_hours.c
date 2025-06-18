#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * from 00:00 to 23:59.
 * This function uses nested loops to print each minute of a 24-hour day
 * in the format HH:MM, with each time on a new line.
 * Return: void
 */


void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour <= 23; hour++)
{
	for (minute = 0; minute <= 59; minute++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
	};
};
}
