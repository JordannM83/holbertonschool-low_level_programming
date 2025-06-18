#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 * Description: This function prints the lowercase letters from 'a' to 'z'
 * ten times, each followed by a new line.
 */

void print_alphabet_x10(void)
{
int i;
int number_of_lines = 10;
for (i = 0; i < number_of_lines; i++)
{
	print_alphabet();
}
}
