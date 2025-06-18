#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 * Description: This function prints the lowercase letters from 'a' to 'z'
 * using the write system call.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
