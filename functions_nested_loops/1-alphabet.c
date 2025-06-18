#include <unistd.h>
/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 * Description: This function prints the lowercase letters from 'a' to 'z'
 * using the write system call.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	write(1, &c, 1);
	write(1, "\n", 1);
}
