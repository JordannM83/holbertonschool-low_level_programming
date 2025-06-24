#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to the string to be printed
 * This function iterates through each character of the string
 * and prints it using the _putchar function, followed by a newline.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
